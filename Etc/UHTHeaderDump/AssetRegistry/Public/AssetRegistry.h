#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ARFilter -FallbackName=ARFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=TopLevelAssetPath -FallbackName=TopLevelAssetPath
#include "AssetRegistryDependencyOptions.h"
#include "AssetRegistry.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UAssetRegistry : public UInterface {
    GENERATED_BODY()
};

class IAssetRegistry : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void WaitForPackage(const FString& PackageName) PURE_VIRTUAL(WaitForPackage,);
    
    UFUNCTION(BlueprintCallable)
    virtual void WaitForCompletion() PURE_VIRTUAL(WaitForCompletion,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UseFilterToExcludeAssets(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const PURE_VIRTUAL(UseFilterToExcludeAssets,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SearchAllAssets(bool bSynchronousSearch) PURE_VIRTUAL(SearchAllAssets,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters) PURE_VIRTUAL(ScanPathsSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths) PURE_VIRTUAL(ScanModifiedAssetFiles,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan) PURE_VIRTUAL(ScanFilesSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RunAssetsThroughFilter(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const PURE_VIRTUAL(RunAssetsThroughFilter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void PrioritizeSearchPath(const FString& PathToPrioritize) PURE_VIRTUAL(PrioritizeSearchPath,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) const PURE_VIRTUAL(K2_GetReferencers, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) const PURE_VIRTUAL(K2_GetDependencies, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FAssetData K2_GetAssetByObjectPath(const FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(K2_GetAssetByObjectPath, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsSearchAsync() const PURE_VIRTUAL(IsSearchAsync, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsSearchAllAssets() const PURE_VIRTUAL(IsSearchAllAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLoadingAssets() const PURE_VIRTUAL(IsLoadingAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAssets(const FName PackagePath, const bool bRecursive) const PURE_VIRTUAL(HasAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetSubPaths(const FString& InBasePath, TArray<FString>& OutPathList, bool bInRecurse) const PURE_VIRTUAL(GetSubPaths,);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetDerivedClassNames(const TArray<FTopLevelAssetPath>& ClassNames, const TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>& OutDerivedClassNames) const PURE_VIRTUAL(GetDerivedClassNames,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByPaths(TArray<FName> PackagePaths, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetsByPaths, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetsByPath, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets) const PURE_VIRTUAL(GetAssetsByPackageName, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByClass(FTopLevelAssetPath ClassPathName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const PURE_VIRTUAL(GetAssetsByClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets) const PURE_VIRTUAL(GetAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetByObjectPath, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAncestorClassNames(FTopLevelAssetPath ClassPathName, TArray<FTopLevelAssetPath>& OutAncestorClassNames) const PURE_VIRTUAL(GetAncestorClassNames, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetAllCachedPaths(TArray<FString>& OutPathList) const PURE_VIRTUAL(GetAllCachedPaths,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAllAssets, return false;);
    
};

