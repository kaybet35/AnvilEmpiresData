#include "AnvilDialogBox.h"

UAnvilDialogBox::UAnvilDialogBox() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderText = NULL;
    this->BodyText = NULL;
    this->Throbber = NULL;
    this->ComboBox = NULL;
    this->Slider = NULL;
    this->SliderCurrentValueText = NULL;
    this->SliderMinValueText = NULL;
    this->SliderMaxValueText = NULL;
    this->TextInputLabelTextBox = NULL;
    this->TextInputEditableTextBox = NULL;
    this->LargeTextInputLabelTextBox = NULL;
    this->LargeTextInputEditableTextBox = NULL;
    this->LeftButton = NULL;
    this->RightButton = NULL;
}

void UAnvilDialogBox::OnTextInputEditableTextChanged(const FText& Text) {
}

void UAnvilDialogBox::OnRightButtonClicked() {
}

void UAnvilDialogBox::OnLeftButtonClicked() {
}

void UAnvilDialogBox::OnLargeTextInputEditableTextChanged(const FText& Text) {
}

FText UAnvilDialogBox::GetSliderCurrentValueText() {
    return FText::GetEmpty();
}

void UAnvilDialogBox::FOnSliderValueChanged(const float Value) {
}


