#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionScalarParameter.h"
#include "MaterialExpressionCurveAtlasRowParameter.generated.h"

class UCurveLinearColor;
class UCurveLinearColorAtlas;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColorAtlas* Atlas;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput InputTime;
    
    UMaterialExpressionCurveAtlasRowParameter();

};

