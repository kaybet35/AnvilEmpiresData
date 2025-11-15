---@meta

---@class ABPVisFishingSpot_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fish UParticleSystemComponent
---@field FishRing UNiagaraComponent
---@field DefaultSceneRoot USceneComponent
local ABPVisFishingSpot_C = {}

function ABPVisFishingSpot_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisFishingSpot_C:ExecuteUbergraph_BPVisFishingSpot(EntryPoint) end


