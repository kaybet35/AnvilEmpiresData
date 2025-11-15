#pragma once
#include "CoreMinimal.h"
#include "ESceneTextureId.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSceneTexture.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionSceneTexture : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneTextureId> SceneTextureId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFiltered;
    
    UMaterialExpressionSceneTexture();

};

