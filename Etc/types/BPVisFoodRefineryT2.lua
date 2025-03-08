---@meta

---@class ABPVisFoodRefineryT2_C : AVisRefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MillSmallActive2 UVisStaticMeshComponent
---@field Niagara1 UNiagaraComponent
---@field VisStaticMesh2 UVisStaticMeshComponent
---@field MillSmall2 UVisStaticMeshComponent
---@field RotateSpeed double
ABPVisFoodRefineryT2_C = {}

---@param DeltaSeconds float
function ABPVisFoodRefineryT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFoodRefineryT2_C:ExecuteUbergraph_BPVisFoodRefineryT2(EntryPoint) end


