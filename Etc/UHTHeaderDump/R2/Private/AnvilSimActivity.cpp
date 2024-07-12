#include "AnvilSimActivity.h"

FAnvilSimActivity::FAnvilSimActivity() {
    this->State = EAnvilSimActivityState::None;
    this->bChainable = false;
    this->Delay = 0.00f;
    this->AdditionalDelays[0] = 0.00f;
    this->AdditionalDelays[1] = 0.00f;
    this->AttackChainDelays[0] = 0.00f;
    this->AttackChainDelays[1] = 0.00f;
    this->AttackChainDelays[2] = 0.00f;
    this->AttackChainDelays[3] = 0.00f;
    this->AttackChainDelays[4] = 0.00f;
    this->AttackChainDelays[5] = 0.00f;
    this->Duration = 0.00f;
    this->AttackChainDurations[0] = 0.00f;
    this->AttackChainDurations[1] = 0.00f;
    this->MovementSpeedModifier = 0.00f;
    this->RotationSpeedModifier = 0.00f;
    this->bRepeatable = false;
    this->bRequireAim = false;
    this->StaminaCost = 0.00f;
    this->AimedStaminaCost = 0.00f;
}

