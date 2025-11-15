#include "LineBatchComponent.h"

ULineBatchComponent::ULineBatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseEditorCompositing = true;
}


