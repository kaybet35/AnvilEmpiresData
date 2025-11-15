#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "BlueprintPathsLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UBlueprintPathsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintPathsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString VideoCaptureDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ValidatePath(const FString& InPath, bool& bDidSucceed, FText& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Split(const FString& InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SourceConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldSaveToUserDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ShaderWorkingDir();
    
    UFUNCTION(BlueprintCallable)
    static void SetProjectFilePath(const FString& NewGameProjectFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SetExtension(const FString& InPath, const FString& InNewExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ScreenShotDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SandboxesDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RootDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RemoveDuplicateSlashes(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectUserDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectSavedDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectPluginsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectPersistentDownloadDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectModsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectLogDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectIntermediateDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectContentDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProjectConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ProfilingDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void NormalizeFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void NormalizeDirectoryName(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeValidFileName(const FString& InString, const FString& InReplacementChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeStandardFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakePlatformFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MakePathRelativeTo(const FString& InPath, const FString& InRelativeTo, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LaunchDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSamePath(const FString& PathA, const FString& PathB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRestrictedPath(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRelative(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsProjectFilePathSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDrive(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasProjectPersistentDownloadDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetToolTipLocalizationPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetRestrictedFolderNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRelativePathToRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetPropertyNameLocalizationPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectFilePath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPath(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetInvalidFileSystemChars();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetGameLocalizationPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetExtension(const FString& InPath, bool bIncludeDot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetEngineLocalizationPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetEditorLocalizationPaths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCleanFilename(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBaseFilename(const FString& InPath, bool bRemovePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GeneratedConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GameUserDeveloperDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GameSourceDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GameDevelopersDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GameAgnosticSavedDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FileExists(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FeaturePackDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EnterprisePluginsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EnterpriseFeaturePackDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EnterpriseDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineVersionAgnosticUserDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineUserDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineSourceDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineSavedDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EnginePluginsDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineIntermediateDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineContentDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EngineConfigDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DirectoryExists(const FString& InPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DiffDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateTempFilename(const FString& Path, const FString& Prefix, const FString& Extension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertToSandboxPath(const FString& InPath, const FString& InSandboxName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertRelativePathToFull(const FString& InPath, const FString& InBasePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertFromSandboxPath(const FString& InPath, const FString& InSandboxName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Combine(const TArray<FString>& InPaths);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CollapseRelativeDirectories(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CloudDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ChangeExtension(const FString& InPath, const FString& InNewExtension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BugItDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AutomationTransientDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AutomationLogDir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AutomationDir();
    
};

