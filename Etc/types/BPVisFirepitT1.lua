---@meta

---@class ABPVisFirepitT1_C : AVisCookingStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Refining UNiagaraComponent
---@field Burning UNiagaraComponent
---@field Fuelled UNiagaraComponent
---@field Fire USceneComponent
---@field RefiningAssets1 UVisStaticMeshComponent
---@field PopulatedAssets UVisStaticMeshComponent
---@field RefiningAssets UVisStaticMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field Campfire_Cue UAudioComponent
ABPVisFirepitT1_C = {}

function ABPVisFirepitT1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFirepitT1_C:ExecuteUbergraph_BPVisFirepitT1(EntryPoint) end


