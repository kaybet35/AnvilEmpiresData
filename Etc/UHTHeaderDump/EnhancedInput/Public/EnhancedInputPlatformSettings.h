#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PlatformSettings -FallbackName=PlatformSettings
#include "Templates/SubclassOf.h"
#include "EnhancedInputPlatformSettings.generated.h"

class UEnhancedInputPlatformData;

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class ENHANCEDINPUT_API UEnhancedInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UEnhancedInputPlatformData>> InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEnhancedInputPlatformData>> InputDataClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLogMappingContextRedirects;
    
public:
    UEnhancedInputPlatformSettings();

};

