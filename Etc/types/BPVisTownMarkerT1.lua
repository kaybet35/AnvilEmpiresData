---@meta

---@class ABPVisTownMarkerT1_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field Audio UAudioComponent
---@field VisTownAreaMarkerDecal1 UVisTownAreaMarkerDecalComponent
---@field VisTownAreaMarkerDecal UVisTownAreaMarkerDecalComponent
---@field Mesh UStaticMeshComponent
---@field RangeMarkerVisibility boolean
ABPVisTownMarkerT1_C = {}

---@param DeltaSeconds float
function ABPVisTownMarkerT1_C:ReceiveTick(DeltaSeconds) end
function ABPVisTownMarkerT1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisTownMarkerT1_C:ExecuteUbergraph_BPVisTownMarkerT1(EntryPoint) end


