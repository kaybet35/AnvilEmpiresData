#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformSettings.generated.h"

UCLASS(Abstract, Blueprintable, PerObjectConfig)
class DEVELOPERSETTINGS_API UPlatformSettings : public UObject {
    GENERATED_BODY()
public:
    UPlatformSettings();

};

