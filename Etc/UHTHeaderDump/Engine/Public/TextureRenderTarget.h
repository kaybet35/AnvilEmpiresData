#pragma once
#include "CoreMinimal.h"
#include "Texture.h"
#include "TextureRenderTarget.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UTextureRenderTarget : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetGamma;
    
    UTextureRenderTarget();

};

