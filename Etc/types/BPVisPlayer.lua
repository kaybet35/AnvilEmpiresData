---@meta

---@class ABpVisPlayer_C : AVisPlayer
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Camera UCameraComponent
ABpVisPlayer_C = {}

---@param NightTimeNormalized float
function ABpVisPlayer_C:BP_UpdateNightShroudMaterials(NightTimeNormalized) end
---@param EntryPoint int32
function ABpVisPlayer_C:ExecuteUbergraph_BpVisPlayer(EntryPoint) end


