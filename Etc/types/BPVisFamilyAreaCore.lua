---@meta

---@class ABPVisFamilyAreaCore_C : AVisFamilyMarkerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisStaticMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field FamilyArea UDecalComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyAreaCore_C = {}

---@param DeltaSeconds float
function ABPVisFamilyAreaCore_C:ReceiveTick(DeltaSeconds) end
function ABPVisFamilyAreaCore_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFamilyAreaCore_C:ExecuteUbergraph_BPVisFamilyAreaCore(EntryPoint) end


