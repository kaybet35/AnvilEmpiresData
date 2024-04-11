#include "MarketShopWindow.h"

UMarketShopWindow::UMarketShopWindow() {
    this->MarketItemGrid = NULL;
    this->SilverStatus = NULL;
}

ESlateVisibility UMarketShopWindow::GetSilverAmountVisibility() {
    return ESlateVisibility::Visible;
}

FText UMarketShopWindow::GetSilverAmountText() {
    return FText::GetEmpty();
}


