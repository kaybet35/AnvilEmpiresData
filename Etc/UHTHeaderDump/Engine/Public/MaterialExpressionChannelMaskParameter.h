#pragma once
#include "CoreMinimal.h"
#include "EChannelMaskParameterColor.h"
#include "ExpressionInput.h"
#include "MaterialExpressionVectorParameter.h"
#include "MaterialExpressionChannelMaskParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EChannelMaskParameterColor::Type> MaskChannel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UMaterialExpressionChannelMaskParameter();

};

