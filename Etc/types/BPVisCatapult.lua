---@meta

---@class ABPVisCatapult_C : AVisVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Projectile USkeletalMeshComponent
---@field MountedWeaponData UMountedWeaponDataComponent
---@field SkeletalMesh USkeletalMeshComponent
local ABPVisCatapult_C = {}

---@param DeltaSeconds float
function ABPVisCatapult_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisCatapult_C:ExecuteUbergraph_BPVisCatapult(EntryPoint) end


