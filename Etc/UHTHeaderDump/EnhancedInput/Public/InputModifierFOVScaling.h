#pragma once
#include "CoreMinimal.h"
#include "EFOVScalingType.h"
#include "InputModifier.h"
#include "InputModifierFOVScaling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputModifierFOVScaling : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFOVScalingType FOVScalingType;
    
    UInputModifierFOVScaling();

};

