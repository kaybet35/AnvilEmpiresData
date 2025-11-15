#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "UniqueNetIdReplNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FUniqueNetIdReplNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    ENGINE_API FUniqueNetIdReplNetSerializerConfig();
};

