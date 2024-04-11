#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "AnvilMoviePipelineGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANVIL_API AAnvilMoviePipelineGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AAnvilMoviePipelineGameMode(const FObjectInitializer& ObjectInitializer);

};

