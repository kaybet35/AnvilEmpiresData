---@meta

---@class AChaosSolverActor : AActor
---@field Properties FChaosSolverConfiguration
---@field TimeStepMultiplier float
---@field CollisionIterations int32
---@field PushOutIterations int32
---@field PushOutPairIterations int32
---@field ClusterConnectionFactor float
---@field ClusterUnionConnectionType EClusterConnectionTypeEnum
---@field DoGenerateCollisionData boolean
---@field CollisionFilterSettings FSolverCollisionFilterSettings
---@field DoGenerateBreakingData boolean
---@field BreakingFilterSettings FSolverBreakingFilterSettings
---@field DoGenerateTrailingData boolean
---@field TrailingFilterSettings FSolverTrailingFilterSettings
---@field MassScale float
---@field bHasFloor boolean
---@field FloorHeight float
---@field ChaosDebugSubstepControl FChaosDebugSubstepControl
---@field SpriteComponent UBillboardComponent
---@field GameplayEventDispatcherComponent UChaosGameplayEventDispatcher
AChaosSolverActor = {}

---@param bActive boolean
function AChaosSolverActor:SetSolverActive(bActive) end
function AChaosSolverActor:SetAsCurrentWorldSolver() end


---@class FBreakEventCallbackWrapper
FBreakEventCallbackWrapper = {}


---@class FChaosBreakEvent
---@field Component UPrimitiveComponent
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field Index int32
FChaosBreakEvent = {}



---@class FChaosCrumblingEvent
---@field Component UPrimitiveComponent
---@field Location FVector
---@field Orientation FQuat
---@field LinearVelocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field LocalBounds FBox
---@field Children TArray<int32>
FChaosCrumblingEvent = {}



---@class FChaosDebugSubstepControl
---@field bPause boolean
---@field bSubstep boolean
---@field bStep boolean
FChaosDebugSubstepControl = {}



---@class FChaosHandlerSet
---@field ChaosHandlers TSet<UObject>
FChaosHandlerSet = {}



---@class FChaosPhysicsCollisionInfo
---@field Component UPrimitiveComponent
---@field OtherComponent UPrimitiveComponent
---@field Location FVector
---@field Normal FVector
---@field AccumulatedImpulse FVector
---@field Velocity FVector
---@field OtherVelocity FVector
---@field AngularVelocity FVector
---@field OtherAngularVelocity FVector
---@field Mass float
---@field OtherMass float
FChaosPhysicsCollisionInfo = {}



---@class FChaosRemovalEvent
---@field Component UPrimitiveComponent
---@field Location FVector
---@field Mass float
FChaosRemovalEvent = {}



---@class FCrumblingEventCallbackWrapper
FCrumblingEventCallbackWrapper = {}


---@class FRemovalEventCallbackWrapper
FRemovalEventCallbackWrapper = {}


---@class IChaosNotifyHandlerInterface : IInterface
IChaosNotifyHandlerInterface = {}


---@class UChaosDebugDrawComponent : UActorComponent
UChaosDebugDrawComponent = {}


---@class UChaosEventListenerComponent : UActorComponent
UChaosEventListenerComponent = {}


---@class UChaosGameplayEventDispatcher : UChaosEventListenerComponent
---@field CollisionEventRegistrations TMap<UPrimitiveComponent, FChaosHandlerSet>
---@field BreakEventRegistrations TMap<UPrimitiveComponent, FBreakEventCallbackWrapper>
---@field RemovalEventRegistrations TMap<UPrimitiveComponent, FRemovalEventCallbackWrapper>
---@field CrumblingEventRegistrations TMap<UPrimitiveComponent, FCrumblingEventCallbackWrapper>
UChaosGameplayEventDispatcher = {}



---@class UChaosSolver : UObject
UChaosSolver = {}


---@class UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
UChaosSolverEngineBlueprintLibrary = {}

---@param PhysicsCollision FChaosPhysicsCollisionInfo
---@return FHitResult
function UChaosSolverEngineBlueprintLibrary:ConvertPhysicsCollisionToHitResult(PhysicsCollision) end


---@class UChaosSolverSettings : UDeveloperSettings
---@field DefaultChaosSolverActorClass FSoftClassPath
UChaosSolverSettings = {}



