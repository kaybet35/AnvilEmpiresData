#include "MarketItemWidget.h"

UMarketItemWidget::UMarketItemWidget() {
    this->PriceUpButton = NULL;
    this->PriceDownButton = NULL;
    this->ItemQuantityText = NULL;
    this->PriceText = NULL;
    this->PriceEditableText = NULL;
    this->PriceTextSizeBox = NULL;
    this->PriceEditableTextSizeBox = NULL;
    this->DurabilityBar = NULL;
    this->QualityIconImage = NULL;
}

void UMarketItemWidget::OnPriceUpClicked() {
}

void UMarketItemWidget::OnPriceTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMarketItemWidget::OnPriceDownClicked() {
}

bool UMarketItemWidget::IsPriceUpEnabled() {
    return false;
}

bool UMarketItemWidget::IsPriceDownEnabled() {
    return false;
}


