---@meta

---@class ABPVisFamilyAreaMarker_C : AVisFamilyMarkerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field FamilyArea UDecalComponent
---@field FamilyAreaFlagMesh UVisStaticMeshComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyAreaMarker_C = {}

---@param DeltaSeconds float
function ABPVisFamilyAreaMarker_C:ReceiveTick(DeltaSeconds) end
function ABPVisFamilyAreaMarker_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFamilyAreaMarker_C:ExecuteUbergraph_BPVisFamilyAreaMarker(EntryPoint) end


