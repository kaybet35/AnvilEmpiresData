#pragma once
#include "CoreMinimal.h"
#include "EClampMode.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionClamp.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionClamp : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Min;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EClampMode> ClampMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDefault;
    
    UMaterialExpressionClamp();

};

