#pragma once
#include "CoreMinimal.h"
#include "MediaSourceCacheSettings.generated.h"

USTRUCT(BlueprintType)
struct FMediaSourceCacheSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLookAhead;
    
    MEDIAASSETS_API FMediaSourceCacheSettings();
};

