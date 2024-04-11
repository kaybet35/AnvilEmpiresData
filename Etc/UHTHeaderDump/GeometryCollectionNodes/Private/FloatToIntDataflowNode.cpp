#include "FloatToIntDataflowNode.h"

FFloatToIntDataflowNode::FFloatToIntDataflowNode() {
    this->Function = EFloatToIntFunctionEnum::Dataflow_FloatToInt_Function_Floor;
    this->float = 0.00f;
    this->Int = 0;
}

