#include "WorldEntityInventoryTooltip.h"

UWorldEntityInventoryTooltip::UWorldEntityInventoryTooltip() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderContainer = NULL;
    this->GridPanel = NULL;
    this->LoadingThrobber = NULL;
    this->WorldEntityInventoryGridItemClass = NULL;
    this->NumColumns = 5;
}


