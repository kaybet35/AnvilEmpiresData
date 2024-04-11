#ifndef UE4SS_SDK_MetasoundEngine_HPP
#define UE4SS_SDK_MetasoundEngine_HPP

#include "MetasoundEngine_enums.hpp"

struct FDefaultMetaSoundAssetAutoUpdateSettings
{
    FSoftObjectPath Metasound;                                                        // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMetaSoundAssetDirectory
{
    FDirectoryPath Directory;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMetaSoundAsyncAssetDependencies
{
    class UObject* Metasound;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x30

class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
    TArray<FMetaSoundAsyncAssetDependencies> LoadingDependencies;                     // 0x0038 (size: 0x10)

    void UnregisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    void RegisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
}; // Size: 0x1E0

class UMetaSoundPatch : public UObject
{
    FMetasoundFrontendDocument RootMetaSoundDocument;                                 // 0x0090 (size: 0x1C8)
    TSet<FString> ReferencedAssetClassKeys;                                           // 0x0258 (size: 0x50)
    TSet<UObject*> ReferencedAssetClassObjects;                                       // 0x02A8 (size: 0x50)
    TSet<FSoftObjectPath> ReferenceAssetClassCache;                                   // 0x02F8 (size: 0x50)
    FGuid AssetClassID;                                                               // 0x0348 (size: 0x10)

}; // Size: 0x358

class UMetaSoundSettings : public UDeveloperSettings
{
    bool bAutoUpdateEnabled;                                                          // 0x0038 (size: 0x1)
    TArray<FMetasoundFrontendClassName> AutoUpdateDenylist;                           // 0x0040 (size: 0x10)
    TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;         // 0x0050 (size: 0x10)
    bool bAutoUpdateLogWarningOnDroppedConnection;                                    // 0x0060 (size: 0x1)
    TArray<FDirectoryPath> DirectoriesToRegister;                                     // 0x0068 (size: 0x10)
    int32 DenyListCacheChangeID;                                                      // 0x0078 (size: 0x4)

}; // Size: 0x80

class UMetaSoundSource : public USoundWaveProcedural
{
    FMetasoundFrontendDocument RootMetaSoundDocument;                                 // 0x0508 (size: 0x1C8)
    TSet<FString> ReferencedAssetClassKeys;                                           // 0x06D0 (size: 0x50)
    TSet<UObject*> ReferencedAssetClassObjects;                                       // 0x0720 (size: 0x50)
    TSet<FSoftObjectPath> ReferenceAssetClassCache;                                   // 0x0770 (size: 0x50)
    EMetasoundSourceAudioFormat OutputFormat;                                         // 0x07C0 (size: 0x1)
    FGuid AssetClassID;                                                               // 0x07C4 (size: 0x10)

}; // Size: 0x7E0

class UMetasoundEditorGraphBase : public UEdGraph
{
}; // Size: 0x60

#endif
