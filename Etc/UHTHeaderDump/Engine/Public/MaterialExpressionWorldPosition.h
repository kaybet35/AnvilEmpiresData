#pragma once
#include "CoreMinimal.h"
#include "EWorldPositionIncludedOffsets.h"
#include "MaterialExpression.h"
#include "MaterialExpressionWorldPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionWorldPosition : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;
    
    UMaterialExpressionWorldPosition();

};

