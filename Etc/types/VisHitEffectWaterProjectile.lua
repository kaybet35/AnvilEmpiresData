---@meta

---@class AVisHitEffectWaterProjectile_C : AVisEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Impact UParticleSystemComponent
---@field Decal UDecalComponent
AVisHitEffectWaterProjectile_C = {}

function AVisHitEffectWaterProjectile_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AVisHitEffectWaterProjectile_C:ExecuteUbergraph_VisHitEffectWaterProjectile(EntryPoint) end


