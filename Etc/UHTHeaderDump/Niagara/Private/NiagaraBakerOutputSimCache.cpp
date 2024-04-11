#include "NiagaraBakerOutputSimCache.h"

UNiagaraBakerOutputSimCache::UNiagaraBakerOutputSimCache() {
    this->OutputName = TEXT("Default__NiagaraBakerOutputSimCache");
    this->SimCacheAssetPathFormat = TEXT("{AssetFolder}/{AssetName}_SimCache_{OutputName}");
}


