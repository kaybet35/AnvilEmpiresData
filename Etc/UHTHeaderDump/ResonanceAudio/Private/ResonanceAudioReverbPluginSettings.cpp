#include "ResonanceAudioReverbPluginSettings.h"

FResonanceAudioReverbPluginSettings::FResonanceAudioReverbPluginSettings() {
    this->bEnableRoomEffects = false;
    this->bGetTransformFromAudioVolume = false;
    this->LeftWallMaterial = ERaMaterialName::TRANSPARENT;
    this->RightWallMaterial = ERaMaterialName::TRANSPARENT;
    this->FloorMaterial = ERaMaterialName::TRANSPARENT;
    this->CeilingMaterial = ERaMaterialName::TRANSPARENT;
    this->FrontWallMaterial = ERaMaterialName::TRANSPARENT;
    this->BackWallMaterial = ERaMaterialName::TRANSPARENT;
    this->ReflectionScalar = 0.00f;
    this->ReverbGain = 0.00f;
    this->ReverbTimeModifier = 0.00f;
    this->ReverbBrightness = 0.00f;
}

