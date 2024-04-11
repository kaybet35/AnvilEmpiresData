#include "WrapBox.h"
#include "ESlateVisibility.h"

UWrapBox::UWrapBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->WrapSize = 500.00f;
    this->bExplicitWrapSize = false;
    this->HorizontalAlignment = HAlign_Left;
    this->Orientation = Orient_Horizontal;
}

void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

void UWrapBox::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}


