#include "MoviePipelineDeferredPassBase.h"

UMoviePipelineDeferredPassBase::UMoviePipelineDeferredPassBase() {
    this->bAccumulatorIncludesAlpha = false;
    this->bDisableMultisampleEffects = false;
    this->bUse32BitPostProcessMaterials = false;
    this->AdditionalPostProcessMaterials.AddDefaulted(2);
    this->bRenderMainPass = true;
    this->bAddDefaultLayer = false;
    this->StencilLayerMaterial = NULL;
}


