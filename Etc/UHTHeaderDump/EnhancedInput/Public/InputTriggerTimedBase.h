#pragma once
#include "CoreMinimal.h"
#include "InputTrigger.h"
#include "InputTriggerTimedBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, Config=Engine)
class ENHANCEDINPUT_API UInputTriggerTimedBase : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectedByTimeDilation;
    
    UInputTriggerTimedBase();

};

