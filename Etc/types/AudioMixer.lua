---@meta

---@class FAudioOutputDeviceInfo
---@field Name FString
---@field DeviceID FString
---@field NumChannels int32
---@field SampleRate int32
---@field Format EAudioMixerStreamDataFormatType
---@field OutputChannelArray TArray<EAudioMixerChannelType>
---@field bIsSystemDefault boolean
---@field bIsCurrentDevice boolean
local FAudioOutputDeviceInfo = {}



---@class FSubmixEffectDynamicProcessorFilterSettings
---@field bEnabled boolean
---@field Cutoff float
---@field GainDb float
local FSubmixEffectDynamicProcessorFilterSettings = {}



---@class FSubmixEffectDynamicsProcessorSettings
---@field DynamicsProcessorType ESubmixEffectDynamicsProcessorType
---@field PeakMode ESubmixEffectDynamicsPeakMode
---@field LinkMode ESubmixEffectDynamicsChannelLinkMode
---@field InputGainDb float
---@field ThresholdDb float
---@field Ratio float
---@field KneeBandwidthDb float
---@field LookAheadMsec float
---@field AttackTimeMsec float
---@field ReleaseTimeMsec float
---@field KeySource ESubmixEffectDynamicsKeySource
---@field ExternalAudioBus UAudioBus
---@field ExternalSubmix USoundSubmix
---@field bChannelLinked boolean
---@field bAnalogMode boolean
---@field bBypass boolean
---@field bKeyAudition boolean
---@field KeyGainDb float
---@field OutputGainDb float
---@field KeyHighshelf FSubmixEffectDynamicProcessorFilterSettings
---@field KeyLowshelf FSubmixEffectDynamicProcessorFilterSettings
local FSubmixEffectDynamicsProcessorSettings = {}



---@class FSubmixEffectEQBand
---@field Frequency float
---@field Bandwidth float
---@field GainDb float
---@field bEnabled boolean
local FSubmixEffectEQBand = {}



---@class FSubmixEffectReverbSettings
---@field bBypassEarlyReflections boolean
---@field ReflectionsDelay float
---@field GainHF float
---@field ReflectionsGain float
---@field bBypassLateReflections boolean
---@field LateDelay float
---@field DecayTime float
---@field Density float
---@field Diffusion float
---@field AirAbsorptionGainHF float
---@field DecayHFRatio float
---@field LateGain float
---@field Gain float
---@field WetLevel float
---@field DryLevel float
---@field bBypass boolean
local FSubmixEffectReverbSettings = {}



---@class FSubmixEffectSubmixEQSettings
---@field EQBands TArray<FSubmixEffectEQBand>
local FSubmixEffectSubmixEQSettings = {}



---@class FSwapAudioOutputResult
---@field CurrentDeviceId FString
---@field RequestedDeviceId FString
---@field Result ESwapAudioOutputDeviceResultState
local FSwapAudioOutputResult = {}



---@class UAudioDeviceNotificationSubsystem : UEngineSubsystem
---@field DefaultCaptureDeviceChanged FAudioDeviceNotificationSubsystemDefaultCaptureDeviceChanged
---@field DefaultRenderDeviceChanged FAudioDeviceNotificationSubsystemDefaultRenderDeviceChanged
---@field DeviceAdded FAudioDeviceNotificationSubsystemDeviceAdded
---@field DeviceRemoved FAudioDeviceNotificationSubsystemDeviceRemoved
---@field DeviceStateChanged FAudioDeviceNotificationSubsystemDeviceStateChanged
---@field DeviceSwitched FAudioDeviceNotificationSubsystemDeviceSwitched
local UAudioDeviceNotificationSubsystem = {}



---@class UAudioGenerator : UObject
local UAudioGenerator = {}


---@class UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
local UAudioMixerBlueprintLibrary = {}

---@param InMegabytesToFree float
---@return float
function UAudioMixerBlueprintLibrary:TrimAudioCache(InMegabytesToFree) end
---@param WorldContextObject UObject
---@param NewDeviceId FString
---@param OnCompletedDeviceSwap FSwapAudioOutputDeviceOnCompletedDeviceSwap
function UAudioMixerBlueprintLibrary:SwapAudioOutputDevice(WorldContextObject, NewDeviceId, OnCompletedDeviceSwap) end
---@param WorldContextObject UObject
---@param ExportType EAudioRecordingExportType
---@param Name FString
---@param Path FString
---@param SubmixToRecord USoundSubmix
---@param ExistingSoundWaveToOverwrite USoundWave
---@return USoundWave
function UAudioMixerBlueprintLibrary:StopRecordingOutput(WorldContextObject, ExportType, Name, Path, SubmixToRecord, ExistingSoundWaveToOverwrite) end
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary:StopAudioBus(WorldContextObject, AudioBus) end
---@param WorldContextObject UObject
---@param SubmixToStopAnalyzing USoundSubmix
function UAudioMixerBlueprintLibrary:StopAnalyzingOutput(WorldContextObject, SubmixToStopAnalyzing) end
---@param WorldContextObject UObject
---@param ExpectedDuration float
---@param SubmixToRecord USoundSubmix
function UAudioMixerBlueprintLibrary:StartRecordingOutput(WorldContextObject, ExpectedDuration, SubmixToRecord) end
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
function UAudioMixerBlueprintLibrary:StartAudioBus(WorldContextObject, AudioBus) end
---@param WorldContextObject UObject
---@param SubmixToAnalyze USoundSubmix
---@param FFTSize EFFTSize
---@param InterpolationMethod EFFTPeakInterpolationMethod
---@param WindowType EFFTWindowType
---@param HopSize float
---@param SpectrumType EAudioSpectrumType
function UAudioMixerBlueprintLibrary:StartAnalyzingOutput(WorldContextObject, SubmixToAnalyze, FFTSize, InterpolationMethod, WindowType, HopSize, SpectrumType) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPresetChain TArray<USoundEffectSubmixPreset>
---@param FadeTimeSec float
function UAudioMixerBlueprintLibrary:SetSubmixEffectChainOverride(WorldContextObject, SoundSubmix, SubmixEffectPresetChain, FadeTimeSec) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex int32
---@param bBypassed boolean
function UAudioMixerBlueprintLibrary:SetBypassSourceEffectChainEntry(WorldContextObject, PresetChain, EntryIndex, bBypassed) end
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix
function UAudioMixerBlueprintLibrary:ResumeRecordingOutput(WorldContextObject, SubmixToPause) end
---@param WorldContextObject UObject
---@param InSoundSubmix USoundSubmix
---@param SubmixChainIndex int32
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:ReplaceSubmixEffect(WorldContextObject, InSoundSubmix, SubmixChainIndex, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param InSoundSubmix USoundSubmix
---@param SubmixChainIndex int32
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:ReplaceSoundEffectSubmix(WorldContextObject, InSoundSubmix, SubmixChainIndex, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixChainIndex int32
function UAudioMixerBlueprintLibrary:RemoveSubmixEffectPresetAtIndex(WorldContextObject, SoundSubmix, SubmixChainIndex) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:RemoveSubmixEffectPreset(WorldContextObject, SoundSubmix, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixChainIndex int32
function UAudioMixerBlueprintLibrary:RemoveSubmixEffectAtIndex(WorldContextObject, SoundSubmix, SubmixChainIndex) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:RemoveSubmixEffect(WorldContextObject, SoundSubmix, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param EntryIndex int32
function UAudioMixerBlueprintLibrary:RemoveSourceEffectFromPresetChain(WorldContextObject, PresetChain, EntryIndex) end
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:RemoveMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end
---@param SoundWave USoundWave
---@param OnLoadCompletion FPrimeSoundForPlaybackOnLoadCompletion
function UAudioMixerBlueprintLibrary:PrimeSoundForPlayback(SoundWave, OnLoadCompletion) end
---@param SoundCue USoundCue
function UAudioMixerBlueprintLibrary:PrimeSoundCueForPlayback(SoundCue) end
---@param WorldContextObject UObject
---@param SubmixToPause USoundSubmix
function UAudioMixerBlueprintLibrary:PauseRecordingOutput(WorldContextObject, SubmixToPause) end
---@param InBandPresetType EAudioSpectrumBandPresetType
---@param InNumBands int32
---@param InAttackTimeMsec int32
---@param InReleaseTimeMsec int32
---@return TArray<FSoundSubmixSpectralAnalysisBandSettings>
function UAudioMixerBlueprintLibrary:MakePresetSpectralAnalysisBandSettings(InBandPresetType, InNumBands, InAttackTimeMsec, InReleaseTimeMsec) end
---@param InNumSemitones int32
---@param InStartingMusicalNote EMusicalNoteName
---@param InStartingOctave int32
---@param InAttackTimeMsec int32
---@param InReleaseTimeMsec int32
---@return TArray<FSoundSubmixSpectralAnalysisBandSettings>
function UAudioMixerBlueprintLibrary:MakeMusicalSpectralAnalysisBandSettings(InNumSemitones, InStartingMusicalNote, InStartingOctave, InAttackTimeMsec, InReleaseTimeMsec) end
---@param InNumBands int32
---@param InMinimumFrequency float
---@param InMaximumFrequency float
---@param InAttackTimeMsec int32
---@param InReleaseTimeMsec int32
---@return TArray<FSoundSubmixSpectralAnalysisBandSettings>
function UAudioMixerBlueprintLibrary:MakeFullSpectrumSpectralAnalysisBandSettings(InNumBands, InMinimumFrequency, InMaximumFrequency, InAttackTimeMsec, InReleaseTimeMsec) end
---@param WorldContextObject UObject
---@param AudioBus UAudioBus
---@return boolean
function UAudioMixerBlueprintLibrary:IsAudioBusActive(WorldContextObject, AudioBus) end
---@param WorldContextObject UObject
---@param Frequencies TArray<float>
---@param Phases TArray<float>
---@param SubmixToAnalyze USoundSubmix
function UAudioMixerBlueprintLibrary:GetPhaseForFrequencies(WorldContextObject, Frequencies, Phases, SubmixToAnalyze) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@return int32
function UAudioMixerBlueprintLibrary:GetNumberOfEntriesInSourceEffectChain(WorldContextObject, PresetChain) end
---@param WorldContextObject UObject
---@param Frequencies TArray<float>
---@param Magnitudes TArray<float>
---@param SubmixToAnalyze USoundSubmix
function UAudioMixerBlueprintLibrary:GetMagnitudeForFrequencies(WorldContextObject, Frequencies, Magnitudes, SubmixToAnalyze) end
---@param WorldContextObject UObject
---@param OnObtainCurrentDeviceEvent FGetCurrentAudioOutputDeviceNameOnObtainCurrentDeviceEvent
function UAudioMixerBlueprintLibrary:GetCurrentAudioOutputDeviceName(WorldContextObject, OnObtainCurrentDeviceEvent) end
---@param WorldContextObject UObject
---@param OnObtainDevicesEvent FGetAvailableAudioOutputDevicesOnObtainDevicesEvent
function UAudioMixerBlueprintLibrary:GetAvailableAudioOutputDevices(WorldContextObject, OnObtainDevicesEvent) end
---@param Info FAudioOutputDeviceInfo
---@return FString
function UAudioMixerBlueprintLibrary:Conv_AudioOutputDeviceInfoToString(Info) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
function UAudioMixerBlueprintLibrary:ClearSubmixEffects(WorldContextObject, SoundSubmix) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param FadeTimeSec float
function UAudioMixerBlueprintLibrary:ClearSubmixEffectChainOverride(WorldContextObject, SoundSubmix, FadeTimeSec) end
---@param WorldContextObject UObject
function UAudioMixerBlueprintLibrary:ClearMasterSubmixEffects(WorldContextObject) end
---@param WorldContextObject UObject
---@param SoundSubmix USoundSubmix
---@param SubmixEffectPreset USoundEffectSubmixPreset
---@return int32
function UAudioMixerBlueprintLibrary:AddSubmixEffect(WorldContextObject, SoundSubmix, SubmixEffectPreset) end
---@param WorldContextObject UObject
---@param PresetChain USoundEffectSourcePresetChain
---@param Entry FSourceEffectChainEntry
function UAudioMixerBlueprintLibrary:AddSourceEffectToPresetChain(WorldContextObject, PresetChain, Entry) end
---@param WorldContextObject UObject
---@param SubmixEffectPreset USoundEffectSubmixPreset
function UAudioMixerBlueprintLibrary:AddMasterSubmixEffect(WorldContextObject, SubmixEffectPreset) end


---@class UQuartzClockHandle : UObject
local UQuartzClockHandle = {}

---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:UnsubscribeFromTimeDivision(WorldContextObject, InQuantizationBoundary, ClockHandle) end
---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:UnsubscribeFromAllTimeDivisions(WorldContextObject, ClockHandle) end
---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
---@param OnQuantizationEvent FSubscribeToQuantizationEventOnQuantizationEvent
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:SubscribeToQuantizationEvent(WorldContextObject, InQuantizationBoundary, OnQuantizationEvent, ClockHandle) end
---@param WorldContextObject UObject
---@param OnQuantizationEvent FSubscribeToAllQuantizationEventsOnQuantizationEvent
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:SubscribeToAllQuantizationEvents(WorldContextObject, OnQuantizationEvent, ClockHandle) end
---@param WorldContextObject UObject
---@param CancelPendingEvents boolean
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:StopClock(WorldContextObject, CancelPendingEvents, ClockHandle) end
---@param WorldContextObject UObject
---@param OtherClockName FName
---@param InQuantizationBoundary FQuartzQuantizationBoundary
---@param InDelegate FStartOtherClockInDelegate
function UQuartzClockHandle:StartOtherClock(WorldContextObject, OtherClockName, InQuantizationBoundary, InDelegate) end
---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:StartClock(WorldContextObject, ClockHandle) end
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate FSetTicksPerSecondDelegate
---@param ClockHandle UQuartzClockHandle
---@param TicksPerSecond float
function UQuartzClockHandle:SetTicksPerSecond(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, TicksPerSecond) end
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate FSetThirtySecondNotesPerMinuteDelegate
---@param ClockHandle UQuartzClockHandle
---@param ThirtySecondsNotesPerMinute float
function UQuartzClockHandle:SetThirtySecondNotesPerMinute(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, ThirtySecondsNotesPerMinute) end
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate FSetSecondsPerTickDelegate
---@param ClockHandle UQuartzClockHandle
---@param SecondsPerTick float
function UQuartzClockHandle:SetSecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, SecondsPerTick) end
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate FSetMillisecondsPerTickDelegate
---@param ClockHandle UQuartzClockHandle
---@param MillisecondsPerTick float
function UQuartzClockHandle:SetMillisecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, MillisecondsPerTick) end
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate FSetBeatsPerMinuteDelegate
---@param ClockHandle UQuartzClockHandle
---@param BeatsPerMinute float
function UQuartzClockHandle:SetBeatsPerMinute(WorldContextObject, QuantizationBoundary, Delegate, ClockHandle, BeatsPerMinute) end
---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:ResumeClock(WorldContextObject, ClockHandle) end
---@param WorldContextObject UObject
---@param InQuantizationBoundary FQuartzQuantizationBoundary
---@param InDelegate FResetTransportQuantizedInDelegate
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:ResetTransportQuantized(WorldContextObject, InQuantizationBoundary, InDelegate, ClockHandle) end
---@param WorldContextObject UObject
---@param InDelegate FResetTransportInDelegate
function UQuartzClockHandle:ResetTransport(WorldContextObject, InDelegate) end
---@param WorldContextObject UObject
---@param ClockHandle UQuartzClockHandle
function UQuartzClockHandle:PauseClock(WorldContextObject, ClockHandle) end
---@param WorldContextObject UObject
---@return boolean
function UQuartzClockHandle:IsClockRunning(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetTicksPerSecond(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetThirtySecondNotesPerMinute(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetSecondsPerTick(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetMillisecondsPerTick(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetEstimatedRunTime(WorldContextObject) end
---@param WorldContextObject UObject
---@param QuantizationType EQuartzCommandQuantization
---@param Multiplier float
---@return float
function UQuartzClockHandle:GetDurationOfQuantizationTypeInSeconds(WorldContextObject, QuantizationType, Multiplier) end
---@param WorldContextObject UObject
---@return FQuartzTransportTimeStamp
function UQuartzClockHandle:GetCurrentTimestamp(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzClockHandle:GetBeatsPerMinute(WorldContextObject) end


---@class UQuartzSubsystem : UTickableWorldSubsystem
local UQuartzSubsystem = {}

---@return boolean
function UQuartzSubsystem:IsQuartzEnabled() end
---@param WorldContextObject UObject
---@param ClockName FName
---@return boolean
function UQuartzSubsystem:IsClockRunning(WorldContextObject, ClockName) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetRoundTripMinLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetRoundTripMaxLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetRoundTripAverageLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@param ClockName FName
---@return UQuartzClockHandle
function UQuartzSubsystem:GetHandleForClock(WorldContextObject, ClockName) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMinLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMaxLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadAverageLatency(WorldContextObject) end
---@param WorldContextObject UObject
---@param InClockName FName
---@return float
function UQuartzSubsystem:GetEstimatedClockRunTime(WorldContextObject, InClockName) end
---@param WorldContextObject UObject
---@param ClockName FName
---@param QuantizationType EQuartzCommandQuantization
---@param Multiplier float
---@return float
function UQuartzSubsystem:GetDurationOfQuantizationTypeInSeconds(WorldContextObject, ClockName, QuantizationType, Multiplier) end
---@param WorldContextObject UObject
---@param InClockName FName
---@return FQuartzTransportTimeStamp
function UQuartzSubsystem:GetCurrentClockTimestamp(WorldContextObject, InClockName) end
---@return float
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMinLatency() end
---@return float
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMaxLatency() end
---@return float
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadAverageLatency() end
---@param WorldContextObject UObject
---@param ClockName FName
---@return boolean
function UQuartzSubsystem:DoesClockExist(WorldContextObject, ClockName) end
---@param WorldContextObject UObject
---@param ClockName FName
function UQuartzSubsystem:DeleteClockByName(WorldContextObject, ClockName) end
---@param WorldContextObject UObject
---@param InClockHandle UQuartzClockHandle
function UQuartzSubsystem:DeleteClockByHandle(WorldContextObject, InClockHandle) end
---@param WorldContextObject UObject
---@param ClockName FName
---@param InSettings FQuartzClockSettings
---@param bOverrideSettingsIfClockExists boolean
---@param bUseAudioEngineClockManager boolean
---@return UQuartzClockHandle
function UQuartzSubsystem:CreateNewClock(WorldContextObject, ClockName, InSettings, bOverrideSettingsIfClockExists, bUseAudioEngineClockManager) end


---@class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectDynamicsProcessorSettings
local USubmixEffectDynamicsProcessorPreset = {}

---@param Settings FSubmixEffectDynamicsProcessorSettings
function USubmixEffectDynamicsProcessorPreset:SetSettings(Settings) end
---@param Submix USoundSubmix
function USubmixEffectDynamicsProcessorPreset:SetExternalSubmix(Submix) end
---@param AudioBus UAudioBus
function USubmixEffectDynamicsProcessorPreset:SetAudioBus(AudioBus) end
function USubmixEffectDynamicsProcessorPreset:ResetKey() end


---@class USubmixEffectReverbPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectReverbSettings
local USubmixEffectReverbPreset = {}

---@param InReverbEffect UReverbEffect
---@param WetLevel float
---@param DryLevel float
function USubmixEffectReverbPreset:SetSettingsWithReverbEffect(InReverbEffect, WetLevel, DryLevel) end
---@param InSettings FSubmixEffectReverbSettings
function USubmixEffectReverbPreset:SetSettings(InSettings) end


---@class USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectSubmixEQSettings
local USubmixEffectSubmixEQPreset = {}

---@param InSettings FSubmixEffectSubmixEQSettings
function USubmixEffectSubmixEQPreset:SetSettings(InSettings) end


---@class USynthComponent : USceneComponent
---@field bAutoDestroy boolean
---@field bStopWhenOwnerDestroyed boolean
---@field bAllowSpatialization boolean
---@field bOverrideAttenuation boolean
---@field bEnableBusSends boolean
---@field bEnableBaseSubmix boolean
---@field bEnableSubmixSends boolean
---@field AttenuationSettings USoundAttenuation
---@field AttenuationOverrides FSoundAttenuationSettings
---@field ConcurrencySettings USoundConcurrency
---@field ConcurrencySet TSet<USoundConcurrency>
---@field SoundClass USoundClass
---@field SourceEffectChain USoundEffectSourcePresetChain
---@field SoundSubmix USoundSubmixBase
---@field SoundSubmixSends TArray<FSoundSubmixSendInfo>
---@field BusSends TArray<FSoundSourceBusSendInfo>
---@field PreEffectBusSends TArray<FSoundSourceBusSendInfo>
---@field bIsUISound boolean
---@field bIsPreviewSound boolean
---@field EnvelopeFollowerAttackTime int32
---@field EnvelopeFollowerReleaseTime int32
---@field OnAudioEnvelopeValue FSynthComponentOnAudioEnvelopeValue
---@field Synth USynthSound
---@field AudioComponent UAudioComponent
local USynthComponent = {}

function USynthComponent:Stop() end
function USynthComponent:Start() end
---@param VolumeMultiplier float
function USynthComponent:SetVolumeMultiplier(VolumeMultiplier) end
---@param Submix USoundSubmixBase
---@param SendLevel float
function USynthComponent:SetSubmixSend(Submix, SendLevel) end
---@param bInOutputToBusOnly boolean
function USynthComponent:SetOutputToBusOnly(bInOutputToBusOnly) end
---@param InLowPassFilterFrequency float
function USynthComponent:SetLowPassFilterFrequency(InLowPassFilterFrequency) end
---@param InLowPassFilterEnabled boolean
function USynthComponent:SetLowPassFilterEnabled(InLowPassFilterEnabled) end
---@return boolean
function USynthComponent:IsPlaying() end
---@param FadeOutDuration float
---@param FadeVolumeLevel float
---@param FadeCurve EAudioFaderCurve
function USynthComponent:FadeOut(FadeOutDuration, FadeVolumeLevel, FadeCurve) end
---@param FadeInDuration float
---@param FadeVolumeLevel float
---@param StartTime float
---@param FadeCurve EAudioFaderCurve
function USynthComponent:FadeIn(FadeInDuration, FadeVolumeLevel, StartTime, FadeCurve) end
---@param AdjustVolumeDuration float
---@param AdjustVolumeLevel float
---@param FadeCurve EAudioFaderCurve
function USynthComponent:AdjustVolume(AdjustVolumeDuration, AdjustVolumeLevel, FadeCurve) end


---@class USynthSound : USoundWaveProcedural
---@field OwningSynthComponent TWeakObjectPtr<USynthComponent>
local USynthSound = {}



