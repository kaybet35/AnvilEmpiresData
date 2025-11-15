#pragma once
#include "CoreMinimal.h"
#include "MaterialInterfaceEditorOnlyData.h"
#include "StaticParameterSetEditorOnlyData.h"
#include "MaterialInstanceEditorOnlyData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialInstanceEditorOnlyData : public UMaterialInterfaceEditorOnlyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticParameterSetEditorOnlyData StaticParameters;
    
    UMaterialInstanceEditorOnlyData();

};

