#include "EditableText.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UEditableText::UEditableText() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->IsReadOnly = false;
    this->IsPassword = false;
    this->MinimumDesiredWidth = 0.00f;
    this->IsCaretMovedWhenGainFocus = true;
    this->SelectAllTextWhenFocused = false;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = true;
    this->SelectAllTextOnCommit = false;
    this->AllowContextMenu = true;
    this->KeyboardType = EVirtualKeyboardType::Default;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->Justification = ETextJustify::Left;
    this->OverflowPolicy = ETextOverflowPolicy::Clip;
}

void UEditableText::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy) {
}

void UEditableText::SetText(FText InText) {
}

void UEditableText::SetMinimumDesiredWidth(float InMinDesiredWidth) {
}

void UEditableText::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly) {
}

void UEditableText::SetIsPassword(bool InbIsPassword) {
}

void UEditableText::SetHintText(FText InHintText) {
}

void UEditableText::SetFontOutlineMaterial(UMaterialInterface* InMaterial) {
}

void UEditableText::SetFontMaterial(UMaterialInterface* InMaterial) {
}

void UEditableText::SetFont(FSlateFontInfo InFontInfo) {
}

FText UEditableText::GetText() const {
    return FText::GetEmpty();
}

TEnumAsByte<ETextJustify::Type> UEditableText::GetJustification() const {
    return ETextJustify::Left;
}

FText UEditableText::GetHintText() const {
    return FText::GetEmpty();
}

FSlateFontInfo UEditableText::GetFont() const {
    return FSlateFontInfo{};
}


