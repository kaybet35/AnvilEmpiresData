#pragma once
#include "CoreMinimal.h"
#include "NetLevelVisibilityTransactionId.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNetLevelVisibilityTransactionId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Data;
    
public:
    FNetLevelVisibilityTransactionId();
};

