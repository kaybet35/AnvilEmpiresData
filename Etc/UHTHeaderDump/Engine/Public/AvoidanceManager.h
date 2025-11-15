#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AvoidanceManager.generated.h"

class UMovementComponent;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API UAvoidanceManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTimeToLive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockTimeAfterAvoid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockTimeAfterClean;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaTimeToPredict;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArtificialRadiusExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestHeightDifference;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightCheckMargin;
    
    UAvoidanceManager();

    UFUNCTION(BlueprintCallable)
    bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);
    
    UFUNCTION(BlueprintCallable)
    int32 GetObjectCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNewAvoidanceUID();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);
    
};

