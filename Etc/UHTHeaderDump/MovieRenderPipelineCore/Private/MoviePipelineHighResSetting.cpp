#include "MoviePipelineHighResSetting.h"

UMoviePipelineHighResSetting::UMoviePipelineHighResSetting() {
    this->TileCount = 1;
    this->TextureSharpnessBias = 0.00f;
    this->OverlapRatio = 0.00f;
    this->bOverrideSubSurfaceScattering = false;
    this->BurleySampleCount = 64;
    this->bAllocateHistoryPerTile = true;
}


