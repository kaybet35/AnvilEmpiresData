#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "LayeredBoneBlendReference.generated.h"

USTRUCT(BlueprintType)
struct FLayeredBoneBlendReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FLayeredBoneBlendReference();
};

