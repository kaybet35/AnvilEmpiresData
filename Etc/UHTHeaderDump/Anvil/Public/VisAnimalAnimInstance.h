#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilAnimalState -FallbackName=EAnvilAnimalState
#include "VisAnimalAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisAnimalAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NativeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilAnimalState NativeCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReceivingIncomingAttack;
    
    UVisAnimalAnimInstance();

};

