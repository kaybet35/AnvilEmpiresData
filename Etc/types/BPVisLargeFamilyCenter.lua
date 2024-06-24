---@meta

---@class ABPVisLargeFamilyCenter_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Stairs2 UVisStaticMeshComponent
---@field Stairs3 UVisStaticMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field Stairs1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisLargeFamilyCenter_C = {}

function ABPVisLargeFamilyCenter_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisLargeFamilyCenter_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisLargeFamilyCenter_C:ExecuteUbergraph_BPVisLargeFamilyCenter(EntryPoint) end


