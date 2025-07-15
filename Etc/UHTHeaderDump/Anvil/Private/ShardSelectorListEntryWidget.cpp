#include "ShardSelectorListEntryWidget.h"

UShardSelectorListEntryWidget::UShardSelectorListEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ShardListEntryButton = NULL;
    this->ShardNameText = NULL;
    this->ShardDescriptionText = NULL;
    this->PopulationText = NULL;
}

void UShardSelectorListEntryWidget::OnShardEntryClicked() {
}


