#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestruct.h"
#include "TextureLODSettings.h"
#include "DeviceProfile.generated.h"

class UDeviceProfile;

UCLASS(Blueprintable, Config=Engine)
class ENGINE_API UDeviceProfile : public UTextureLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseProfileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVisibleForAssets: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeviceProfile* Parent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CVars;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestruct> MatchingRules;
    
    UDeviceProfile();

};

