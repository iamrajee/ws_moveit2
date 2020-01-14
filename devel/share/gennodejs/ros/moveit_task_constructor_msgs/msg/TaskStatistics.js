// Auto-generated. Do not edit!

// (in-package moveit_task_constructor_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let StageStatistics = require('./StageStatistics.js');

//-----------------------------------------------------------

class TaskStatistics {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.process_id = null;
      this.id = null;
      this.stages = null;
    }
    else {
      if (initObj.hasOwnProperty('process_id')) {
        this.process_id = initObj.process_id
      }
      else {
        this.process_id = '';
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = '';
      }
      if (initObj.hasOwnProperty('stages')) {
        this.stages = initObj.stages
      }
      else {
        this.stages = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TaskStatistics
    // Serialize message field [process_id]
    bufferOffset = _serializer.string(obj.process_id, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _serializer.string(obj.id, buffer, bufferOffset);
    // Serialize message field [stages]
    // Serialize the length for message field [stages]
    bufferOffset = _serializer.uint32(obj.stages.length, buffer, bufferOffset);
    obj.stages.forEach((val) => {
      bufferOffset = StageStatistics.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TaskStatistics
    let len;
    let data = new TaskStatistics(null);
    // Deserialize message field [process_id]
    data.process_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [stages]
    // Deserialize array length for message field [stages]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.stages = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.stages[i] = StageStatistics.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.process_id.length;
    length += object.id.length;
    object.stages.forEach((val) => {
      length += StageStatistics.getMessageSize(val);
    });
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'moveit_task_constructor_msgs/TaskStatistics';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '97b790cd1fcfa2d2674c1b83cc7d5e8c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # id of generating process
    string process_id
    
    # unique of this task
    string id
    
    # list of all stages, including the task stage itself
    StageStatistics[] stages
    
    ================================================================================
    MSG: moveit_task_constructor_msgs/StageStatistics
    # dynamically changing information for a stage
    
    # unique id within task
    uint32 id
    
    # successful solution IDs of this stage
    uint32[] solved
    
    # (optional) failed solution IDs of this stage
    uint32[] failed
    # number of failed solutions (if failed is empty)
    uint32   num_failed
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TaskStatistics(null);
    if (msg.process_id !== undefined) {
      resolved.process_id = msg.process_id;
    }
    else {
      resolved.process_id = ''
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = ''
    }

    if (msg.stages !== undefined) {
      resolved.stages = new Array(msg.stages.length);
      for (let i = 0; i < resolved.stages.length; ++i) {
        resolved.stages[i] = StageStatistics.Resolve(msg.stages[i]);
      }
    }
    else {
      resolved.stages = []
    }

    return resolved;
    }
};

module.exports = TaskStatistics;
