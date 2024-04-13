---@meta

---@class ABPVisFamilyAreaCoreT2_C : AVisFamilyMarkerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FamilyArea UDecalComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyAreaCoreT2_C = {}

---@param DeltaSeconds float
function ABPVisFamilyAreaCoreT2_C:ReceiveTick(DeltaSeconds) end
function ABPVisFamilyAreaCoreT2_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFamilyAreaCoreT2_C:ExecuteUbergraph_BPVisFamilyAreaCoreT2(EntryPoint) end


