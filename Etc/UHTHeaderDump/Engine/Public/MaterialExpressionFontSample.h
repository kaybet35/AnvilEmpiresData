#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionFontSample.generated.h"

class UFont;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionFontSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontTexturePage;
    
    UMaterialExpressionFontSample();

};

