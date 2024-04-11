#include "RigUnit_PoseGetTransformArray.h"

FRigUnit_PoseGetTransformArray::FRigUnit_PoseGetTransformArray() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->Valid = false;
}

