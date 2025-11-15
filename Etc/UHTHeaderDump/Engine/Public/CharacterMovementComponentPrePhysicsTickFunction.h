#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "CharacterMovementComponentPrePhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMovementComponentPrePhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FCharacterMovementComponentPrePhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCharacterMovementComponentPrePhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FCharacterMovementComponentPrePhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

