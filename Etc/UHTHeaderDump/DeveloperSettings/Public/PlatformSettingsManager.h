#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlatformSettingsInstances.h"
#include "Templates/SubclassOf.h"
#include "PlatformSettingsManager.generated.h"

class UPlatformSettings;

UCLASS(Blueprintable)
class DEVELOPERSETTINGS_API UPlatformSettingsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UPlatformSettings>, FPlatformSettingsInstances> SettingsMap;
    
public:
    UPlatformSettingsManager();

};

