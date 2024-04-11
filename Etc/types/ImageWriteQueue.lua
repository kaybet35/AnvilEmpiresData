---@meta

---@class FImageWriteOptions
---@field Format EDesiredImageFormat
---@field OnComplete FImageWriteOptionsOnComplete
---@field CompressionQuality int32
---@field bOverwriteFile boolean
---@field bAsync boolean
FImageWriteOptions = {}



---@class UImageWriteBlueprintLibrary : UBlueprintFunctionLibrary
UImageWriteBlueprintLibrary = {}

---@param Texture UTexture
---@param Filename FString
---@param Options FImageWriteOptions
function UImageWriteBlueprintLibrary:ExportToDisk(Texture, Filename, Options) end


