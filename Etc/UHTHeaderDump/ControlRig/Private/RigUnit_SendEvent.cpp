#include "RigUnit_SendEvent.h"

FRigUnit_SendEvent::FRigUnit_SendEvent() {
    this->Event = ERigEvent::None;
    this->OffsetInSeconds = 0.00f;
    this->bEnable = false;
    this->bOnlyDuringInteraction = false;
}

