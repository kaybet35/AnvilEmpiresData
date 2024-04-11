#ifndef UE4SS_SDK_MovieRenderPipelineCore_HPP
#define UE4SS_SDK_MovieRenderPipelineCore_HPP

#include "MovieRenderPipelineCore_enums.hpp"

struct FMoviePipelineCameraCutInfo
{
}; // Size: 0xA8

struct FMoviePipelineFilenameResolveParams
{
    int32 FrameNumber;                                                                // 0x0000 (size: 0x4)
    int32 FrameNumberShot;                                                            // 0x0004 (size: 0x4)
    int32 FrameNumberRel;                                                             // 0x0008 (size: 0x4)
    int32 FrameNumberShotRel;                                                         // 0x000C (size: 0x4)
    FString CameraNameOverride;                                                       // 0x0010 (size: 0x10)
    FString ShotNameOverride;                                                         // 0x0020 (size: 0x10)
    int32 ZeroPadFrameNumberCount;                                                    // 0x0030 (size: 0x4)
    bool bForceRelativeFrameNumbers;                                                  // 0x0034 (size: 0x1)
    FString FileNameOverride;                                                         // 0x0038 (size: 0x10)
    TMap<class FString, class FString> FileNameFormatOverrides;                       // 0x0048 (size: 0x50)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0098 (size: 0x50)
    FDateTime InitializationTime;                                                     // 0x00E8 (size: 0x8)
    int32 InitializationVersion;                                                      // 0x00F0 (size: 0x4)
    class UMoviePipelineExecutorJob* Job;                                             // 0x00F8 (size: 0x8)
    class UMoviePipelineExecutorShot* ShotOverride;                                   // 0x0108 (size: 0x8)
    int32 AdditionalFrameNumberOffset;                                                // 0x0110 (size: 0x4)

}; // Size: 0x118

struct FMoviePipelineFormatArgs
{
    TMap<class FString, class FString> FilenameArguments;                             // 0x0000 (size: 0x50)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0050 (size: 0x50)
    class UMoviePipelineExecutorJob* InJob;                                           // 0x00A0 (size: 0x8)

}; // Size: 0xA8

struct FMoviePipelineOutputData
{
    class UMoviePipeline* Pipeline;                                                   // 0x0000 (size: 0x8)
    class UMoviePipelineExecutorJob* Job;                                             // 0x0008 (size: 0x8)
    bool bSuccess;                                                                    // 0x0010 (size: 0x1)
    TArray<FMoviePipelineShotOutputData> ShotData;                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMoviePipelinePassIdentifier
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString CameraName;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMoviePipelineRenderPassOutputData
{
    TArray<FString> FilePaths;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMoviePipelineSegmentWorkMetrics
{
    FString SegmentName;                                                              // 0x0000 (size: 0x10)
    int32 OutputFrameIndex;                                                           // 0x0010 (size: 0x4)
    int32 TotalOutputFrameCount;                                                      // 0x0014 (size: 0x4)
    int32 OutputSubSampleIndex;                                                       // 0x0018 (size: 0x4)
    int32 TotalSubSampleCount;                                                        // 0x001C (size: 0x4)
    int32 EngineWarmUpFrameIndex;                                                     // 0x0020 (size: 0x4)
    int32 TotalEngineWarmUpFrameCount;                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FMoviePipelineShotOutputData
{
    TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;                            // 0x0000 (size: 0x8)
    TMap<class FMoviePipelinePassIdentifier, class FMoviePipelineRenderPassOutputData> RenderPassData; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMoviePipelineSidecarCamera
{
    FGuid BindingId;                                                                  // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

class AMoviePipelineGameMode : public AGameModeBase
{
}; // Size: 0x330

class UMoviePipeline : public UObject
{
    FMoviePipelineOnMoviePipelineFinishedDelegate OnMoviePipelineFinishedDelegate;    // 0x0028 (size: 0x10)
    void MoviePipelineFinished(class UMoviePipeline* MoviePipeline, bool bFatalError);
    FMoviePipelineOnMoviePipelineWorkFinishedDelegate OnMoviePipelineWorkFinishedDelegate; // 0x0038 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    FMoviePipelineOnMoviePipelineShotWorkFinishedDelegate OnMoviePipelineShotWorkFinishedDelegate; // 0x0048 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    class UMoviePipelineCustomTimeStep* CustomTimeStep;                               // 0x0058 (size: 0x8)
    class UEngineCustomTimeStep* CachedPrevCustomTimeStep;                            // 0x0070 (size: 0x8)
    class ULevelSequence* TargetSequence;                                             // 0x0078 (size: 0x8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0080 (size: 0x8)
    class UMovieRenderDebugWidget* DebugWidget;                                       // 0x0088 (size: 0x8)
    class UTexture* PreviewTexture;                                                   // 0x0090 (size: 0x8)
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;                      // 0x0320 (size: 0x8)
    class UMoviePipelineExecutorJob* CurrentJob;                                      // 0x0328 (size: 0x8)

    void Shutdown(bool bError);
    void SetInitializationTime(const FDateTime& InDateTime);
    void RequestShutdown(bool bIsError);
    void OnMoviePipelineFinishedImpl();
    bool IsShutdownRequested();
    void Initialize(class UMoviePipelineExecutorJob* InJob);
    class UTexture* GetPreviewTexture();
    class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
    FDateTime GetInitializationTime();
    class UMoviePipelineExecutorJob* GetCurrentJob();
}; // Size: 0x410

class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
    int32 SpatialSampleCount;                                                         // 0x0048 (size: 0x4)
    int32 TemporalSampleCount;                                                        // 0x004C (size: 0x4)
    bool bOverrideAntiAliasing;                                                       // 0x0050 (size: 0x1)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x0051 (size: 0x1)
    int32 RenderWarmUpCount;                                                          // 0x0054 (size: 0x4)
    bool bUseCameraCutForWarmUp;                                                      // 0x0058 (size: 0x1)
    int32 EngineWarmUpCount;                                                          // 0x005C (size: 0x4)
    bool bRenderWarmUpFrames;                                                         // 0x0060 (size: 0x1)

}; // Size: 0x68

class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged);
    int32 ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams);
    void ResolveFilenameFormatArguments(FString InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs);
    class UMoviePipelineQueue* LoadManifestFileFromString(FString InManifestFilePath);
    EMovieRenderPipelineState GetPipelineState(const class UMoviePipeline* InPipeline);
    void GetOverallSegmentCounts(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    void GetOverallOutputFrames(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    FText GetMoviePipelineEngineChangelistLabel(const class UMoviePipeline* InMoviePipeline);
    FTimecode GetMasterTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetMasterFrameNumber(const class UMoviePipeline* InMoviePipeline);
    FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
    FText GetJobName(class UMoviePipeline* InMoviePipeline);
    FDateTime GetJobInitializationTime(const class UMoviePipeline* InMoviePipeline);
    FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
    bool GetEstimatedTimeRemaining(const class UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    FIntPoint GetEffectiveOutputResolution(class UMoviePipelineMasterConfig* InMasterConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
    FTimecode GetCurrentShotTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetCurrentShotFrameNumber(const class UMoviePipeline* InMoviePipeline);
    class ULevelSequence* GetCurrentSequence(const class UMoviePipeline* InMoviePipeline);
    FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
    void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    float GetCurrentFocusDistance(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentFocalLength(const class UMoviePipeline* InMoviePipeline);
    class UMoviePipelineExecutorShot* GetCurrentExecutorShot(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentAperture(const class UMoviePipeline* InMoviePipeline);
    float GetCompletionPercentage(const class UMoviePipeline* InPipeline);
    class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, const class UMoviePipelineMasterConfig* InMasterConfig, const class UMoviePipelineExecutorShot* InShot);
    class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
}; // Size: 0x28

class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
    EMoviePipelineShutterTiming ShutterTiming;                                        // 0x0048 (size: 0x1)
    float OverscanPercentage;                                                         // 0x004C (size: 0x4)
    bool bRenderAllCameras;                                                           // 0x0050 (size: 0x1)

}; // Size: 0x58

class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x0048 (size: 0x88)
    bool bDisableToneCurve;                                                           // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
    FString FileNameFormatOverride;                                                   // 0x0048 (size: 0x10)
    EMoviePipelineEncodeQuality Quality;                                              // 0x0058 (size: 0x1)
    FString AdditionalCommandLineArgs;                                                // 0x0060 (size: 0x10)
    bool bDeleteSourceFiles;                                                          // 0x0070 (size: 0x1)
    bool bSkipEncodeOnRenderCanceled;                                                 // 0x0071 (size: 0x1)
    bool bWriteEachFrameDuration;                                                     // 0x0072 (size: 0x1)

}; // Size: 0x88

class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
    FString ExecutablePath;                                                           // 0x0038 (size: 0x10)
    FText CodecHelpText;                                                              // 0x0048 (size: 0x18)
    FString VideoCodec;                                                               // 0x0060 (size: 0x10)
    FString AudioCodec;                                                               // 0x0070 (size: 0x10)
    FString OutputFileExtension;                                                      // 0x0080 (size: 0x10)
    FString CommandLineFormat;                                                        // 0x0090 (size: 0x10)
    FString VideoInputStringFormat;                                                   // 0x00A0 (size: 0x10)
    FString AudioInputStringFormat;                                                   // 0x00B0 (size: 0x10)
    FString EncodeSettings_Low;                                                       // 0x00C0 (size: 0x10)
    FString EncodeSettings_Med;                                                       // 0x00D0 (size: 0x10)
    FString EncodeSettings_High;                                                      // 0x00E0 (size: 0x10)
    FString EncodeSettings_Epic;                                                      // 0x00F0 (size: 0x10)

}; // Size: 0x100

class UMoviePipelineConfigBase : public UObject
{
    FString DisplayName;                                                              // 0x0028 (size: 0x10)
    TArray<class UMoviePipelineSetting*> Settings;                                    // 0x0038 (size: 0x10)

    void RemoveSetting(class UMoviePipelineSetting* InSetting);
    TArray<class UMoviePipelineSetting*> GetUserSettings();
    TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings);
    void CopyFrom(class UMoviePipelineConfigBase* InConfig);
}; // Size: 0x50

class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
}; // Size: 0x30

class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
    bool bWriteAllSamples;                                                            // 0x0048 (size: 0x1)
    bool bCaptureFramesWithRenderDoc;                                                 // 0x0049 (size: 0x1)
    int32 CaptureFrame;                                                               // 0x004C (size: 0x4)
    bool bCaptureUnrealInsightsTrace;                                                 // 0x0050 (size: 0x1)

}; // Size: 0x58

class UMoviePipelineExecutorBase : public UObject
{
    FMoviePipelineExecutorBaseOnExecutorFinishedDelegate OnExecutorFinishedDelegate;  // 0x0028 (size: 0x10)
    void OnMoviePipelineExecutorFinished(class UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);
    FMoviePipelineExecutorBaseOnExecutorErroredDelegate OnExecutorErroredDelegate;    // 0x0050 (size: 0x10)
    void OnMoviePipelineExecutorErrored(class UMoviePipelineExecutorBase* PipelineExecutor, class UMoviePipeline* PipelineWithError, bool bIsFatal, FText ErrorText);
    FMoviePipelineExecutorBaseSocketMessageRecievedDelegate SocketMessageRecievedDelegate; // 0x0080 (size: 0x10)
    void MoviePipelineSocketMessageRecieved(FString Message);
    FMoviePipelineExecutorBaseHTTPResponseRecievedDelegate HTTPResponseRecievedDelegate; // 0x0090 (size: 0x10)
    void MoviePipelineHttpResponseRecieved(int32 RequestIndex, int32 ResponseCode, FString Message);
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;                      // 0x00A0 (size: 0x8)
    FString UserData;                                                                 // 0x00B8 (size: 0x10)
    TSubclassOf<class UMoviePipeline> TargetPipelineClass;                            // 0x00C8 (size: 0x8)

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetMoviePipelineClass(UClass* InPipelineClass);
    bool SendSocketMessage(FString InMessage);
    int32 SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, const TMap<class FString, class FString>& InHeaders);
    void OnExecutorFinishedImpl();
    void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    void OnBeginFrame();
    bool IsSocketConnected();
    bool IsRendering();
    float GetStatusProgress();
    FString GetStatusMessage();
    void Execute(class UMoviePipelineQueue* InPipelineQueue);
    void DisconnectSocket();
    bool ConnectSocket(FString InHostName, const int32 InPort);
    void CancelCurrentJob();
    void CancelAllJobs();
}; // Size: 0x118

class UMoviePipelineExecutorJob : public UObject
{
    FString JobName;                                                                  // 0x0028 (size: 0x10)
    FSoftObjectPath Sequence;                                                         // 0x0038 (size: 0x20)
    FSoftObjectPath Map;                                                              // 0x0058 (size: 0x20)
    FString Author;                                                                   // 0x0078 (size: 0x10)
    FString Comment;                                                                  // 0x0088 (size: 0x10)
    TArray<class UMoviePipelineExecutorShot*> ShotInfo;                               // 0x0098 (size: 0x10)
    FString UserData;                                                                 // 0x00A8 (size: 0x10)
    FString StatusMessage;                                                            // 0x00B8 (size: 0x10)
    float StatusProgress;                                                             // 0x00C8 (size: 0x4)
    bool bIsConsumed;                                                                 // 0x00CC (size: 0x1)
    class UMoviePipelineMasterConfig* Configuration;                                  // 0x00D0 (size: 0x8)
    TSoftObjectPtr<UMoviePipelineMasterConfig> PresetOrigin;                          // 0x00D8 (size: 0x30)
    bool bEnabled;                                                                    // 0x0108 (size: 0x1)

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetSequence(FSoftObjectPath InSequence);
    void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);
    void SetIsEnabled(const bool bInEnabled);
    void SetConsumed(const bool bInConsumed);
    void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);
    void OnDuplicated();
    bool IsEnabled();
    bool IsConsumed();
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineMasterConfig* GetPresetOrigin();
    class UMoviePipelineMasterConfig* GetConfiguration();
}; // Size: 0x110

class UMoviePipelineExecutorShot : public UObject
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    FString OuterName;                                                                // 0x0030 (size: 0x10)
    FString InnerName;                                                                // 0x0040 (size: 0x10)
    TArray<FMoviePipelineSidecarCamera> SidecarCameras;                               // 0x0050 (size: 0x10)
    float Progress;                                                                   // 0x0108 (size: 0x4)
    FString StatusMessage;                                                            // 0x0110 (size: 0x10)
    class UMoviePipelineShotConfig* ShotOverrideConfig;                               // 0x0120 (size: 0x8)
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;                // 0x0128 (size: 0x30)

    bool ShouldRender();
    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    FString GetCameraName(int32 InCameraIndex);
    class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
}; // Size: 0x158

class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;                                                   // 0x0050 (size: 0x10)
    FCPXMLExportDataSource DataSource;                                                // 0x0060 (size: 0x1)

}; // Size: 0x80

class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x0048 (size: 0x8)
    bool bCinematicQualitySettings;                                                   // 0x0050 (size: 0x1)
    EMoviePipelineTextureStreamingMethod TextureStreaming;                            // 0x0051 (size: 0x1)
    bool bUseLODZero;                                                                 // 0x0052 (size: 0x1)
    bool bDisableHLODs;                                                               // 0x0053 (size: 0x1)
    bool bUseHighQualityShadows;                                                      // 0x0054 (size: 0x1)
    int32 ShadowDistanceScale;                                                        // 0x0058 (size: 0x4)
    float ShadowRadiusThreshold;                                                      // 0x005C (size: 0x4)
    bool bOverrideViewDistanceScale;                                                  // 0x0060 (size: 0x1)
    int32 ViewDistanceScale;                                                          // 0x0064 (size: 0x4)
    bool bFlushGrassStreaming;                                                        // 0x0068 (size: 0x1)
    bool bFlushStreamingManagers;                                                     // 0x0069 (size: 0x1)
    bool bOverrideVirtualTextureFeedbackFactor;                                       // 0x006A (size: 0x1)
    int32 VirtualTextureFeedbackFactor;                                               // 0x006C (size: 0x4)

}; // Size: 0x128

class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
    int32 TileCount;                                                                  // 0x0048 (size: 0x4)
    float TextureSharpnessBias;                                                       // 0x004C (size: 0x4)
    float OverlapRatio;                                                               // 0x0050 (size: 0x4)
    bool bOverrideSubSurfaceScattering;                                               // 0x0054 (size: 0x1)
    int32 BurleySampleCount;                                                          // 0x0058 (size: 0x4)
    bool bAllocateHistoryPerTile;                                                     // 0x005C (size: 0x1)

}; // Size: 0x68

class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
    bool bUseCurrentLevel;                                                            // 0x0140 (size: 0x1)

}; // Size: 0x190

class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
    bool bCloseEditor;                                                                // 0x0038 (size: 0x1)
    FString AdditionalCommandLineArguments;                                           // 0x0040 (size: 0x10)
    FString InheritedCommandLineArguments;                                            // 0x0050 (size: 0x10)
    int32 InitialDelayFrameCount;                                                     // 0x0060 (size: 0x4)

}; // Size: 0x68

class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
    class UMoviePipelineQueue* Queue;                                                 // 0x0118 (size: 0x8)
    class UMoviePipeline* ActiveMoviePipeline;                                        // 0x0120 (size: 0x8)

}; // Size: 0x140

class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
{
    TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;        // 0x0050 (size: 0x50)
    class UMoviePipelineOutputSetting* OutputSetting;                                 // 0x00A0 (size: 0x8)
    TArray<class UMoviePipelineSetting*> TransientSettings;                           // 0x00A8 (size: 0x10)

    void InitializeTransientSettings();
    TArray<class UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(const class ULevelSequence* InSequence);
    TArray<class UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings);
}; // Size: 0xB8

class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
    FDirectoryPath OutputDirectory;                                                   // 0x0048 (size: 0x10)
    FString FileNameFormat;                                                           // 0x0058 (size: 0x10)
    FIntPoint OutputResolution;                                                       // 0x0068 (size: 0x8)
    bool bUseCustomFrameRate;                                                         // 0x0070 (size: 0x1)
    FFrameRate OutputFrameRate;                                                       // 0x0074 (size: 0x8)
    bool bOverrideExistingOutput;                                                     // 0x0080 (size: 0x1)
    int32 HandleFrameCount;                                                           // 0x0084 (size: 0x4)
    int32 OutputFrameStep;                                                            // 0x0088 (size: 0x4)
    bool bUseCustomPlaybackRange;                                                     // 0x008C (size: 0x1)
    int32 CustomStartFrame;                                                           // 0x0090 (size: 0x4)
    int32 CustomEndFrame;                                                             // 0x0094 (size: 0x4)
    int32 VersionNumber;                                                              // 0x0098 (size: 0x4)
    bool bAutoVersion;                                                                // 0x009C (size: 0x1)
    int32 ZeroPadFrameNumbers;                                                        // 0x00A0 (size: 0x4)
    int32 FrameNumberOffset;                                                          // 0x00A4 (size: 0x4)
    bool bFlushDiskWritesPerShot;                                                     // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
    TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;                // 0x0118 (size: 0x8)
    class UMoviePipelineQueue* PipelineQueue;                                         // 0x0120 (size: 0x8)
    class UWorld* LastLoadedWorld;                                                    // 0x0128 (size: 0x8)

    void OnMapLoad(class UWorld* InWorld);
    class UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
}; // Size: 0x130

class UMoviePipelineQueue : public UObject
{
    TArray<class UMoviePipelineExecutorJob*> Jobs;                                    // 0x0028 (size: 0x10)

    void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index);
    TArray<class UMoviePipelineExecutorJob*> GetJobs();
    class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteAllJobs();
    void CopyFrom(class UMoviePipelineQueue* InQueue);
    class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
}; // Size: 0x40

class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
    FMoviePipelineQueueEngineSubsystemOnRenderFinished OnRenderFinished;              // 0x0030 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    class UMoviePipelineExecutorBase* ActiveExecutor;                                 // 0x0040 (size: 0x8)
    class UMoviePipelineQueue* CurrentQueue;                                          // 0x0048 (size: 0x8)

    void SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, const bool bRenderPlayerViewport);
    void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
    class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
    void RenderJob(class UMoviePipelineExecutorJob* InJob);
    bool IsRendering();
    class UMoviePipelineQueue* GetQueue();
    class UMoviePipelineExecutorBase* GetActiveExecutor();
    class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
}; // Size: 0x90

class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineSetting : public UObject
{
    TWeakObjectPtr<class UMoviePipeline> CachedPipeline;                              // 0x0028 (size: 0x8)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)

    void SetIsEnabled(bool bInEnabled);
    bool IsEnabled();
    void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds);
    void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);
}; // Size: 0x48

class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
    FText CategoryText;                                                               // 0x0048 (size: 0x18)
    bool bIsValidOnMaster;                                                            // 0x0060 (size: 0x1)
    bool bIsValidOnShots;                                                             // 0x0061 (size: 0x1)
    bool bCanBeDisabled;                                                              // 0x0062 (size: 0x1)

    void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
    void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
    FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);
    void OnEngineTickBeginFrame();
}; // Size: 0x68

class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
}; // Size: 0x50

class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x90

class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMovieRenderDebugWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
}; // Size: 0x278

#endif
