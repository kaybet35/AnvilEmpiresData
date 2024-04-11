#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "GameplayTagContainerNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    GAMEPLAYTAGS_API FGameplayTagContainerNetSerializerConfig();
};

