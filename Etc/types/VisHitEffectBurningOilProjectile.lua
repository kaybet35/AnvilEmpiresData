---@meta

---@class AVisHitEffectBurningOilProjectile_C : AVisEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Impact UParticleSystemComponent
---@field Decal UDecalComponent
local AVisHitEffectBurningOilProjectile_C = {}

function AVisHitEffectBurningOilProjectile_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AVisHitEffectBurningOilProjectile_C:ExecuteUbergraph_VisHitEffectBurningOilProjectile(EntryPoint) end


