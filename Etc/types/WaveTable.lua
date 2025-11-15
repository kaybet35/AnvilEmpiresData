---@meta

---@class FWaveTableBankEntry
---@field Transform FWaveTableTransform
local FWaveTableBankEntry = {}



---@class FWaveTableSettings
---@field FilePath FFilePath
---@field ChannelIndex int32
---@field Phase float
---@field Top float
---@field Tail float
---@field FadeIn float
---@field FadeOut float
---@field bNormalize boolean
---@field bRemoveOffset boolean
---@field SourcePCMData TArray<float>
local FWaveTableSettings = {}



---@class FWaveTableTransform
---@field Curve EWaveTableCurve
---@field Scalar float
---@field CurveCustom FRichCurve
---@field CurveShared UCurveFloat
---@field WaveTable TArray<float>
local FWaveTableTransform = {}



---@class UWaveTableBank : UObject
---@field Resolution EWaveTableResolution
---@field bBipolar boolean
---@field Entries TArray<FWaveTableBankEntry>
local UWaveTableBank = {}



