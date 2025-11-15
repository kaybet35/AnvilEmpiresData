#pragma once
#include "CoreMinimal.h"
#include "RPCDoSState.h"
#include "RPCDoSStateConfig.generated.h"

USTRUCT(BlueprintType)
struct FRPCDoSStateConfig : public FRPCDoSState {
    GENERATED_BODY()
public:
    ENGINE_API FRPCDoSStateConfig();
};

