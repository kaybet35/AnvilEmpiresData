#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "AnvilMoviePipelineController.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AAnvilMoviePipelineController : public APlayerController {
    GENERATED_BODY()
public:
    AAnvilMoviePipelineController(const FObjectInitializer& ObjectInitializer);

};

