#include "ListViewBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UListViewBase::UListViewBase() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->EntryWidgetClass = NULL;
    this->WheelScrollMultiplier = 1.00f;
    this->bEnableScrollAnimation = false;
    this->AllowOverscroll = true;
    this->bEnableRightClickScrolling = true;
    this->bEnableFixedLineOffset = false;
    this->FixedLineScrollOffset = 0.00f;
    this->bAllowDragging = true;
}

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UListViewBase::SetScrollOffset(const float InScrollOffset) {
}

void UListViewBase::SetScrollBarVisibility(ESlateVisibility InVisibility) {
}

void UListViewBase::ScrollToTop() {
}

void UListViewBase::ScrollToBottom() {
}

void UListViewBase::RequestRefresh() {
}

void UListViewBase::RegenerateAllEntries() {
}

float UListViewBase::GetScrollOffset() const {
    return 0.0f;
}

TArray<UUserWidget*> UListViewBase::GetDisplayedEntryWidgets() const {
    return TArray<UUserWidget*>();
}


