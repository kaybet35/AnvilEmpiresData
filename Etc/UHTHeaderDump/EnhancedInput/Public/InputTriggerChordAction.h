#pragma once
#include "CoreMinimal.h"
#include "InputTrigger.h"
#include "InputTriggerChordAction.generated.h"

class UInputAction;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENHANCEDINPUT_API UInputTriggerChordAction : public UInputTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ChordAction;
    
    UInputTriggerChordAction();

};

