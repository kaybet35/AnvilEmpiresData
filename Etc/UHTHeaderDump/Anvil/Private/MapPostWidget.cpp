#include "MapPostWidget.h"

UMapPostWidget::UMapPostWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapPostReplyWidgetClass = NULL;
    this->OriginalTextWidth = 270.00f;
    this->ExpandedMapPostBorder = NULL;
    this->HeaderBorder = NULL;
    this->OriginalTextSizeBox = NULL;
    this->OriginalPostTextBlock = NULL;
    this->OriginalPosterNameTextBlock = NULL;
    this->RankTextBlock = NULL;
    this->UpVoteButton = NULL;
    this->DownVoteButton = NULL;
    this->NetVoteCountTextBlock = NULL;
    this->TimeSinceOriginalPostTextBlock = NULL;
    this->RepliesSizeBox = NULL;
    this->RepliesVerticalBox = NULL;
    this->ReplyInputTextBox = NULL;
    this->ReplyButton = NULL;
    this->RenderStateSwitcher = NULL;
}

void UMapPostWidget::OnUpVoteButtonClicked() {
}

void UMapPostWidget::OnReplyInputTextCommitted(const FText& ReplyText, const TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMapPostWidget::OnReplyInputTextChanged(const FText& Text) {
}

void UMapPostWidget::OnReplyButtonClicked() {
}

FEventReply UMapPostWidget::OnHeaderClicked(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UMapPostWidget::OnDownVoteButtonClicked() {
}

bool UMapPostWidget::IsVoteButtonEnabled() {
    return false;
}

FText UMapPostWidget::GetTimeSinceOriginalPostText() {
    return FText::GetEmpty();
}

FText UMapPostWidget::GetRankText() {
    return FText::GetEmpty();
}

FText UMapPostWidget::GetOriginalPosterNameText() {
    return FText::GetEmpty();
}

FText UMapPostWidget::GetNetVoteCountText() {
    return FText::GetEmpty();
}


