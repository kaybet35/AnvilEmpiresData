#include "TargetChainIKSettings.h"

FTargetChainIKSettings::FTargetChainIKSettings() {
    this->EnableIK = false;
    this->BlendToSource = 0.00f;
    this->Extension = 0.00f;
    this->bAffectedByIKWarping = false;
}

