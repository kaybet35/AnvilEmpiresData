#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendClassType.generated.h"

UENUM(BlueprintType)
enum class EMetasoundFrontendClassType : uint8 {
    External,
    Graph,
    Input,
    Output,
    Literal,
    Variable,
    VariableDeferredAccessor,
    VariableAccessor,
    VariableMutator,
    Template,
    Invalid,
};

