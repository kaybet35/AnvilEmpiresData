#pragma once
#include "CoreMinimal.h"
#include "PlatformSettingsInstances.generated.h"

class UPlatformSettings;

USTRUCT(BlueprintType)
struct FPlatformSettingsInstances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlatformSettings* PlatformInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPlatformSettings*> OtherPlatforms;
    
    DEVELOPERSETTINGS_API FPlatformSettingsInstances();
};

