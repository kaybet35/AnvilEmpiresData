---@meta

---@class ABPVisBurningOilprojectile_C : AVisProjectile
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Decal UDecalComponent
---@field Audio UAudioComponent
ABPVisBurningOilprojectile_C = {}

function ABPVisBurningOilprojectile_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisBurningOilprojectile_C:ExecuteUbergraph_BPVisBurningOilprojectile(EntryPoint) end


