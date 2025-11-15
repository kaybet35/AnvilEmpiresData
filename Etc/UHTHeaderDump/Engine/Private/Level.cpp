#include "Level.h"

ULevel::ULevel() {
    this->OwningWorld = NULL;
    this->Model = NULL;
    this->ActorCluster = NULL;
    this->NumTextureStreamingUnbuiltComponents = 0;
    this->NumTextureStreamingDirtyResources = 0;
    this->LevelScriptActor = NULL;
    this->NavListStart = NULL;
    this->NavListEnd = NULL;
    this->LightmapTotalSize = 0.00f;
    this->ShadowmapTotalSize = 0.00f;
    this->PackedTextureStreamingQualityLevelFeatureLevel = 0;
    this->MapBuildData = NULL;
    this->bIsLightingScenario = false;
    this->bTextureStreamingRotationChanged = false;
    this->bStaticComponentsRegisteredInStreamingManager = false;
    this->bIsVisible = false;
    this->bIsPartitioned = false;
    this->WorldSettings = NULL;
    this->WorldDataLayers = NULL;
}


