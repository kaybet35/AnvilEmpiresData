#include "ChatWidget.h"

UChatWidget::UChatWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ChatWidth = 500.00f;
    this->ChatHeight = 300.00f;
    this->ChatMinimizedHeight = 0.00f;
    this->CurrentMode = EAnvilChatType::DataCommandList;
    this->MinimizeButton = NULL;
    this->MaximizeButton = NULL;
    this->ChatEntryDropdown = NULL;
    this->SizeBox = NULL;
    this->ChatEntryTextField = NULL;
    this->ChatHistoryListView = NULL;
    this->EntryTemplate = NULL;
    this->LastItem = NULL;
}

void UChatWidget::OnModeOptionSelected(const FString& Item, TEnumAsByte<ESelectInfo::Type> Type) {
}

void UChatWidget::OnMinimized() {
}

void UChatWidget::OnMaximized() {
}

void UChatWidget::OnEntryCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> Method) {
}

void UChatWidget::OnEntryChanged(const FText& Text) {
}


