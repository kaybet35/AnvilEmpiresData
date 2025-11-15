#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "NetworkSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UNetworkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNetworkSubsystem();

};

