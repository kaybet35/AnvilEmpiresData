---@meta

---@class UBPBasicSS_C : USceneComponent
---@field UberGraphFrame FPointerToUberGraphFrame
UBPBasicSS_C = {}

function UBPBasicSS_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function UBPBasicSS_C:ExecuteUbergraph_BPBasicSS(EntryPoint) end


