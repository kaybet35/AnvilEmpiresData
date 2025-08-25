#pragma once
#include "CoreMinimal.h"
#include "VisWeatherIndicatorAnimInstance.h"
#include "VisBoatSailAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UVisBoatSailAnimInstance : public UVisWeatherIndicatorAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSailOpen;
    
    UVisBoatSailAnimInstance();

};

