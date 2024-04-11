#include "NiagaraDataInterfaceActorComponent.h"

UNiagaraDataInterfaceActorComponent::UNiagaraDataInterfaceActorComponent() {
    this->bRequireCurrentFrameData = true;
    this->SourceMode = ENDIActorComponentSourceMode::Default;
    this->LocalPlayerIndex = 0;
}


