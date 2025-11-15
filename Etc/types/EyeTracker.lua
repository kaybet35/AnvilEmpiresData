---@meta

---@class FEyeTrackerGazeData
---@field GazeOrigin FVector
---@field GazeDirection FVector
---@field FixationPoint FVector
---@field ConfidenceValue float
---@field bIsLeftEyeBlink boolean
---@field bIsRightEyeBlink boolean
---@field LeftPupilDiameter float
---@field RightPupilDiameter float
local FEyeTrackerGazeData = {}



---@class FEyeTrackerStereoGazeData
---@field LeftEyeOrigin FVector
---@field LeftEyeDirection FVector
---@field RightEyeOrigin FVector
---@field RightEyeDirection FVector
---@field FixationPoint FVector
---@field ConfidenceValue float
local FEyeTrackerStereoGazeData = {}



---@class UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
local UEyeTrackerFunctionLibrary = {}

---@param PlayerController APlayerController
function UEyeTrackerFunctionLibrary:SetEyeTrackedPlayer(PlayerController) end
---@return boolean
function UEyeTrackerFunctionLibrary:IsStereoGazeDataAvailable() end
---@return boolean
function UEyeTrackerFunctionLibrary:IsEyeTrackerConnected() end
---@param OutGazeData FEyeTrackerStereoGazeData
---@return boolean
function UEyeTrackerFunctionLibrary:GetStereoGazeData(OutGazeData) end
---@param OutGazeData FEyeTrackerGazeData
---@return boolean
function UEyeTrackerFunctionLibrary:GetGazeData(OutGazeData) end


