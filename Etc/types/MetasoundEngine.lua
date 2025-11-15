---@meta

---@class FDefaultMetaSoundAssetAutoUpdateSettings
---@field Metasound FSoftObjectPath
local FDefaultMetaSoundAssetAutoUpdateSettings = {}



---@class FMetaSoundAssetDirectory
---@field Directory FDirectoryPath
local FMetaSoundAssetDirectory = {}



---@class FMetaSoundAsyncAssetDependencies
---@field Metasound UObject
local FMetaSoundAsyncAssetDependencies = {}



---@class UMetaSoundAssetSubsystem : UEngineSubsystem
---@field LoadingDependencies TArray<FMetaSoundAsyncAssetDependencies>
local UMetaSoundAssetSubsystem = {}

---@param Directories TArray<FMetaSoundAssetDirectory>
function UMetaSoundAssetSubsystem:UnregisterAssetClassesInDirectories(Directories) end
---@param Directories TArray<FMetaSoundAssetDirectory>
function UMetaSoundAssetSubsystem:RegisterAssetClassesInDirectories(Directories) end


---@class UMetaSoundPatch : UObject
---@field RootMetaSoundDocument FMetasoundFrontendDocument
---@field ReferencedAssetClassKeys TSet<FString>
---@field ReferencedAssetClassObjects TSet<UObject>
---@field ReferenceAssetClassCache TSet<FSoftObjectPath>
---@field AssetClassID FGuid
local UMetaSoundPatch = {}



---@class UMetaSoundSettings : UDeveloperSettings
---@field bAutoUpdateEnabled boolean
---@field AutoUpdateDenylist TArray<FMetasoundFrontendClassName>
---@field AutoUpdateAssetDenylist TArray<FDefaultMetaSoundAssetAutoUpdateSettings>
---@field bAutoUpdateLogWarningOnDroppedConnection boolean
---@field DirectoriesToRegister TArray<FDirectoryPath>
---@field DenyListCacheChangeID int32
local UMetaSoundSettings = {}



---@class UMetaSoundSource : USoundWaveProcedural
---@field RootMetaSoundDocument FMetasoundFrontendDocument
---@field ReferencedAssetClassKeys TSet<FString>
---@field ReferencedAssetClassObjects TSet<UObject>
---@field ReferenceAssetClassCache TSet<FSoftObjectPath>
---@field OutputFormat EMetasoundSourceAudioFormat
---@field AssetClassID FGuid
local UMetaSoundSource = {}



---@class UMetasoundEditorGraphBase : UEdGraph
local UMetasoundEditorGraphBase = {}


