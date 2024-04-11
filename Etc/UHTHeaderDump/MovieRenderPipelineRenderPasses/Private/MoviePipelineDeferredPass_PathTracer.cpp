#include "MoviePipelineDeferredPass_PathTracer.h"

UMoviePipelineDeferredPass_PathTracer::UMoviePipelineDeferredPass_PathTracer() {
    this->AdditionalPostProcessMaterials.AddDefaulted(2);
    this->bReferenceMotionBlur = false;
}


