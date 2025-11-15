#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "TextureAddress.h"
#include "VolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVolumeTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressMode;
    
    UVolumeTexture();

};

