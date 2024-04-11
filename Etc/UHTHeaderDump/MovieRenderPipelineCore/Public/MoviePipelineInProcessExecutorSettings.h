#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MoviePipelineInProcessExecutorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class MOVIERENDERPIPELINECORE_API UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InheritedCommandLineArguments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialDelayFrameCount;
    
    UMoviePipelineInProcessExecutorSettings();

};

