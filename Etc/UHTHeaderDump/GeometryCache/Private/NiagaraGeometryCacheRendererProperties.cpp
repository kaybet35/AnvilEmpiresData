#include "NiagaraGeometryCacheRendererProperties.h"

UNiagaraGeometryCacheRendererProperties::UNiagaraGeometryCacheRendererProperties() {
    this->GeometryCaches.AddDefaulted(1);
    this->bIsLooping = true;
    this->ComponentCountLimit = 15;
    this->RendererVisibility = 0;
    this->bAssignComponentsOnParticleID = true;
}


