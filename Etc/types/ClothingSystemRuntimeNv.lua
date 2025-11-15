---@meta

---@class FClothConstraintSetupNv
---@field Stiffness float
---@field StiffnessMultiplier float
---@field StretchLimit float
---@field CompressionLimit float
local FClothConstraintSetupNv = {}



---@class UClothConfigNv : UClothConfigCommon
---@field ClothingWindMethod EClothingWindMethodNv
---@field VerticalConstraint FClothConstraintSetupNv
---@field HorizontalConstraint FClothConstraintSetupNv
---@field BendConstraint FClothConstraintSetupNv
---@field ShearConstraint FClothConstraintSetupNv
---@field SelfCollisionRadius float
---@field SelfCollisionStiffness float
---@field SelfCollisionCullScale float
---@field Damping FVector
---@field Friction float
---@field WindDragCoefficient float
---@field WindLiftCoefficient float
---@field LinearDrag FVector
---@field AngularDrag FVector
---@field LinearInertiaScale FVector
---@field AngularInertiaScale FVector
---@field CentrifugalInertiaScale FVector
---@field SolverFrequency float
---@field StiffnessFrequency float
---@field GravityScale float
---@field GravityOverride FVector
---@field bUseGravityOverride boolean
---@field TetherStiffness float
---@field TetherLimit float
---@field CollisionThickness float
---@field AnimDriveSpringStiffness float
---@field AnimDriveDamperStiffness float
---@field WindMethod EClothingWindMethod_Legacy
---@field VerticalConstraintConfig FClothConstraintSetup_Legacy
---@field HorizontalConstraintConfig FClothConstraintSetup_Legacy
---@field BendConstraintConfig FClothConstraintSetup_Legacy
---@field ShearConstraintConfig FClothConstraintSetup_Legacy
local UClothConfigNv = {}



---@class UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy
---@field MaxDistances TArray<float>
---@field BackstopDistances TArray<float>
---@field BackstopRadiuses TArray<float>
---@field AnimDriveMultipliers TArray<float>
local UClothPhysicalMeshDataNv_Legacy = {}



---@class UClothingSimulationFactoryNv : UClothingSimulationFactory
local UClothingSimulationFactoryNv = {}


---@class UClothingSimulationInteractorNv : UClothingSimulationInteractor
local UClothingSimulationInteractorNv = {}

---@param InStiffness float
function UClothingSimulationInteractorNv:SetAnimDriveDamperStiffness(InStiffness) end


