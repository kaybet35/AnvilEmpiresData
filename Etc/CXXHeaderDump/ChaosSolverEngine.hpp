#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

struct FBreakEventCallbackWrapper
{
}; // Size: 0x40

struct FChaosBreakEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FVector Velocity;                                                                 // 0x0020 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0038 (size: 0x18)
    float Mass;                                                                       // 0x0050 (size: 0x4)
    int32 Index;                                                                      // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FChaosCrumblingEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FQuat Orientation;                                                                // 0x0020 (size: 0x20)
    FVector LinearVelocity;                                                           // 0x0040 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0058 (size: 0x18)
    float Mass;                                                                       // 0x0070 (size: 0x4)
    FBox LocalBounds;                                                                 // 0x0078 (size: 0x38)
    TArray<int32> Children;                                                           // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FChaosDebugSubstepControl
{
    bool bPause;                                                                      // 0x0000 (size: 0x1)
    bool bSubstep;                                                                    // 0x0001 (size: 0x1)
    bool bStep;                                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;                                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    class UPrimitiveComponent* OtherComponent;                                        // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FVector Normal;                                                                   // 0x0028 (size: 0x18)
    FVector AccumulatedImpulse;                                                       // 0x0040 (size: 0x18)
    FVector Velocity;                                                                 // 0x0058 (size: 0x18)
    FVector OtherVelocity;                                                            // 0x0070 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0088 (size: 0x18)
    FVector OtherAngularVelocity;                                                     // 0x00A0 (size: 0x18)
    float Mass;                                                                       // 0x00B8 (size: 0x4)
    float OtherMass;                                                                  // 0x00BC (size: 0x4)

}; // Size: 0xC0

struct FChaosRemovalEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    float Mass;                                                                       // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FCrumblingEventCallbackWrapper
{
}; // Size: 0x40

struct FRemovalEventCallbackWrapper
{
}; // Size: 0x40

class AChaosSolverActor : public AActor
{
    FChaosSolverConfiguration Properties;                                             // 0x0290 (size: 0x68)
    float TimeStepMultiplier;                                                         // 0x02F8 (size: 0x4)
    int32 CollisionIterations;                                                        // 0x02FC (size: 0x4)
    int32 PushOutIterations;                                                          // 0x0300 (size: 0x4)
    int32 PushOutPairIterations;                                                      // 0x0304 (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x0308 (size: 0x4)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;                            // 0x030C (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x030D (size: 0x1)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x0310 (size: 0x10)
    bool DoGenerateBreakingData;                                                      // 0x0320 (size: 0x1)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x0324 (size: 0x10)
    bool DoGenerateTrailingData;                                                      // 0x0334 (size: 0x1)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x0338 (size: 0x10)
    float MassScale;                                                                  // 0x0348 (size: 0x4)
    bool bHasFloor;                                                                   // 0x034C (size: 0x1)
    float FloorHeight;                                                                // 0x0350 (size: 0x4)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;                               // 0x0354 (size: 0x3)
    class UBillboardComponent* SpriteComponent;                                       // 0x0358 (size: 0x8)
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;            // 0x0378 (size: 0x8)

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x388

class IChaosNotifyHandlerInterface : public IInterface
{
}; // Size: 0x28

class UChaosDebugDrawComponent : public UActorComponent
{
}; // Size: 0xA8

class UChaosEventListenerComponent : public UActorComponent
{
}; // Size: 0xA8

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations; // 0x01B8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x0208 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x0258 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCrumblingEventCallbackWrapper> CrumblingEventRegistrations; // 0x02A8 (size: 0x50)

}; // Size: 0x308

class UChaosSolver : public UObject
{
}; // Size: 0x28

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;                                      // 0x0040 (size: 0x20)

}; // Size: 0x60

#endif
