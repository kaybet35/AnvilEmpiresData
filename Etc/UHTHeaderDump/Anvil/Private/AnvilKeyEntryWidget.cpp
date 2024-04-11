#include "AnvilKeyEntryWidget.h"

UAnvilKeyEntryWidget::UAnvilKeyEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LabelFontSize = 24;
    this->InputType = EInputType::Action;
    this->EntryProportion = 0.20f;
    this->EntryWidth = 400.00f;
    this->EntryHeight = 50.00f;
    this->LabelTextBox = NULL;
    this->SizeBox = NULL;
    this->EntryHorizontalBox = NULL;
    this->EntryBorder = NULL;
    this->InputSelector = NULL;
}

void UAnvilKeyEntryWidget::OnAxisMappingChanged(FInputChord Input) {
}

void UAnvilKeyEntryWidget::OnActionMappingChanged(FInputChord Input) {
}


