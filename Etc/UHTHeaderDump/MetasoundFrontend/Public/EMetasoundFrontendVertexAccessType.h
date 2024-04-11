#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendVertexAccessType.generated.h"

UENUM()
enum class EMetasoundFrontendVertexAccessType : int32 {
    Reference,
    Value,
    Unset,
};

