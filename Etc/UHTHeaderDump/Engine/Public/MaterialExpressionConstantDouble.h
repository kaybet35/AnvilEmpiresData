#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionGenericConstant.h"
#include "MaterialExpressionConstantDouble.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionConstantDouble : public UMaterialExpressionGenericConstant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UMaterialExpressionConstantDouble();

};

