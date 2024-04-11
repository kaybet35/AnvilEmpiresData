#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
#include "MoviePipelineWidgetRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompositeOntoFinalImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
public:
    UMoviePipelineWidgetRenderer();

};

