#include "CentralMarketplaceWidget.h"

UCentralMarketplaceWidget::UCentralMarketplaceWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CentralMarketplaceListEntryWidgetClass = NULL;
    this->bIsMapWidget = false;
    this->MarketTabSwitcher = NULL;
    this->MarketListEntriesScrollBox = NULL;
    this->MarketTabButtonsBorder = NULL;
    this->BuySellButton = NULL;
    this->PlaceOrderButton = NULL;
    this->ActiveOrdersButton = NULL;
    this->HeaderContainer = NULL;
}


