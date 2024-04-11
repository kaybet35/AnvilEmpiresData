#include "VolumeCache.h"

UVolumeCache::UVolumeCache() {
    this->CacheType = EVolumeCacheType::OpenVDB;
    this->FrameRangeStart = 0;
    this->FrameRangeEnd = 0;
}


