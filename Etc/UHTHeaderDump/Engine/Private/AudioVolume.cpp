#include "AudioVolume.h"
#include "Net/UnrealNetwork.h"

AAudioVolume::AAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bEnabled = true;
}

void AAudioVolume::SetSubmixSendSettings(const TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings) {
}

void AAudioVolume::SetSubmixOverrideSettings(const TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings) {
}

void AAudioVolume::SetReverbSettings(const FReverbSettings& NewReverbSettings) {
}

void AAudioVolume::SetPriority(float NewPriority) {
}

void AAudioVolume::SetInteriorSettings(const FInteriorSettings& NewInteriorSettings) {
}

void AAudioVolume::SetEnabled(bool bNewEnabled) {
}

void AAudioVolume::OnRep_bEnabled() {
}

void AAudioVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAudioVolume, bEnabled);
}


