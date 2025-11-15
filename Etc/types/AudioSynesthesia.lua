---@meta

---@class FLoudnessResults
---@field Loudness float
---@field NormalizedLoudness float
---@field PerceptualEnergy float
---@field TimeSeconds float
local FLoudnessResults = {}



---@class FMeterResults
---@field TimeSeconds float
---@field MeterValue float
---@field PeakValue float
---@field NumSamplesClipping int32
---@field ClippingValue float
local FMeterResults = {}



---@class FSynesthesiaSpectrumResults
---@field TimeSeconds float
---@field SpectrumValues TArray<float>
local FSynesthesiaSpectrumResults = {}



---@class UAudioSynesthesiaNRT : UAudioAnalyzerNRT
local UAudioSynesthesiaNRT = {}


---@class UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings
local UAudioSynesthesiaNRTSettings = {}


---@class UAudioSynesthesiaSettings : UAudioAnalyzerSettings
local UAudioSynesthesiaSettings = {}


---@class UConstantQNRT : UAudioSynesthesiaNRT
---@field Settings UConstantQNRTSettings
local UConstantQNRT = {}

---@param InSeconds float
---@param InChannel int32
---@param OutConstantQ TArray<float>
function UConstantQNRT:GetNormalizedChannelConstantQAtTime(InSeconds, InChannel, OutConstantQ) end
---@param InSeconds float
---@param InChannel int32
---@param OutConstantQ TArray<float>
function UConstantQNRT:GetChannelConstantQAtTime(InSeconds, InChannel, OutConstantQ) end


---@class UConstantQNRTSettings : UAudioSynesthesiaNRTSettings
---@field StartingFrequency float
---@field NumBands int32
---@field NumBandsPerOctave float
---@field AnalysisPeriod float
---@field bDownmixToMono boolean
---@field FFTSize EConstantQFFTSizeEnum
---@field WindowType EFFTWindowType
---@field SpectrumType EAudioSpectrumType
---@field BandWidthStretch float
---@field CQTNormalization EConstantQNormalizationEnum
---@field NoiseFloorDb float
local UConstantQNRTSettings = {}



---@class ULoudnessAnalyzer : UAudioAnalyzer
---@field Settings ULoudnessSettings
---@field OnOverallLoudnessResults FLoudnessAnalyzerOnOverallLoudnessResults
---@field OnPerChannelLoudnessResults FLoudnessAnalyzerOnPerChannelLoudnessResults
---@field OnLatestOverallLoudnessResults FLoudnessAnalyzerOnLatestOverallLoudnessResults
---@field OnLatestPerChannelLoudnessResults FLoudnessAnalyzerOnLatestPerChannelLoudnessResults
local ULoudnessAnalyzer = {}



---@class ULoudnessNRT : UAudioSynesthesiaNRT
---@field Settings ULoudnessNRTSettings
local ULoudnessNRT = {}

---@param InSeconds float
---@param OutLoudness float
function ULoudnessNRT:GetNormalizedLoudnessAtTime(InSeconds, OutLoudness) end
---@param InSeconds float
---@param InChannel int32
---@param OutLoudness float
function ULoudnessNRT:GetNormalizedChannelLoudnessAtTime(InSeconds, InChannel, OutLoudness) end
---@param InSeconds float
---@param OutLoudness float
function ULoudnessNRT:GetLoudnessAtTime(InSeconds, OutLoudness) end
---@param InSeconds float
---@param InChannel int32
---@param OutLoudness float
function ULoudnessNRT:GetChannelLoudnessAtTime(InSeconds, InChannel, OutLoudness) end


---@class ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings
---@field AnalysisPeriod float
---@field MinimumFrequency float
---@field MaximumFrequency float
---@field CurveType ELoudnessNRTCurveTypeEnum
---@field NoiseFloorDb float
local ULoudnessNRTSettings = {}



---@class ULoudnessSettings : UAudioSynesthesiaSettings
---@field AnalysisPeriod float
---@field MinimumFrequency float
---@field MaximumFrequency float
---@field CurveType ELoudnessCurveTypeEnum
---@field NoiseFloorDb float
---@field ExpectedMaxLoudness float
local ULoudnessSettings = {}



---@class UMeterAnalyzer : UAudioAnalyzer
---@field Settings UMeterSettings
---@field OnOverallMeterResults FMeterAnalyzerOnOverallMeterResults
---@field OnPerChannelMeterResults FMeterAnalyzerOnPerChannelMeterResults
---@field OnLatestOverallMeterResults FMeterAnalyzerOnLatestOverallMeterResults
---@field OnLatestPerChannelMeterResults FMeterAnalyzerOnLatestPerChannelMeterResults
local UMeterAnalyzer = {}



---@class UMeterSettings : UAudioSynesthesiaSettings
---@field AnalysisPeriod float
---@field PeakMode EMeterPeakType
---@field MeterAttackTime int32
---@field MeterReleaseTime int32
---@field PeakHoldTime int32
---@field ClippingThreshold float
local UMeterSettings = {}



---@class UOnsetNRT : UAudioSynesthesiaNRT
---@field Settings UOnsetNRTSettings
local UOnsetNRT = {}

---@param InStartSeconds float
---@param InEndSeconds float
---@param InChannel int32
---@param OutOnsetTimestamps TArray<float>
---@param OutOnsetStrengths TArray<float>
function UOnsetNRT:GetNormalizedChannelOnsetsBetweenTimes(InStartSeconds, InEndSeconds, InChannel, OutOnsetTimestamps, OutOnsetStrengths) end
---@param InStartSeconds float
---@param InEndSeconds float
---@param InChannel int32
---@param OutOnsetTimestamps TArray<float>
---@param OutOnsetStrengths TArray<float>
function UOnsetNRT:GetChannelOnsetsBetweenTimes(InStartSeconds, InEndSeconds, InChannel, OutOnsetTimestamps, OutOnsetStrengths) end


---@class UOnsetNRTSettings : UAudioSynesthesiaNRTSettings
---@field bDownmixToMono boolean
---@field GranularityInSeconds float
---@field Sensitivity float
---@field MinimumFrequency float
---@field MaximumFrequency float
local UOnsetNRTSettings = {}



---@class USynesthesiaSpectrumAnalysisSettings : UAudioSynesthesiaSettings
---@field AnalysisPeriod float
---@field FFTSize EFFTSize
---@field SpectrumType EAudioSpectrumType
---@field WindowType EFFTWindowType
---@field bDownmixToMono boolean
local USynesthesiaSpectrumAnalysisSettings = {}



---@class USynesthesiaSpectrumAnalyzer : UAudioAnalyzer
---@field Settings USynesthesiaSpectrumAnalysisSettings
---@field OnSpectrumResults FSynesthesiaSpectrumAnalyzerOnSpectrumResults
---@field OnLatestSpectrumResults FSynesthesiaSpectrumAnalyzerOnLatestSpectrumResults
local USynesthesiaSpectrumAnalyzer = {}

---@return int32
function USynesthesiaSpectrumAnalyzer:GetNumCenterFrequencies() end
---@param InSampleRate float
---@param OutCenterFrequencies TArray<float>
function USynesthesiaSpectrumAnalyzer:GetCenterFrequencies(InSampleRate, OutCenterFrequencies) end


