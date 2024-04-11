---@meta

---@class ABPVisFarmArea_C : AVisFarm
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FertilizerDecal02 UDecalComponent
ABPVisFarmArea_C = {}

function ABPVisFarmArea_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFarmArea_C:ExecuteUbergraph_BPVisFarmArea(EntryPoint) end


