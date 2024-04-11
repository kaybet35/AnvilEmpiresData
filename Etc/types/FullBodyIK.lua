---@meta

---@class FFBIKBoneLimit
---@field LimitType_X EFBIKBoneLimitType
---@field LimitType_Y EFBIKBoneLimitType
---@field LimitType_Z EFBIKBoneLimitType
---@field Limit FVector
FFBIKBoneLimit = {}



---@class FFBIKConstraintOption
---@field Item FRigElementKey
---@field bEnabled boolean
---@field bUseStiffness boolean
---@field LinearStiffness FVector
---@field AngularStiffness FVector
---@field bUseAngularLimit boolean
---@field AngularLimit FFBIKBoneLimit
---@field bUsePoleVector boolean
---@field PoleVectorOption EPoleVectorOption
---@field PoleVector FVector
---@field OffsetRotation FRotator
FFBIKConstraintOption = {}



---@class FFBIKDebugOption
---@field bDrawDebugHierarchy boolean
---@field bColorAngularMotionStrength boolean
---@field bColorLinearMotionStrength boolean
---@field bDrawDebugAxes boolean
---@field bDrawDebugEffector boolean
---@field bDrawDebugConstraints boolean
---@field DrawWorldOffset FTransform
---@field DrawSize float
FFBIKDebugOption = {}



---@class FFBIKEndEffector
---@field Item FRigElementKey
---@field Position FVector
---@field PositionAlpha float
---@field PositionDepth int32
---@field Rotation FQuat
---@field RotationAlpha float
---@field RotationDepth int32
---@field Pull float
FFBIKEndEffector = {}



---@class FMotionProcessInput
---@field bForceEffectorRotationTarget boolean
---@field bOnlyApplyWhenReachedToTarget boolean
FMotionProcessInput = {}



---@class FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
---@field Root FRigElementKey
---@field Effectors TArray<FFBIKEndEffector>
---@field Constraints TArray<FFBIKConstraintOption>
---@field SolverProperty FSolverInput
---@field MotionProperty FMotionProcessInput
---@field bPropagateToChildren boolean
---@field DebugOption FFBIKDebugOption
---@field WorkData FRigUnit_FullbodyIK_WorkData
FRigUnit_FullbodyIK = {}



---@class FRigUnit_FullbodyIK_WorkData
FRigUnit_FullbodyIK_WorkData = {}


---@class FSolverInput
---@field LinearMotionStrength float
---@field MinLinearMotionStrength float
---@field AngularMotionStrength float
---@field MinAngularMotionStrength float
---@field DefaultTargetClamp float
---@field Precision float
---@field Damping float
---@field MaxIterations int32
---@field bUseJacobianTranspose boolean
FSolverInput = {}



