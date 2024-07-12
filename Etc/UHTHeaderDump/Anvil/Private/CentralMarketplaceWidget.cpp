#include "CentralMarketplaceWidget.h"

UCentralMarketplaceWidget::UCentralMarketplaceWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CentralMarketplaceListEntryWidgetClass = NULL;
    this->ItemCategoryButtonClass = NULL;
    this->bIsMapWidget = false;
    this->ItemCategoryButtonHorizontalBox = NULL;
    this->MarketTabSwitcher = NULL;
    this->SaleListEntriesScrollBox = NULL;
    this->OrderListEntriesScrollBox = NULL;
    this->BuySellTabButton = NULL;
    this->PlaceOrderTabButton = NULL;
    this->ActiveOrdersTabButton = NULL;
    this->HeaderContainer = NULL;
    this->OrderGridPanelWidget = NULL;
    this->SelectedOrderItemNameText = NULL;
    this->SelectedOrderItemImage = NULL;
    this->SelectedOrderItemQuantityEditableTextBox = NULL;
    this->SelectedOrderItemPriceEditableTextBox = NULL;
    this->SelectedOrderItemMinQualityComboBox = NULL;
    this->SelectedOrderItemTotalPriceTextBlock = NULL;
    this->SelectedItemPlaceOrderButton = NULL;
}

void UCentralMarketplaceWidget::OnSelectedItemPlaceOrderButtonClicked() {
}

void UCentralMarketplaceWidget::OnPlaceOrderTabButtonClicked() {
}

void UCentralMarketplaceWidget::OnBuySellTabButtonClicked() {
}

void UCentralMarketplaceWidget::OnActiveOrdersTabButtonClicked() {
}

bool UCentralMarketplaceWidget::IsSelectedItemPlaceOrderButtonEnabled() {
    return false;
}

bool UCentralMarketplaceWidget::IsPlaceOrderTabButtonEnabled() {
    return false;
}

bool UCentralMarketplaceWidget::IsBuySellTabButtonEnabled() {
    return false;
}

bool UCentralMarketplaceWidget::IsActiveOrdersTabButtonEnabled() {
    return false;
}

ESlateVisibility UCentralMarketplaceWidget::GetSelectedOrderItemTotalPriceTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UCentralMarketplaceWidget::GetSelectedOrderItemTotalPriceText() {
    return FText::GetEmpty();
}

ESlateVisibility UCentralMarketplaceWidget::GetItemCategoryButtonPanelVisibility() {
    return ESlateVisibility::Visible;
}


