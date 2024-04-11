#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineSetting -FallbackName=MoviePipelineSetting
#include "MoviePipelineConsoleVariableSetting.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> ConsoleVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StartConsoleCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EndConsoleCommands;
    
    UMoviePipelineConsoleVariableSetting();

};

