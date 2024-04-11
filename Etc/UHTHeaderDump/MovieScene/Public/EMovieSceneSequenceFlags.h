#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneSequenceFlags.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneSequenceFlags : uint8 {
    None,
    Volatile,
    BlockingEvaluation,
    InheritedFlags = Volatile,
};

