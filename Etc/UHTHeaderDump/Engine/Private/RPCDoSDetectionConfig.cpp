#include "RPCDoSDetectionConfig.h"

URPCDoSDetectionConfig::URPCDoSDetectionConfig() {
    this->bRPCDoSDetection = false;
    this->bRPCDoSAnalytics = false;
    this->HitchTimeQuotaMS = 0;
    this->HitchSuspendDetectionTimeMS = 0;
    this->InitialConnectToleranceMS = 0;
    this->RPCAnalyticsOverrideChance = 0.00f;
}


