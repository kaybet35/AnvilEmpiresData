#include "ResonanceAudioSpatializationSourceSettings.h"

UResonanceAudioSpatializationSourceSettings::UResonanceAudioSpatializationSourceSettings() {
    this->SpatializationMethod = ERaSpatializationMethod::HRTF;
    this->Pattern = 0.00f;
    this->Sharpness = 1.00f;
    this->bToggleVisualization = false;
    this->Scale = 1.00f;
    this->Spread = 0.00f;
    this->Rolloff = ERaDistanceRolloffModel::NONE;
    this->MinDistance = 0.00f;
    this->MaxDistance = 50000.00f;
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread) {
}

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness) {
}


