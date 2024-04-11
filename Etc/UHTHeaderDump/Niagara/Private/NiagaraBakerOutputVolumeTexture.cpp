#include "NiagaraBakerOutputVolumeTexture.h"

UNiagaraBakerOutputVolumeTexture::UNiagaraBakerOutputVolumeTexture() {
    this->OutputName = TEXT("Default__NiagaraBakerOutputVolumeTexture");
    this->bGenerateAtlas = true;
    this->bGenerateFrames = false;
    this->bExportFrames = false;
    this->AtlasAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedAtlas_{OutputName}");
    this->FramesAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
    this->FramesExportPathFormat = TEXT("{SavedDir}/NiagaraBaker/{AssetName}_{OutputName}/Frame_{FrameIndex}.png");
}


