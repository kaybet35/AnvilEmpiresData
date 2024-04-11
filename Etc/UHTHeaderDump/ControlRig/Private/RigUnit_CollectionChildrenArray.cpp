#include "RigUnit_CollectionChildrenArray.h"

FRigUnit_CollectionChildrenArray::FRigUnit_CollectionChildrenArray() {
    this->bIncludeParent = false;
    this->bRecursive = false;
    this->TypeToSearch = ERigElementType::None;
}

