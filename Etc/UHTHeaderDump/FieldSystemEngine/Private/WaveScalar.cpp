#include "WaveScalar.h"

UWaveScalar::UWaveScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Magnitude = 1.00f;
    this->WaveLength = 10000.00f;
    this->Period = 1.00f;
    this->Function = Field_Wave_Cosine;
    this->Falloff = Field_Falloff_Linear;
}

UWaveScalar* UWaveScalar::SetWaveScalar(float NewMagnitude, FVector NewPosition, float NewWaveLength, float NewPeriod, float Time, TEnumAsByte<EWaveFunctionType> NewFunction, TEnumAsByte<EFieldFalloffType> NewFalloff) {
    return NULL;
}


