#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "MaterialExpressionLandscapeLayerSample.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewWeight;
    
    UMaterialExpressionLandscapeLayerSample();

};

