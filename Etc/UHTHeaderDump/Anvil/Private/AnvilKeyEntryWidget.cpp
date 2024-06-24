#include "AnvilKeyEntryWidget.h"

UAnvilKeyEntryWidget::UAnvilKeyEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InputType = EInputType::Action;
    this->LabelTextBox = NULL;
    this->InputSelector = NULL;
}

void UAnvilKeyEntryWidget::OnAxisMappingChanged(FInputChord Input) {
}

void UAnvilKeyEntryWidget::OnActionMappingChanged(FInputChord Input) {
}


