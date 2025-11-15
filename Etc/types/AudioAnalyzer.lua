---@meta

---@class UAudioAnalyzer : UObject
---@field AudioBus UAudioBus
---@field AudioAnalyzerSubsystem UAudioAnalyzerSubsystem
local UAudioAnalyzer = {}

---@param WorldContextObject UObject
function UAudioAnalyzer:StopAnalyzing(WorldContextObject) end
---@param WorldContextObject UObject
---@param AudioBusToAnalyze UAudioBus
function UAudioAnalyzer:StartAnalyzing(WorldContextObject, AudioBusToAnalyze) end


---@class UAudioAnalyzerAssetBase : UObject
local UAudioAnalyzerAssetBase = {}


---@class UAudioAnalyzerNRT : UAudioAnalyzerAssetBase
---@field Sound USoundWave
---@field DurationInSeconds float
local UAudioAnalyzerNRT = {}



---@class UAudioAnalyzerNRTSettings : UAudioAnalyzerAssetBase
local UAudioAnalyzerNRTSettings = {}


---@class UAudioAnalyzerSettings : UAudioAnalyzerAssetBase
local UAudioAnalyzerSettings = {}


---@class UAudioAnalyzerSubsystem : UEngineSubsystem
---@field AudioAnalyzers TArray<UAudioAnalyzer>
local UAudioAnalyzerSubsystem = {}



