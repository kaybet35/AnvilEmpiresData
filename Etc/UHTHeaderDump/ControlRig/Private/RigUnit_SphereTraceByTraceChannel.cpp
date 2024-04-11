#include "RigUnit_SphereTraceByTraceChannel.h"

FRigUnit_SphereTraceByTraceChannel::FRigUnit_SphereTraceByTraceChannel() {
    this->TraceChannel = TraceTypeQuery1;
    this->Radius = 0.00f;
    this->bHit = false;
}

