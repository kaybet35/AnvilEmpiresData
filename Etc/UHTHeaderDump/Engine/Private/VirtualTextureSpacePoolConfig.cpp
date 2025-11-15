#include "VirtualTextureSpacePoolConfig.h"

FVirtualTextureSpacePoolConfig::FVirtualTextureSpacePoolConfig() {
    this->MinTileSize = 0;
    this->MaxTileSize = 0;
    this->SizeInMegabyte = 0;
    this->bEnableResidencyMipMapBias = false;
    this->bAllowSizeScale = false;
    this->ScalabilityGroup = 0;
    this->MinScaledSizeInMegabyte = 0;
    this->MaxScaledSizeInMegabyte = 0;
}

