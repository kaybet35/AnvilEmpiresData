#include "RigUnit_SwitchParent.h"

FRigUnit_SwitchParent::FRigUnit_SwitchParent() {
    this->Mode = ERigSwitchParentMode::World;
    this->bMaintainGlobal = false;
}

