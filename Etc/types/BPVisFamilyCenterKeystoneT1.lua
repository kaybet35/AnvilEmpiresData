---@meta

---@class ABPVisFamilyCenterKeystoneT1_C : AVisFamilyCenter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field BPVisFamilyMeshComponent UBPVisFamilyMeshComponent_C
---@field VisTeamMesh UVisTeamMeshComponent
---@field CollapsedMesh UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field HouseMesh UVisStaticMeshComponent
---@field GrassRemovalFamilyArea UGrassRemovalVolumeComponent
---@field Audio UAudioComponent
---@field RangeMarkerVisibility boolean
ABPVisFamilyCenterKeystoneT1_C = {}

function ABPVisFamilyCenterKeystoneT1_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABPVisFamilyCenterKeystoneT1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABPVisFamilyCenterKeystoneT1_C:ExecuteUbergraph_BPVisFamilyCenterKeystoneT1(EntryPoint) end


