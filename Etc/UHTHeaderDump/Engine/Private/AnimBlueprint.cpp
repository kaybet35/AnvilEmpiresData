#include "AnimBlueprint.h"

UAnimBlueprint::UAnimBlueprint() {
    this->TargetSkeleton = NULL;
    this->bIsTemplate = false;
    this->bUseMultiThreadedAnimationUpdate = true;
    this->bWarnAboutBlueprintUsage = false;
}


