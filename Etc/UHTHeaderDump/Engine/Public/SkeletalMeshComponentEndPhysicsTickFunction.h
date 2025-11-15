#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkeletalMeshComponentEndPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkeletalMeshComponentEndPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSkeletalMeshComponentEndPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSkeletalMeshComponentEndPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

