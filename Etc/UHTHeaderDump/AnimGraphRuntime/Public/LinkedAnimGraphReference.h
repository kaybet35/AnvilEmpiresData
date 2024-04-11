#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "LinkedAnimGraphReference.generated.h"

USTRUCT(BlueprintType)
struct FLinkedAnimGraphReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FLinkedAnimGraphReference();
};

