#include "PlaneCutterDataflowNode.h"

FPlaneCutterDataflowNode::FPlaneCutterDataflowNode() {
    this->NumPlanes = 0;
    this->RandomSeed = 0.00f;
    this->Grout = 0.00f;
    this->Amplitude = 0.00f;
    this->Frequency = 0.00f;
    this->Persistence = 0.00f;
    this->Lacunarity = 0.00f;
    this->OctaveNumber = 0;
    this->PointSpacing = 0.00f;
    this->AddSamplesForCollision = false;
    this->CollisionSampleSpacing = 0.00f;
}

