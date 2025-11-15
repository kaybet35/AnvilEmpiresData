#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionHairAttributes.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionHairAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTangentSpace: 1;
    
    UMaterialExpressionHairAttributes();

};

