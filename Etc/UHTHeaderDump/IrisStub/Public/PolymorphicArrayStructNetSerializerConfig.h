#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PolymorphicArrayStructNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISSTUB_API FPolymorphicArrayStructNetSerializerConfig();
};

