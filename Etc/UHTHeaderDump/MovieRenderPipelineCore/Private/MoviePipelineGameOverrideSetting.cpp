#include "MoviePipelineGameOverrideSetting.h"
#include "MoviePipelineGameMode.h"

UMoviePipelineGameOverrideSetting::UMoviePipelineGameOverrideSetting() {
    this->GameModeOverride = AMoviePipelineGameMode::StaticClass();
    this->bCinematicQualitySettings = true;
    this->TextureStreaming = EMoviePipelineTextureStreamingMethod::Disabled;
    this->bUseLODZero = true;
    this->bDisableHLODs = true;
    this->bUseHighQualityShadows = true;
    this->ShadowDistanceScale = 10;
    this->ShadowRadiusThreshold = 0.00f;
    this->bOverrideViewDistanceScale = true;
    this->ViewDistanceScale = 50;
    this->bFlushGrassStreaming = true;
    this->bFlushStreamingManagers = true;
    this->bOverrideVirtualTextureFeedbackFactor = true;
    this->VirtualTextureFeedbackFactor = 1;
}


