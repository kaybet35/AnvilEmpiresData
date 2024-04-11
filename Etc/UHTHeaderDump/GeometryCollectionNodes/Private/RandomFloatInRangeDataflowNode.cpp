#include "RandomFloatInRangeDataflowNode.h"

FRandomFloatInRangeDataflowNode::FRandomFloatInRangeDataflowNode() {
    this->Deterministic = false;
    this->RandomSeed = 0.00f;
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->float = 0.00f;
}

