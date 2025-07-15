#include "ShardConfig.h"

FShardConfig::FShardConfig() {
    this->ShardId = 0;
    this->bEnabled = false;
    this->Population = EShardPopulationType::Low;
    this->bIsSiegeDemoActive = false;
    this->AnvilServiceRequestCooldownSec = 0;
}

