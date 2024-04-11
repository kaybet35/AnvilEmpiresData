#pragma once
#include "CoreMinimal.h"
#include "FCPXMLExportDataSource.h"
#include "MoviePipelineOutputBase.h"
#include "MoviePipelineFCPXMLExporter.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameFormatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPXMLExportDataSource DataSource;
    
    UMoviePipelineFCPXMLExporter();

};

