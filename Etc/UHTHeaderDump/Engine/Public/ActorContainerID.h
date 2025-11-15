#pragma once
#include "CoreMinimal.h"
#include "ActorContainerID.generated.h"

USTRUCT(BlueprintType)
struct FActorContainerID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    ENGINE_API FActorContainerID();
};

