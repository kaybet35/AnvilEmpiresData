#include "RigUnit_TimeLoop.h"

FRigUnit_TimeLoop::FRigUnit_TimeLoop() {
    this->Speed = 0.00f;
    this->Duration = 0.00f;
    this->Normalize = false;
    this->Absolute = 0.00f;
    this->Relative = 0.00f;
    this->FlipFlop = 0.00f;
    this->Even = false;
    this->AccumulatedAbsolute = 0.00f;
    this->AccumulatedRelative = 0.00f;
    this->NumIterations = 0;
}

