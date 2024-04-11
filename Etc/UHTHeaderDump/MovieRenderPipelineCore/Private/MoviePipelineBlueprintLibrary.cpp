#include "MoviePipelineBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary() {
}

void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(ULevelSequence* InSequence, UMoviePipelineExecutorJob* InJob, bool& bShotsChanged) {
}

int32 UMoviePipelineBlueprintLibrary::ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams) {
    return 0;
}

void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(const FString& InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs) {
}

UMoviePipelineQueue* UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(const FString& InManifestFilePath) {
    return NULL;
}

EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(const UMoviePipeline* InPipeline) {
    return EMovieRenderPipelineState::Uninitialized;
}

void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(const UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount) {
}

FText UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(const UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

FString UMoviePipelineBlueprintLibrary::GetMapPackageName(UMoviePipelineExecutorJob* InJob) {
    return TEXT("");
}

FText UMoviePipelineBlueprintLibrary::GetJobName(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(const UMoviePipeline* InMoviePipeline) {
    return FDateTime{};
}

FText UMoviePipelineBlueprintLibrary::GetJobAuthor(UMoviePipeline* InMoviePipeline) {
    return FText::GetEmpty();
}

bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(const UMoviePipeline* InPipeline, FTimespan& OutEstimate) {
    return false;
}

FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(UMoviePipelineMasterConfig* InMasterConfig, UMoviePipelineExecutorShot* InPipelineExecutorShot) {
    return FIntPoint{};
}

FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(const UMoviePipeline* InMoviePipeline) {
    return FTimecode{};
}

FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(const UMoviePipeline* InMoviePipeline) {
    return FFrameNumber{};
}

ULevelSequence* UMoviePipelineBlueprintLibrary::GetCurrentSequence(const UMoviePipeline* InMoviePipeline) {
    return NULL;
}

FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(const UMoviePipeline* InMoviePipeline) {
    return FMoviePipelineSegmentWorkMetrics{};
}

EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(UMoviePipeline* InMoviePipeline) {
    return EMovieRenderShotState::Uninitialized;
}

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName) {
}

float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

UMoviePipelineExecutorShot* UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(const UMoviePipeline* InMoviePipeline) {
    return NULL;
}

float UMoviePipelineBlueprintLibrary::GetCurrentAperture(const UMoviePipeline* InMoviePipeline) {
    return 0.0f;
}

float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(const UMoviePipeline* InPipeline) {
    return 0.0f;
}

UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(TSubclassOf<UMoviePipelineSetting> InSettingType, const UMoviePipelineMasterConfig* InMasterConfig, const UMoviePipelineExecutorShot* InShot) {
    return NULL;
}

UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(UObject* Outer, UMovieSceneSequence* InSequence) {
    return NULL;
}


