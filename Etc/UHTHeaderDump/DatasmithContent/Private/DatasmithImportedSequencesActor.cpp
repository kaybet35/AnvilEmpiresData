#include "DatasmithImportedSequencesActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ADatasmithImportedSequencesActor::ADatasmithImportedSequencesActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void ADatasmithImportedSequencesActor::PlayLevelSequence(ULevelSequence* SequenceToPlay) {
}


