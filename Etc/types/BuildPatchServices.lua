---@meta

---@class FChunkInfoData
---@field Guid FGuid
---@field Hash uint64
---@field ShaHash FSHAHashData
---@field FileSize int64
---@field GroupNumber uint8
local FChunkInfoData = {}



---@class FChunkPartData
---@field Guid FGuid
---@field Offset uint32
---@field Size uint32
local FChunkPartData = {}



---@class FCustomFieldData
---@field Key FString
---@field Value FString
local FCustomFieldData = {}



---@class FFileManifestData
---@field Filename FString
---@field FileHash FSHAHashData
---@field FileChunkParts TArray<FChunkPartData>
---@field InstallTags TArray<FString>
---@field bIsUnixExecutable boolean
---@field SymlinkTarget FString
---@field bIsReadOnly boolean
---@field bIsCompressed boolean
local FFileManifestData = {}



---@class FSHAHashData
---@field Hash uint8
local FSHAHashData = {}



---@class UBuildPatchManifest : UObject
---@field ManifestFileVersion uint8
---@field bIsFileData boolean
---@field AppID uint32
---@field AppName FString
---@field BuildVersion FString
---@field LaunchExe FString
---@field LaunchCommand FString
---@field PrereqIds TSet<FString>
---@field PrereqName FString
---@field PrereqPath FString
---@field PrereqArgs FString
---@field FileManifestList TArray<FFileManifestData>
---@field ChunkList TArray<FChunkInfoData>
---@field CustomFields TArray<FCustomFieldData>
local UBuildPatchManifest = {}



