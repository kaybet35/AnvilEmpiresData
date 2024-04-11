#include "RigUnit_TwoBoneIKSimplePerItem.h"

FRigUnit_TwoBoneIKSimplePerItem::FRigUnit_TwoBoneIKSimplePerItem() {
    this->SecondaryAxisWeight = 0.00f;
    this->PoleVectorKind = EControlRigVectorKind::Direction;
    this->bEnableStretch = false;
    this->StretchStartRatio = 0.00f;
    this->StretchMaximumRatio = 0.00f;
    this->Weight = 0.00f;
    this->ItemALength = 0.00f;
    this->ItemBLength = 0.00f;
    this->bPropagateToChildren = false;
}

