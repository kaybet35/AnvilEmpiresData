#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "CameraFilmbackSettings.h"
#include "CameraFocusSettings.h"
#include "CameraLensSettings.h"
#include "NamedFilmbackPreset.h"
#include "NamedLensPreset.h"
#include "PlateCropSettings.h"
#include "CineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class CINEMATICCAMERA_API UCineCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlateCropSettings CropSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_CustomNearClippingPlane: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomNearClippingPlane;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedLensPreset> LensPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultFilmbackPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultFilmbackPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLensPresetName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLensFocalLength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLensFStop;
    
public:
    UCineCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLensSettings(const FCameraLensSettings& NewLensSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetLensPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSettings(const FCameraFocusSettings& NewFocusSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmback(const FCameraFilmbackSettings& NewFilmback);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocalLength(float InFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAperture(const float NewCurrentAperture);
    
    UFUNCTION(BlueprintCallable)
    void SetCropSettings(const FPlateCropSettings& NewCropSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCropPresetByName(const FString& InPresetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVerticalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedLensPreset> GetLensPresetsCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLensPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHorizontalFieldOfView() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilmbackPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultFilmbackPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCropPresetName() const;
    
};

