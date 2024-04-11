---@meta

---@class FAudioCaptureDeviceInfo
---@field DeviceName FName
---@field NumInputChannels int32
---@field SampleRate int32
FAudioCaptureDeviceInfo = {}



---@class FAudioInputDeviceInfo
---@field DeviceName FString
---@field DeviceID FString
---@field InputChannels int32
---@field PreferredSampleRate int32
---@field bSupportsHardwareAEC boolean
FAudioInputDeviceInfo = {}



---@class UAudioCapture : UAudioGenerator
UAudioCapture = {}

function UAudioCapture:StopCapturingAudio() end
function UAudioCapture:StartCapturingAudio() end
---@return boolean
function UAudioCapture:IsCapturingAudio() end
---@param OutInfo FAudioCaptureDeviceInfo
---@return boolean
function UAudioCapture:GetAudioCaptureDeviceInfo(OutInfo) end


---@class UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary
UAudioCaptureBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param OnObtainDevicesEvent FGetAvailableAudioInputDevicesOnObtainDevicesEvent
function UAudioCaptureBlueprintLibrary:GetAvailableAudioInputDevices(WorldContextObject, OnObtainDevicesEvent) end
---@param Info FAudioInputDeviceInfo
---@return FString
function UAudioCaptureBlueprintLibrary:Conv_AudioInputDeviceInfoToString(Info) end


---@class UAudioCaptureComponent : USynthComponent
---@field JitterLatencyFrames int32
UAudioCaptureComponent = {}



---@class UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary
UAudioCaptureFunctionLibrary = {}

---@return UAudioCapture
function UAudioCaptureFunctionLibrary:CreateAudioCapture() end


