#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OpenColorIO -ObjectName=OpenColorIODisplayConfiguration -FallbackName=OpenColorIODisplayConfiguration
#include "MoviePipelineSetting.h"
#include "MoviePipelineColorSetting.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineColorSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIODisplayConfiguration OCIOConfiguration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableToneCurve;
    
    UMoviePipelineColorSetting();

};

