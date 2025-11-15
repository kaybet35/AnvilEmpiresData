#include "GameUserSettings.h"

UGameUserSettings::UGameUserSettings() {
    this->bUseVSync = false;
    this->bUseDynamicResolution = false;
    this->ResolutionSizeX = 1920;
    this->ResolutionSizeY = 1080;
    this->LastUserConfirmedResolutionSizeX = 1920;
    this->LastUserConfirmedResolutionSizeY = 1080;
    this->WindowPosX = -1;
    this->WindowPosY = -1;
    this->FullscreenMode = 1;
    this->LastConfirmedFullscreenMode = 1;
    this->PreferredFullscreenMode = 1;
    this->Version = 5;
    this->AudioQualityLevel = 0;
    this->LastConfirmedAudioQualityLevel = 0;
    this->FrameRateLimit = 60.00f;
    this->DesiredScreenWidth = 1280;
    this->bUseDesiredScreenHeight = false;
    this->DesiredScreenHeight = 720;
    this->LastUserConfirmedDesiredScreenWidth = 1280;
    this->LastUserConfirmedDesiredScreenHeight = 720;
    this->LastRecommendedScreenWidth = -1.00f;
    this->LastRecommendedScreenHeight = -1.00f;
    this->LastCPUBenchmarkResult = -1.00f;
    this->LastGPUBenchmarkResult = -1.00f;
    this->LastGPUBenchmarkMultiplier = 1.00f;
    this->bUseHDRDisplayOutput = false;
    this->HDRDisplayOutputNits = 1000;
}

void UGameUserSettings::ValidateSettings() {
}

bool UGameUserSettings::SupportsHDRDisplayOutput() const {
    return false;
}

void UGameUserSettings::SetVSyncEnabled(bool bEnable) {
}

void UGameUserSettings::SetVisualEffectQuality(int32 Value) {
}

void UGameUserSettings::SetViewDistanceQuality(int32 Value) {
}

void UGameUserSettings::SetToDefaults() {
}

void UGameUserSettings::SetTextureQuality(int32 Value) {
}

void UGameUserSettings::SetShadowQuality(int32 Value) {
}

void UGameUserSettings::SetShadingQuality(int32 Value) {
}

void UGameUserSettings::SetScreenResolution(FIntPoint Resolution) {
}

void UGameUserSettings::SetResolutionScaleValueEx(float NewScaleValue) {
}

void UGameUserSettings::SetResolutionScaleValue(int32 NewScaleValue) {
}

void UGameUserSettings::SetResolutionScaleNormalized(float NewScaleNormalized) {
}

void UGameUserSettings::SetReflectionQuality(int32 Value) {
}

void UGameUserSettings::SetPostProcessingQuality(int32 Value) {
}

void UGameUserSettings::SetOverallScalabilityLevel(int32 Value) {
}

void UGameUserSettings::SetGlobalIlluminationQuality(int32 Value) {
}

void UGameUserSettings::SetFullscreenMode(TEnumAsByte<EWindowMode::Type> InFullscreenMode) {
}

void UGameUserSettings::SetFrameRateLimit(float NewLimit) {
}

void UGameUserSettings::SetFoliageQuality(int32 Value) {
}

void UGameUserSettings::SetDynamicResolutionEnabled(bool bEnable) {
}

void UGameUserSettings::SetBenchmarkFallbackValues() {
}

void UGameUserSettings::SetAudioQualityLevel(int32 QualityLevel) {
}

void UGameUserSettings::SetAntiAliasingQuality(int32 Value) {
}

void UGameUserSettings::SaveSettings() {
}

void UGameUserSettings::RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier) {
}

void UGameUserSettings::RevertVideoMode() {
}

void UGameUserSettings::ResetToCurrentSettings() {
}

void UGameUserSettings::LoadSettings(bool bForceReload) {
}

bool UGameUserSettings::IsVSyncEnabled() const {
    return false;
}

bool UGameUserSettings::IsVSyncDirty() const {
    return false;
}

bool UGameUserSettings::IsScreenResolutionDirty() const {
    return false;
}

bool UGameUserSettings::IsHDREnabled() const {
    return false;
}

bool UGameUserSettings::IsFullscreenModeDirty() const {
    return false;
}

bool UGameUserSettings::IsDynamicResolutionEnabled() const {
    return false;
}

bool UGameUserSettings::IsDynamicResolutionDirty() const {
    return false;
}

bool UGameUserSettings::IsDirty() const {
    return false;
}

int32 UGameUserSettings::GetVisualEffectQuality() const {
    return 0;
}

int32 UGameUserSettings::GetViewDistanceQuality() const {
    return 0;
}

int32 UGameUserSettings::GetTextureQuality() const {
    return 0;
}

int32 UGameUserSettings::GetSyncInterval() {
    return 0;
}

int32 UGameUserSettings::GetShadowQuality() const {
    return 0;
}

int32 UGameUserSettings::GetShadingQuality() const {
    return 0;
}

FIntPoint UGameUserSettings::GetScreenResolution() const {
    return FIntPoint{};
}

float UGameUserSettings::GetResolutionScaleNormalized() const {
    return 0.0f;
}

void UGameUserSettings::GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) const {
}

void UGameUserSettings::GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue) const {
}

int32 UGameUserSettings::GetReflectionQuality() const {
    return 0;
}

float UGameUserSettings::GetRecommendedResolutionScale() {
    return 0.0f;
}

TEnumAsByte<EWindowMode::Type> UGameUserSettings::GetPreferredFullscreenMode() const {
    return EWindowMode::Fullscreen;
}

int32 UGameUserSettings::GetPostProcessingQuality() const {
    return 0;
}

int32 UGameUserSettings::GetOverallScalabilityLevel() const {
    return 0;
}

FIntPoint UGameUserSettings::GetLastConfirmedScreenResolution() const {
    return FIntPoint{};
}

TEnumAsByte<EWindowMode::Type> UGameUserSettings::GetLastConfirmedFullscreenMode() const {
    return EWindowMode::Fullscreen;
}

int32 UGameUserSettings::GetGlobalIlluminationQuality() const {
    return 0;
}

UGameUserSettings* UGameUserSettings::GetGameUserSettings() {
    return NULL;
}

TEnumAsByte<EWindowMode::Type> UGameUserSettings::GetFullscreenMode() const {
    return EWindowMode::Fullscreen;
}

float UGameUserSettings::GetFrameRateLimit() const {
    return 0.0f;
}

int32 UGameUserSettings::GetFramePace() {
    return 0;
}

int32 UGameUserSettings::GetFoliageQuality() const {
    return 0;
}

FIntPoint UGameUserSettings::GetDesktopResolution() const {
    return FIntPoint{};
}

FIntPoint UGameUserSettings::GetDefaultWindowPosition() {
    return FIntPoint{};
}

TEnumAsByte<EWindowMode::Type> UGameUserSettings::GetDefaultWindowMode() {
    return EWindowMode::Fullscreen;
}

float UGameUserSettings::GetDefaultResolutionScale() {
    return 0.0f;
}

FIntPoint UGameUserSettings::GetDefaultResolution() {
    return FIntPoint{};
}

int32 UGameUserSettings::GetCurrentHDRDisplayNits() const {
    return 0;
}

int32 UGameUserSettings::GetAudioQualityLevel() const {
    return 0;
}

int32 UGameUserSettings::GetAntiAliasingQuality() const {
    return 0;
}

void UGameUserSettings::EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits) {
}

void UGameUserSettings::ConfirmVideoMode() {
}

void UGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
}

void UGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides) {
}

void UGameUserSettings::ApplyNonResolutionSettings() {
}

void UGameUserSettings::ApplyHardwareBenchmarkResults() {
}


