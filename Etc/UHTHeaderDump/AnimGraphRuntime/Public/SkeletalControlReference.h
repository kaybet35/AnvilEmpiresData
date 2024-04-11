#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
#include "SkeletalControlReference.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalControlReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    ANIMGRAPHRUNTIME_API FSkeletalControlReference();
};

