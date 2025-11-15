#include "WorldPartition.h"

UWorldPartition::UWorldPartition() {
    this->ActorDescContainer = NULL;
    this->RuntimeHash = NULL;
    this->World = NULL;
    this->bEnableStreaming = true;
    this->StreamingPolicy = NULL;
}


