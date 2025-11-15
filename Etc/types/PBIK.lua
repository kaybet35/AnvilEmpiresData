---@meta

---@class FPBIKBoneSetting
---@field bone FName
---@field RotationStiffness float
---@field PositionStiffness float
---@field X EPBIKLimitType
---@field MinX float
---@field MaxX float
---@field Y EPBIKLimitType
---@field MinY float
---@field MaxY float
---@field Z EPBIKLimitType
---@field MinZ float
---@field MaxZ float
---@field bUsePreferredAngles boolean
---@field PreferredAngles FVector
local FPBIKBoneSetting = {}



---@class FPBIKDebug
---@field DrawScale float
---@field bDrawDebug boolean
local FPBIKDebug = {}



---@class FPBIKEffector
---@field bone FName
---@field Transform FTransform
---@field PositionAlpha float
---@field RotationAlpha float
---@field StrengthAlpha float
---@field PullChainAlpha float
---@field PinRotation float
local FPBIKEffector = {}



---@class FPBIKSolver
local FPBIKSolver = {}


---@class FPBIKSolverSettings
---@field Iterations int32
---@field MassMultiplier float
---@field MinMassMultiplier float
---@field bAllowStretch boolean
---@field RootBehavior EPBIKRootBehavior
---@field bStartSolveFromInputPose boolean
local FPBIKSolverSettings = {}



---@class FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
---@field Root FName
---@field Effectors TArray<FPBIKEffector>
---@field EffectorSolverIndices TArray<int32>
---@field BoneSettings TArray<FPBIKBoneSetting>
---@field ExcludedBones TArray<FName>
---@field Settings FPBIKSolverSettings
---@field Debug FPBIKDebug
---@field BoneSettingToSolverBoneIndex TArray<int32>
---@field SolverBoneToElementIndex TArray<int32>
---@field Solver FPBIKSolver
---@field bNeedsInit boolean
local FRigUnit_PBIK = {}



