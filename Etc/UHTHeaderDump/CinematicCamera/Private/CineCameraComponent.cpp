#include "CineCameraComponent.h"

UCineCameraComponent::UCineCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = true;
    this->CurrentFocalLength = 35.00f;
    this->CurrentAperture = 2.80f;
    this->CurrentFocusDistance = 0.00f;
    this->bOverride_CustomNearClippingPlane = false;
    this->CustomNearClippingPlane = 10.00f;
    this->DefaultLensFocalLength = 0.00f;
    this->DefaultLensFStop = 0.00f;
}

void UCineCameraComponent::SetLensSettings(const FCameraLensSettings& NewLensSettings) {
}

void UCineCameraComponent::SetLensPresetByName(const FString& InPresetName) {
}

void UCineCameraComponent::SetFocusSettings(const FCameraFocusSettings& NewFocusSettings) {
}

void UCineCameraComponent::SetFilmbackPresetByName(const FString& InPresetName) {
}

void UCineCameraComponent::SetFilmback(const FCameraFilmbackSettings& NewFilmback) {
}

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength) {
}

void UCineCameraComponent::SetCurrentAperture(const float NewCurrentAperture) {
}

void UCineCameraComponent::SetCropSettings(const FPlateCropSettings& NewCropSettings) {
}

void UCineCameraComponent::SetCropPresetByName(const FString& InPresetName) {
}

float UCineCameraComponent::GetVerticalFieldOfView() const {
    return 0.0f;
}

TArray<FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy() {
    return TArray<FNamedLensPreset>();
}

FString UCineCameraComponent::GetLensPresetName() const {
    return TEXT("");
}

float UCineCameraComponent::GetHorizontalFieldOfView() const {
    return 0.0f;
}

TArray<FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy() {
    return TArray<FNamedFilmbackPreset>();
}

FString UCineCameraComponent::GetFilmbackPresetName() const {
    return TEXT("");
}

FString UCineCameraComponent::GetDefaultFilmbackPresetName() const {
    return TEXT("");
}

FString UCineCameraComponent::GetCropPresetName() const {
    return TEXT("");
}


