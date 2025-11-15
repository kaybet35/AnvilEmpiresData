#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCollection.h"
#include "MaterialFunctionInterfaceEditorOnlyData.h"
#include "MaterialFunctionEditorOnlyData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialFunctionEditorOnlyData : public UMaterialFunctionInterfaceEditorOnlyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialExpressionCollection ExpressionCollection;
    
    UMaterialFunctionEditorOnlyData();

};

