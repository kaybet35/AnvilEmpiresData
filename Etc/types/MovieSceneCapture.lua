---@meta

---@class FCaptureResolution
---@field ResX int32
---@field ResY int32
local FCaptureResolution = {}



---@class FCapturedPixels
local FCapturedPixels = {}


---@class FCapturedPixelsID
---@field Identifiers TMap<FName, FName>
local FCapturedPixelsID = {}



---@class FCompositionGraphCapturePasses
---@field Value TArray<FString>
local FCompositionGraphCapturePasses = {}



---@class FFrameMetrics
---@field TotalElapsedTime float
---@field FrameDelta float
---@field FrameNumber int32
---@field NumDroppedFrames int32
local FFrameMetrics = {}



---@class FMovieSceneCaptureSettings
---@field OutputDirectory FDirectoryPath
---@field GameModeOverride TSubclassOf<AGameModeBase>
---@field OutputFormat FString
---@field bOverwriteExisting boolean
---@field bUseRelativeFrameNumbers boolean
---@field HandleFrames int32
---@field MovieExtension FString
---@field ZeroPadFrameNumbers uint8
---@field FrameRate FFrameRate
---@field bUseCustomFrameRate boolean
---@field CustomFrameRate FFrameRate
---@field Resolution FCaptureResolution
---@field bEnableTextureStreaming boolean
---@field bCinematicEngineScalability boolean
---@field bCinematicMode boolean
---@field bAllowMovement boolean
---@field bAllowTurning boolean
---@field bShowPlayer boolean
---@field bShowHUD boolean
---@field bUsePathTracer boolean
---@field PathTracerSamplePerPixel int32
local FMovieSceneCaptureSettings = {}



---@class IMovieSceneCaptureInterface : IInterface
local IMovieSceneCaptureInterface = {}


---@class UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
---@field IncludeRenderPasses FCompositionGraphCapturePasses
---@field bCaptureFramesInHDR boolean
---@field HDRCompressionQuality int32
---@field CaptureGamut EHDRCaptureGamut
---@field PostProcessingMaterial FSoftObjectPath
---@field bDisableScreenPercentage boolean
---@field PostProcessingMaterialPtr UMaterialInterface
local UCompositionGraphCaptureProtocol = {}



---@class UCompressedImageSequenceProtocol : UImageSequenceProtocol
---@field CompressionQuality int32
local UCompressedImageSequenceProtocol = {}



---@class UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
local UFrameGrabberProtocol = {}


---@class UImageSequenceProtocol : UFrameGrabberProtocol
local UImageSequenceProtocol = {}


---@class UImageSequenceProtocol_BMP : UImageSequenceProtocol
local UImageSequenceProtocol_BMP = {}


---@class UImageSequenceProtocol_EXR : UImageSequenceProtocol
---@field bCompressed boolean
---@field CaptureGamut EHDRCaptureGamut
local UImageSequenceProtocol_EXR = {}



---@class UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
local UImageSequenceProtocol_JPG = {}


---@class UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
local UImageSequenceProtocol_PNG = {}


---@class ULevelCapture : UMovieSceneCapture
---@field bAutoStartCapture boolean
---@field PrerequisiteActorId FGuid
local ULevelCapture = {}



---@class UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
---@field Filename FString
local UMasterAudioSubmixCaptureProtocol = {}



---@class UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
local UMovieSceneAudioCaptureProtocolBase = {}


---@class UMovieSceneCapture : UObject
---@field ImageCaptureProtocolType FSoftClassPath
---@field AudioCaptureProtocolType FSoftClassPath
---@field ImageCaptureProtocol UMovieSceneImageCaptureProtocolBase
---@field AudioCaptureProtocol UMovieSceneAudioCaptureProtocolBase
---@field Settings FMovieSceneCaptureSettings
---@field bUseSeparateProcess boolean
---@field bCloseEditorWhenCaptureStarts boolean
---@field AdditionalCommandLineArguments FString
---@field InheritedCommandLineArguments FString
local UMovieSceneCapture = {}

---@param ProtocolType TSubclassOf<UMovieSceneCaptureProtocolBase>
function UMovieSceneCapture:SetImageCaptureProtocolType(ProtocolType) end
---@param ProtocolType TSubclassOf<UMovieSceneCaptureProtocolBase>
function UMovieSceneCapture:SetAudioCaptureProtocolType(ProtocolType) end
---@return UMovieSceneCaptureProtocolBase
function UMovieSceneCapture:GetImageCaptureProtocol() end
---@return UMovieSceneCaptureProtocolBase
function UMovieSceneCapture:GetAudioCaptureProtocol() end


---@class UMovieSceneCaptureEnvironment : UObject
local UMovieSceneCaptureEnvironment = {}

---@return boolean
function UMovieSceneCaptureEnvironment:IsCaptureInProgress() end
---@return int32
function UMovieSceneCaptureEnvironment:GetCaptureFrameNumber() end
---@return float
function UMovieSceneCaptureEnvironment:GetCaptureElapsedTime() end
---@return UMovieSceneImageCaptureProtocolBase
function UMovieSceneCaptureEnvironment:FindImageCaptureProtocol() end
---@return UMovieSceneAudioCaptureProtocolBase
function UMovieSceneCaptureEnvironment:FindAudioCaptureProtocol() end


---@class UMovieSceneCaptureProtocolBase : UObject
---@field State EMovieSceneCaptureProtocolState
local UMovieSceneCaptureProtocolBase = {}

---@return boolean
function UMovieSceneCaptureProtocolBase:IsCapturing() end
---@return EMovieSceneCaptureProtocolState
function UMovieSceneCaptureProtocolBase:GetState() end


---@class UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
local UMovieSceneImageCaptureProtocolBase = {}


---@class UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
local UNullAudioCaptureProtocol = {}


---@class UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
---@field World UWorld
local UUserDefinedCaptureProtocol = {}

function UUserDefinedCaptureProtocol:StopCapturingFinalPixels() end
---@param StreamID FCapturedPixelsID
function UUserDefinedCaptureProtocol:StartCapturingFinalPixels(StreamID) end
---@param Buffer UTexture
---@param BufferID FCapturedPixelsID
function UUserDefinedCaptureProtocol:ResolveBuffer(Buffer, BufferID) end
function UUserDefinedCaptureProtocol:OnWarmUp() end
function UUserDefinedCaptureProtocol:OnTick() end
function UUserDefinedCaptureProtocol:OnStartCapture() end
---@return boolean
function UUserDefinedCaptureProtocol:OnSetup() end
function UUserDefinedCaptureProtocol:OnPreTick() end
---@param Pixels FCapturedPixels
---@param ID FCapturedPixelsID
---@param FrameMetrics FFrameMetrics
function UUserDefinedCaptureProtocol:OnPixelsReceived(Pixels, ID, FrameMetrics) end
function UUserDefinedCaptureProtocol:OnPauseCapture() end
function UUserDefinedCaptureProtocol:OnFinalize() end
function UUserDefinedCaptureProtocol:OnCaptureFrame() end
---@return boolean
function UUserDefinedCaptureProtocol:OnCanFinalize() end
function UUserDefinedCaptureProtocol:OnBeginFinalize() end
---@return FFrameMetrics
function UUserDefinedCaptureProtocol:GetCurrentFrameMetrics() end
---@param InFrameMetrics FFrameMetrics
---@return FString
function UUserDefinedCaptureProtocol:GenerateFilename(InFrameMetrics) end


---@class UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
---@field Format EDesiredImageFormat
---@field bEnableCompression boolean
---@field CompressionQuality int32
local UUserDefinedImageCaptureProtocol = {}

---@param PixelData FCapturedPixels
---@param StreamID FCapturedPixelsID
---@param FrameMetrics FFrameMetrics
---@param bCopyImageData boolean
function UUserDefinedImageCaptureProtocol:WriteImageToDisk(PixelData, StreamID, FrameMetrics, bCopyImageData) end
---@return FString
function UUserDefinedImageCaptureProtocol:GenerateFilenameForCurrentFrame() end
---@param Buffer UTexture
---@param StreamID FCapturedPixelsID
---@return FString
function UUserDefinedImageCaptureProtocol:GenerateFilenameForBuffer(Buffer, StreamID) end


---@class UVideoCaptureProtocol : UFrameGrabberProtocol
---@field bUseCompression boolean
---@field CompressionQuality float
local UVideoCaptureProtocol = {}



