#include "WaveTableTransform.h"

FWaveTableTransform::FWaveTableTransform() {
    this->Curve = EWaveTableCurve::Linear;
    this->Scalar = 0.00f;
    this->CurveShared = NULL;
}

