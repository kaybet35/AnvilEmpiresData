---@meta

---@class FTimedDataChannelSampleTime
FTimedDataChannelSampleTime = {}


---@class FTimedDataInputEvaluationData
---@field DistanceToNewestSampleSeconds float
---@field DistanceToOldestSampleSeconds float
FTimedDataInputEvaluationData = {}



---@class UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
UFixedFrameRateCustomTimeStep = {}


---@class UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep
---@field bAutoDetectFormat boolean
UGenlockedCustomTimeStep = {}



---@class UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep
---@field FrameRate FFrameRate
---@field bShouldBlock boolean
---@field bForceSingleFrameDeltaTime boolean
UGenlockedFixedRateCustomTimeStep = {}



---@class UGenlockedTimecodeProvider : UTimecodeProvider
---@field bUseGenlockToCount boolean
UGenlockedTimecodeProvider = {}



---@class UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
UTimeManagementBlueprintLibrary = {}

---@param SourceTime FFrameTime
---@param SourceRate FFrameRate
---@param DestinationRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary:TransformTime(SourceTime, SourceRate, DestinationRate) end
---@param A FFrameNumber
---@param B int32
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Subtract_FrameNumberInteger(A, B) end
---@param A FFrameNumber
---@param B FFrameNumber
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Subtract_FrameNumberFrameNumber(A, B) end
---@param SourceTime FFrameTime
---@param SourceRate FFrameRate
---@param SnapToRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary:SnapFrameTimeToRate(SourceTime, SourceRate, SnapToRate) end
---@param TimeInSeconds float
---@param FrameRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary:Multiply_SecondsFrameRate(TimeInSeconds, FrameRate) end
---@param A FFrameNumber
---@param B int32
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Multiply_FrameNumberInteger(A, B) end
---@param InFrameRate FFrameRate
---@param OtherFramerate FFrameRate
---@return boolean
function UTimeManagementBlueprintLibrary:IsValid_MultipleOf(InFrameRate, OtherFramerate) end
---@param InFrameRate FFrameRate
---@return boolean
function UTimeManagementBlueprintLibrary:IsValid_Framerate(InFrameRate) end
---@return FFrameRate
function UTimeManagementBlueprintLibrary:GetTimecodeFrameRate() end
---@return FTimecode
function UTimeManagementBlueprintLibrary:GetTimecode() end
---@param A FFrameNumber
---@param B int32
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Divide_FrameNumberInteger(A, B) end
---@param InTimecode FTimecode
---@param bForceSignDisplay boolean
---@return FString
function UTimeManagementBlueprintLibrary:Conv_TimecodeToString(InTimecode, bForceSignDisplay) end
---@param InFrameTime FQualifiedFrameTime
---@return float
function UTimeManagementBlueprintLibrary:Conv_QualifiedFrameTimeToSeconds(InFrameTime) end
---@param InFrameRate FFrameRate
---@return float
function UTimeManagementBlueprintLibrary:Conv_FrameRateToSeconds(InFrameRate) end
---@param InFrameNumber FFrameNumber
---@return int32
function UTimeManagementBlueprintLibrary:Conv_FrameNumberToInteger(InFrameNumber) end
---@param A FFrameNumber
---@param B int32
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Add_FrameNumberInteger(A, B) end
---@param A FFrameNumber
---@param B FFrameNumber
---@return FFrameNumber
function UTimeManagementBlueprintLibrary:Add_FrameNumberFrameNumber(A, B) end


---@class UTimeSynchronizationSource : UObject
---@field bUseForSynchronization boolean
---@field FrameOffset int32
UTimeSynchronizationSource = {}



