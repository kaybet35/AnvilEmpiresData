#include "AnvilScreen.h"

UAnvilScreen::UAnvilScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->bOverrideBackground = false;
    this->Background = NULL;
    this->ParentSlot = NULL;
}


