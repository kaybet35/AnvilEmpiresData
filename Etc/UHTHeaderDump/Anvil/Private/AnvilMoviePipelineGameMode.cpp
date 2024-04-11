#include "AnvilMoviePipelineGameMode.h"
#include "AnvilMoviePipelineController.h"

AAnvilMoviePipelineGameMode::AAnvilMoviePipelineGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AAnvilMoviePipelineController::StaticClass();
}


