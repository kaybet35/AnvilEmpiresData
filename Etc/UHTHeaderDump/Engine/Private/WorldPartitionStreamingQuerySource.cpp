#include "WorldPartitionStreamingQuerySource.h"

FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource() {
    this->Radius = 0.00f;
    this->bUseGridLoadingRange = false;
    this->bDataLayersOnly = false;
    this->bSpatialQuery = false;
}

