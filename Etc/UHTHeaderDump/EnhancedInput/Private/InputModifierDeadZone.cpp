#include "InputModifierDeadZone.h"

UInputModifierDeadZone::UInputModifierDeadZone() {
    this->LowerThreshold = 0.20f;
    this->UpperThreshold = 1.00f;
    this->Type = EDeadZoneType::Radial;
}


