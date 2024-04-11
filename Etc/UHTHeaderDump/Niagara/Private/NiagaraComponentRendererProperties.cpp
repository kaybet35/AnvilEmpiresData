#include "NiagaraComponentRendererProperties.h"

UNiagaraComponentRendererProperties::UNiagaraComponentRendererProperties() {
    this->ComponentType = NULL;
    this->ComponentCountLimit = 15;
    this->bAssignComponentsOnParticleID = true;
    this->bCreateComponentFirstParticleFrame = false;
    this->bOnlyActivateNewlyAquiredComponents = true;
    this->RendererVisibility = 0;
    this->TemplateComponent = NULL;
}


