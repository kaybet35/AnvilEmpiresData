#include "PledgedPlayerListItem.h"

UPledgedPlayerListItem::UPledgedPlayerListItem() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerNameText = NULL;
    this->PlayerStatusText = NULL;
    this->PlayerSilverText = NULL;
    this->VoteButton = NULL;
    this->OnlineStatusIcon = NULL;
}

void UPledgedPlayerListItem::OnVoteChecked(bool bIsChecked) {
}


