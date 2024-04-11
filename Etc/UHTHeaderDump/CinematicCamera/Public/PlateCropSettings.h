#pragma once
#include "CoreMinimal.h"
#include "PlateCropSettings.generated.h"

USTRUCT(BlueprintType)
struct FPlateCropSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRatio;
    
    CINEMATICCAMERA_API FPlateCropSettings();
};

