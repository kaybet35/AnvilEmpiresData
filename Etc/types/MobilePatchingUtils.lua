---@meta

---@class UMobileInstalledContent : UObject
local UMobileInstalledContent = {}

---@param PakOrder int32
---@param MountPoint FString
---@return boolean
function UMobileInstalledContent:Mount(PakOrder, MountPoint) end
---@return float
function UMobileInstalledContent:GetInstalledContentSize() end
---@return float
function UMobileInstalledContent:GetDiskFreeSpace() end


---@class UMobilePatchingLibrary : UBlueprintFunctionLibrary
local UMobilePatchingLibrary = {}

---@param RemoteManifestURL FString
---@param CloudURL FString
---@param InstallDirectory FString
---@param OnSucceeded FRequestContentOnSucceeded
---@param OnFailed FRequestContentOnFailed
function UMobilePatchingLibrary:RequestContent(RemoteManifestURL, CloudURL, InstallDirectory, OnSucceeded, OnFailed) end
---@return boolean
function UMobilePatchingLibrary:HasActiveWiFiConnection() end
---@return TArray<FString>
function UMobilePatchingLibrary:GetSupportedPlatformNames() end
---@param InstallDirectory FString
---@return UMobileInstalledContent
function UMobilePatchingLibrary:GetInstalledContent(InstallDirectory) end
---@return FString
function UMobilePatchingLibrary:GetActiveDeviceProfileName() end


---@class UMobilePendingContent : UMobileInstalledContent
local UMobilePendingContent = {}

---@param OnSucceeded FStartInstallOnSucceeded
---@param OnFailed FStartInstallOnFailed
function UMobilePendingContent:StartInstall(OnSucceeded, OnFailed) end
---@return float
function UMobilePendingContent:GetTotalDownloadedSize() end
---@return float
function UMobilePendingContent:GetRequiredDiskSpace() end
---@return float
function UMobilePendingContent:GetInstallProgress() end
---@return FText
function UMobilePendingContent:GetDownloadStatusText() end
---@return float
function UMobilePendingContent:GetDownloadSpeed() end
---@return float
function UMobilePendingContent:GetDownloadSize() end


