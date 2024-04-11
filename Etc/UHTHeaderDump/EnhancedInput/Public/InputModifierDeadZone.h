#pragma once
#include "CoreMinimal.h"
#include "EDeadZoneType.h"
#include "InputModifier.h"
#include "InputModifierDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputModifierDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadZoneType Type;
    
    UInputModifierDeadZone();

};

