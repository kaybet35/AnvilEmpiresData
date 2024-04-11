#include "MovieSceneSkeletalAnimationParams.h"

FMovieSceneSkeletalAnimationParams::FMovieSceneSkeletalAnimationParams() {
    this->Animation = NULL;
    this->PlayRate = 0.00f;
    this->bReverse = false;
    this->MirrorDataTable = NULL;
    this->bSkipAnimNotifiers = false;
    this->bForceCustomMode = false;
    this->SwapRootBone = ESwapRootBone::SwapRootBone_Component;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
}

