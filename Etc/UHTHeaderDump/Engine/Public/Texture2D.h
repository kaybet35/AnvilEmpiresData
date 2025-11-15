#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "Texture.h"
#include "TextureAddress.h"
#include "Texture2D.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTexture2D : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstResourceMemMip;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTemporarilyDisableStreaming: 1;
    
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ImportedSize;
    
public:
    UTexture2D();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Blueprint_GetSizeY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Blueprint_GetSizeX() const;
    
};

