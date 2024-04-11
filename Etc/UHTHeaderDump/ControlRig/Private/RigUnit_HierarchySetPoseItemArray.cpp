#include "RigUnit_HierarchySetPoseItemArray.h"

FRigUnit_HierarchySetPoseItemArray::FRigUnit_HierarchySetPoseItemArray() {
    this->ElementType = ERigElementType::None;
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
}

