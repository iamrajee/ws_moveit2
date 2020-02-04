
"use strict";

let MoveGroupActionFeedback = require('./MoveGroupActionFeedback.js');
let ExecuteTrajectoryActionGoal = require('./ExecuteTrajectoryActionGoal.js');
let ExecuteTrajectoryResult = require('./ExecuteTrajectoryResult.js');
let ExecuteTrajectoryAction = require('./ExecuteTrajectoryAction.js');
let PickupFeedback = require('./PickupFeedback.js');
let PickupResult = require('./PickupResult.js');
let PlaceAction = require('./PlaceAction.js');
let PlaceResult = require('./PlaceResult.js');
let PickupGoal = require('./PickupGoal.js');
let ExecuteTrajectoryActionFeedback = require('./ExecuteTrajectoryActionFeedback.js');
let ExecuteTrajectoryFeedback = require('./ExecuteTrajectoryFeedback.js');
let ExecuteTrajectoryGoal = require('./ExecuteTrajectoryGoal.js');
let MoveGroupActionResult = require('./MoveGroupActionResult.js');
let PlaceActionGoal = require('./PlaceActionGoal.js');
let ExecuteTrajectoryActionResult = require('./ExecuteTrajectoryActionResult.js');
let PickupActionFeedback = require('./PickupActionFeedback.js');
let MoveGroupFeedback = require('./MoveGroupFeedback.js');
let MoveGroupAction = require('./MoveGroupAction.js');
let MoveGroupResult = require('./MoveGroupResult.js');
let MoveGroupGoal = require('./MoveGroupGoal.js');
let PickupActionGoal = require('./PickupActionGoal.js');
let PlaceActionResult = require('./PlaceActionResult.js');
let PlaceActionFeedback = require('./PlaceActionFeedback.js');
let PlaceGoal = require('./PlaceGoal.js');
let PlaceFeedback = require('./PlaceFeedback.js');
let PickupActionResult = require('./PickupActionResult.js');
let PickupAction = require('./PickupAction.js');
let MoveGroupActionGoal = require('./MoveGroupActionGoal.js');
let PlannerParams = require('./PlannerParams.js');
let ObjectColor = require('./ObjectColor.js');
let PositionConstraint = require('./PositionConstraint.js');
let PlanningScene = require('./PlanningScene.js');
let MotionPlanResponse = require('./MotionPlanResponse.js');
let JointLimits = require('./JointLimits.js');
let CartesianTrajectoryPoint = require('./CartesianTrajectoryPoint.js');
let TrajectoryConstraints = require('./TrajectoryConstraints.js');
let VisibilityConstraint = require('./VisibilityConstraint.js');
let CartesianTrajectory = require('./CartesianTrajectory.js');
let PlanningSceneWorld = require('./PlanningSceneWorld.js');
let Constraints = require('./Constraints.js');
let JointConstraint = require('./JointConstraint.js');
let PlanningSceneComponents = require('./PlanningSceneComponents.js');
let LinkScale = require('./LinkScale.js');
let CartesianPoint = require('./CartesianPoint.js');
let KinematicSolverInfo = require('./KinematicSolverInfo.js');
let Grasp = require('./Grasp.js');
let ContactInformation = require('./ContactInformation.js');
let RobotTrajectory = require('./RobotTrajectory.js');
let CostSource = require('./CostSource.js');
let MoveItErrorCodes = require('./MoveItErrorCodes.js');
let MotionPlanDetailedResponse = require('./MotionPlanDetailedResponse.js');
let DisplayRobotState = require('./DisplayRobotState.js');
let CollisionObject = require('./CollisionObject.js');
let ConstraintEvalResult = require('./ConstraintEvalResult.js');
let AllowedCollisionEntry = require('./AllowedCollisionEntry.js');
let AllowedCollisionMatrix = require('./AllowedCollisionMatrix.js');
let GripperTranslation = require('./GripperTranslation.js');
let MotionPlanRequest = require('./MotionPlanRequest.js');
let AttachedCollisionObject = require('./AttachedCollisionObject.js');
let PlanningOptions = require('./PlanningOptions.js');
let WorkspaceParameters = require('./WorkspaceParameters.js');
let PlannerInterfaceDescription = require('./PlannerInterfaceDescription.js');
let OrientationConstraint = require('./OrientationConstraint.js');
let GenericTrajectory = require('./GenericTrajectory.js');
let RobotState = require('./RobotState.js');
let PlaceLocation = require('./PlaceLocation.js');
let DisplayTrajectory = require('./DisplayTrajectory.js');
let OrientedBoundingBox = require('./OrientedBoundingBox.js');
let PositionIKRequest = require('./PositionIKRequest.js');
let BoundingVolume = require('./BoundingVolume.js');
let LinkPadding = require('./LinkPadding.js');

module.exports = {
  MoveGroupActionFeedback: MoveGroupActionFeedback,
  ExecuteTrajectoryActionGoal: ExecuteTrajectoryActionGoal,
  ExecuteTrajectoryResult: ExecuteTrajectoryResult,
  ExecuteTrajectoryAction: ExecuteTrajectoryAction,
  PickupFeedback: PickupFeedback,
  PickupResult: PickupResult,
  PlaceAction: PlaceAction,
  PlaceResult: PlaceResult,
  PickupGoal: PickupGoal,
  ExecuteTrajectoryActionFeedback: ExecuteTrajectoryActionFeedback,
  ExecuteTrajectoryFeedback: ExecuteTrajectoryFeedback,
  ExecuteTrajectoryGoal: ExecuteTrajectoryGoal,
  MoveGroupActionResult: MoveGroupActionResult,
  PlaceActionGoal: PlaceActionGoal,
  ExecuteTrajectoryActionResult: ExecuteTrajectoryActionResult,
  PickupActionFeedback: PickupActionFeedback,
  MoveGroupFeedback: MoveGroupFeedback,
  MoveGroupAction: MoveGroupAction,
  MoveGroupResult: MoveGroupResult,
  MoveGroupGoal: MoveGroupGoal,
  PickupActionGoal: PickupActionGoal,
  PlaceActionResult: PlaceActionResult,
  PlaceActionFeedback: PlaceActionFeedback,
  PlaceGoal: PlaceGoal,
  PlaceFeedback: PlaceFeedback,
  PickupActionResult: PickupActionResult,
  PickupAction: PickupAction,
  MoveGroupActionGoal: MoveGroupActionGoal,
  PlannerParams: PlannerParams,
  ObjectColor: ObjectColor,
  PositionConstraint: PositionConstraint,
  PlanningScene: PlanningScene,
  MotionPlanResponse: MotionPlanResponse,
  JointLimits: JointLimits,
  CartesianTrajectoryPoint: CartesianTrajectoryPoint,
  TrajectoryConstraints: TrajectoryConstraints,
  VisibilityConstraint: VisibilityConstraint,
  CartesianTrajectory: CartesianTrajectory,
  PlanningSceneWorld: PlanningSceneWorld,
  Constraints: Constraints,
  JointConstraint: JointConstraint,
  PlanningSceneComponents: PlanningSceneComponents,
  LinkScale: LinkScale,
  CartesianPoint: CartesianPoint,
  KinematicSolverInfo: KinematicSolverInfo,
  Grasp: Grasp,
  ContactInformation: ContactInformation,
  RobotTrajectory: RobotTrajectory,
  CostSource: CostSource,
  MoveItErrorCodes: MoveItErrorCodes,
  MotionPlanDetailedResponse: MotionPlanDetailedResponse,
  DisplayRobotState: DisplayRobotState,
  CollisionObject: CollisionObject,
  ConstraintEvalResult: ConstraintEvalResult,
  AllowedCollisionEntry: AllowedCollisionEntry,
  AllowedCollisionMatrix: AllowedCollisionMatrix,
  GripperTranslation: GripperTranslation,
  MotionPlanRequest: MotionPlanRequest,
  AttachedCollisionObject: AttachedCollisionObject,
  PlanningOptions: PlanningOptions,
  WorkspaceParameters: WorkspaceParameters,
  PlannerInterfaceDescription: PlannerInterfaceDescription,
  OrientationConstraint: OrientationConstraint,
  GenericTrajectory: GenericTrajectory,
  RobotState: RobotState,
  PlaceLocation: PlaceLocation,
  DisplayTrajectory: DisplayTrajectory,
  OrientedBoundingBox: OrientedBoundingBox,
  PositionIKRequest: PositionIKRequest,
  BoundingVolume: BoundingVolume,
  LinkPadding: LinkPadding,
};
