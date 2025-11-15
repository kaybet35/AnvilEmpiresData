---@meta

---@class AVisBloodSplatter_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Decal UDecalComponent
---@field DefaultSceneRoot USceneComponent
local AVisBloodSplatter_C = {}

function AVisBloodSplatter_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AVisBloodSplatter_C:ExecuteUbergraph_VisBloodSplatter(EntryPoint) end


