#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWindowMode.h"
#include "OnGameUserSettingsUINeedsUpdateDelegate.h"
#include "GameUserSettings.generated.h"

class UGameUserSettings;

UCLASS(Blueprintable, ConfigDoNotCheckDefaults, Config=GameUserSettings)
class ENGINE_API UGameUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVSync;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynamicResolution;
    
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ResolutionSizeX;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ResolutionSizeY;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastUserConfirmedResolutionSizeX;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastUserConfirmedResolutionSizeY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowPosX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindowPosY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullscreenMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastConfirmedFullscreenMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredFullscreenMode;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastConfirmedAudioQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredScreenWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bUseDesiredScreenHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredScreenHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUserConfirmedDesiredScreenWidth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUserConfirmedDesiredScreenHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRecommendedScreenWidth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRecommendedScreenHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastCPUBenchmarkResult;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastGPUBenchmarkResult;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LastCPUBenchmarkSteps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LastGPUBenchmarkSteps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastGPUBenchmarkMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHDRDisplayOutput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HDRDisplayOutputNits;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameUserSettingsUINeedsUpdate OnGameUserSettingsUINeedsUpdate;
    
public:
    UGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void ValidateSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsHDRDisplayOutput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVSyncEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualEffectQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShadingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolution(FIntPoint Resolution);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleValueEx(float NewScaleValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleValue(int32 NewScaleValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverallScalabilityLevel(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalIlluminationQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMode(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimit(float NewLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFoliageQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicResolutionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBenchmarkFallbackValues();
    
    UFUNCTION(BlueprintCallable)
    void SetAudioQualityLevel(int32 QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RevertVideoMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetToCurrentSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings(bool bForceReload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVSyncEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVSyncDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenResolutionDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHDREnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullscreenModeDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicResolutionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicResolutionDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVisualEffectQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetViewDistanceQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSyncInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadowQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadingQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetScreenResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScaleNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReflectionQuality() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRecommendedResolutionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetPreferredFullscreenMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostProcessingQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallScalabilityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetLastConfirmedScreenResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetLastConfirmedFullscreenMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalIlluminationQuality() const;
    
    UFUNCTION(BlueprintCallable)
    static UGameUserSettings* GetGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetFullscreenMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrameRateLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFramePace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFoliageQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntPoint GetDesktopResolution() const;
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDefaultWindowPosition();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EWindowMode::Type> GetDefaultWindowMode();
    
    UFUNCTION(BlueprintCallable)
    float GetDefaultResolutionScale();
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetDefaultResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHDRDisplayNits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAudioQualityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingQuality() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmVideoMode();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(bool bCheckForCommandLineOverrides);
    
    UFUNCTION(BlueprintCallable)
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNonResolutionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyHardwareBenchmarkResults();
    
};

