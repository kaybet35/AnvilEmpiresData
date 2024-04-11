#include "AnvilMovieCharacterNameWidget.h"

UAnvilMovieCharacterNameWidget::UAnvilMovieCharacterNameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NameText = NULL;
    this->VisibilitDelayRandomRange = 0.00f;
    this->VisibilitDelayStartTime = 0.00f;
}


