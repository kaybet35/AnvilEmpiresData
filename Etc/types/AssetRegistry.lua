---@meta

---@class FAssetRegistryDependencyOptions
---@field bIncludeSoftPackageReferences boolean
---@field bIncludeHardPackageReferences boolean
---@field bIncludeSearchableNames boolean
---@field bIncludeSoftManagementReferences boolean
---@field bIncludeHardManagementReferences boolean
FAssetRegistryDependencyOptions = {}



---@class FTagAndValue
---@field Tag FName
---@field Value FString
FTagAndValue = {}



---@class IAssetRegistry : IInterface
IAssetRegistry = {}

---@param PackageName FString
function IAssetRegistry:WaitForPackage(PackageName) end
function IAssetRegistry:WaitForCompletion() end
---@param AssetDataList TArray<FAssetData>
---@param Filter FARFilter
function IAssetRegistry:UseFilterToExcludeAssets(AssetDataList, Filter) end
---@param bSynchronousSearch boolean
function IAssetRegistry:SearchAllAssets(bSynchronousSearch) end
---@param InPaths TArray<FString>
---@param bForceRescan boolean
---@param bIgnoreDenyListScanFilters boolean
function IAssetRegistry:ScanPathsSynchronous(InPaths, bForceRescan, bIgnoreDenyListScanFilters) end
---@param InFilePaths TArray<FString>
function IAssetRegistry:ScanModifiedAssetFiles(InFilePaths) end
---@param InFilePaths TArray<FString>
---@param bForceRescan boolean
function IAssetRegistry:ScanFilesSynchronous(InFilePaths, bForceRescan) end
---@param AssetDataList TArray<FAssetData>
---@param Filter FARFilter
function IAssetRegistry:RunAssetsThroughFilter(AssetDataList, Filter) end
---@param PathToPrioritize FString
function IAssetRegistry:PrioritizeSearchPath(PathToPrioritize) end
---@param PackageName FName
---@param ReferenceOptions FAssetRegistryDependencyOptions
---@param OutReferencers TArray<FName>
---@return boolean
function IAssetRegistry:K2_GetReferencers(PackageName, ReferenceOptions, OutReferencers) end
---@param PackageName FName
---@param DependencyOptions FAssetRegistryDependencyOptions
---@param OutDependencies TArray<FName>
---@return boolean
function IAssetRegistry:K2_GetDependencies(PackageName, DependencyOptions, OutDependencies) end
---@param ObjectPath FSoftObjectPath
---@param bIncludeOnlyOnDiskAssets boolean
---@return FAssetData
function IAssetRegistry:K2_GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets) end
---@return boolean
function IAssetRegistry:IsSearchAsync() end
---@return boolean
function IAssetRegistry:IsSearchAllAssets() end
---@return boolean
function IAssetRegistry:IsLoadingAssets() end
---@param PackagePath FName
---@param bRecursive boolean
---@return boolean
function IAssetRegistry:HasAssets(PackagePath, bRecursive) end
---@param InBasePath FString
---@param OutPathList TArray<FString>
---@param bInRecurse boolean
function IAssetRegistry:GetSubPaths(InBasePath, OutPathList, bInRecurse) end
---@param ClassNames TArray<FTopLevelAssetPath>
---@param ExcludedClassNames TSet<FTopLevelAssetPath>
---@param OutDerivedClassNames TSet<FTopLevelAssetPath>
function IAssetRegistry:GetDerivedClassNames(ClassNames, ExcludedClassNames, OutDerivedClassNames) end
---@param PackagePaths TArray<FName>
---@param OutAssetData TArray<FAssetData>
---@param bRecursive boolean
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAssetsByPaths(PackagePaths, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets) end
---@param PackagePath FName
---@param OutAssetData TArray<FAssetData>
---@param bRecursive boolean
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAssetsByPath(PackagePath, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets) end
---@param PackageName FName
---@param OutAssetData TArray<FAssetData>
---@param bIncludeOnlyOnDiskAssets boolean
---@param bSkipARFilteredAssets boolean
---@return boolean
function IAssetRegistry:GetAssetsByPackageName(PackageName, OutAssetData, bIncludeOnlyOnDiskAssets, bSkipARFilteredAssets) end
---@param ClassPathName FTopLevelAssetPath
---@param OutAssetData TArray<FAssetData>
---@param bSearchSubClasses boolean
---@return boolean
function IAssetRegistry:GetAssetsByClass(ClassPathName, OutAssetData, bSearchSubClasses) end
---@param Filter FARFilter
---@param OutAssetData TArray<FAssetData>
---@param bSkipARFilteredAssets boolean
---@return boolean
function IAssetRegistry:GetAssets(Filter, OutAssetData, bSkipARFilteredAssets) end
---@param ObjectPath FName
---@param bIncludeOnlyOnDiskAssets boolean
---@return FAssetData
function IAssetRegistry:GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets) end
---@param ClassPathName FTopLevelAssetPath
---@param OutAncestorClassNames TArray<FTopLevelAssetPath>
---@return boolean
function IAssetRegistry:GetAncestorClassNames(ClassPathName, OutAncestorClassNames) end
---@param OutPathList TArray<FString>
function IAssetRegistry:GetAllCachedPaths(OutPathList) end
---@param OutAssetData TArray<FAssetData>
---@param bIncludeOnlyOnDiskAssets boolean
---@return boolean
function IAssetRegistry:GetAllAssets(OutAssetData, bIncludeOnlyOnDiskAssets) end


---@class UAssetRegistryHelpers : UObject
UAssetRegistryHelpers = {}

---@param InAssetData FAssetData
---@return FSoftObjectPath
function UAssetRegistryHelpers:ToSoftObjectPath(InAssetData) end
---@param InFilter FARFilter
---@param InTagsAndValues TArray<FTagAndValue>
---@return FARFilter
function UAssetRegistryHelpers:SetFilterTagsAndValues(InFilter, InTagsAndValues) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsValid(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsUAsset(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsRedirector(InAssetData) end
---@param InAssetData FAssetData
---@return boolean
function UAssetRegistryHelpers:IsAssetLoaded(InAssetData) end
---@param InAssetData FAssetData
---@param InTagName FName
---@param OutTagValue FString
---@return boolean
function UAssetRegistryHelpers:GetTagValue(InAssetData, InTagName, OutTagValue) end
---@param InAssetData FAssetData
---@return FString
function UAssetRegistryHelpers:GetFullName(InAssetData) end
---@param InAssetData FAssetData
---@return FString
function UAssetRegistryHelpers:GetExportTextName(InAssetData) end
---@param InAssetData FAssetData
---@return UClass
function UAssetRegistryHelpers:GetClass(InAssetData) end
---@param InFilter FARFilter
---@param OutAssetData TArray<FAssetData>
function UAssetRegistryHelpers:GetBlueprintAssets(InFilter, OutAssetData) end
---@return TScriptInterface<IAssetRegistry>
function UAssetRegistryHelpers:GetAssetRegistry() end
---@param InAssetData FAssetData
---@return UObject
function UAssetRegistryHelpers:GetAsset(InAssetData) end
---@param InAsset UObject
---@param bAllowBlueprintClass boolean
---@return FAssetData
function UAssetRegistryHelpers:CreateAssetData(InAsset, bAllowBlueprintClass) end


---@class UAssetRegistryImpl : UObject
UAssetRegistryImpl = {}


