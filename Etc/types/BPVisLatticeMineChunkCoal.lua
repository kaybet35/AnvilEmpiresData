---@meta

---@class ABPVisLatticeMineChunkCoal_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Box UBoxComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisLatticeMineChunkCoal_C = {}

function ABPVisLatticeMineChunkCoal_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisLatticeMineChunkCoal_C:ExecuteUbergraph_BPVisLatticeMineChunkCoal(EntryPoint) end


