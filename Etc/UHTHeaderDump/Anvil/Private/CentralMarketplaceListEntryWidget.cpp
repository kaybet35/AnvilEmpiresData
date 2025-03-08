#include "CentralMarketplaceListEntryWidget.h"

UCentralMarketplaceListEntryWidget::UCentralMarketplaceListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CancelButton = NULL;
    this->ItemImageSizeBox = NULL;
    this->ItemImage = NULL;
    this->SubItemImage = NULL;
    this->QualityIconImage = NULL;
    this->ItemNameTextBlock = NULL;
    this->BuyerSellerTextBlock = NULL;
    this->QuantityCrateSizeBox = NULL;
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


