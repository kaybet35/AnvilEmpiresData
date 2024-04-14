#pragma once
#include "CoreMinimal.h"
#include "AnvilPlayerController.h"
#include "GameplayPlayerController.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class ANVIL_API AGameplayPlayerController : public AAnvilPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CallForReinforcementsCue;
    
    AGameplayPlayerController(const FObjectInitializer& ObjectInitializer);

};

