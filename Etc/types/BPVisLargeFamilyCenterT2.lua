---@meta

---@class ABPVisLargeFamilyCenterT2_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Stairs2 UVisStaticMeshComponent
---@field Stairs3 UVisStaticMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field Stairs1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisLargeFamilyCenterT2_C = {}

function ABPVisLargeFamilyCenterT2_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisLargeFamilyCenterT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisLargeFamilyCenterT2_C:ExecuteUbergraph_BPVisLargeFamilyCenterT2(EntryPoint) end


