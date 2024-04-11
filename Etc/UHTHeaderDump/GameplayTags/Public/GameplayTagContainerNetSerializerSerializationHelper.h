#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.h"
#include "GameplayTagContainerNetSerializerSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagContainerNetSerializerSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameplayTags;
    
    GAMEPLAYTAGS_API FGameplayTagContainerNetSerializerSerializationHelper();
};

