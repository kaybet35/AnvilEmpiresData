#include "RepairMessage.h"

FRepairMessage::FRepairMessage() {
    this->TargetName = NULL;
    this->TargetNameVisVar = 0;
    this->NormalizedHealth = 0.00f;
    this->TargetArea = EAnvilTargetAreaType::None;
}

