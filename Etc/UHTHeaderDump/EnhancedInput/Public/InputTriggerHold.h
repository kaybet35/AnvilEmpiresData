#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerHold.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerHold : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneShot;
    
    UInputTriggerHold();

};

