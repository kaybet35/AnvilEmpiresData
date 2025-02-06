---@meta

---@class ABPVisHandcrankAdapter_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field PowerUnitData UPowerUnitDataComponent
ABPVisHandcrankAdapter_C = {}

---@param DeltaSeconds float
function ABPVisHandcrankAdapter_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisHandcrankAdapter_C:ExecuteUbergraph_BPVisHandcrankAdapter(EntryPoint) end


