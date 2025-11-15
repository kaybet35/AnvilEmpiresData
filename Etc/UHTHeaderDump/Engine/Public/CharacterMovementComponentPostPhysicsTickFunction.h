#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "CharacterMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FCharacterMovementComponentPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCharacterMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FCharacterMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

