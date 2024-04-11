#include "NiagaraActor.h"
#include "NiagaraComponent.h"

ANiagaraActor::ANiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
    this->bDestroyOnSystemFinish = false;
}

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void ANiagaraActor::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


