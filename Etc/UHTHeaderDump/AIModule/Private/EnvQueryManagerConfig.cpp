#include "EnvQueryManagerConfig.h"

FEnvQueryManagerConfig::FEnvQueryManagerConfig() {
    this->MaxAllowedTestingTime = 0.00f;
    this->bTestQueriesUsingBreadth = false;
    this->QueryCountWarningThreshold = 0;
    this->QueryCountWarningInterval = 0.00f;
    this->ExecutionTimeWarningSeconds = 0.00f;
    this->HandlingResultTimeWarningSeconds = 0.00f;
    this->GenerationTimeWarningSeconds = 0.00f;
}

