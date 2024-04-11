#include "EnvQueryTest_InsideWaterBody.h"

UEnvQueryTest_InsideWaterBody::UEnvQueryTest_InsideWaterBody() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bIncludeWaves = false;
    this->bSimpleWaves = true;
    this->bIgnoreExclusionVolumes = false;
}


