#include "TextRenderActor.h"
#include "TextRenderComponent.h"

ATextRenderActor::ATextRenderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NewTextRenderComponent"));
    this->TextRender = (UTextRenderComponent*)RootComponent;
}


