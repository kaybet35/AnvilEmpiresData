---@meta

---@class ABPVisFamilyAreaCore_C : AVisFamilyMarkerArea
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyAreaCore_C = {}

function ABPVisFamilyAreaCore_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyAreaCore_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyAreaCore_C:ExecuteUbergraph_BPVisFamilyAreaCore(EntryPoint) end


