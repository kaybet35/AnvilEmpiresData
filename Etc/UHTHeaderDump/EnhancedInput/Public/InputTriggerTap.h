#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerTap.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerTap : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TapReleaseTimeThreshold;
    
    UInputTriggerTap();

};

