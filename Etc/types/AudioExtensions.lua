---@meta

---@class FAudioParameter
---@field ParamName FName
---@field FloatParam float
---@field BoolParam boolean
---@field IntParam int32
---@field ObjectParam UObject
---@field StringParam FString
---@field ArrayFloatParam TArray<float>
---@field ArrayBoolParam TArray<boolean>
---@field ArrayIntParam TArray<int32>
---@field ArrayObjectParam TArray<UObject>
---@field ArrayStringParam TArray<FString>
---@field ParamType EAudioParameterType
---@field TypeName FName
local FAudioParameter = {}



---@class IAudioParameterControllerInterface : IInterface
local IAudioParameterControllerInterface = {}

---@param InName FName
function IAudioParameterControllerInterface:SetTriggerParameter(InName) end
---@param InName FName
---@param InValue FString
function IAudioParameterControllerInterface:SetStringParameter(InName, InValue) end
---@param InName FName
---@param InValue TArray<FString>
function IAudioParameterControllerInterface:SetStringArrayParameter(InName, InValue) end
---@param InParameters TArray<FAudioParameter>
function IAudioParameterControllerInterface:SetParameters_Blueprint(InParameters) end
---@param InName FName
---@param InValue UObject
function IAudioParameterControllerInterface:SetObjectParameter(InName, InValue) end
---@param InName FName
---@param InValue TArray<UObject>
function IAudioParameterControllerInterface:SetObjectArrayParameter(InName, InValue) end
---@param InName FName
---@param inInt int32
function IAudioParameterControllerInterface:SetIntParameter(InName, inInt) end
---@param InName FName
---@param InValue TArray<int32>
function IAudioParameterControllerInterface:SetIntArrayParameter(InName, InValue) end
---@param InName FName
---@param InFloat float
function IAudioParameterControllerInterface:SetFloatParameter(InName, InFloat) end
---@param InName FName
---@param InValue TArray<float>
function IAudioParameterControllerInterface:SetFloatArrayParameter(InName, InValue) end
---@param InName FName
---@param InBool boolean
function IAudioParameterControllerInterface:SetBoolParameter(InName, InBool) end
---@param InName FName
---@param InValue TArray<boolean>
function IAudioParameterControllerInterface:SetBoolArrayParameter(InName, InValue) end
function IAudioParameterControllerInterface:ResetParameters() end


---@class UAudioCodecEncoderSettings : UObject
---@field Version int32
local UAudioCodecEncoderSettings = {}



---@class UAudioEndpointSettingsBase : UObject
local UAudioEndpointSettingsBase = {}


---@class UAudioPcmEncoderSettings : UAudioCodecEncoderSettings
---@field BitDepthConversion EPcmBitDepthConversion
local UAudioPcmEncoderSettings = {}



---@class UDummyEndpointSettings : UAudioEndpointSettingsBase
local UDummyEndpointSettings = {}


---@class UOcclusionPluginSourceSettingsBase : UObject
local UOcclusionPluginSourceSettingsBase = {}


---@class UReverbPluginSourceSettingsBase : UObject
local UReverbPluginSourceSettingsBase = {}


---@class USoundModulatorBase : UObject
local USoundModulatorBase = {}


---@class USoundfieldEffectBase : UObject
---@field Settings USoundfieldEffectSettingsBase
local USoundfieldEffectBase = {}



---@class USoundfieldEffectSettingsBase : UObject
local USoundfieldEffectSettingsBase = {}


---@class USoundfieldEncodingSettingsBase : UObject
local USoundfieldEncodingSettingsBase = {}


---@class USoundfieldEndpointSettingsBase : UObject
local USoundfieldEndpointSettingsBase = {}


---@class USourceDataOverridePluginSourceSettingsBase : UObject
local USourceDataOverridePluginSourceSettingsBase = {}


---@class USpatializationPluginSourceSettingsBase : UObject
local USpatializationPluginSourceSettingsBase = {}


---@class UWaveformTransformationBase : UObject
local UWaveformTransformationBase = {}


---@class UWaveformTransformationChain : UObject
---@field Transformations TArray<UWaveformTransformationBase>
local UWaveformTransformationChain = {}



