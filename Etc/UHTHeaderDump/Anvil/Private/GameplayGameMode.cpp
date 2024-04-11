#include "GameplayGameMode.h"
#include "GameplayPlayerController.h"
#include "ProxyPawn.h"

AGameplayGameMode::AGameplayGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AGameplayPlayerController::StaticClass();
    this->DefaultPawnClass = AProxyPawn::StaticClass();
}


