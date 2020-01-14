//#line 2 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the moveit_ros_planning package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __moveit_ros_planning__PLANEXECUTIONDYNAMICRECONFIGURECONFIG_H__
#define __moveit_ros_planning__PLANEXECUTIONDYNAMICRECONFIGURECONFIG_H__

#if __cplusplus >= 201103L
#define DYNAMIC_RECONFIGURE_FINAL final
#else
#define DYNAMIC_RECONFIGURE_FINAL
#endif

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace moveit_ros_planning
{
  class PlanExecutionDynamicReconfigureConfigStatics;

  class PlanExecutionDynamicReconfigureConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }

      virtual void clamp(PlanExecutionDynamicReconfigureConfig &config, const PlanExecutionDynamicReconfigureConfig &max, const PlanExecutionDynamicReconfigureConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const PlanExecutionDynamicReconfigureConfig &config1, const PlanExecutionDynamicReconfigureConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, PlanExecutionDynamicReconfigureConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const PlanExecutionDynamicReconfigureConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, PlanExecutionDynamicReconfigureConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const PlanExecutionDynamicReconfigureConfig &config) const = 0;
      virtual void getValue(const PlanExecutionDynamicReconfigureConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template <class T>
    class ParamDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T PlanExecutionDynamicReconfigureConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T (PlanExecutionDynamicReconfigureConfig::* field);

      virtual void clamp(PlanExecutionDynamicReconfigureConfig &config, const PlanExecutionDynamicReconfigureConfig &max, const PlanExecutionDynamicReconfigureConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const PlanExecutionDynamicReconfigureConfig &config1, const PlanExecutionDynamicReconfigureConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, PlanExecutionDynamicReconfigureConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const PlanExecutionDynamicReconfigureConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, PlanExecutionDynamicReconfigureConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const PlanExecutionDynamicReconfigureConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const PlanExecutionDynamicReconfigureConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, PlanExecutionDynamicReconfigureConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template<class T, class PT>
    class GroupDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, PlanExecutionDynamicReconfigureConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<PlanExecutionDynamicReconfigureConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(PlanExecutionDynamicReconfigureConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("max_replan_attempts"==(*_i)->name){max_replan_attempts = boost::any_cast<int>(val);}
        if("record_trajectory_state_frequency"==(*_i)->name){record_trajectory_state_frequency = boost::any_cast<double>(val);}
      }
    }

    int max_replan_attempts;
double record_trajectory_state_frequency;

    bool state;
    std::string name;

    
}groups;



//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int max_replan_attempts;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double record_trajectory_state_frequency;
//#line 228 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("PlanExecutionDynamicReconfigureConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const PlanExecutionDynamicReconfigureConfig &__max__ = __getMax__();
      const PlanExecutionDynamicReconfigureConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const PlanExecutionDynamicReconfigureConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const PlanExecutionDynamicReconfigureConfig &__getDefault__();
    static const PlanExecutionDynamicReconfigureConfig &__getMax__();
    static const PlanExecutionDynamicReconfigureConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const PlanExecutionDynamicReconfigureConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void PlanExecutionDynamicReconfigureConfig::ParamDescription<std::string>::clamp(PlanExecutionDynamicReconfigureConfig &config, const PlanExecutionDynamicReconfigureConfig &max, const PlanExecutionDynamicReconfigureConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class PlanExecutionDynamicReconfigureConfigStatics
  {
    friend class PlanExecutionDynamicReconfigureConfig;

    PlanExecutionDynamicReconfigureConfigStatics()
    {
PlanExecutionDynamicReconfigureConfig::GroupDescription<PlanExecutionDynamicReconfigureConfig::DEFAULT, PlanExecutionDynamicReconfigureConfig> Default("Default", "", 0, 0, true, &PlanExecutionDynamicReconfigureConfig::groups);
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_replan_attempts = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_replan_attempts = 1000;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_replan_attempts = 5;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr(new PlanExecutionDynamicReconfigureConfig::ParamDescription<int>("max_replan_attempts", "int", 1, "Set the maximum number of times a sensor can be pointed to parts of the environment doring a motion plan", "", &PlanExecutionDynamicReconfigureConfig::max_replan_attempts)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr(new PlanExecutionDynamicReconfigureConfig::ParamDescription<int>("max_replan_attempts", "int", 1, "Set the maximum number of times a sensor can be pointed to parts of the environment doring a motion plan", "", &PlanExecutionDynamicReconfigureConfig::max_replan_attempts)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.record_trajectory_state_frequency = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.record_trajectory_state_frequency = 1000.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.record_trajectory_state_frequency = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr(new PlanExecutionDynamicReconfigureConfig::ParamDescription<double>("record_trajectory_state_frequency", "double", 6, "The frequency at which to record states when monitoring trajectories", "", &PlanExecutionDynamicReconfigureConfig::record_trajectory_state_frequency)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr(new PlanExecutionDynamicReconfigureConfig::ParamDescription<double>("record_trajectory_state_frequency", "double", 6, "The frequency at which to record states when monitoring trajectories", "", &PlanExecutionDynamicReconfigureConfig::record_trajectory_state_frequency)));
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(PlanExecutionDynamicReconfigureConfig::AbstractGroupDescriptionConstPtr(new PlanExecutionDynamicReconfigureConfig::GroupDescription<PlanExecutionDynamicReconfigureConfig::DEFAULT, PlanExecutionDynamicReconfigureConfig>(Default)));
//#line 366 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<PlanExecutionDynamicReconfigureConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<PlanExecutionDynamicReconfigureConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    PlanExecutionDynamicReconfigureConfig __max__;
    PlanExecutionDynamicReconfigureConfig __min__;
    PlanExecutionDynamicReconfigureConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const PlanExecutionDynamicReconfigureConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static PlanExecutionDynamicReconfigureConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &PlanExecutionDynamicReconfigureConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const PlanExecutionDynamicReconfigureConfig &PlanExecutionDynamicReconfigureConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const PlanExecutionDynamicReconfigureConfig &PlanExecutionDynamicReconfigureConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const PlanExecutionDynamicReconfigureConfig &PlanExecutionDynamicReconfigureConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<PlanExecutionDynamicReconfigureConfig::AbstractParamDescriptionConstPtr> &PlanExecutionDynamicReconfigureConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<PlanExecutionDynamicReconfigureConfig::AbstractGroupDescriptionConstPtr> &PlanExecutionDynamicReconfigureConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const PlanExecutionDynamicReconfigureConfigStatics *PlanExecutionDynamicReconfigureConfig::__get_statics__()
  {
    const static PlanExecutionDynamicReconfigureConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = PlanExecutionDynamicReconfigureConfigStatics::get_instance();

    return statics;
  }


}

#undef DYNAMIC_RECONFIGURE_FINAL

#endif // __PLANEXECUTIONDYNAMICRECONFIGURERECONFIGURATOR_H__
