#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "CameraFilmbackSettings.h"
#include "CameraLensSettings.h"
#include "NamedFilmbackPreset.h"
#include "NamedLensPreset.h"
#include "NamedPlateCropPreset.h"
#include "PlateCropSettings.h"
#include "CineCameraSettings.generated.h"

class UCineCameraSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class CINEMATICCAMERA_API UCineCameraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLensPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLensFocalLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLensFStop;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedLensPreset> LensPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultFilmbackPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultCropPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedPlateCropPreset> CropPresets;
    
    UCineCameraSettings();

private:
    UFUNCTION(BlueprintCallable)
    void SetLensPresets(const TArray<FNamedLensPreset>& InLensPresets);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackPresets(const TArray<FNamedFilmbackPreset>& InFilmbackPresets);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLensPresetName(const FString& InDefaultLensPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLensFStop(const float InDefaultLensFStop);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLensFocalLength(const float InDefaultLensFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFilmbackPreset(const FString& InDefaultFilmbackPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCropPresetName(const FString& InDefaultCropPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCropPresets(const TArray<FNamedPlateCropPreset>& InCropPresets);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLensPresetNames() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetLensPresetByName(const FString& PresetName, FCameraLensSettings& LensSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetFilmbackPresetNames() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetFilmbackPresetByName(const FString& PresetName, FCameraFilmbackSettings& FilmbackSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetCropPresetNames() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetCropPresetByName(const FString& PresetName, FPlateCropSettings& CropSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    static UCineCameraSettings* GetCineCameraSettings();
    
};

