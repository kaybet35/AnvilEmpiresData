---@meta

---@class FImgMediaSourceCustomizationSequenceProxy
FImgMediaSourceCustomizationSequenceProxy = {}


---@class UImgMediaSource : UBaseMediaSource
---@field IsPathRelativeToProjectRoot boolean
---@field FrameRateOverride FFrameRate
---@field ProxyOverride FString
---@field bFillGapsInSequence boolean
---@field SequencePath FDirectoryPath
UImgMediaSource = {}

---@param Path FString
function UImgMediaSource:SetTokenizedSequencePath(Path) end
---@param Path FString
function UImgMediaSource:SetSequencePath(Path) end
---@param Distance float
function UImgMediaSource:SetMipLevelDistance(Distance) end
---@param InActor AActor
function UImgMediaSource:RemoveTargetObject(InActor) end
---@param InActor AActor
function UImgMediaSource:RemoveGlobalCamera(InActor) end
---@return FString
function UImgMediaSource:GetSequencePath() end
---@param OutProxies TArray<FString>
function UImgMediaSource:GetProxies(OutProxies) end
---@param InActor AActor
function UImgMediaSource:AddTargetObject(InActor) end
---@param InActor AActor
function UImgMediaSource:AddGlobalCamera(InActor) end


