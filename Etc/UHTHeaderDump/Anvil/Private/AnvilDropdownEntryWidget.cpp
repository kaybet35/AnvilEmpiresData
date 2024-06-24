#include "AnvilDropdownEntryWidget.h"

UAnvilDropdownEntryWidget::UAnvilDropdownEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ComboBox = NULL;
    this->LabelTextBox = NULL;
}

void UAnvilDropdownEntryWidget::OnOptionSelected(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


