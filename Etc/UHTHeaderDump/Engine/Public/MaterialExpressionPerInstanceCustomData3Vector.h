#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPerInstanceCustomData3Vector.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionPerInstanceCustomData3Vector : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ConstDefaultValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataIndex;
    
    UMaterialExpressionPerInstanceCustomData3Vector();

};

