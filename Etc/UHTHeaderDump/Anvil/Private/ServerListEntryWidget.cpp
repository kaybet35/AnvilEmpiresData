#include "ServerListEntryWidget.h"

UServerListEntryWidget::UServerListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ServerListEntryButton = NULL;
    this->ServerNameTextBlock = NULL;
    this->AranicPopulationTextBlock = NULL;
    this->MirrishPopulationTextBlock = NULL;
    this->NovanPopulationTextBlock = NULL;
}

void UServerListEntryWidget::OnServerEntryClicked() {
}


