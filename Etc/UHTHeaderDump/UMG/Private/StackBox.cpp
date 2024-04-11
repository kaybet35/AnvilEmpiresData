#include "StackBox.h"
#include "ESlateVisibility.h"

UStackBox::UStackBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Orientation = Orient_Horizontal;
}

UStackBoxSlot* UStackBox::AddChildToStackBox(UWidget* Content) {
    return NULL;
}


