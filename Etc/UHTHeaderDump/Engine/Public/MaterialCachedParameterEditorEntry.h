#pragma once
#include "CoreMinimal.h"
#include "MaterialCachedParameterEditorInfo.h"
#include "MaterialCachedParameterEditorEntry.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCachedParameterEditorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialCachedParameterEditorInfo> EditorInfo;
    
    ENGINE_API FMaterialCachedParameterEditorEntry();
};

