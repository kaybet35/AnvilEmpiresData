#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "PolymorphicStructNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    IRISSTUB_API FPolymorphicStructNetSerializerConfig();
};

