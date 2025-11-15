---@meta

---@class UAssetTagsSubsystem : UEngineSubsystem
local UAssetTagsSubsystem = {}

---@param AssetPath FSoftObjectPath
---@return TArray<FName>
function UAssetTagsSubsystem:K2_GetCollectionsContainingAsset(AssetPath) end
---@param AssetPtr UObject
---@return TArray<FName>
function UAssetTagsSubsystem:GetCollectionsContainingAssetPtr(AssetPtr) end
---@param AssetData FAssetData
---@return TArray<FName>
function UAssetTagsSubsystem:GetCollectionsContainingAssetData(AssetData) end
---@param AssetPathName FName
---@return TArray<FName>
function UAssetTagsSubsystem:GetCollectionsContainingAsset(AssetPathName) end
---@return TArray<FName>
function UAssetTagsSubsystem:GetCollections() end
---@param Name FName
---@return TArray<FAssetData>
function UAssetTagsSubsystem:GetAssetsInCollection(Name) end
---@param Name FName
---@return boolean
function UAssetTagsSubsystem:CollectionExists(Name) end


