---@meta

---@class ABPVisTavernT2_C : AVisRefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RoofCollapsed UVisStaticMeshComponent
---@field HouseMeshCollapsed UVisStaticMeshComponent
---@field WetDecal2 UDecalComponent
---@field WetDecal1 UDecalComponent
---@field Buff4 UVisStaticMeshComponent
---@field Buff1 UVisStaticMeshComponent
---@field Buff2 UVisStaticMeshComponent
---@field Buff3 UVisStaticMeshComponent
---@field WetDecal UDecalComponent
---@field Bowls2 UVisStaticMeshComponent
---@field Bowls1 UVisStaticMeshComponent
---@field CuttingBoard UVisStaticMeshComponent
---@field TavernSign UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Decal1 UDecalComponent
---@field Decal UDecalComponent
---@field Floor UVisStaticMeshComponent
---@field TavernData UTavernDataComponent
---@field Garlic3 UVisStaticMeshComponent
---@field Pan1 UVisStaticMeshComponent
---@field Pan UVisStaticMeshComponent
---@field Bowls UVisStaticMeshComponent
---@field Garlic1 UVisStaticMeshComponent
---@field Garlic UVisStaticMeshComponent
---@field Barrels2 UVisStaticMeshComponent
---@field Barrels1 UVisStaticMeshComponent
---@field WorkshopFire2 UNiagaraComponent
---@field Candles2 UVisStaticMeshComponent
---@field WorkshopFire UNiagaraComponent
---@field WorkshopFire1 UNiagaraComponent
---@field Candles1 UVisStaticMeshComponent
---@field Candles UVisStaticMeshComponent
---@field Niagara UNiagaraComponent
---@field FireWood UVisStaticMeshComponent
---@field BPVisFamilyMeshComponent1 UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field Stairs UVisStaticMeshComponent
---@field SmokeStack UNiagaraComponent
---@field Roof UVisStaticMeshComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisTavernT2_C = {}

function ABPVisTavernT2_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisTavernT2_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisTavernT2_C:ExecuteUbergraph_BPVisTavernT2(EntryPoint) end


