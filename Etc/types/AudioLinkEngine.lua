---@meta

---@class IAudioLinkBlueprintInterface : IInterface
IAudioLinkBlueprintInterface = {}

function IAudioLinkBlueprintInterface:StopLink() end
---@param NewSound USoundBase
function IAudioLinkBlueprintInterface:SetLinkSound(NewSound) end
---@param StartTime float
function IAudioLinkBlueprintInterface:PlayLink(StartTime) end
---@return boolean
function IAudioLinkBlueprintInterface:IsLinkPlaying() end


