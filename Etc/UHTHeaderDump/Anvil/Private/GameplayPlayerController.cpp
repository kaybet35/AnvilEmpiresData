#include "GameplayPlayerController.h"

AGameplayPlayerController::AGameplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}


