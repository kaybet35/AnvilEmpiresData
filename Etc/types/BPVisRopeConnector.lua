---@meta

---@class ABPVisRopeConnector_C : AVisStructure
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field VisStaticMesh UVisStaticMeshComponent
---@field PowerUnitData UPowerUnitDataComponent
local ABPVisRopeConnector_C = {}

---@param DeltaSeconds float
function ABPVisRopeConnector_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisRopeConnector_C:ExecuteUbergraph_BPVisRopeConnector(EntryPoint) end


