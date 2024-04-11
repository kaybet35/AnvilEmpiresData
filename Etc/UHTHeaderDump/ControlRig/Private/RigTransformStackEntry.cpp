#include "RigTransformStackEntry.h"

FRigTransformStackEntry::FRigTransformStackEntry() {
    this->EntryType = TransformPose;
    this->TransformType = ERigTransformType::InitialLocal;
    this->bAffectChildren = false;
}

