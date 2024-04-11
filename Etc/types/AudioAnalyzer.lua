---@meta

---@class UAudioAnalyzer : UObject
---@field AudioBus UAudioBus
---@field AudioAnalyzerSubsystem UAudioAnalyzerSubsystem
UAudioAnalyzer = {}

---@param WorldContextObject UObject
function UAudioAnalyzer:StopAnalyzing(WorldContextObject) end
---@param WorldContextObject UObject
---@param AudioBusToAnalyze UAudioBus
function UAudioAnalyzer:StartAnalyzing(WorldContextObject, AudioBusToAnalyze) end


---@class UAudioAnalyzerAssetBase : UObject
UAudioAnalyzerAssetBase = {}


---@class UAudioAnalyzerNRT : UAudioAnalyzerAssetBase
---@field Sound USoundWave
---@field DurationInSeconds float
UAudioAnalyzerNRT = {}



---@class UAudioAnalyzerNRTSettings : UAudioAnalyzerAssetBase
UAudioAnalyzerNRTSettings = {}


---@class UAudioAnalyzerSettings : UAudioAnalyzerAssetBase
UAudioAnalyzerSettings = {}


---@class UAudioAnalyzerSubsystem : UEngineSubsystem
---@field AudioAnalyzers TArray<UAudioAnalyzer>
UAudioAnalyzerSubsystem = {}



