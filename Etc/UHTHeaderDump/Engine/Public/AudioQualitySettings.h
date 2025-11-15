#pragma once
#include "CoreMinimal.h"
#include "AudioQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAudioQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChannels;
    
    FAudioQualitySettings();
};

