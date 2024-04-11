#pragma once
#include "CoreMinimal.h"
#include "InputTriggerChordAction.h"
#include "InputTriggerChordBlocker.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, HideDropdown, MinimalAPI)
class UInputTriggerChordBlocker : public UInputTriggerChordAction {
    GENERATED_BODY()
public:
    UInputTriggerChordBlocker();

};

