#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OpenColorIOSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class OPENCOLORIO_API UOpenColorIOSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLegacyProcessor: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUse32fLUT: 1;
    
    UOpenColorIOSettings();

};

