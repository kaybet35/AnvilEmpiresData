#pragma once
#include "CoreMinimal.h"
#include "PerPlatformSettings.generated.h"

class UPlatformSettings;

USTRUCT(BlueprintType)
struct DEVELOPERSETTINGS_API FPerPlatformSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPlatformSettings*> Settings;
    
public:
    FPerPlatformSettings();
};

