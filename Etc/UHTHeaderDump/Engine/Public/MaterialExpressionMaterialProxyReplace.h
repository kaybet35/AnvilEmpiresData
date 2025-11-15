#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionMaterialProxyReplace.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Realtime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput MaterialProxy;
    
    UMaterialExpressionMaterialProxyReplace();

};

