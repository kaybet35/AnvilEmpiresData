#include "RigUnit_HierarchySetPose.h"

FRigUnit_HierarchySetPose::FRigUnit_HierarchySetPose() {
    this->ElementType = ERigElementType::None;
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
}

