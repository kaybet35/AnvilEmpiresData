#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "InputModifierToWorldSpace.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierToWorldSpace : public UInputModifier {
    GENERATED_BODY()
public:
    UInputModifierToWorldSpace();

};

