#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerHoldAndRelease.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UInputTriggerHoldAndRelease();

};

