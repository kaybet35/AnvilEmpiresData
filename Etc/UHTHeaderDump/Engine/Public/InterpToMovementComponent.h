#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EInterpToBehaviourType.h"
#include "ETeleportType.h"
#include "HitResult.h"
#include "InterpControlPoint.h"
#include "MovementComponent.h"
#include "InterpToMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInterpToMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToWaitEndDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToWaitBeginDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToStopDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToReverseDelegate, const FHitResult&, ImpactResult, float, Time);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterpToResetDelegate, const FHitResult&, ImpactResult, float, Time);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPauseOnImpact: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleportType TeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterpToBehaviourType BehaviourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfStillInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSubStepping: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpToReverseDelegate OnInterpToReverse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpToStopDelegate OnInterpToStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpToWaitBeginDelegate OnWaitBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpToWaitEndDelegate OnWaitEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterpToResetDelegate OnResetDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulationTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimulationIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterpControlPoint> ControlPoints;
    
    UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSimulating(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void RestartMovement(float InitialDirection);
    
    UFUNCTION(BlueprintCallable)
    void ResetControlPoints();
    
    UFUNCTION(BlueprintCallable)
    void FinaliseControlPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddControlPointPosition(FVector Pos, bool bPositionIsRelative);
    
};

