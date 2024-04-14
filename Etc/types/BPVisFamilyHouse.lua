---@meta

---@class ABPVisFamilyHouse_C : AVisFamilyInventory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SmokeStack1 UNiagaraComponent
---@field SmokeStack UNiagaraComponent
---@field VisStaticMesh_Roof UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field VisStaticMesh3 UVisStaticMeshComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyHouse_C = {}

function ABPVisFamilyHouse_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyHouse_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyHouse_C:ExecuteUbergraph_BPVisFamilyHouse(EntryPoint) end


