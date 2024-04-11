#include "CineCameraSettings.h"

UCineCameraSettings::UCineCameraSettings() {
    this->DefaultLensPresetName = TEXT("Universal Zoom");
    this->DefaultLensFocalLength = 35.00f;
    this->DefaultLensFStop = 2.80f;
    this->LensPresets.AddDefaulted(9);
    this->DefaultFilmbackPreset = TEXT("16:9 Digital Film");
    this->FilmbackPresets.AddDefaulted(13);
    this->DefaultCropPresetName = TEXT("No Crop");
    this->CropPresets.AddDefaulted(4);
}

void UCineCameraSettings::SetLensPresets(const TArray<FNamedLensPreset>& InLensPresets) {
}

void UCineCameraSettings::SetFilmbackPresets(const TArray<FNamedFilmbackPreset>& InFilmbackPresets) {
}

void UCineCameraSettings::SetDefaultLensPresetName(const FString& InDefaultLensPresetName) {
}

void UCineCameraSettings::SetDefaultLensFStop(const float InDefaultLensFStop) {
}

void UCineCameraSettings::SetDefaultLensFocalLength(const float InDefaultLensFocalLength) {
}

void UCineCameraSettings::SetDefaultFilmbackPreset(const FString& InDefaultFilmbackPreset) {
}

void UCineCameraSettings::SetDefaultCropPresetName(const FString& InDefaultCropPresetName) {
}

void UCineCameraSettings::SetCropPresets(const TArray<FNamedPlateCropPreset>& InCropPresets) {
}

TArray<FString> UCineCameraSettings::GetLensPresetNames() const {
    return TArray<FString>();
}

bool UCineCameraSettings::GetLensPresetByName(const FString& PresetName, FCameraLensSettings& LensSettings) {
    return false;
}

TArray<FString> UCineCameraSettings::GetFilmbackPresetNames() const {
    return TArray<FString>();
}

bool UCineCameraSettings::GetFilmbackPresetByName(const FString& PresetName, FCameraFilmbackSettings& FilmbackSettings) {
    return false;
}

TArray<FString> UCineCameraSettings::GetCropPresetNames() const {
    return TArray<FString>();
}

bool UCineCameraSettings::GetCropPresetByName(const FString& PresetName, FPlateCropSettings& CropSettings) {
    return false;
}

UCineCameraSettings* UCineCameraSettings::GetCineCameraSettings() {
    return NULL;
}


