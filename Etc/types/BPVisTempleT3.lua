---@meta

---@class ABPVisTempleT3_C : AVisRelicTechCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisTeamMesh UVisTeamMeshComponent
---@field Populate1 UVisStaticMeshComponent
---@field VisRoof UVisStaticMeshComponent
---@field Audio UAudioComponent
---@field SmokeStack2 UNiagaraComponent
---@field SmokeStack3 UNiagaraComponent
---@field SmokeStack UNiagaraComponent
---@field SmokeStack1 UNiagaraComponent
---@field Populate UVisStaticMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
ABPVisTempleT3_C = {}

function ABPVisTempleT3_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisTempleT3_C:ExecuteUbergraph_BPVisTempleT3(EntryPoint) end


