---@meta

---@class ABPVisLatticeMineChunkIron_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Box UBoxComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisLatticeMineChunkIron_C = {}

function ABPVisLatticeMineChunkIron_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisLatticeMineChunkIron_C:ExecuteUbergraph_BPVisLatticeMineChunkIron(EntryPoint) end


