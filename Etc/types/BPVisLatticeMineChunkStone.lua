---@meta

---@class ABPVisLatticeMineChunkStone_C : AVisActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VisStaticMesh1 UVisStaticMeshComponent
---@field MeshVisibilityData UMeshVisibilityDataComponent
---@field Box UBoxComponent
---@field VisStaticMesh UVisStaticMeshComponent
ABPVisLatticeMineChunkStone_C = {}

function ABPVisLatticeMineChunkStone_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPVisLatticeMineChunkStone_C:ExecuteUbergraph_BPVisLatticeMineChunkStone(EntryPoint) end


