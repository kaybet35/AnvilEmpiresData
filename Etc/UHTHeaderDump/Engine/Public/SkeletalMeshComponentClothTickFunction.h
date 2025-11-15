#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkeletalMeshComponentClothTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkeletalMeshComponentClothTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSkeletalMeshComponentClothTickFunction> : public TStructOpsTypeTraitsBase2<FSkeletalMeshComponentClothTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

