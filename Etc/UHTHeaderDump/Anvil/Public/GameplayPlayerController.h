#pragma once
#include "CoreMinimal.h"
#include "AnvilPlayerController.h"
#include "GameplayPlayerController.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AGameplayPlayerController : public AAnvilPlayerController {
    GENERATED_BODY()
public:
    AGameplayPlayerController(const FObjectInitializer& ObjectInitializer);

};

