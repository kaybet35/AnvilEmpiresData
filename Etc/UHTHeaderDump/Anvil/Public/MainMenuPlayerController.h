#pragma once
#include "CoreMinimal.h"
#include "AnvilPlayerController.h"
#include "MainMenuPlayerController.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AMainMenuPlayerController : public AAnvilPlayerController {
    GENERATED_BODY()
public:
    AMainMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

