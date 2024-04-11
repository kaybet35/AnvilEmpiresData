#pragma once
#include "CoreMinimal.h"
#include "InputComboStepData.h"
#include "InputTrigger.h"
#include "InputTriggerCombo.generated.h"

class UInputAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENHANCEDINPUT_API UInputTriggerCombo : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentComboStepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeBetweenComboSteps;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputComboStepData> ComboActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> CancelActions;
    
    UInputTriggerCombo();

};

