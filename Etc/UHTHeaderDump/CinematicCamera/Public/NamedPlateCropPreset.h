#pragma once
#include "CoreMinimal.h"
#include "PlateCropSettings.h"
#include "NamedPlateCropPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedPlateCropPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlateCropSettings CropSettings;
    
    CINEMATICCAMERA_API FNamedPlateCropPreset();
};

