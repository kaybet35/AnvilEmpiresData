#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "InputModifierScaleByDeltaTime.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierScaleByDeltaTime : public UInputModifier {
    GENERATED_BODY()
public:
    UInputModifierScaleByDeltaTime();

};

