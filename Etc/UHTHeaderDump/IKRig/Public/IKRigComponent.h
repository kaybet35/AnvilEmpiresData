#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IKGoalCreatorInterface.h"
#include "IKRigGoal.h"
#include "IKRigComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IKRIG_API UIKRigComponent : public UActorComponent, public IIKGoalCreatorInterface {
    GENERATED_BODY()
public:
    UIKRigComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIKRigGoalTransform(const FName GoalName, const FTransform Transform, const float PositionAlpha, const float RotationAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetIKRigGoalPositionAndRotation(const FName GoalName, const FVector Position, const FQuat Rotation, const float PositionAlpha, const float RotationAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetIKRigGoal(const FIKRigGoal& Goal);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllGoals();
    

    // Fix for true pure virtual functions not being implemented
};

