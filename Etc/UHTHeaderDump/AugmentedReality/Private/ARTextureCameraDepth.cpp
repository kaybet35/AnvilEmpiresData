#include "ARTextureCameraDepth.h"
#include "EARTextureType.h"

UARTextureCameraDepth::UARTextureCameraDepth() {
    this->TextureType = EARTextureType::CameraDepth;
    this->DepthQuality = EARDepthQuality::Unkown;
    this->DepthAccuracy = EARDepthAccuracy::Unkown;
    this->bIsTemporallySmoothed = false;
}


