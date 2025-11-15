#include "DocumentationActor.h"
#include "SceneComponent.h"

ADocumentationActor::ADocumentationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


