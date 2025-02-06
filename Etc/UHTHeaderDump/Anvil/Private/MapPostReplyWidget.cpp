#include "MapPostReplyWidget.h"

UMapPostReplyWidget::UMapPostReplyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ReplyPosterNameTextBlock = NULL;
    this->ReplyTextBlock = NULL;
    this->TimeTextBlock = NULL;
}

FText UMapPostReplyWidget::GetTimeSinceReplyText() {
    return FText::GetEmpty();
}

FText UMapPostReplyWidget::GetReplyPosterNameText() {
    return FText::GetEmpty();
}


