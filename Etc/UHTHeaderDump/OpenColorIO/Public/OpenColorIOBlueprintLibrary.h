#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OpenColorIOColorConversionSettings.h"
#include "OpenColorIOBlueprintLibrary.generated.h"

class UObject;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOpenColorIOBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyColorSpaceTransform(const UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget);
    
};

