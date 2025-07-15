#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilSiegeTowerState -FallbackName=EAnvilSiegeTowerState
#include "VisVehicleAnimInstance.h"
#include "VisSiegeTowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisSiegeTowerAnimInstance : public UVisVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAnvilSiegeTowerState LadderState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EAnvilSiegeTowerState RampState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentRampAngle;
    
    UVisSiegeTowerAnimInstance();

};

