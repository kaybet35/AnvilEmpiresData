#include "InterpCurvePointFloat.h"

FInterpCurvePointFloat::FInterpCurvePointFloat() {
    this->InVal = 0.00f;
    this->OutVal = 0.00f;
    this->ArriveTangent = 0.00f;
    this->LeaveTangent = 0.00f;
    this->InterpMode = CIM_Linear;
}

