#pragma once
#include "CoreMinimal.h"
#include "EInputAxisSwizzle.h"
#include "InputModifier.h"
#include "InputModifierSwizzleAxis.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierSwizzleAxis : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputAxisSwizzle Order;
    
    UInputModifierSwizzleAxis();

};

