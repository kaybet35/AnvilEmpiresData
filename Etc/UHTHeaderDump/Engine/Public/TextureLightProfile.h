#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "TextureLightProfile.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTextureLightProfile : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureMultiplier;
    
    UTextureLightProfile();

};

