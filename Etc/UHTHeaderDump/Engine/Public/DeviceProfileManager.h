#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeviceProfileManager.generated.h"

class UDeviceProfile;

UCLASS(Blueprintable, Transient, Config=DeviceProfiles)
class ENGINE_API UDeviceProfileManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDeviceProfile*> Profiles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDeviceProfile*> BackupProfiles;
    
public:
    UDeviceProfileManager();

};

