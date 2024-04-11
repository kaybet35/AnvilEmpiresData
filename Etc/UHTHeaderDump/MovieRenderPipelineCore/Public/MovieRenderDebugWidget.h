#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MovieRenderDebugWidget.generated.h"

class UMoviePipeline;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMovieRenderDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMovieRenderDebugWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedForPipeline(UMoviePipeline* ForPipeline);
    
};

