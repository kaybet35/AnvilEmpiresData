#pragma once
#include "CoreMinimal.h"
#include "EditorElement.h"
#include "GridBlendSample.generated.h"

USTRUCT(BlueprintType)
struct FGridBlendSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorElement GridElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    ENGINE_API FGridBlendSample();
};

