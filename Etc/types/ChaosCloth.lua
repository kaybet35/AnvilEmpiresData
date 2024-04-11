---@meta

---@class FChaosClothWeightedValue
---@field Low float
---@field High float
FChaosClothWeightedValue = {}



---@class UChaosClothConfig : UClothConfigCommon
---@field MassMode EClothMassMode
---@field UniformMass float
---@field TotalMass float
---@field Density float
---@field MinPerParticleMass float
---@field EdgeStiffnessWeighted FChaosClothWeightedValue
---@field BendingStiffnessWeighted FChaosClothWeightedValue
---@field bUseBendingElements boolean
---@field BucklingRatio float
---@field BucklingStiffnessWeighted FChaosClothWeightedValue
---@field AreaStiffnessWeighted FChaosClothWeightedValue
---@field VolumeStiffness float
---@field TetherStiffness FChaosClothWeightedValue
---@field TetherScale FChaosClothWeightedValue
---@field bUseGeodesicDistance boolean
---@field ShapeTargetStiffness float
---@field CollisionThickness float
---@field FrictionCoefficient float
---@field bUseCCD boolean
---@field bUseSelfCollisions boolean
---@field SelfCollisionThickness float
---@field SelfCollisionFriction float
---@field bUseSelfIntersections boolean
---@field bUseLegacyBackstop boolean
---@field DampingCoefficient float
---@field LocalDampingCoefficient float
---@field bUsePointBasedWindModel boolean
---@field Drag FChaosClothWeightedValue
---@field Lift FChaosClothWeightedValue
---@field bUseGravityOverride boolean
---@field GravityScale float
---@field Gravity FVector
---@field Pressure FChaosClothWeightedValue
---@field AnimDriveStiffness FChaosClothWeightedValue
---@field AnimDriveDamping FChaosClothWeightedValue
---@field LinearVelocityScale FVector
---@field AngularVelocityScale float
---@field FictitiousAngularScale float
---@field bUseTetrahedralConstraints boolean
---@field bUseThinShellVolumeConstraints boolean
---@field bUseContinuousCollisionDetection boolean
UChaosClothConfig = {}



---@class UChaosClothSharedSimConfig : UClothSharedConfigCommon
---@field IterationCount int32
---@field MaxIterationCount int32
---@field SubdivisionCount int32
---@field bUseLocalSpaceSimulation boolean
---@field bUseXPBDConstraints boolean
UChaosClothSharedSimConfig = {}



---@class UChaosClothingInteractor : UClothingInteractor
UChaosClothingInteractor = {}

---@param Drag FVector2D
---@param Lift FVector2D
---@param AirDensity float
---@param WindVelocity FVector
function UChaosClothingInteractor:SetWind(Drag, Lift, AirDensity, WindVelocity) end
---@param LinearVelocityScale FVector
---@param AngularVelocityScale float
---@param FictitiousAngularScale float
function UChaosClothingInteractor:SetVelocityScale(LinearVelocityScale, AngularVelocityScale, FictitiousAngularScale) end
---@param Pressure FVector2D
function UChaosClothingInteractor:SetPressure(Pressure) end
---@param EdgeStiffness float
---@param BendingStiffness float
---@param AreaStiffness float
function UChaosClothingInteractor:SetMaterialLinear(EdgeStiffness, BendingStiffness, AreaStiffness) end
---@param EdgeStiffness FVector2D
---@param BendingStiffness FVector2D
---@param AreaStiffness FVector2D
function UChaosClothingInteractor:SetMaterial(EdgeStiffness, BendingStiffness, AreaStiffness) end
---@param TetherStiffness float
---@param TetherScale float
function UChaosClothingInteractor:SetLongRangeAttachmentLinear(TetherStiffness, TetherScale) end
---@param TetherStiffness FVector2D
---@param TetherScale FVector2D
function UChaosClothingInteractor:SetLongRangeAttachment(TetherStiffness, TetherScale) end
---@param GravityScale float
---@param bIsGravityOverridden boolean
---@param GravityOverride FVector
function UChaosClothingInteractor:SetGravity(GravityScale, bIsGravityOverridden, GravityOverride) end
---@param DampingCoefficient float
---@param LocalDampingCoefficient float
function UChaosClothingInteractor:SetDamping(DampingCoefficient, LocalDampingCoefficient) end
---@param CollisionThickness float
---@param FrictionCoefficient float
---@param bUseCCD boolean
---@param SelfCollisionThickness float
function UChaosClothingInteractor:SetCollision(CollisionThickness, FrictionCoefficient, bUseCCD, SelfCollisionThickness) end
---@param bEnabled boolean
function UChaosClothingInteractor:SetBackstop(bEnabled) end
---@param AnimDriveStiffness float
function UChaosClothingInteractor:SetAnimDriveLinear(AnimDriveStiffness) end
---@param AnimDriveStiffness FVector2D
---@param AnimDriveDamping FVector2D
function UChaosClothingInteractor:SetAnimDrive(AnimDriveStiffness, AnimDriveDamping) end
---@param DragCoefficient float
---@param LiftCoefficient float
---@param WindVelocity FVector
function UChaosClothingInteractor:SetAerodynamics(DragCoefficient, LiftCoefficient, WindVelocity) end
---@param bReset boolean
---@param bTeleport boolean
function UChaosClothingInteractor:ResetAndTeleport(bReset, bTeleport) end


---@class UChaosClothingSimulationFactory : UClothingSimulationFactory
UChaosClothingSimulationFactory = {}


---@class UChaosClothingSimulationInteractor : UClothingSimulationInteractor
UChaosClothingSimulationInteractor = {}


