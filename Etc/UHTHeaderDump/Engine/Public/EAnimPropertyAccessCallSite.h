#pragma once
#include "CoreMinimal.h"
#include "EAnimPropertyAccessCallSite.generated.h"

UENUM(BlueprintType)
enum class EAnimPropertyAccessCallSite : uint8 {
    WorkerThread_Unbatched,
    WorkerThread_Batched_PreEventGraph,
    WorkerThread_Batched_PostEventGraph,
    GameThread_Batched_PreEventGraph,
    GameThread_Batched_PostEventGraph,
};

