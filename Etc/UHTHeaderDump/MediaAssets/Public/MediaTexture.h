#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Texture -FallbackName=Texture
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
#include "MediaTextureOrientation.h"
#include "MediaTextureOutputFormat.h"
#include "MediaTexture.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class MEDIAASSETS_API UMediaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClearColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGenMips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumMips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NewStyleOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<MediaTextureOutputFormat> OutputFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    float CurrentAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<MediaTextureOrientation> CurrentOrientation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaTexture();

    UFUNCTION(BlueprintCallable)
    void UpdateResource();
    
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureNumMips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAspectRatio() const;
    
};

