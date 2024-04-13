---@meta

---@class ABPVisFamilyAreaCoreT3_C : AVisFamilyMarkerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisStaticMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field FamilyArea UDecalComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyAreaCoreT3_C = {}

---@param DeltaSeconds float
function ABPVisFamilyAreaCoreT3_C:ReceiveTick(DeltaSeconds) end
function ABPVisFamilyAreaCoreT3_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFamilyAreaCoreT3_C:ExecuteUbergraph_BPVisFamilyAreaCoreT3(EntryPoint) end


