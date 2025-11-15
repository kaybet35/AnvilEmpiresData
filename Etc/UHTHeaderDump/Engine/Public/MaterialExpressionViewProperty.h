#pragma once
#include "CoreMinimal.h"
#include "EMaterialExposedViewProperty.h"
#include "MaterialExpression.h"
#include "MaterialExpressionViewProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionViewProperty : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialExposedViewProperty> Property;
    
    UMaterialExpressionViewProperty();

};

