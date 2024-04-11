---@enum EBasicAxis
EBasicAxis = {
    X = 0,
    Y = 1,
    Z = 2,
    NegX = 3,
    NegY = 4,
    NegZ = 5,
    EBasicAxis_MAX = 6,
}

---@enum EIKRigGoalSpace
EIKRigGoalSpace = {
    Component = 0,
    Additive = 1,
    World = 2,
    EIKRigGoalSpace_MAX = 3,
}

---@enum EIKRigGoalTransformSource
EIKRigGoalTransformSource = {
    Manual = 0,
    Bone = 1,
    ActorComponent = 2,
    EIKRigGoalTransformSource_MAX = 3,
}

---@enum ERetargetRotationMode
ERetargetRotationMode = {
    Interpolated = 0,
    OneToOne = 1,
    OneToOneReversed = 2,
    None = 3,
    ERetargetRotationMode_MAX = 4,
}

---@enum ERetargetTranslationMode
ERetargetTranslationMode = {
    None = 0,
    GloballyScaled = 1,
    Absolute = 2,
    ERetargetTranslationMode_MAX = 3,
}

---@enum EWarpingDirectionSource
EWarpingDirectionSource = {
    Goals = 0,
    Chain = 1,
    EWarpingDirectionSource_MAX = 2,
}

