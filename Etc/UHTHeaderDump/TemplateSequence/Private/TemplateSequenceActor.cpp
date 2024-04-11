#include "TemplateSequenceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "TemplateSequencePlayer.h"

ATemplateSequenceActor::ATemplateSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SequencePlayer = CreateDefaultSubobject<UTemplateSequencePlayer>(TEXT("AnimationPlayer"));
}

void ATemplateSequenceActor::SetSequence(UTemplateSequence* InSequence) {
}

void ATemplateSequenceActor::SetBinding(AActor* Actor, bool bOverridesDefault) {
}

UTemplateSequence* ATemplateSequenceActor::LoadSequence() const {
    return NULL;
}

UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer() const {
    return NULL;
}

UTemplateSequence* ATemplateSequenceActor::GetSequence() const {
    return NULL;
}

void ATemplateSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATemplateSequenceActor, SequencePlayer);
}


