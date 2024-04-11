#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MoviePipelineBurnInWidget.generated.h"

class UMoviePipeline;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineBurnInWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMoviePipelineBurnInWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutputFrameStarted(UMoviePipeline* ForPipeline);
    
};

