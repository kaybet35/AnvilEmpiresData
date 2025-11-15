#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4d -FallbackName=Vector4d
#include "MaterialExpressionParameter.h"
#include "MaterialExpressionDoubleVectorParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionDoubleVectorParameter : public UMaterialExpressionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4d DefaultValue;
    
    UMaterialExpressionDoubleVectorParameter();

};

