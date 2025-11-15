---@meta

---@class FAudioCaptureDeviceInfo
---@field DeviceName FName
---@field NumInputChannels int32
---@field SampleRate int32
local FAudioCaptureDeviceInfo = {}



---@class FAudioInputDeviceInfo
---@field DeviceName FString
---@field DeviceID FString
---@field InputChannels int32
---@field PreferredSampleRate int32
---@field bSupportsHardwareAEC boolean
local FAudioInputDeviceInfo = {}



---@class UAudioCapture : UAudioGenerator
local UAudioCapture = {}

function UAudioCapture:StopCapturingAudio() end
function UAudioCapture:StartCapturingAudio() end
---@return boolean
function UAudioCapture:IsCapturingAudio() end
---@param OutInfo FAudioCaptureDeviceInfo
---@return boolean
function UAudioCapture:GetAudioCaptureDeviceInfo(OutInfo) end


---@class UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary
local UAudioCaptureBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param OnObtainDevicesEvent FGetAvailableAudioInputDevicesOnObtainDevicesEvent
function UAudioCaptureBlueprintLibrary:GetAvailableAudioInputDevices(WorldContextObject, OnObtainDevicesEvent) end
---@param Info FAudioInputDeviceInfo
---@return FString
function UAudioCaptureBlueprintLibrary:Conv_AudioInputDeviceInfoToString(Info) end


---@class UAudioCaptureComponent : USynthComponent
---@field JitterLatencyFrames int32
local UAudioCaptureComponent = {}



---@class UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary
local UAudioCaptureFunctionLibrary = {}

---@return UAudioCapture
function UAudioCaptureFunctionLibrary:CreateAudioCapture() end


