---@meta

---@class ABPVisLargeFamilyCenterT3_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Stairs2 UVisStaticMeshComponent
---@field Stairs3 UVisStaticMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field VisTeamMesh1 UVisTeamMeshComponent
---@field Stairs1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisLargeFamilyCenterT3_C = {}

function ABPVisLargeFamilyCenterT3_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisLargeFamilyCenterT3_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisLargeFamilyCenterT3_C:ExecuteUbergraph_BPVisLargeFamilyCenterT3(EntryPoint) end


