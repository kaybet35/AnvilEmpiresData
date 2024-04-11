#include "NiagaraBakerOutputTexture2D.h"

UNiagaraBakerOutputTexture2D::UNiagaraBakerOutputTexture2D() {
    this->OutputName = TEXT("Default__NiagaraBakerOutputTexture2D");
    this->bGenerateAtlas = true;
    this->bGenerateFrames = false;
    this->bExportFrames = false;
    this->bSetTextureAddressX = true;
    this->bSetTextureAddressY = true;
    this->TextureAddressX = TA_Wrap;
    this->TextureAddressY = TA_Wrap;
    this->AtlasAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedAtlas_{OutputName}");
    this->FramesAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
    this->FramesExportPathFormat = TEXT("{SavedDir}/NiagaraBaker/{AssetName}_{OutputName}/Frame_{FrameIndex}.png");
}


