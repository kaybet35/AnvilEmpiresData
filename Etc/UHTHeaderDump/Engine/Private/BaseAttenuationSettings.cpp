#include "BaseAttenuationSettings.h"

FBaseAttenuationSettings::FBaseAttenuationSettings() {
    this->DistanceAlgorithm = EAttenuationDistanceModel::Linear;
    this->AttenuationShape = EAttenuationShape::Sphere;
    this->FalloffMode = ENaturalSoundFalloffMode::Continues;
    this->dBAttenuationAtMax = 0.00f;
    this->ConeOffset = 0.00f;
    this->FalloffDistance = 0.00f;
    this->ConeSphereRadius = 0.00f;
    this->ConeSphereFalloffDistance = 0.00f;
}

