#include "RigUnit_CollectionChildren.h"

FRigUnit_CollectionChildren::FRigUnit_CollectionChildren() {
    this->bIncludeParent = false;
    this->bRecursive = false;
    this->TypeToSearch = ERigElementType::None;
}

