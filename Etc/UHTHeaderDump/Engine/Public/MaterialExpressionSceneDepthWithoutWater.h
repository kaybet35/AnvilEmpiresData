#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EMaterialSceneAttributeInputMode.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSceneDepthWithoutWater.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ConstInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackDepth;
    
    UMaterialExpressionSceneDepthWithoutWater();

};

