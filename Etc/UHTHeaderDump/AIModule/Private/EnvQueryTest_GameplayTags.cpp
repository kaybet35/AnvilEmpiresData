#include "EnvQueryTest_GameplayTags.h"

UEnvQueryTest_GameplayTags::UEnvQueryTest_GameplayTags() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bRejectIncompatibleItems = false;
    this->bUpdatedToUseQuery = false;
    this->TagsToMatch = EGameplayContainerMatchType::Any;
}


