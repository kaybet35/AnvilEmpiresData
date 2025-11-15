#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "ActorPartitionSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UActorPartitionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorPartitionSubsystem();

};

