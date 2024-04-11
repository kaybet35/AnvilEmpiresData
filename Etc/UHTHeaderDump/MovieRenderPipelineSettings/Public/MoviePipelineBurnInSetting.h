#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineRenderPass -FallbackName=MoviePipelineRenderPass
#include "MoviePipelineBurnInSetting.generated.h"

class UMoviePipelineBurnInWidget;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath BurnInClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompositeOntoFinalImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineBurnInWidget*> BurnInWidgetInstances;
    
public:
    UMoviePipelineBurnInSetting();

};

