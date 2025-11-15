#include "ArrowComponent.h"

UArrowComponent::UArrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
    this->ArrowSize = 1.00f;
    this->ArrowLength = 80.00f;
    this->ScreenSize = 0.00f;
    this->bIsScreenSizeScaled = false;
    this->bTreatAsASprite = false;
}

void UArrowComponent::SetArrowColor(FLinearColor NewColor) {
}


