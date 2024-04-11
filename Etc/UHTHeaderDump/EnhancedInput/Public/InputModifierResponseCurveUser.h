#pragma once
#include "CoreMinimal.h"
#include "InputModifier.h"
#include "InputModifierResponseCurveUser.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputModifierResponseCurveUser : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ResponseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ResponseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ResponseZ;
    
    UInputModifierResponseCurveUser();

};

