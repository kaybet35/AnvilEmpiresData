#include "CentralMarketplaceListEntryWidget.h"

UCentralMarketplaceListEntryWidget::UCentralMarketplaceListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CancelButton = NULL;
    this->ItemImage = NULL;
    this->QualityIconImage = NULL;
    this->ItemNameTextBlock = NULL;
    this->BuyerSellerTextBlock = NULL;
    this->QuantityTextBlock = NULL;
    this->PriceTextBlock = NULL;
    this->BuyFulfillButton = NULL;
}

void UCentralMarketplaceListEntryWidget::OnCancelButtonClicked() {
}

void UCentralMarketplaceListEntryWidget::OnBuySellButtonClicked() {
}

FText UCentralMarketplaceListEntryWidget::GetPlayerNameText() {
    return FText::GetEmpty();
}


