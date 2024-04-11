#include "RandomFloatDataflowNode.h"

FRandomFloatDataflowNode::FRandomFloatDataflowNode() {
    this->Deterministic = false;
    this->RandomSeed = 0.00f;
    this->float = 0.00f;
}

