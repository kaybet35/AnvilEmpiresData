#include "ItemCategoryButton.h"

UItemCategoryButton::UItemCategoryButton() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemCategoryButton = NULL;
    this->ItemImage = NULL;
    this->SelectedImage = NULL;
}

void UItemCategoryButton::OnItemCategoryButtonClicked() {
}


