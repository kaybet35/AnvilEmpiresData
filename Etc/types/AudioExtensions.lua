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
FAudioParameter = {}



---@class IAudioParameterControllerInterface : IInterface
IAudioParameterControllerInterface = {}

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
UAudioCodecEncoderSettings = {}



---@class UAudioEndpointSettingsBase : UObject
UAudioEndpointSettingsBase = {}


---@class UAudioPcmEncoderSettings : UAudioCodecEncoderSettings
---@field BitDepthConversion EPcmBitDepthConversion
UAudioPcmEncoderSettings = {}



---@class UDummyEndpointSettings : UAudioEndpointSettingsBase
UDummyEndpointSettings = {}


---@class UOcclusionPluginSourceSettingsBase : UObject
UOcclusionPluginSourceSettingsBase = {}


---@class UReverbPluginSourceSettingsBase : UObject
UReverbPluginSourceSettingsBase = {}


---@class USoundModulatorBase : UObject
USoundModulatorBase = {}


---@class USoundfieldEffectBase : UObject
---@field Settings USoundfieldEffectSettingsBase
USoundfieldEffectBase = {}



---@class USoundfieldEffectSettingsBase : UObject
USoundfieldEffectSettingsBase = {}


---@class USoundfieldEncodingSettingsBase : UObject
USoundfieldEncodingSettingsBase = {}


---@class USoundfieldEndpointSettingsBase : UObject
USoundfieldEndpointSettingsBase = {}


---@class USourceDataOverridePluginSourceSettingsBase : UObject
USourceDataOverridePluginSourceSettingsBase = {}


---@class USpatializationPluginSourceSettingsBase : UObject
USpatializationPluginSourceSettingsBase = {}


---@class UWaveformTransformationBase : UObject
UWaveformTransformationBase = {}


---@class UWaveformTransformationChain : UObject
---@field Transformations TArray<UWaveformTransformationBase>
UWaveformTransformationChain = {}



