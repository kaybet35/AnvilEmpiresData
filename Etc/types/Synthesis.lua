---@meta

---@class FDynamicsBandSettings
---@field CrossoverTopFrequency float
---@field AttackTimeMsec float
---@field ReleaseTimeMsec float
---@field ThresholdDb float
---@field Ratio float
---@field KneeBandwidthDb float
---@field InputGainDb float
---@field OutputGainDb float
FDynamicsBandSettings = {}



---@class FEpicSynth1Patch
---@field PatchSource ESynth1PatchSource
---@field PatchCables TArray<FSynth1PatchCable>
FEpicSynth1Patch = {}



---@class FModularSynthPreset : FTableRowBase
---@field bEnablePolyphony boolean
---@field Osc1Type ESynth1OscType
---@field Osc1Gain float
---@field Osc1Octave float
---@field Osc1Semitones float
---@field Osc1Cents float
---@field Osc1PulseWidth float
---@field Osc2Type ESynth1OscType
---@field Osc2Gain float
---@field Osc2Octave float
---@field Osc2Semitones float
---@field Osc2Cents float
---@field Osc2PulseWidth float
---@field Portamento float
---@field bEnableUnison boolean
---@field bEnableOscillatorSync boolean
---@field Spread float
---@field Pan float
---@field LFO1Frequency float
---@field LFO1Gain float
---@field LFO1Type ESynthLFOType
---@field LFO1Mode ESynthLFOMode
---@field LFO1PatchType ESynthLFOPatchType
---@field LFO2Frequency float
---@field LFO2Gain float
---@field LFO2Type ESynthLFOType
---@field LFO2Mode ESynthLFOMode
---@field LFO2PatchType ESynthLFOPatchType
---@field GainDb float
---@field AttackTime float
---@field DecayTime float
---@field SustainGain float
---@field ReleaseTime float
---@field ModEnvPatchType ESynthModEnvPatch
---@field ModEnvBiasPatchType ESynthModEnvBiasPatch
---@field bInvertModulationEnvelope boolean
---@field bInvertModulationEnvelopeBias boolean
---@field ModulationEnvelopeDepth float
---@field ModulationEnvelopeAttackTime float
---@field ModulationEnvelopeDecayTime float
---@field ModulationEnvelopeSustainGain float
---@field ModulationEnvelopeReleaseTime float
---@field bLegato boolean
---@field bRetrigger boolean
---@field FilterFrequency float
---@field FilterQ float
---@field FilterType ESynthFilterType
---@field FilterAlgorithm ESynthFilterAlgorithm
---@field bStereoDelayEnabled boolean
---@field StereoDelayMode ESynthStereoDelayMode
---@field StereoDelayTime float
---@field StereoDelayFeedback float
---@field StereoDelayWetlevel float
---@field StereoDelayRatio float
---@field bChorusEnabled boolean
---@field ChorusDepth float
---@field ChorusFeedback float
---@field ChorusFrequency float
---@field Patches TArray<FEpicSynth1Patch>
FModularSynthPreset = {}



---@class FModularSynthPresetBankEntry
---@field PresetName FString
---@field Preset FModularSynthPreset
FModularSynthPresetBankEntry = {}



---@class FPatchId
---@field ID int32
FPatchId = {}



---@class FSourceEffectBitCrusherBaseSettings
---@field SampleRate float
---@field BitDepth float
FSourceEffectBitCrusherBaseSettings = {}



---@class FSourceEffectBitCrusherSettings
---@field CrushedSampleRate float
---@field SampleRateModulation FSoundModulationDestinationSettings
---@field CrushedBits float
---@field BitModulation FSoundModulationDestinationSettings
FSourceEffectBitCrusherSettings = {}



---@class FSourceEffectChorusBaseSettings
---@field Depth float
---@field Frequency float
---@field Feedback float
---@field WetLevel float
---@field DryLevel float
---@field Spread float
FSourceEffectChorusBaseSettings = {}



---@class FSourceEffectChorusSettings
---@field Depth float
---@field Frequency float
---@field Feedback float
---@field WetLevel float
---@field DryLevel float
---@field Spread float
---@field DepthModulation FSoundModulationDestinationSettings
---@field FrequencyModulation FSoundModulationDestinationSettings
---@field FeedbackModulation FSoundModulationDestinationSettings
---@field WetModulation FSoundModulationDestinationSettings
---@field DryModulation FSoundModulationDestinationSettings
---@field SpreadModulation FSoundModulationDestinationSettings
FSourceEffectChorusSettings = {}



---@class FSourceEffectConvolutionReverbSettings
---@field NormalizationVolumeDb float
---@field WetVolumeDb float
---@field DryVolumeDb float
---@field bBypass boolean
FSourceEffectConvolutionReverbSettings = {}



---@class FSourceEffectDynamicsProcessorSettings
---@field DynamicsProcessorType ESourceEffectDynamicsProcessorType
---@field PeakMode ESourceEffectDynamicsPeakMode
---@field LookAheadMsec float
---@field AttackTimeMsec float
---@field ReleaseTimeMsec float
---@field ThresholdDb float
---@field Ratio float
---@field KneeBandwidthDb float
---@field InputGainDb float
---@field OutputGainDb float
---@field bStereoLinked boolean
---@field bAnalogMode boolean
FSourceEffectDynamicsProcessorSettings = {}



---@class FSourceEffectEQBand
---@field Frequency float
---@field Bandwidth float
---@field GainDb float
---@field bEnabled boolean
FSourceEffectEQBand = {}



---@class FSourceEffectEQSettings
---@field EQBands TArray<FSourceEffectEQBand>
FSourceEffectEQSettings = {}



---@class FSourceEffectEnvelopeFollowerSettings
---@field AttackTime float
---@field ReleaseTime float
---@field PeakMode EEnvelopeFollowerPeakMode
---@field bIsAnalogMode boolean
FSourceEffectEnvelopeFollowerSettings = {}



---@class FSourceEffectFilterAudioBusModulationSettings
---@field AudioBus UAudioBus
---@field EnvelopeFollowerAttackTimeMsec int32
---@field EnvelopeFollowerReleaseTimeMsec int32
---@field EnvelopeGainMultiplier float
---@field FilterParam ESourceEffectFilterParam
---@field MinFrequencyModulation float
---@field MaxFrequencyModulation float
---@field MinResonanceModulation float
---@field MaxResonanceModulation float
FSourceEffectFilterAudioBusModulationSettings = {}



---@class FSourceEffectFilterSettings
---@field FilterCircuit ESourceEffectFilterCircuit
---@field FilterType ESourceEffectFilterType
---@field CutoffFrequency float
---@field FilterQ float
---@field AudioBusModulation TArray<FSourceEffectFilterAudioBusModulationSettings>
FSourceEffectFilterSettings = {}



---@class FSourceEffectFoldbackDistortionSettings
---@field InputGainDb float
---@field ThresholdDb float
---@field OutputGainDb float
FSourceEffectFoldbackDistortionSettings = {}



---@class FSourceEffectIndividualFilterSettings
---@field FilterCircuit ESourceEffectMotionFilterCircuit
---@field FilterType ESourceEffectMotionFilterType
---@field CutoffFrequency float
---@field FilterQ float
FSourceEffectIndividualFilterSettings = {}



---@class FSourceEffectMidSideSpreaderSettings
---@field SpreadAmount float
---@field InputMode EStereoChannelMode
---@field OutputMode EStereoChannelMode
---@field bEqualPower boolean
FSourceEffectMidSideSpreaderSettings = {}



---@class FSourceEffectMotionFilterModulationSettings
---@field ModulationSource ESourceEffectMotionFilterModSource
---@field ModulationInputRange FVector2D
---@field ModulationOutputMinimumRange FVector2D
---@field ModulationOutputMaximumRange FVector2D
---@field UpdateEaseMS float
FSourceEffectMotionFilterModulationSettings = {}



---@class FSourceEffectMotionFilterSettings
---@field MotionFilterTopology ESourceEffectMotionFilterTopology
---@field MotionFilterMix float
---@field FilterASettings FSourceEffectIndividualFilterSettings
---@field FilterBSettings FSourceEffectIndividualFilterSettings
---@field ModulationMappings TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings>
---@field DryVolumeDb float
FSourceEffectMotionFilterSettings = {}



---@class FSourceEffectPannerSettings
---@field Spread float
---@field Pan float
FSourceEffectPannerSettings = {}



---@class FSourceEffectPhaserSettings
---@field WetLevel float
---@field Frequency float
---@field Feedback float
---@field LFOType EPhaserLFOType
---@field UseQuadraturePhase boolean
FSourceEffectPhaserSettings = {}



---@class FSourceEffectRingModulationSettings
---@field ModulatorType ERingModulatorTypeSourceEffect
---@field Frequency float
---@field Depth float
---@field DryLevel float
---@field WetLevel float
---@field AudioBusModulator UAudioBus
FSourceEffectRingModulationSettings = {}



---@class FSourceEffectSimpleDelaySettings
---@field SpeedOfSound float
---@field DelayAmount float
---@field DryAmount float
---@field WetAmount float
---@field Feedback float
---@field bDelayBasedOnDistance boolean
---@field bUseDistanceOverride boolean
FSourceEffectSimpleDelaySettings = {}



---@class FSourceEffectStereoDelaySettings
---@field DelayMode EStereoDelaySourceEffect
---@field DelayTimeMsec float
---@field Feedback float
---@field DelayRatio float
---@field WetLevel float
---@field DryLevel float
---@field bFilterEnabled boolean
---@field FilterType EStereoDelayFiltertype
---@field FilterFrequency float
---@field FilterQ float
FSourceEffectStereoDelaySettings = {}



---@class FSourceEffectWaveShaperSettings
---@field Amount float
---@field OutputGainDb float
FSourceEffectWaveShaperSettings = {}



---@class FSubmixEffectConvolutionReverbSettings
---@field NormalizationVolumeDb float
---@field WetVolumeDb float
---@field DryVolumeDb float
---@field bBypass boolean
---@field bMixInputChannelFormatToImpulseResponseFormat boolean
---@field bMixReverbOutputToOutputChannelFormat boolean
---@field SurroundRearChannelBleedDb float
---@field bInvertRearChannelBleedPhase boolean
---@field bSurroundRearChannelFlip boolean
---@field SurroundRearChannelBleedAmount float
---@field ImpulseResponse UAudioImpulseResponse
---@field AllowHardwareAcceleration boolean
FSubmixEffectConvolutionReverbSettings = {}



---@class FSubmixEffectDelaySettings
---@field MaximumDelayLength float
---@field InterpolationTime float
---@field DelayLength float
FSubmixEffectDelaySettings = {}



---@class FSubmixEffectFilterSettings
---@field FilterType ESubmixFilterType
---@field FilterAlgorithm ESubmixFilterAlgorithm
---@field FilterFrequency float
---@field FilterQ float
FSubmixEffectFilterSettings = {}



---@class FSubmixEffectFlexiverbSettings
---@field PreDelay float
---@field DecayTime float
---@field RoomDampening float
---@field Complexity int32
FSubmixEffectFlexiverbSettings = {}



---@class FSubmixEffectMultibandCompressorSettings
---@field DynamicsProcessorType ESubmixEffectDynamicsProcessorType
---@field PeakMode ESubmixEffectDynamicsPeakMode
---@field LinkMode ESubmixEffectDynamicsChannelLinkMode
---@field LookAheadMsec float
---@field bAnalogMode boolean
---@field bFourPole boolean
---@field bBypass boolean
---@field KeySource ESubmixEffectDynamicsKeySource
---@field ExternalAudioBus UAudioBus
---@field ExternalSubmix USoundSubmix
---@field KeyGainDb float
---@field bKeyAudition boolean
---@field Bands TArray<FDynamicsBandSettings>
FSubmixEffectMultibandCompressorSettings = {}



---@class FSubmixEffectStereoDelaySettings
---@field DelayMode EStereoDelaySourceEffect
---@field DelayTimeMsec float
---@field Feedback float
---@field DelayRatio float
---@field WetLevel float
---@field DryLevel float
---@field bFilterEnabled boolean
---@field FilterType EStereoDelayFiltertype
---@field FilterFrequency float
---@field FilterQ float
FSubmixEffectStereoDelaySettings = {}



---@class FSubmixEffectTapDelaySettings
---@field MaximumDelayLength float
---@field InterpolationTime float
---@field Taps TArray<FTapDelayInfo>
FSubmixEffectTapDelaySettings = {}



---@class FSynth1PatchCable
---@field Depth float
---@field Destination ESynth1PatchDestination
FSynth1PatchCable = {}



---@class FSynth2DSliderStyle : FSlateWidgetStyle
---@field NormalThumbImage FSlateBrush
---@field DisabledThumbImage FSlateBrush
---@field NormalBarImage FSlateBrush
---@field DisabledBarImage FSlateBrush
---@field BackgroundImage FSlateBrush
---@field BarThickness float
FSynth2DSliderStyle = {}



---@class FSynthKnobStyle : FSlateWidgetStyle
---@field LargeKnob FSlateBrush
---@field LargeKnobOverlay FSlateBrush
---@field MediumKnob FSlateBrush
---@field MediumKnobOverlay FSlateBrush
---@field MinValueAngle float
---@field MaxValueAngle float
---@field KnobSize ESynthKnobSize
FSynthKnobStyle = {}



---@class FSynthSlateStyle : FSlateWidgetStyle
---@field SizeType ESynthSlateSizeType
---@field ColorStyle ESynthSlateColorStyle
FSynthSlateStyle = {}



---@class FTapDelayInfo
---@field TapLineMode ETapLineMode
---@field DelayLength float
---@field Gain float
---@field OutputChannel int32
---@field PanInDegrees float
---@field TapId int32
FTapDelayInfo = {}



---@class UAudioImpulseResponse : UObject
---@field ImpulseResponse TArray<float>
---@field NumChannels int32
---@field SampleRate int32
---@field NormalizationVolumeDb float
---@field bTrueStereo boolean
---@field IRData TArray<float>
UAudioImpulseResponse = {}



---@class UEnvelopeFollowerListener : UActorComponent
---@field OnEnvelopeFollowerUpdate FEnvelopeFollowerListenerOnEnvelopeFollowerUpdate
UEnvelopeFollowerListener = {}



---@class UGranularSynth : USynthComponent
---@field GranulatedSoundWave USoundWave
UGranularSynth = {}

---@param SustainGain float
function UGranularSynth:SetSustainGain(SustainGain) end
---@param InSoundWave USoundWave
function UGranularSynth:SetSoundWave(InSoundWave) end
---@param bScrubMode boolean
function UGranularSynth:SetScrubMode(bScrubMode) end
---@param ReleaseTimeMsec float
function UGranularSynth:SetReleaseTimeMsec(ReleaseTimeMsec) end
---@param InPositionSec float
---@param LerpTimeSec float
---@param SeekType EGranularSynthSeekType
function UGranularSynth:SetPlayheadTime(InPositionSec, LerpTimeSec, SeekType) end
---@param InPlayheadRate float
function UGranularSynth:SetPlaybackSpeed(InPlayheadRate) end
---@param BaseVolume float
---@param VolumeRange FVector2D
function UGranularSynth:SetGrainVolume(BaseVolume, VolumeRange) end
---@param InGrainsPerSecond float
function UGranularSynth:SetGrainsPerSecond(InGrainsPerSecond) end
---@param InGrainProbability float
function UGranularSynth:SetGrainProbability(InGrainProbability) end
---@param BasePitch float
---@param PitchRange FVector2D
function UGranularSynth:SetGrainPitch(BasePitch, PitchRange) end
---@param BasePan float
---@param PanRange FVector2D
function UGranularSynth:SetGrainPan(BasePan, PanRange) end
---@param EnvelopeType EGranularSynthEnvelopeType
function UGranularSynth:SetGrainEnvelopeType(EnvelopeType) end
---@param BaseDurationMsec float
---@param DurationRange FVector2D
function UGranularSynth:SetGrainDuration(BaseDurationMsec, DurationRange) end
---@param DecayTimeMsec float
function UGranularSynth:SetDecayTime(DecayTimeMsec) end
---@param AttackTimeMsec float
function UGranularSynth:SetAttackTime(AttackTimeMsec) end
---@param Note float
---@param Velocity int32
---@param Duration float
function UGranularSynth:NoteOn(Note, Velocity, Duration) end
---@param Note float
---@param bKill boolean
function UGranularSynth:NoteOff(Note, bKill) end
---@return boolean
function UGranularSynth:IsLoaded() end
---@return float
function UGranularSynth:GetSampleDuration() end
---@return float
function UGranularSynth:GetCurrentPlayheadTime() end


---@class UModularSynthComponent : USynthComponent
---@field VoiceCount int32
UModularSynthComponent = {}

---@param SynthPreset FModularSynthPreset
function UModularSynthComponent:SetSynthPreset(SynthPreset) end
---@param SustainGain float
function UModularSynthComponent:SetSustainGain(SustainGain) end
---@param DelayWetlevel float
function UModularSynthComponent:SetStereoDelayWetlevel(DelayWetlevel) end
---@param DelayTimeMsec float
function UModularSynthComponent:SetStereoDelayTime(DelayTimeMsec) end
---@param DelayRatio float
function UModularSynthComponent:SetStereoDelayRatio(DelayRatio) end
---@param StereoDelayMode ESynthStereoDelayMode
function UModularSynthComponent:SetStereoDelayMode(StereoDelayMode) end
---@param StereoDelayEnabled boolean
function UModularSynthComponent:SetStereoDelayIsEnabled(StereoDelayEnabled) end
---@param DelayFeedback float
function UModularSynthComponent:SetStereoDelayFeedback(DelayFeedback) end
---@param Spread float
function UModularSynthComponent:SetSpread(Spread) end
---@param ReleaseTimeMsec float
function UModularSynthComponent:SetReleaseTime(ReleaseTimeMsec) end
---@param Portamento float
function UModularSynthComponent:SetPortamento(Portamento) end
---@param PitchBend float
function UModularSynthComponent:SetPitchBend(PitchBend) end
---@param Pan float
function UModularSynthComponent:SetPan(Pan) end
---@param OscIndex int32
---@param OscType ESynth1OscType
function UModularSynthComponent:SetOscType(OscIndex, OscType) end
---@param bIsSynced boolean
function UModularSynthComponent:SetOscSync(bIsSynced) end
---@param OscIndex int32
---@param Semitones float
function UModularSynthComponent:SetOscSemitones(OscIndex, Semitones) end
---@param OscIndex int32
---@param Pulsewidth float
function UModularSynthComponent:SetOscPulsewidth(OscIndex, Pulsewidth) end
---@param OscIndex int32
---@param Octave float
function UModularSynthComponent:SetOscOctave(OscIndex, Octave) end
---@param OscIndex int32
---@param OscGainMod float
function UModularSynthComponent:SetOscGainMod(OscIndex, OscGainMod) end
---@param OscIndex int32
---@param OscGain float
function UModularSynthComponent:SetOscGain(OscIndex, OscGain) end
---@param OscIndex int32
---@param OscFreqMod float
function UModularSynthComponent:SetOscFrequencyMod(OscIndex, OscFreqMod) end
---@param OscIndex int32
---@param Cents float
function UModularSynthComponent:SetOscCents(OscIndex, Cents) end
---@param SustainGain float
function UModularSynthComponent:SetModEnvSustainGain(SustainGain) end
---@param Release float
function UModularSynthComponent:SetModEnvReleaseTime(Release) end
---@param InPatchType ESynthModEnvPatch
function UModularSynthComponent:SetModEnvPatch(InPatchType) end
---@param bInvert boolean
function UModularSynthComponent:SetModEnvInvert(bInvert) end
---@param Depth float
function UModularSynthComponent:SetModEnvDepth(Depth) end
---@param DecayTimeMsec float
function UModularSynthComponent:SetModEnvDecayTime(DecayTimeMsec) end
---@param InPatchType ESynthModEnvBiasPatch
function UModularSynthComponent:SetModEnvBiasPatch(InPatchType) end
---@param bInvert boolean
function UModularSynthComponent:SetModEnvBiasInvert(bInvert) end
---@param AttackTimeMsec float
function UModularSynthComponent:SetModEnvAttackTime(AttackTimeMsec) end
---@param LFOIndex int32
---@param LFOType ESynthLFOType
function UModularSynthComponent:SetLFOType(LFOIndex, LFOType) end
---@param LFOIndex int32
---@param LFOPatchType ESynthLFOPatchType
function UModularSynthComponent:SetLFOPatch(LFOIndex, LFOPatchType) end
---@param LFOIndex int32
---@param LFOMode ESynthLFOMode
function UModularSynthComponent:SetLFOMode(LFOIndex, LFOMode) end
---@param LFOIndex int32
---@param GainMod float
function UModularSynthComponent:SetLFOGainMod(LFOIndex, GainMod) end
---@param LFOIndex int32
---@param Gain float
function UModularSynthComponent:SetLFOGain(LFOIndex, Gain) end
---@param LFOIndex int32
---@param FrequencyModHz float
function UModularSynthComponent:SetLFOFrequencyMod(LFOIndex, FrequencyModHz) end
---@param LFOIndex int32
---@param FrequencyHz float
function UModularSynthComponent:SetLFOFrequency(LFOIndex, FrequencyHz) end
---@param GainDb float
function UModularSynthComponent:SetGainDb(GainDb) end
---@param FilterType ESynthFilterType
function UModularSynthComponent:SetFilterType(FilterType) end
---@param FilterQ float
function UModularSynthComponent:SetFilterQMod(FilterQ) end
---@param FilterQ float
function UModularSynthComponent:SetFilterQ(FilterQ) end
---@param FilterFrequencyHz float
function UModularSynthComponent:SetFilterFrequencyMod(FilterFrequencyHz) end
---@param FilterFrequencyHz float
function UModularSynthComponent:SetFilterFrequency(FilterFrequencyHz) end
---@param FilterAlgorithm ESynthFilterAlgorithm
function UModularSynthComponent:SetFilterAlgorithm(FilterAlgorithm) end
---@param EnableUnison boolean
function UModularSynthComponent:SetEnableUnison(EnableUnison) end
---@param RetriggerEnabled boolean
function UModularSynthComponent:SetEnableRetrigger(RetriggerEnabled) end
---@param bEnablePolyphony boolean
function UModularSynthComponent:SetEnablePolyphony(bEnablePolyphony) end
---@param PatchId FPatchId
---@param bIsEnabled boolean
---@return boolean
function UModularSynthComponent:SetEnablePatch(PatchId, bIsEnabled) end
---@param LegatoEnabled boolean
function UModularSynthComponent:SetEnableLegato(LegatoEnabled) end
---@param DecayTimeMsec float
function UModularSynthComponent:SetDecayTime(DecayTimeMsec) end
---@param Frequency float
function UModularSynthComponent:SetChorusFrequency(Frequency) end
---@param Feedback float
function UModularSynthComponent:SetChorusFeedback(Feedback) end
---@param EnableChorus boolean
function UModularSynthComponent:SetChorusEnabled(EnableChorus) end
---@param Depth float
function UModularSynthComponent:SetChorusDepth(Depth) end
---@param AttackTimeMsec float
function UModularSynthComponent:SetAttackTime(AttackTimeMsec) end
---@param Note float
---@param Velocity int32
---@param Duration float
function UModularSynthComponent:NoteOn(Note, Velocity, Duration) end
---@param Note float
---@param bAllNotesOff boolean
---@param bKillAllNotes boolean
function UModularSynthComponent:NoteOff(Note, bAllNotesOff, bKillAllNotes) end
---@param PatchSource ESynth1PatchSource
---@param PatchCables TArray<FSynth1PatchCable>
---@param bEnableByDefault boolean
---@return FPatchId
function UModularSynthComponent:CreatePatch(PatchSource, PatchCables, bEnableByDefault) end


---@class UModularSynthLibrary : UBlueprintFunctionLibrary
UModularSynthLibrary = {}

---@param InBank UModularSynthPresetBank
---@param Preset FModularSynthPreset
---@param PresetName FString
function UModularSynthLibrary:AddModularSynthPresetToBankAsset(InBank, Preset, PresetName) end


---@class UModularSynthPresetBank : UObject
---@field Presets TArray<FModularSynthPresetBankEntry>
UModularSynthPresetBank = {}



---@class UMonoWaveTableSynthPreset : UObject
---@field PresetName FString
---@field bLockKeyframesToGridBool boolean
---@field LockKeyframesToGrid int32
---@field WaveTableResolution int32
---@field WaveTable TArray<FRuntimeFloatCurve>
---@field bNormalizeWaveTables boolean
UMonoWaveTableSynthPreset = {}



---@class USourceEffectBitCrusherPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectBitCrusherSettings
USourceEffectBitCrusherPreset = {}

---@param Settings FSourceEffectBitCrusherBaseSettings
function USourceEffectBitCrusherPreset:SetSettings(Settings) end
---@param InModulators TSet<USoundModulatorBase>
function USourceEffectBitCrusherPreset:SetSampleRateModulators(InModulators) end
---@param Modulator USoundModulatorBase
function USourceEffectBitCrusherPreset:SetSampleRateModulator(Modulator) end
---@param SampleRate float
function USourceEffectBitCrusherPreset:SetSampleRate(SampleRate) end
---@param ModulationSettings FSourceEffectBitCrusherSettings
function USourceEffectBitCrusherPreset:SetModulationSettings(ModulationSettings) end
---@param Bits float
function USourceEffectBitCrusherPreset:SetBits(Bits) end
---@param InModulators TSet<USoundModulatorBase>
function USourceEffectBitCrusherPreset:SetBitModulators(InModulators) end
---@param Modulator USoundModulatorBase
function USourceEffectBitCrusherPreset:SetBitModulator(Modulator) end


---@class USourceEffectChorusPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectChorusSettings
USourceEffectChorusPreset = {}

---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetWetModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetWetModulator(Modulator) end
---@param WetAmount float
function USourceEffectChorusPreset:SetWet(WetAmount) end
---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetSpreadModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetSpreadModulator(Modulator) end
---@param Spread float
function USourceEffectChorusPreset:SetSpread(Spread) end
---@param Settings FSourceEffectChorusBaseSettings
function USourceEffectChorusPreset:SetSettings(Settings) end
---@param ModulationSettings FSourceEffectChorusSettings
function USourceEffectChorusPreset:SetModulationSettings(ModulationSettings) end
---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetFrequencyModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetFrequencyModulator(Modulator) end
---@param Frequency float
function USourceEffectChorusPreset:SetFrequency(Frequency) end
---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetFeedbackModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetFeedbackModulator(Modulator) end
---@param Feedback float
function USourceEffectChorusPreset:SetFeedback(Feedback) end
---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetDryModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetDryModulator(Modulator) end
---@param DryAmount float
function USourceEffectChorusPreset:SetDry(DryAmount) end
---@param Modulators TSet<USoundModulatorBase>
function USourceEffectChorusPreset:SetDepthModulators(Modulators) end
---@param Modulator USoundModulatorBase
function USourceEffectChorusPreset:SetDepthModulator(Modulator) end
---@param Depth float
function USourceEffectChorusPreset:SetDepth(Depth) end


---@class USourceEffectConvolutionReverbPreset : USoundEffectSourcePreset
---@field ImpulseResponse UAudioImpulseResponse
---@field Settings FSourceEffectConvolutionReverbSettings
---@field BlockSize ESubmixEffectConvolutionReverbBlockSize
---@field bEnableHardwareAcceleration boolean
USourceEffectConvolutionReverbPreset = {}

---@param InSettings FSourceEffectConvolutionReverbSettings
function USourceEffectConvolutionReverbPreset:SetSettings(InSettings) end
---@param InImpulseResponse UAudioImpulseResponse
function USourceEffectConvolutionReverbPreset:SetImpulseResponse(InImpulseResponse) end


---@class USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectDynamicsProcessorSettings
USourceEffectDynamicsProcessorPreset = {}

---@param InSettings FSourceEffectDynamicsProcessorSettings
function USourceEffectDynamicsProcessorPreset:SetSettings(InSettings) end


---@class USourceEffectEQPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectEQSettings
USourceEffectEQPreset = {}

---@param InSettings FSourceEffectEQSettings
function USourceEffectEQPreset:SetSettings(InSettings) end


---@class USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectEnvelopeFollowerSettings
USourceEffectEnvelopeFollowerPreset = {}

---@param EnvelopeFollowerListener UEnvelopeFollowerListener
function USourceEffectEnvelopeFollowerPreset:UnregisterEnvelopeFollowerListener(EnvelopeFollowerListener) end
---@param InSettings FSourceEffectEnvelopeFollowerSettings
function USourceEffectEnvelopeFollowerPreset:SetSettings(InSettings) end
---@param EnvelopeFollowerListener UEnvelopeFollowerListener
function USourceEffectEnvelopeFollowerPreset:RegisterEnvelopeFollowerListener(EnvelopeFollowerListener) end


---@class USourceEffectFilterPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectFilterSettings
USourceEffectFilterPreset = {}

---@param InSettings FSourceEffectFilterSettings
function USourceEffectFilterPreset:SetSettings(InSettings) end


---@class USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectFoldbackDistortionSettings
USourceEffectFoldbackDistortionPreset = {}

---@param InSettings FSourceEffectFoldbackDistortionSettings
function USourceEffectFoldbackDistortionPreset:SetSettings(InSettings) end


---@class USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectMidSideSpreaderSettings
USourceEffectMidSideSpreaderPreset = {}

---@param InSettings FSourceEffectMidSideSpreaderSettings
function USourceEffectMidSideSpreaderPreset:SetSettings(InSettings) end


---@class USourceEffectMotionFilterPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectMotionFilterSettings
USourceEffectMotionFilterPreset = {}

---@param InSettings FSourceEffectMotionFilterSettings
function USourceEffectMotionFilterPreset:SetSettings(InSettings) end


---@class USourceEffectPannerPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectPannerSettings
USourceEffectPannerPreset = {}

---@param InSettings FSourceEffectPannerSettings
function USourceEffectPannerPreset:SetSettings(InSettings) end


---@class USourceEffectPhaserPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectPhaserSettings
USourceEffectPhaserPreset = {}

---@param InSettings FSourceEffectPhaserSettings
function USourceEffectPhaserPreset:SetSettings(InSettings) end


---@class USourceEffectRingModulationPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectRingModulationSettings
USourceEffectRingModulationPreset = {}

---@param InSettings FSourceEffectRingModulationSettings
function USourceEffectRingModulationPreset:SetSettings(InSettings) end


---@class USourceEffectSimpleDelayPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectSimpleDelaySettings
USourceEffectSimpleDelayPreset = {}

---@param InSettings FSourceEffectSimpleDelaySettings
function USourceEffectSimpleDelayPreset:SetSettings(InSettings) end


---@class USourceEffectStereoDelayPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectStereoDelaySettings
USourceEffectStereoDelayPreset = {}

---@param InSettings FSourceEffectStereoDelaySettings
function USourceEffectStereoDelayPreset:SetSettings(InSettings) end


---@class USourceEffectWaveShaperPreset : USoundEffectSourcePreset
---@field Settings FSourceEffectWaveShaperSettings
USourceEffectWaveShaperPreset = {}

---@param InSettings FSourceEffectWaveShaperSettings
function USourceEffectWaveShaperPreset:SetSettings(InSettings) end


---@class USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset
---@field ImpulseResponse UAudioImpulseResponse
---@field Settings FSubmixEffectConvolutionReverbSettings
---@field BlockSize ESubmixEffectConvolutionReverbBlockSize
---@field bEnableHardwareAcceleration boolean
USubmixEffectConvolutionReverbPreset = {}

---@param InSettings FSubmixEffectConvolutionReverbSettings
function USubmixEffectConvolutionReverbPreset:SetSettings(InSettings) end
---@param InImpulseResponse UAudioImpulseResponse
function USubmixEffectConvolutionReverbPreset:SetImpulseResponse(InImpulseResponse) end


---@class USubmixEffectDelayPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectDelaySettings
---@field DynamicSettings FSubmixEffectDelaySettings
USubmixEffectDelayPreset = {}

---@param InSettings FSubmixEffectDelaySettings
function USubmixEffectDelayPreset:SetSettings(InSettings) end
---@param Time float
function USubmixEffectDelayPreset:SetInterpolationTime(Time) end
---@param Length float
function USubmixEffectDelayPreset:SetDelay(Length) end
---@param InSettings FSubmixEffectDelaySettings
function USubmixEffectDelayPreset:SetDefaultSettings(InSettings) end
---@return float
function USubmixEffectDelayPreset:GetMaxDelayInMilliseconds() end


---@class USubmixEffectDelayStatics : UBlueprintFunctionLibrary
USubmixEffectDelayStatics = {}

---@param DelaySettings FSubmixEffectDelaySettings
---@param MaximumDelayLength float
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics:SetMaximumDelayLength(DelaySettings, MaximumDelayLength) end
---@param DelaySettings FSubmixEffectDelaySettings
---@param InterpolationTime float
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics:SetInterpolationTime(DelaySettings, InterpolationTime) end
---@param DelaySettings FSubmixEffectDelaySettings
---@param DelayLength float
---@return FSubmixEffectDelaySettings
function USubmixEffectDelayStatics:SetDelayLength(DelaySettings, DelayLength) end


---@class USubmixEffectFilterPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectFilterSettings
USubmixEffectFilterPreset = {}

---@param InSettings FSubmixEffectFilterSettings
function USubmixEffectFilterPreset:SetSettings(InSettings) end
---@param InType ESubmixFilterType
function USubmixEffectFilterPreset:SetFilterType(InType) end
---@param InQ float
function USubmixEffectFilterPreset:SetFilterQMod(InQ) end
---@param InQ float
function USubmixEffectFilterPreset:SetFilterQ(InQ) end
---@param InFrequency float
function USubmixEffectFilterPreset:SetFilterCutoffFrequencyMod(InFrequency) end
---@param InFrequency float
function USubmixEffectFilterPreset:SetFilterCutoffFrequency(InFrequency) end
---@param InAlgorithm ESubmixFilterAlgorithm
function USubmixEffectFilterPreset:SetFilterAlgorithm(InAlgorithm) end


---@class USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectFlexiverbSettings
USubmixEffectFlexiverbPreset = {}

---@param InSettings FSubmixEffectFlexiverbSettings
function USubmixEffectFlexiverbPreset:SetSettings(InSettings) end


---@class USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectMultibandCompressorSettings
USubmixEffectMultibandCompressorPreset = {}

---@param InSettings FSubmixEffectMultibandCompressorSettings
function USubmixEffectMultibandCompressorPreset:SetSettings(InSettings) end
---@param Submix USoundSubmix
function USubmixEffectMultibandCompressorPreset:SetExternalSubmix(Submix) end
---@param AudioBus UAudioBus
function USubmixEffectMultibandCompressorPreset:SetAudioBus(AudioBus) end
function USubmixEffectMultibandCompressorPreset:ResetKey() end


---@class USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectStereoDelaySettings
USubmixEffectStereoDelayPreset = {}

---@param InSettings FSubmixEffectStereoDelaySettings
function USubmixEffectStereoDelayPreset:SetSettings(InSettings) end


---@class USubmixEffectTapDelayPreset : USoundEffectSubmixPreset
---@field Settings FSubmixEffectTapDelaySettings
USubmixEffectTapDelayPreset = {}

---@param TapId int32
---@param TapInfo FTapDelayInfo
function USubmixEffectTapDelayPreset:SetTap(TapId, TapInfo) end
---@param InSettings FSubmixEffectTapDelaySettings
function USubmixEffectTapDelayPreset:SetSettings(InSettings) end
---@param Time float
function USubmixEffectTapDelayPreset:SetInterpolationTime(Time) end
---@param TapId int32
function USubmixEffectTapDelayPreset:RemoveTap(TapId) end
---@param TapIds TArray<int32>
function USubmixEffectTapDelayPreset:GetTapIds(TapIds) end
---@param TapId int32
---@param TapInfo FTapDelayInfo
function USubmixEffectTapDelayPreset:GetTap(TapId, TapInfo) end
---@return float
function USubmixEffectTapDelayPreset:GetMaxDelayInMilliseconds() end
---@param TapId int32
function USubmixEffectTapDelayPreset:AddTap(TapId) end


---@class USynth2DSlider : UWidget
---@field ValueX float
---@field ValueY float
---@field ValueXDelegate FSynth2DSliderValueXDelegate
---@field ValueYDelegate FSynth2DSliderValueYDelegate
---@field WidgetStyle FSynth2DSliderStyle
---@field SliderHandleColor FLinearColor
---@field IndentHandle boolean
---@field Locked boolean
---@field StepSize float
---@field IsFocusable boolean
---@field OnMouseCaptureBegin FSynth2DSliderOnMouseCaptureBegin
---@field OnMouseCaptureEnd FSynth2DSliderOnMouseCaptureEnd
---@field OnControllerCaptureBegin FSynth2DSliderOnControllerCaptureBegin
---@field OnControllerCaptureEnd FSynth2DSliderOnControllerCaptureEnd
---@field OnValueChangedX FSynth2DSliderOnValueChangedX
---@field OnValueChangedY FSynth2DSliderOnValueChangedY
USynth2DSlider = {}

---@param InValue FVector2D
function USynth2DSlider:SetValue(InValue) end
---@param InValue float
function USynth2DSlider:SetStepSize(InValue) end
---@param InValue FLinearColor
function USynth2DSlider:SetSliderHandleColor(InValue) end
---@param InValue boolean
function USynth2DSlider:SetLocked(InValue) end
---@param InValue boolean
function USynth2DSlider:SetIndentHandle(InValue) end
---@return FVector2D
function USynth2DSlider:GetValue() end


---@class USynthComponentMonoWaveTable : USynthComponent
---@field OnTableAltered FSynthComponentMonoWaveTableOnTableAltered
---@field OnNumTablesChanged FSynthComponentMonoWaveTableOnNumTablesChanged
---@field CurrentPreset UMonoWaveTableSynthPreset
USynthComponentMonoWaveTable = {}

---@param InPosition float
function USynthComponentMonoWaveTable:SetWaveTablePosition(InPosition) end
---@param InSustainPedalState boolean
function USynthComponentMonoWaveTable:SetSustainPedalState(InSustainPedalState) end
---@param InLfoType ESynthLFOType
function USynthComponentMonoWaveTable:SetPosLfoType(InLfoType) end
---@param InLfoFrequency float
function USynthComponentMonoWaveTable:SetPosLfoFrequency(InLfoFrequency) end
---@param InLfoDepth float
function USynthComponentMonoWaveTable:SetPosLfoDepth(InLfoDepth) end
---@param InSustainGain float
function USynthComponentMonoWaveTable:SetPositionEnvelopeSustainGain(InSustainGain) end
---@param InReleaseTimeMsec float
function USynthComponentMonoWaveTable:SetPositionEnvelopeReleaseTime(InReleaseTimeMsec) end
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetPositionEnvelopeInvert(bInInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetPositionEnvelopeDepth(InDepth) end
---@param InDecayTimeMsec float
function USynthComponentMonoWaveTable:SetPositionEnvelopeDecayTime(InDecayTimeMsec) end
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetPositionEnvelopeBiasInvert(bInBiasInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetPositionEnvelopeBiasDepth(InDepth) end
---@param InAttackTimeMsec float
function USynthComponentMonoWaveTable:SetPositionEnvelopeAttackTime(InAttackTimeMsec) end
---@param InNewQ float
function USynthComponentMonoWaveTable:SetLowPassFilterResonance(InNewQ) end
---@param InMidiNote float
function USynthComponentMonoWaveTable:SetFrequencyWithMidiNote(InMidiNote) end
---@param FrequencyOffsetCents float
function USynthComponentMonoWaveTable:SetFrequencyPitchBend(FrequencyOffsetCents) end
---@param FrequencyHz float
function USynthComponentMonoWaveTable:SetFrequency(FrequencyHz) end
---@param InSustainGain float
function USynthComponentMonoWaveTable:SetFilterEnvelopeSustainGain(InSustainGain) end
---@param InReleaseTimeMsec float
function USynthComponentMonoWaveTable:SetFilterEnvelopeReleaseTime(InReleaseTimeMsec) end
---@param InDecayTimeMsec float
function USynthComponentMonoWaveTable:SetFilterEnvelopenDecayTime(InDecayTimeMsec) end
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetFilterEnvelopeInvert(bInInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetFilterEnvelopeDepth(InDepth) end
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetFilterEnvelopeBiasInvert(bInBiasInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetFilterEnvelopeBiasDepth(InDepth) end
---@param InAttackTimeMsec float
function USynthComponentMonoWaveTable:SetFilterEnvelopeAttackTime(InAttackTimeMsec) end
---@param TableIndex int32
---@param KeyframeIndex int32
---@param NewValue float
---@return boolean
function USynthComponentMonoWaveTable:SetCurveValue(TableIndex, KeyframeIndex, NewValue) end
---@param TableIndex int32
---@param InNewTangent float
---@return boolean
function USynthComponentMonoWaveTable:SetCurveTangent(TableIndex, InNewTangent) end
---@param InterpolationType CurveInterpolationType
---@param TableIndex int32
---@return boolean
function USynthComponentMonoWaveTable:SetCurveInterpolationType(InterpolationType, TableIndex) end
---@param InSustainGain float
function USynthComponentMonoWaveTable:SetAmpEnvelopeSustainGain(InSustainGain) end
---@param InReleaseTimeMsec float
function USynthComponentMonoWaveTable:SetAmpEnvelopeReleaseTime(InReleaseTimeMsec) end
---@param bInInvert boolean
function USynthComponentMonoWaveTable:SetAmpEnvelopeInvert(bInInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetAmpEnvelopeDepth(InDepth) end
---@param InDecayTimeMsec float
function USynthComponentMonoWaveTable:SetAmpEnvelopeDecayTime(InDecayTimeMsec) end
---@param bInBiasInvert boolean
function USynthComponentMonoWaveTable:SetAmpEnvelopeBiasInvert(bInBiasInvert) end
---@param InDepth float
function USynthComponentMonoWaveTable:SetAmpEnvelopeBiasDepth(InDepth) end
---@param InAttackTimeMsec float
function USynthComponentMonoWaveTable:SetAmpEnvelopeAttackTime(InAttackTimeMsec) end
---@param Index int32
function USynthComponentMonoWaveTable:RefreshWaveTable(Index) end
function USynthComponentMonoWaveTable:RefreshAllWaveTables() end
---@param InMidiNote float
---@param InVelocity float
function USynthComponentMonoWaveTable:NoteOn(InMidiNote, InVelocity) end
---@param InMidiNote float
function USynthComponentMonoWaveTable:NoteOff(InMidiNote) end
---@return int32
function USynthComponentMonoWaveTable:GetNumTableEntries() end
---@return int32
function USynthComponentMonoWaveTable:GetMaxTableIndex() end
---@param TableIndex float
---@return TArray<float>
function USynthComponentMonoWaveTable:GetKeyFrameValuesForTable(TableIndex) end
---@param TableIndex int32
---@return float
function USynthComponentMonoWaveTable:GetCurveTangent(TableIndex) end


---@class USynthComponentToneGenerator : USynthComponent
---@field Frequency float
---@field Volume float
---@field DistanceAttenuationCurve FRuntimeFloatCurve
---@field DistanceRange FVector2D
---@field AttenuationDbAtMaxRange float
USynthComponentToneGenerator = {}

---@param InVolume float
function USynthComponentToneGenerator:SetVolume(InVolume) end
---@param InFrequency float
function USynthComponentToneGenerator:SetFrequency(InFrequency) end


---@class USynthKnob : UWidget
---@field Value float
---@field StepSize float
---@field MouseSpeed float
---@field MouseFineTuneSpeed float
---@field ShowTooltipInfo boolean
---@field ParameterName FText
---@field ParameterUnits FText
---@field ValueDelegate FSynthKnobValueDelegate
---@field WidgetStyle FSynthKnobStyle
---@field Locked boolean
---@field IsFocusable boolean
---@field OnMouseCaptureBegin FSynthKnobOnMouseCaptureBegin
---@field OnMouseCaptureEnd FSynthKnobOnMouseCaptureEnd
---@field OnControllerCaptureBegin FSynthKnobOnControllerCaptureBegin
---@field OnControllerCaptureEnd FSynthKnobOnControllerCaptureEnd
---@field OnValueChanged FSynthKnobOnValueChanged
USynthKnob = {}

---@param InValue float
function USynthKnob:SetValue(InValue) end
---@param InValue float
function USynthKnob:SetStepSize(InValue) end
---@param InValue boolean
function USynthKnob:SetLocked(InValue) end
---@return float
function USynthKnob:GetValue() end


---@class USynthSamplePlayer : USynthComponent
---@field SoundWave USoundWave
---@field OnSampleLoaded FSynthSamplePlayerOnSampleLoaded
---@field OnSamplePlaybackProgress FSynthSamplePlayerOnSamplePlaybackProgress
USynthSamplePlayer = {}

---@param InSoundWave USoundWave
function USynthSamplePlayer:SetSoundWave(InSoundWave) end
---@param InScrubTimeWidthSec float
function USynthSamplePlayer:SetScrubTimeWidth(InScrubTimeWidthSec) end
---@param bScrubMode boolean
function USynthSamplePlayer:SetScrubMode(bScrubMode) end
---@param InPitch float
---@param TimeSec float
function USynthSamplePlayer:SetPitch(InPitch, TimeSec) end
---@param TimeSec float
---@param SeekType ESamplePlayerSeekType
---@param bWrap boolean
function USynthSamplePlayer:SeekToTime(TimeSec, SeekType, bWrap) end
---@return boolean
function USynthSamplePlayer:IsLoaded() end
---@return float
function USynthSamplePlayer:GetSampleDuration() end
---@return float
function USynthSamplePlayer:GetCurrentPlaybackProgressTime() end
---@return float
function USynthSamplePlayer:GetCurrentPlaybackProgressPercent() end


---@class USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary
USynthesisUtilitiesBlueprintFunctionLibrary = {}

---@param InLinearValue float
---@param InDomainMin float
---@param InDomainMax float
---@param InRangeMin float
---@param InRangeMax float
---@return float
function USynthesisUtilitiesBlueprintFunctionLibrary:GetLogFrequency(InLinearValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax) end
---@param InLogFrequencyValue float
---@param InDomainMin float
---@param InDomainMax float
---@param InRangeMin float
---@param InRangeMax float
---@return float
function USynthesisUtilitiesBlueprintFunctionLibrary:GetLinearFrequency(InLogFrequencyValue, InDomainMin, InDomainMax, InRangeMin, InRangeMax) end


