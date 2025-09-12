#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=MovementInputState -FallbackName=MovementInputState
#include "VisBoatHelmAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisBoatHelmAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSailOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementInputState HelmsmanInput;
    
    UVisBoatHelmAnimInstance();

};

