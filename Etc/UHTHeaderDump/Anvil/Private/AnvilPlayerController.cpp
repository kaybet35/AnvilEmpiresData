#include "AnvilPlayerController.h"

AAnvilPlayerController::AAnvilPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->RootWidget = NULL;
}


