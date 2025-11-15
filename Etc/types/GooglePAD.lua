---@meta

---@class UGooglePADFunctionLibrary : UBlueprintFunctionLibrary
local UGooglePADFunctionLibrary = {}

---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:ShowCellularDataConfirmation() end
---@param Name FString
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:RequestRemoval(Name) end
---@param AssetPacks TArray<FString>
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:RequestInfo(AssetPacks) end
---@param AssetPacks TArray<FString>
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:RequestDownload(AssetPacks) end
---@param State int32
function UGooglePADFunctionLibrary:ReleaseDownloadState(State) end
---@param Location int32
function UGooglePADFunctionLibrary:ReleaseAssetPackLocation(Location) end
---@param State int32
---@return int32
function UGooglePADFunctionLibrary:GetTotalBytesToDownload(State) end
---@param Location int32
---@return EGooglePADStorageMethod
function UGooglePADFunctionLibrary:GetStorageMethod(Location) end
---@param Status EGooglePADCellularDataConfirmStatus
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:GetShowCellularDataConfirmationStatus(Status) end
---@param State int32
---@return EGooglePADDownloadStatus
function UGooglePADFunctionLibrary:GetDownloadStatus(State) end
---@param Name FString
---@param State int32
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:GetDownloadState(Name, State) end
---@param State int32
---@return int32
function UGooglePADFunctionLibrary:GetBytesDownloaded(State) end
---@param Location int32
---@return FString
function UGooglePADFunctionLibrary:GetAssetsPath(Location) end
---@param Name FString
---@param Location int32
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:GetAssetPackLocation(Name, Location) end
---@param AssetPacks TArray<FString>
---@return EGooglePADErrorCode
function UGooglePADFunctionLibrary:CancelDownload(AssetPacks) end


