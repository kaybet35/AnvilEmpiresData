---@meta

---@class ABPVisSmallCamp_C : AVisTownCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisStaticMesh4 UVisStaticMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
local ABPVisSmallCamp_C = {}

---@param DeltaSeconds float
function ABPVisSmallCamp_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisSmallCamp_C:ExecuteUbergraph_BPVisSmallCamp(EntryPoint) end


