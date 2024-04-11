#include "AnvilDropdownEntryWidget.h"

UAnvilDropdownEntryWidget::UAnvilDropdownEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ComboBox = NULL;
    this->LabelFontSize = 24;
    this->DropdownProportion = 0.50f;
    this->DropdownWidth = 400.00f;
    this->DropdownHeight = 50.00f;
    this->LabelTextBox = NULL;
    this->SizeBox = NULL;
    this->ComboHorizontalBox = NULL;
    this->LabelBorder = NULL;
}

void UAnvilDropdownEntryWidget::OnOptionSelected(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


