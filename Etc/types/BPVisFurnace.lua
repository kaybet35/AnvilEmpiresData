---@meta

---@class ABPVisFurnace_C : AVisFurnace
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Niagara UNiagaraComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field CookingSFX UAudioComponent
---@field FueledSFX UAudioComponent
---@field Refining UNiagaraComponent
---@field Fueled UNiagaraComponent
---@field VisStaticMesh UVisStaticMeshComponent
local ABPVisFurnace_C = {}

function ABPVisFurnace_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFurnace_C:ExecuteUbergraph_BPVisFurnace(EntryPoint) end


