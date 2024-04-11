#include "WrapBoxSlot.h"

UWrapBoxSlot::UWrapBoxSlot() {
    this->FillSpanWhenLessThan = 0.00f;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bFillEmptySpace = false;
    this->bForceNewLine = false;
}

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UWrapBoxSlot::SetPadding(FMargin InPadding) {
}

void UWrapBoxSlot::SetNewLine(bool InForceNewLine) {
}

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
}

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
}


