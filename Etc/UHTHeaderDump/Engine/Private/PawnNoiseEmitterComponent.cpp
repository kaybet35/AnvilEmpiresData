#include "PawnNoiseEmitterComponent.h"

UPawnNoiseEmitterComponent::UPawnNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAIPerceptionSystemCompatibilityMode = true;
    this->NoiseLifetime = 1.00f;
    this->LastRemoteNoiseVolume = 0.00f;
    this->LastRemoteNoiseTime = 0.00f;
    this->LastLocalNoiseVolume = 0.00f;
    this->LastLocalNoiseTime = 0.00f;
}

void UPawnNoiseEmitterComponent::MakeNoise(AActor* NoiseMaker, float Loudness, const FVector& NoiseLocation) {
}


