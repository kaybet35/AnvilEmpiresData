#include "AnvilSimActivity.h"

FAnvilSimActivity::FAnvilSimActivity() {
    this->State = EAnvilSimActivityState::None;
    this->Delay = 0.00f;
    this->Duration = 0.00f;
    this->MovementSpeedModifier = 0.00f;
    this->RotationSpeedModifier = 0.00f;
    this->bRepeatable = false;
    this->bRequireAim = false;
    this->StaminaCost = 0.00f;
    this->AimedStaminaCost = 0.00f;
}

