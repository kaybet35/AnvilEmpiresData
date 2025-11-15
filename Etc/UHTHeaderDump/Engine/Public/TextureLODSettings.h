#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextureLODGroup.h"
#include "TextureLODSettings.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=DeviceProfiles)
class ENGINE_API UTextureLODSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureLODGroup> TextureLODGroups;
    
    UTextureLODSettings();

};

