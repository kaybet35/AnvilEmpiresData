#pragma once
#include "CoreMinimal.h"
#include "EditorElement.generated.h"

USTRUCT(BlueprintType)
struct FEditorElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Indices[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weights[3];
    
    ENGINE_API FEditorElement();
};

