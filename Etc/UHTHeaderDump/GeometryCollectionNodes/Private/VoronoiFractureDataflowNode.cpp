#include "VoronoiFractureDataflowNode.h"

FVoronoiFractureDataflowNode::FVoronoiFractureDataflowNode() {
    this->RandomSeed = 0.00f;
    this->ChanceToFracture = 0.00f;
    this->GroupFracture = false;
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

