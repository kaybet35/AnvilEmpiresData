#ifndef UE4SS_SDK_Anvil_HPP
#define UE4SS_SDK_Anvil_HPP

#include "Anvil_enums.hpp"

struct FAlert
{
}; // Size: 0x50

struct FAnvilAssetManager
{
    class UObjectLibrary* EntityTemplateObjectLibrary;                                // 0x0000 (size: 0x8)
    class UObjectLibrary* ItemTemplateObjectLibrary;                                  // 0x0008 (size: 0x8)
    class UObjectLibrary* VisItemObjectLibrary;                                       // 0x0010 (size: 0x8)
    TArray<class AVisBuildSite*> BuildSiteList;                                       // 0x0018 (size: 0x10)
    TArray<class UVisItem*> VisItemList;                                              // 0x0028 (size: 0x10)

}; // Size: 0x1C8

struct FAnvilDataTableManager
{
}; // Size: 0x1

struct FAnvilMovieCharacterState
{
    class AAnvilMovieCharacter* MovieCharacter;                                       // 0x0000 (size: 0x8)
    class AVisVehicle* MovieVehicle;                                                  // 0x0008 (size: 0x8)
    class AActor* MovingActor;                                                        // 0x0010 (size: 0x8)
    float MovementDelay;                                                              // 0x0018 (size: 0x4)
    float AnimationDelay;                                                             // 0x001C (size: 0x4)
    FVector Direction;                                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FAnvilMovieItemAssignment
{
    FString PrimaryArmedItemCodeName;                                                 // 0x0000 (size: 0x10)
    FString SecondaryArmedItemCodeName;                                               // 0x0010 (size: 0x10)
    FString PrimaryUnarmedItemCodeName;                                               // 0x0020 (size: 0x10)
    FString SecondaryUnarmedItemCodeName;                                             // 0x0030 (size: 0x10)
    float ChanceToAssign;                                                             // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FAnvilOptionsManager
{
    TMap<class FString, class FAudioVolumeClass> AudioVolumeMap;                      // 0x0000 (size: 0x50)
    class UAnvilGameInstance* GameInstance;                                           // 0x0050 (size: 0x8)
    class UAnvilOptionsSave* OptionsSave;                                             // 0x0058 (size: 0x8)

}; // Size: 0x1B0

struct FAnvilPropertyUtil
{
}; // Size: 0x1

struct FAnvilServiceHelper
{
}; // Size: 0xE8

struct FArmourTypeMeshes
{
    class USkeletalMesh* HeadArmourMeshes;                                            // 0x0000 (size: 0x18)
    class USkeletalMesh* BodyArmourMeshes;                                            // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FAudioVolumeClass
{
    class USoundMix* Mixer;                                                           // 0x0000 (size: 0x8)
    class USoundClass* SoundClass;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAutoMoveState
{
}; // Size: 0xC

struct FBoolResponse
{
    bool bValue;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FBuildSiteCostData : public FTableRowBase
{
    int16 RoadMaterial;                                                               // 0x0008 (size: 0x2)
    int16 ResourceBranches;                                                           // 0x000A (size: 0x2)
    int16 ProcessedWood;                                                              // 0x000C (size: 0x2)
    int16 ProcessedStone;                                                             // 0x000E (size: 0x2)
    int16 ProcessedIron;                                                              // 0x0010 (size: 0x2)
    int16 ReinforcedWood;                                                             // 0x0012 (size: 0x2)
    int16 ResourceFibre;                                                              // 0x0014 (size: 0x2)
    int16 AnimalFat;                                                                  // 0x0016 (size: 0x2)
    int16 AnimalBones;                                                                // 0x0018 (size: 0x2)
    int16 ProcessedLeather;                                                           // 0x001A (size: 0x2)
    int16 ResourceStoneFragments;                                                     // 0x001C (size: 0x2)
    int16 ProcessedWoodHard;                                                          // 0x001E (size: 0x2)
    int16 Nails;                                                                      // 0x0020 (size: 0x2)
    int16 Mortar;                                                                     // 0x0022 (size: 0x2)
    int16 Gravel;                                                                     // 0x0024 (size: 0x2)
    int16 ProcessedSteel;                                                             // 0x0026 (size: 0x2)
    int16 ResourceFibreHeavy;                                                         // 0x0028 (size: 0x2)
    int16 ProcessedBronze;                                                            // 0x002A (size: 0x2)
    int16 ProcessedFlax;                                                              // 0x002C (size: 0x2)
    int16 ProcessedLead;                                                              // 0x002E (size: 0x2)
    int16 ProcessedResin;                                                             // 0x0030 (size: 0x2)
    int16 ProcessedThickLeather;                                                      // 0x0032 (size: 0x2)
    int16 AnimalRope;                                                                 // 0x0034 (size: 0x2)

}; // Size: 0x38

struct FCachedCameraState
{
}; // Size: 0xC

struct FCameraRotateState
{
}; // Size: 0x18

struct FCentralMarketplaceUserDataKey
{
    int64 DataForMarketEntityId;                                                      // 0x0000 (size: 0x8)
    int32 DataForMarketMapHash;                                                       // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FCentralMarketplaceUserDataManager
{
}; // Size: 0x88

struct FClientConfig
{
    FGlobalShardConfig GlobalShardConfig;                                             // 0x0000 (size: 0x20)
    TArray<FShardConfig> AvailableShardList;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FClientConfigManager
{
}; // Size: 0x48

struct FClientConnectionRequest
{
    FJsonSafeUint64 OnlineId;                                                         // 0x0000 (size: 0x8)
    uint64 ProtocolId;                                                                // 0x0008 (size: 0x8)
    FString TargetServerName;                                                         // 0x0010 (size: 0x10)
    uint8 SelectedFactionId;                                                          // 0x0020 (size: 0x1)
    uint8 QueueTypeToJoin;                                                            // 0x0021 (size: 0x1)
    int32 MajorVersion;                                                               // 0x0024 (size: 0x4)
    int32 MinorVersion;                                                               // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FConnectToServerResponse
{
    EClientConnectToServerResponseType ResponseType;                                  // 0x0000 (size: 0x1)
    uint8 SelectedFactionId;                                                          // 0x0001 (size: 0x1)
    FString ConnectTokenBase64;                                                       // 0x0008 (size: 0x10)
    FString ServerNameToJoin;                                                         // 0x0018 (size: 0x10)
    FString ServerAddressToJoin;                                                      // 0x0028 (size: 0x10)
    int32 QueuePosition;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FCreateMapPostRequest
{
    uint8 CreatorFactionId;                                                           // 0x0000 (size: 0x1)
    FString Text;                                                                     // 0x0008 (size: 0x10)
    FVector GlobalPosition;                                                           // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FDayNightKeyFrame
{
    FString Label;                                                                    // 0x0000 (size: 0x10)
    float NormalizedPosition;                                                         // 0x0010 (size: 0x4)
    float AtmosphericLightIntensity;                                                  // 0x0014 (size: 0x4)
    FLinearColor AtmosphericLightColor;                                               // 0x0018 (size: 0x10)
    float SunLightIntensity;                                                          // 0x0028 (size: 0x4)
    FLinearColor SunLightColor;                                                       // 0x002C (size: 0x10)
    float SunLightShadowBias;                                                         // 0x003C (size: 0x4)
    float SunLightShadowSlopeBias;                                                    // 0x0040 (size: 0x4)
    float MoonLightIntensity;                                                         // 0x0044 (size: 0x4)
    FLinearColor MoonLightColor;                                                      // 0x0048 (size: 0x10)
    FLinearColor AtmosphereRayleighScatteringColor;                                   // 0x0058 (size: 0x10)
    float WhiteBalanceTemp;                                                           // 0x0068 (size: 0x4)
    float WhiteBalanceTint;                                                           // 0x006C (size: 0x4)

}; // Size: 0x70

struct FDecayData : public FTableRowBase
{
    bool bEnabled;                                                                    // 0x0008 (size: 0x1)
    float StartDelayHours;                                                            // 0x000C (size: 0x4)
    float DecayTimeHours;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FDeleteMapPostResponse
{
    FJsonSafeUint64 DeletedPostOwnerOnlineId;                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FDeleteProfileResponse
{
    uint64 OnlineId;                                                                  // 0x0000 (size: 0x8)
    bool bDeletedProfile;                                                             // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FDeploymentFoodItem
{
    FGridItem ItemBase;                                                               // 0x0000 (size: 0xC)
    int32 Count;                                                                      // 0x000C (size: 0x4)
    bool bIsWildSpawn;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FEquipmentData : public FTableRowBase
{
    float DurabilityLossPerUse;                                                       // 0x0008 (size: 0x4)
    float DamageRadius;                                                               // 0x000C (size: 0x4)
    float AltDamageRadius;                                                            // 0x0010 (size: 0x4)
    float MinRangedDistance;                                                          // 0x0014 (size: 0x4)
    float VariableDamageMaxModifier;                                                  // 0x0018 (size: 0x4)
    float VariableDamageMinModifier;                                                  // 0x001C (size: 0x4)
    float ShieldDurabilityLossMultiplier;                                             // 0x0020 (size: 0x4)
    float GuardMeterCostPerHit;                                                       // 0x0024 (size: 0x4)
    uint8 ArmorMitigation;                                                            // 0x0028 (size: 0x1)
    float ArmourDamageMultiplier;                                                     // 0x002C (size: 0x4)
    float SecondaryArmourDamageMultiplier;                                            // 0x0030 (size: 0x4)
    float StabilityDamage;                                                            // 0x0034 (size: 0x4)
    float SecondaryStabilityDamage;                                                   // 0x0038 (size: 0x4)
    uint8 StabilityMitigationPercent;                                                 // 0x003C (size: 0x1)
    float ToolEffectiveness;                                                          // 0x0040 (size: 0x4)
    float AimMovementSpeedModifier;                                                   // 0x0044 (size: 0x4)
    float AimRotationSpeedModifier;                                                   // 0x0048 (size: 0x4)
    float PrimaryMovementSpeedModifier;                                               // 0x004C (size: 0x4)
    float SecondaryMovementSpeedModifier;                                             // 0x0050 (size: 0x4)
    float PrimaryChanceToPenetrateGuard;                                              // 0x0054 (size: 0x4)
    float SecondaryChanceToPenetrateGuard;                                            // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FFactionLockResponse
{
    uint8 LockedFactionId;                                                            // 0x0000 (size: 0x1)
    bool bCanDeleteProfile;                                                           // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FFoodData : public FTableRowBase
{
    float RegenPerSec;                                                                // 0x0008 (size: 0x4)
    float HungerRestored;                                                             // 0x000C (size: 0x4)
    float HealthLimitRestored;                                                        // 0x0010 (size: 0x4)
    float StaminaLimitRestored;                                                       // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FGeneratedScorchEffectInfo
{
}; // Size: 0x20

struct FGetBatchedDataForClientRequest
{
    TArray<uint8> RequestTypes;                                                       // 0x0000 (size: 0x10)
    FJsonSafeUint64 OnlineId;                                                         // 0x0010 (size: 0x8)
    uint32 ClientWorldEntityPoolVersionVersion;                                       // 0x0018 (size: 0x4)
    uint32 ClientWinConditionStateVersion;                                            // 0x001C (size: 0x4)

}; // Size: 0x20

struct FGetBatchedDataForClientResponse
{
    TArray<uint8> RequestTypes;                                                       // 0x0000 (size: 0x10)
    bool bCanJoinShard;                                                               // 0x0010 (size: 0x1)
    FProfileInfoResponse ProfileInfoResponse;                                         // 0x0018 (size: 0x18)
    bool bHasServerList;                                                              // 0x0030 (size: 0x1)
    FServerListResponse ServerList;                                                   // 0x0038 (size: 0x18)
    FShardStatusResponse ShardStatus;                                                 // 0x0050 (size: 0x1)
    bool bHasWinConditionState;                                                       // 0x0051 (size: 0x1)
    FWinConditionStateResponse WinConditionState;                                     // 0x0058 (size: 0x58)
    bool bHasFamily;                                                                  // 0x00B0 (size: 0x1)
    FR2Family PlayerFamily;                                                           // 0x00B8 (size: 0x58)

}; // Size: 0x110

struct FGetIsAdminResponse
{
    bool bIsAdmin;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGetMapPostsResponse
{
    TArray<FMapPost> MapPostList;                                                     // 0x0000 (size: 0x10)
    bool bOriginalOperationSuccess;                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGlobalShardConfig
{
    FString DiscordRoleServerUrl;                                                     // 0x0000 (size: 0x10)
    TArray<int32> DefaultShardIds;                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGraphData
{
}; // Size: 0x804

struct FHealthData : public FTableRowBase
{
    float MaxHealth;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FHitConverterItemMeshInfo
{
    TArray<class UStaticMesh*> Meshes;                                                // 0x0000 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialOverrides;                              // 0x0010 (size: 0x10)
    FVector Offset;                                                                   // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FItemData : public FTableRowBase
{
    uint8 Damage;                                                                     // 0x0008 (size: 0x1)
    float DurabilityLossPerSec;                                                       // 0x000C (size: 0x4)
    float StockPileWithdrawalValue;                                                   // 0x0010 (size: 0x4)
    uint16 QuantityPerCrate;                                                          // 0x0014 (size: 0x2)

}; // Size: 0x18

struct FJsonSafeUint64
{
    uint32 High;                                                                      // 0x0000 (size: 0x4)
    uint32 Low;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLoreData : public FTableRowBase
{
    FText Header;                                                                     // 0x0008 (size: 0x18)
    class UTexture2D* TitleIcon;                                                      // 0x0020 (size: 0x8)
    FText TitleText;                                                                  // 0x0028 (size: 0x18)
    FText BodyText;                                                                   // 0x0040 (size: 0x18)
    FText HintText;                                                                   // 0x0058 (size: 0x18)

}; // Size: 0x70

struct FMapData
{
    EAnvilMapId MapId;                                                                // 0x0000 (size: 0x1)
    bool bIsSecondaryWorld;                                                           // 0x0001 (size: 0x1)
    FVector2D PlayableWorldSize;                                                      // 0x0008 (size: 0x10)
    FVector2D WorldOrigin;                                                            // 0x0018 (size: 0x10)
    FIntPoint GridDimension;                                                          // 0x0028 (size: 0x8)
    float Scale;                                                                      // 0x0030 (size: 0x4)
    class UTexture2D* MapImage;                                                       // 0x0038 (size: 0x8)
    TArray<FMapLocationInstance> Locations;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FMapIconInstanceProperty
{
    FText Label;                                                                      // 0x0000 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0018 (size: 0x8)
    TArray<class UTexture2D*> AltIcons;                                               // 0x0020 (size: 0x10)
    TMap<class EMapMode, class UTexture2D*> MapModeIconOverrides;                     // 0x0030 (size: 0x50)
    EMapIconType MapActorType;                                                        // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FMapIconTypeProperty
{
    bool bRotationFixed;                                                              // 0x0000 (size: 0x1)
    bool bPositionFixed;                                                              // 0x0001 (size: 0x1)
    bool bHasWorldEntityMapIcon;                                                      // 0x0002 (size: 0x1)
    bool bHideInGameIcon;                                                             // 0x0003 (size: 0x1)
    float BaseSize;                                                                   // 0x0004 (size: 0x4)
    float BaseSizeZoomFactor;                                                         // 0x0008 (size: 0x4)
    float FontSize;                                                                   // 0x000C (size: 0x4)
    float FontSizeZoomFactor;                                                         // 0x0010 (size: 0x4)
    int32 ZOrder;                                                                     // 0x0014 (size: 0x4)
    float MinDisplayScale;                                                            // 0x0018 (size: 0x4)
    float MaxDisplayScale;                                                            // 0x001C (size: 0x4)
    float UpdateRange;                                                                // 0x0020 (size: 0x4)
    TSubclassOf<class UMapIcon> IconClass;                                            // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMapLocationInstance
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FMapIconInstanceProperty Property;                                                // 0x0018 (size: 0x88)

}; // Size: 0xA0

struct FMapPost
{
    FMapPostEntry OriginalEntry;                                                      // 0x0000 (size: 0x20)
    TArray<FMapPostEntry> ReplyList;                                                  // 0x0020 (size: 0x10)
    int32 NetVoteCount;                                                               // 0x0030 (size: 0x4)
    EMapPostVoteType LocalVoteType;                                                   // 0x0034 (size: 0x1)
    FVector GlobalPosition;                                                           // 0x0038 (size: 0x18)
    int32 Rank;                                                                       // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FMapPostEntry
{
    FJsonSafeUint64 PosterOnlineId;                                                   // 0x0000 (size: 0x8)
    FString Text;                                                                     // 0x0008 (size: 0x10)
    int64 UnixTimestamp;                                                              // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMapPostManager
{
}; // Size: 0x38

struct FProfileInfoResponse
{
    int64 Timestamp;                                                                  // 0x0000 (size: 0x8)
    FString AgeDeployData;                                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FQueueStatusResponse
{
    QueueStatusType QueueStatus;                                                      // 0x0000 (size: 0x1)
    FString QueuedServerName;                                                         // 0x0008 (size: 0x10)
    int32 QueuePosition;                                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRefineryQueueItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0xC)
    bool bCanCancel;                                                                  // 0x000C (size: 0x1)

}; // Size: 0x10

struct FReplyToMapPostRequest
{
    FJsonSafeUint64 OriginalPosterOnlineId;                                           // 0x0000 (size: 0x8)
    uint8 RequesterFactionId;                                                         // 0x0008 (size: 0x1)
    FString ReplyText;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FServerListEntry
{
    FString ServerName;                                                               // 0x0000 (size: 0x10)
    FString ServerAddress;                                                            // 0x0010 (size: 0x10)
    FString MapName;                                                                  // 0x0020 (size: 0x10)
    int32 RegionIndex;                                                                // 0x0030 (size: 0x4)
    float OriginX;                                                                    // 0x0034 (size: 0x4)
    float OriginY;                                                                    // 0x0038 (size: 0x4)
    float ExtentsX;                                                                   // 0x003C (size: 0x4)
    float ExtentsY;                                                                   // 0x0040 (size: 0x4)
    FString WorldEntityPoolData;                                                      // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FServerListResponse
{
    TArray<FServerListEntry> ServerList;                                              // 0x0000 (size: 0x10)
    uint32 WorldEntityPoolVersion;                                                    // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FServerRegion
{
}; // Size: 0x160

struct FShardConfig
{
    int32 ShardId;                                                                    // 0x0000 (size: 0x4)
    bool bEnabled;                                                                    // 0x0004 (size: 0x1)
    FString ShardName;                                                                // 0x0008 (size: 0x10)
    FString ShardDescription;                                                         // 0x0018 (size: 0x10)
    EShardPopulationType Population;                                                  // 0x0028 (size: 0x1)
    FString AnvilServiceHttpUrl;                                                      // 0x0030 (size: 0x10)
    FString Announcement;                                                             // 0x0040 (size: 0x10)
    FString NextTestUnixTimestamp;                                                    // 0x0050 (size: 0x10)
    bool bIsSiegeDemoActive;                                                          // 0x0060 (size: 0x1)
    FString WarningPopupBodyText;                                                     // 0x0068 (size: 0x10)
    FString WarningPopupHeaderText;                                                   // 0x0078 (size: 0x10)
    FString WarningPopupUrl;                                                          // 0x0088 (size: 0x10)
    FString WarningPopupUrlButtonText;                                                // 0x0098 (size: 0x10)
    int32 AnvilServiceRequestCooldownSec;                                             // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FShardStatusResponse
{
    uint8 AtCapacityFactionBits;                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FUpgradeCostData : public FTableRowBase
{
    int16 ResourceBranches;                                                           // 0x0008 (size: 0x2)
    int16 ProcessedWood;                                                              // 0x000A (size: 0x2)
    int16 ProcessedStone;                                                             // 0x000C (size: 0x2)
    int16 ProcessedIron;                                                              // 0x000E (size: 0x2)
    int16 Silver;                                                                     // 0x0010 (size: 0x2)
    int16 ReinforcedWood;                                                             // 0x0012 (size: 0x2)
    int16 AnimalFat;                                                                  // 0x0014 (size: 0x2)
    int16 AnimalBones;                                                                // 0x0016 (size: 0x2)
    int16 ProcessedLeather;                                                           // 0x0018 (size: 0x2)
    int16 Mortar;                                                                     // 0x001A (size: 0x2)
    int16 Gravel;                                                                     // 0x001C (size: 0x2)
    int16 ResourceFibre;                                                              // 0x001E (size: 0x2)
    int16 ResourceStoneFragments;                                                     // 0x0020 (size: 0x2)
    int16 ProcessedWoodHard;                                                          // 0x0022 (size: 0x2)
    int16 Nails;                                                                      // 0x0024 (size: 0x2)
    int16 ProcessedSteel;                                                             // 0x0026 (size: 0x2)
    int16 ResourceFibreHeavy;                                                         // 0x0028 (size: 0x2)
    int16 ProcessedBronze;                                                            // 0x002A (size: 0x2)
    int16 ProcessedFlax;                                                              // 0x002C (size: 0x2)
    int16 ProcessedLead;                                                              // 0x002E (size: 0x2)
    int16 ProcessedResin;                                                             // 0x0030 (size: 0x2)
    int16 ProcessedThickLeather;                                                      // 0x0032 (size: 0x2)

}; // Size: 0x38

struct FVoiceLoginInfo
{
    FString OnlineId;                                                                 // 0x0000 (size: 0x10)
    FString LoginToken;                                                               // 0x0010 (size: 0x10)
    EVoiceChannelType ChannelType;                                                    // 0x0020 (size: 0x1)
    FString ChannelName;                                                              // 0x0028 (size: 0x10)
    FString LocalChannelJoinToken;                                                    // 0x0038 (size: 0x10)
    FString TextChannelJoinToken;                                                     // 0x0048 (size: 0x10)
    FString BroadcastChannelJoinToken;                                                // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FVoiceLoginToken
{
    FString LoginToken;                                                               // 0x0000 (size: 0x10)
    FString LocalChanToken;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWeatherManager
{
    class UCurveFloat* SeasonToAutumnCurve;                                           // 0x0000 (size: 0x8)
    class UCurveFloat* SeasonToWinterCurve;                                           // 0x0008 (size: 0x8)
    class UCurveFloat* SeasonToTempCurve;                                             // 0x0010 (size: 0x8)
    class UCurveFloat* SeasonToTintCurve;                                             // 0x0018 (size: 0x8)
    class UCurveFloat* TemperatureVisualsCurve;                                       // 0x0020 (size: 0x8)
    class UCurveFloat* WetnessVisualsCurve;                                           // 0x0028 (size: 0x8)
    class UCurveFloat* WindVisualsCurve;                                              // 0x0030 (size: 0x8)
    class UMaterialParameterCollection* WeatherSeasonsMaterialParameterCollection;    // 0x0038 (size: 0x8)
    class APostProcessVolume* WinterPostProcessVolume;                                // 0x0040 (size: 0x8)

}; // Size: 0x88

struct FWinConditionStateResponse
{
    uint32 StateVersion;                                                              // 0x0000 (size: 0x4)
    FVictoryInfo VictoryInfoList;                                                     // 0x0008 (size: 0x20)
    uint16 FactionTotalNumCapturedKeeps;                                              // 0x0028 (size: 0x6)
    uint16 FactionTotalNumTemples;                                                    // 0x002E (size: 0x6)
    int64 FactionUnixTimestampCultureVictoryStarted;                                  // 0x0038 (size: 0x18)
    uint16 NumCapturedKeepsForMilitaryVictory;                                        // 0x0050 (size: 0x2)
    uint16 NumTemplesForCultureVictory;                                               // 0x0052 (size: 0x2)
    uint32 CultureVictoryTimeRequiredSec;                                             // 0x0054 (size: 0x4)

}; // Size: 0x58

class AAnvilGameModeBase : public AGameModeBase
{
}; // Size: 0x330

class AAnvilHUD : public AHUD
{
    class UTextureRenderTarget2D* ScreenshotRT;                                       // 0x0398 (size: 0x8)

}; // Size: 0x3A0

class AAnvilMovieCharacter : public AVisActorBase
{
    class USimPlayerDataComponent* SimPlayerDataComponent;                            // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* ItemMeshComponent;                                  // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* ItemSecondaryMeshComponent;                         // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemMeshComponent;                           // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemSecondaryMeshComponent;                  // 0x02C8 (size: 0x8)
    EAnvilVehicleInputState VehicleInputState;                                        // 0x02D0 (size: 0x1)
    class UCapsuleComponent* Capsule;                                                 // 0x02D8 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02E0 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x02E8 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x02F0 (size: 0x8)
    class UNiagaraComponent* TorchVFXComponent;                                       // 0x02F8 (size: 0x8)

}; // Size: 0x318

class AAnvilMovieCharacterDirector : public AActor
{
    int32 NumMovieCharacters;                                                         // 0x0290 (size: 0x4)
    TArray<FAnvilMovieCharacterState> MovieCharacterStates;                           // 0x0298 (size: 0x10)
    TSubclassOf<class AAnvilMovieCharacter> MovieCharacterClass;                      // 0x02A8 (size: 0x8)
    TArray<FAnvilMovieItemAssignment> AnvilMovieItemAssignments;                      // 0x02B0 (size: 0x10)
    EAnvilFactionId FactionId;                                                        // 0x02C0 (size: 0x1)
    EAnvilArmourType HeadArmourType;                                                  // 0x02C1 (size: 0x1)
    EAnvilArmourType BodyArmourType;                                                  // 0x02C2 (size: 0x1)
    float RandomDirectionAngle;                                                       // 0x02C4 (size: 0x4)
    int32 NumRows;                                                                    // 0x02C8 (size: 0x4)
    int32 NumColumns;                                                                 // 0x02CC (size: 0x4)
    float RowSize;                                                                    // 0x02D0 (size: 0x4)
    float ColumnSize;                                                                 // 0x02D4 (size: 0x4)
    float RowBias;                                                                    // 0x02D8 (size: 0x4)
    float ColumnBias;                                                                 // 0x02DC (size: 0x4)
    float MovementSpeed;                                                              // 0x02E0 (size: 0x4)
    float MovementDelay;                                                              // 0x02E4 (size: 0x4)
    float AnimationDelay;                                                             // 0x02E8 (size: 0x4)
    float AnimationVelocityMultiplier;                                                // 0x02EC (size: 0x4)
    int32 RowToRecord;                                                                // 0x02F0 (size: 0x4)
    TSubclassOf<class AVisVehicle> VehicleClass;                                      // 0x02F8 (size: 0x8)
    FVector VehicleToCharacterOffset;                                                 // 0x0300 (size: 0x18)
    class UAnimMontage* CharacterAnimationMontage;                                    // 0x0318 (size: 0x8)
    FName VehicleSeatName;                                                            // 0x0320 (size: 0x8)
    int32 NumRowsGuarding;                                                            // 0x0328 (size: 0x4)
    bool bIsDirectorEnabled;                                                          // 0x032C (size: 0x1)
    float LandscapePopUpDistance;                                                     // 0x0330 (size: 0x4)
    float SpawnDelay;                                                                 // 0x0334 (size: 0x4)

}; // Size: 0x340

class AAnvilMoviePipelineController : public APlayerController
{
}; // Size: 0x850

class AAnvilMoviePipelineGameMode : public AGameModeBase
{
}; // Size: 0x330

class AAnvilPlayerController : public APlayerController
{
    class UAnvilRootWidget* RootWidget;                                               // 0x0850 (size: 0x8)

}; // Size: 0xA20

class ADayNightManager : public AActor
{

    int32 GetDayCurrentSeconds();
}; // Size: 0x290

class AEntityActor : public AActor
{
    TSubclassOf<class UEntityTemplate> EntityTemplate;                                // 0x0290 (size: 0x8)
    bool bShowVisActorPreview;                                                        // 0x0298 (size: 0x1)
    class UChildActorComponent* VisActorPreview;                                      // 0x02A0 (size: 0x8)
    class UEntityActorRootComponent* SceneComponent;                                  // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class AGameplayGameMode : public AAnvilGameModeBase
{
}; // Size: 0x330

class AGameplayPlayerController : public AAnvilPlayerController
{
    class USoundCue* CallForReinforcementsCue;                                        // 0x0A20 (size: 0x8)
    TSubclassOf<class ARuntimeVirtualTextureVolume> LandscapeCullRVTVolumeClass;      // 0x0A38 (size: 0x8)
    class ARuntimeVirtualTextureVolume* LandscapeCullRVTVolume;                       // 0x0A40 (size: 0x8)
    TSubclassOf<class ARuntimeVirtualTextureVolume> FoliageCullRVTVolumeClass;        // 0x0A48 (size: 0x8)
    class ARuntimeVirtualTextureVolume* FoliageCullRVTVolume;                         // 0x0A50 (size: 0x8)

}; // Size: 0xA58

class AMainMenuGameMode : public AAnvilGameModeBase
{
}; // Size: 0x330

class AMainMenuPlayerController : public AAnvilPlayerController
{
}; // Size: 0xA28

class AMapBorderActor : public ACameraActor
{
    FIntPoint CaptureChunkCoordinate;                                                 // 0x09A0 (size: 0x8)
    bool bContinueFromGivenChunk;                                                     // 0x09A8 (size: 0x1)
    bool bCaptureWholeGrid;                                                           // 0x09A9 (size: 0x1)
    bool bCapture;                                                                    // 0x09AA (size: 0x1)
    class UStaticMeshComponent* BoxVisualizer;                                        // 0x09B0 (size: 0x8)

}; // Size: 0x9C0

class AMapEditorNote : public AActor
{
    class UTextRenderComponent* NoteTextComponent;                                    // 0x0290 (size: 0x8)

}; // Size: 0x298

class AMapList : public AInfo
{
    TMap<class FName, class FMapData> MapDatabase;                                    // 0x0290 (size: 0x50)

}; // Size: 0x2E0

class AMapMarkerActor : public AActor
{
    FMapIconInstanceProperty MapIconProperty;                                         // 0x0290 (size: 0x88)

}; // Size: 0x318

class APlayerVisualsInfo : public AInfo
{
    TMap<class EAnvilFactionId, class FArmourTypeMeshes> FactionArmourMeshesMap;      // 0x0290 (size: 0x50)

}; // Size: 0x2E0

class AProxyPawn : public ADefaultPawn
{
    class AVisPlayer* VisPlayer;                                                      // 0x0340 (size: 0x8)
    class AVisController* VisController;                                              // 0x0348 (size: 0x8)
    float MaxCameraDistance;                                                          // 0x0350 (size: 0x4)
    float MinCameraDistance;                                                          // 0x0354 (size: 0x4)

    void StopBandwidthRecording();
    void StartBandwidthRecording(FString WatchTarget);
    void SetDrawCollisions(bool bDrawCollisions);
    void SetCameraHeight(float Height);
    void SetCameraFov(float FOV);
    void SetCameraAngle(float Angle);
    void OnRotateCameraStop();
    void OnRotateCameraStart();
    void OnPanCameraStop();
    void OnPanCameraStart();
    void OnKeyRotateCameraRightStop();
    void OnKeyRotateCameraRightStart();
    void OnKeyRotateCameraLeftStop();
    void OnKeyRotateCameraLeftStart();
    void EnterBuildMode(const uint32 BuildSiteCodeName, const uint64 ContextID);
    void DrawSphere(float Radius);
    void ChangeHeight(float Adjust);
    void AutoMoveOff();
    void AutoMove(FString Arg, bool bIsSprint);
}; // Size: 0x3A8

class AServerPartition : public AActor
{
    class UServerPartitionComponent* ServerPartitionComponent;                        // 0x0290 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x0298 (size: 0x8)
    TArray<class UBoxComponent*> NavMeshBlockers;                                     // 0x02A0 (size: 0x10)

}; // Size: 0x2B0

class AUIGlobals : public AInfo
{
    TSubclassOf<class UUserWidget> TooltipClass;                                      // 0x0290 (size: 0x8)
    TArray<FText> TownNames1;                                                         // 0x0298 (size: 0x10)
    TArray<FText> TownNames2;                                                         // 0x02A8 (size: 0x10)
    TArray<FText> TownNames3;                                                         // 0x02B8 (size: 0x10)
    TMap<class EMapIconType, class FMapIconTypeProperty> IconTemplates;               // 0x02C8 (size: 0x50)
    TMap<class EAnvilWorldEntityType, class TSubclassOf<UWorldEntityMapIcon>> WorldEntityIconClasses; // 0x0318 (size: 0x50)
    TMap<class EAnvilItemQualityType, class UTexture2D*> QualityIconTextures;         // 0x0368 (size: 0x50)
    TMap<class EAnvilPlayerOnlineStatus, class UTexture2D*> OnlineStatusIconMap;      // 0x03B8 (size: 0x50)
    TMap<class EAnvilPlayerOnlineStatus, class FSlateColor> OnlineStatusColorMap;     // 0x0408 (size: 0x50)
    TMap<class FString, class UTexture2D*> UnderworldModuleDebugBoxTextureMap;        // 0x0458 (size: 0x50)
    FLinearColor BuildSiteVisualGuideValidColour;                                     // 0x04A8 (size: 0x10)
    FLinearColor BuildSiteVisualGuideInvalidColour;                                   // 0x04B8 (size: 0x10)
    FLinearColor BuildSiteVisualGuideObstructedColour;                                // 0x04C8 (size: 0x10)
    class USoundCue* AcceptUISoundCue;                                                // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

class AUnderworldModuleDynamicPrefab : public ADynamicPrefab
{
}; // Size: 0x2B0

class AVisActor : public AVisActorBase
{
    FMapIconInstanceProperty MapIconProperty;                                         // 0x02A8 (size: 0x88)
    EHUDWindowType UseWindowType;                                                     // 0x0330 (size: 0x1)
    FText UseDisclaimerText;                                                          // 0x0338 (size: 0x18)
    bool bUseForceCameraZoom;                                                         // 0x0350 (size: 0x1)
    TArray<EActionButtonType> AdditionalActionButtons;                                // 0x0358 (size: 0x10)
    uint8 bNightVisibility;                                                           // 0x0368 (size: 0x1)
    uint8 bNoCheckOnCeilVisibility;                                                   // 0x0368 (size: 0x1)
    uint8 bUseInteractionOutline;                                                     // 0x0368 (size: 0x1)
    uint8 bUseVicActorPool;                                                           // 0x0368 (size: 0x1)
    class UTexture2D* InteractionIcon;                                                // 0x0370 (size: 0x8)
    float AnimSpeed;                                                                  // 0x0378 (size: 0x4)
    FRotator AnimRotationalSpeed;                                                     // 0x0380 (size: 0x18)
    FVector AnimVelocity;                                                             // 0x0398 (size: 0x18)
    FText VisDisplayName;                                                             // 0x03B0 (size: 0x18)
    FText Description;                                                                // 0x03C8 (size: 0x18)
    FText DescriptionFooter;                                                          // 0x03E0 (size: 0x18)
    bool bGenerateFoundationDescription;                                              // 0x03F8 (size: 0x1)
    FText FoundationShapeName;                                                        // 0x0400 (size: 0x18)
    FText FoundationGroupName;                                                        // 0x0418 (size: 0x18)
    FText FoundationVariantName;                                                      // 0x0430 (size: 0x18)
    TArray<class UDataComponent*> DataComponentCache;                                 // 0x0448 (size: 0x10)
    class UMeshVisibilityDataComponent* MeshVisibilityDataComponent;                  // 0x0458 (size: 0x8)
    float PositionSmoothSpeed;                                                        // 0x0460 (size: 0x4)
    float RotationSmoothSpeed;                                                        // 0x0464 (size: 0x4)
    float PositionSmoothSpeedDistance;                                                // 0x0468 (size: 0x4)
    float ClientMovementSmoothingDistance;                                            // 0x046C (size: 0x4)
    bool bHasLandscapeCollisions;                                                     // 0x0470 (size: 0x1)
    bool bUseDepthStencilForInteractionHighlight;                                     // 0x0471 (size: 0x1)
    bool bClientSideDestruction;                                                      // 0x0472 (size: 0x1)
    float ClientSideLifeSpan;                                                         // 0x0474 (size: 0x4)
    TArray<class USceneComponent*> ToggleVisibilityComponents;                        // 0x0478 (size: 0x10)

}; // Size: 0x4C0

class AVisAnimal : public AVisActor
{
    class UAnimalAIDataComponent* AnimalAIDataComponent;                              // 0x04C0 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x04C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x04D0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x04D8 (size: 0x8)
    TMap<class EAnvilAnimalState, class UAnimMontage*> CurrentStateMontageMap;        // 0x04E0 (size: 0x50)

}; // Size: 0x538

class AVisAnimalVehicle : public AVisVehicle
{
    class UHungerDataComponent* HungerDataComponent;                                  // 0x04F8 (size: 0x8)
    class UStaminaDataComponent* StaminaDataComponent;                                // 0x0500 (size: 0x8)
    class UAnimalAIDataComponent* AnimalAIDataComponent;                              // 0x0508 (size: 0x8)
    FName SeatSocketName;                                                             // 0x0510 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0518 (size: 0x8)
    class USkeletalMeshComponent* SaddleMesh;                                         // 0x0520 (size: 0x8)
    class USkeletalMeshComponent* HalterHeadMesh;                                     // 0x0528 (size: 0x8)
    class USkeletalMeshComponent* HalterBodyMesh;                                     // 0x0530 (size: 0x8)
    TArray<class USkeletalMesh*> SaddleMeshes;                                        // 0x0538 (size: 0x10)

}; // Size: 0x548

class AVisAnvilStructure : public AVisStructure
{
    class UAnvilDataComponent* AnvilDataComponent;                                    // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* ConvertedItemMeshComponent;                         // 0x0560 (size: 0x8)
    TMap<class FString, class USkeletalMesh*> ConvertedItemMeshMap;                   // 0x0568 (size: 0x50)
    class USceneComponent* HitVFXLocation;                                            // 0x05B8 (size: 0x8)
    class UNiagaraSystem* HitSuccessVFX;                                              // 0x05C0 (size: 0x8)
    class UNiagaraSystem* HitFailVFX;                                                 // 0x05C8 (size: 0x8)
    class USoundCue* HitSuccessSoundCue;                                              // 0x05D0 (size: 0x8)
    class USoundCue* HitFailSoundCue;                                                 // 0x05D8 (size: 0x8)

    void OnHitCounterChanged(const float& Old, const float& New);
}; // Size: 0x5F0

class AVisBeaconTower : public AVisStructure
{
    class UBeaconTowerDataComponent* BeaconTowerDataComponent;                        // 0x0558 (size: 0x8)
    class UCombustionDataComponent* CombustionDataComponent;                          // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisBoat : public AVisVehicle
{
    float IsInWaterCheckRange;                                                        // 0x04F8 (size: 0x4)
    TMap<class UEntityAttachableProxyComponent*, class UEntityAttachableDataComponent*> Slots; // 0x0500 (size: 0x50)

}; // Size: 0x558

class AVisBuildSite : public AVisActor
{
    class UVisBuildGhostComponent* VisBuildGhostComponent;                            // 0x04C0 (size: 0x8)
    class UBuildSiteDataComponent* BuildSiteDataComponent;                            // 0x04C8 (size: 0x8)
    class UStructureDataComponent* StructureDataComponent;                            // 0x04D0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x04D8 (size: 0x8)
    EBuildSiteCategory Category;                                                      // 0x04E0 (size: 0x1)
    int32 Order;                                                                      // 0x04E4 (size: 0x4)
    EBuildSiteVisibility BuildSiteVisibility;                                         // 0x04E8 (size: 0x1)
    class UStaticMeshComponent* Mesh;                                                 // 0x04F0 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x04F8 (size: 0x8)
    class UDecalComponent* BuildCollisionDecalComponent;                              // 0x0500 (size: 0x8)
    class UMaterialInterface* BuildSiteMaterial;                                      // 0x0508 (size: 0x8)
    class UPoseableMeshComponent* VisualGuideMeshComponent;                           // 0x0510 (size: 0x8)

}; // Size: 0x538

class AVisCart : public AVisVehicle
{
}; // Size: 0x4F8

class AVisCentralMarketplace : public AVisStructure
{
    class UCentralMarketplaceDataComponent* CentralMarketplaceDataComponent;          // 0x0558 (size: 0x8)

}; // Size: 0x560

class AVisController : public AVisActor
{
    class UPlayerControllerDataComponent* PlayerControllerDataComponent;              // 0x04C0 (size: 0x8)
    class UMapMarkerComponent* DeathMarker;                                           // 0x04C8 (size: 0x8)

}; // Size: 0x4D0

class AVisCookingStructure : public AVisStructure
{
    bool bShowCheatSheet;                                                             // 0x055B (size: 0x1)
    class UCookingDataComponent* CookingDataComponent;                                // 0x0560 (size: 0x8)
    class UCombustionDataComponent* CombustionDataComponent;                          // 0x0568 (size: 0x8)
    TMap<class TSubclassOf<UItemTemplate>, class UMaterialInterface*> WaterMeshMaterialMap; // 0x0570 (size: 0x50)
    class UStaticMeshComponent* WaterLevelMesh;                                       // 0x05C0 (size: 0x8)
    class UCurveFloat* WaterHeightCurve;                                              // 0x05C8 (size: 0x8)
    class UCurveVector* WaterScaleCurve;                                              // 0x05D0 (size: 0x8)
    class UAudioComponent* BoilingTemperatureHighAudio;                               // 0x05D8 (size: 0x8)
    class UAudioComponent* BoilingTemperatureLowAudio;                                // 0x05E0 (size: 0x8)

}; // Size: 0x5F0

class AVisCraftingStructure : public AVisStructure
{
    class UCraftingDataComponent* CraftingDataComponent;                              // 0x0558 (size: 0x8)

}; // Size: 0x560

class AVisDryingRack : public AVisStructure
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x0558 (size: 0x8)
    class UStaticMeshComponent* DryingItemMesh;                                       // 0x0560 (size: 0x8)
    class UDryingRackProxyComponent* DryingRackProxy;                                 // 0x0568 (size: 0x8)
    class UDryingRackDataComponent* DryingRackDataComponent;                          // 0x0570 (size: 0x8)
    class UMaterialInstanceDynamic* DryingItemMeshMaterial;                           // 0x0578 (size: 0x8)

}; // Size: 0x580

class AVisEffect : public AVisActor
{
    class AActor* AttachTarget;                                                       // 0x04C0 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x04D0 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x04D8 (size: 0x8)
    class UNiagaraComponent* NiagaraComponent;                                        // 0x04E0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x04E8 (size: 0x8)
    class ULifetimeDataComponent* LifetimeDataComponent;                              // 0x04F0 (size: 0x8)
    bool bSeekAudioComponent;                                                         // 0x04F8 (size: 0x1)

}; // Size: 0x500

class AVisEntityPrefab : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class UBoxComponent* MeshVisibilityArea;                                          // 0x04C8 (size: 0x8)

}; // Size: 0x4D0

class AVisFamilyCenter : public AVisStructure
{
    float ForceShowInBuildMenuDistance;                                               // 0x0558 (size: 0x4)
    class UFamilyCenterDataComponent* FamilyCenterDataComponent;                      // 0x0560 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* TownAreaMarkerDecal;                      // 0x0568 (size: 0x8)
    class UStaticMeshComponent* MyFamilyFlagMesh;                                     // 0x0570 (size: 0x8)

}; // Size: 0x578

class AVisFamilyInventory : public AVisStructure
{
}; // Size: 0x558

class AVisFarm : public AVisStructure
{
    class UDecalComponent* FarmDecalComponent;                                        // 0x0558 (size: 0x8)
    class UDecalComponent* FertilizeDecalComponent;                                   // 0x0560 (size: 0x8)
    float RoughnessStart;                                                             // 0x0568 (size: 0x4)
    float RoughnessEnd;                                                               // 0x056C (size: 0x4)
    class UFarmDataComponent* FarmDataComponent;                                      // 0x0570 (size: 0x8)

}; // Size: 0x578

class AVisFishingBobber : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* MeshComponent;                                        // 0x0298 (size: 0x8)
    class UCableComponent* LineComponent;                                             // 0x02A0 (size: 0x8)
    class UCurveVector* IdleCurve;                                                    // 0x02A8 (size: 0x8)
    class UCurveVector* HookedCurve;                                                  // 0x02B0 (size: 0x8)
    float CastOffsetZ;                                                                // 0x02B8 (size: 0x4)
    float CastDelay;                                                                  // 0x02BC (size: 0x4)
    float CastSpeed;                                                                  // 0x02C0 (size: 0x4)
    float SlackLineLengthFactor;                                                      // 0x02C4 (size: 0x4)
    float TightLineLengthFactor;                                                      // 0x02C8 (size: 0x4)
    class AVisPlayer* Caster;                                                         // 0x02D0 (size: 0x8)

}; // Size: 0x310

class AVisFishingIndicator : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* MeshComponent;                                        // 0x0298 (size: 0x8)
    FLinearColor InvalidColour;                                                       // 0x02A0 (size: 0x10)
    FLinearColor ValidColour;                                                         // 0x02B0 (size: 0x10)
    FLinearColor ReadyColour;                                                         // 0x02C0 (size: 0x10)
    class UMaterialInstanceDynamic* MeshMaterial;                                     // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class AVisGate : public AVisStructure
{
    class UGateDataComponent* GateDataComponent;                                      // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisGrainMill : public AVisStructure
{
    class UGrainMillDataComponent* GrainMillDataComponent;                            // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* CrankHandleMesh;                                    // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* GrainMillMesh;                                      // 0x0568 (size: 0x8)
    class UVisPowerUnitAnimInstance* CrankHandleAnimInst;                             // 0x0570 (size: 0x8)
    class UVisGrainMillAnimInstance* GrainMillAnimInst;                               // 0x0578 (size: 0x8)

}; // Size: 0x580

class AVisHeatingStructure : public AVisStructure
{
    class UHeatingDataComponent* HeatingDataComponent;                                // 0x0558 (size: 0x8)
    class UCombustionDataComponent* CombustionDataComponent;                          // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisHitConverterStructure : public AVisStructure
{
    class UHitConverterDataComponent* HitConverterDataComponent;                      // 0x0558 (size: 0x8)
    class UStaticMeshComponent* ConvertedItemMeshComponent;                           // 0x0560 (size: 0x8)
    TMap<class FString, class FHitConverterItemMeshInfo> ItemMeshInfoMap;             // 0x0568 (size: 0x50)
    class USceneComponent* HitVFXLocation;                                            // 0x05B8 (size: 0x8)
    class UNiagaraSystem* HitSuccessVFX;                                              // 0x05C0 (size: 0x8)
    class UNiagaraSystem* HitFailVFX;                                                 // 0x05C8 (size: 0x8)
    class USoundCue* HitSuccessSoundCue;                                              // 0x05D0 (size: 0x8)
    class USoundCue* HitFailSoundCue;                                                 // 0x05D8 (size: 0x8)

    void OnHitConverterCounterChanged(const float& Old, const float& New);
}; // Size: 0x5E8

class AVisHouse : public AVisStructure
{
    class UHousingDataComponent* HousingDataComponent;                                // 0x0558 (size: 0x8)
    class UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;                    // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisImpactEffect : public AVisActor
{
    TSubclassOf<class AActor> HitEffectActors;                                        // 0x04C0 (size: 0x90)
    float VisualLifeTime;                                                             // 0x0550 (size: 0x4)
    bool bAttachToHitTarget;                                                          // 0x0554 (size: 0x1)
    class UArrowComponent* ArrowComponent;                                            // 0x0558 (size: 0x8)
    class UImpactSurfaceDataComponent* ImpactSurfaceDataComponent;                    // 0x0560 (size: 0x8)

}; // Size: 0x570

class AVisItemStash : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class UNiagaraComponent* LootMarkerVFXComponent;                                  // 0x04C8 (size: 0x8)

}; // Size: 0x4D0

class AVisLadderBuildSite : public AVisBuildSite
{
    TSubclassOf<class AvisLadder> LadderClass;                                        // 0x0538 (size: 0x8)
    class ULadderDataComponent* LadderDataComponent;                                  // 0x0540 (size: 0x8)

    void UpdateLadderMesh(float HalfLength);
}; // Size: 0x548

class AVisLatticeMine : public AVisActor
{
    class UBoxComponent* LatticeAreaVisualizer;                                       // 0x04C0 (size: 0x8)
    class ULatticeMineProxyComponent* LatticeMineProxyComponent;                      // 0x04C8 (size: 0x8)
    class ULatticeMineDataComponent* LatticeMineDataComponent;                        // 0x04D0 (size: 0x8)
    TArray<class UInstancedStaticMeshComponent*> MappedMeshes;                        // 0x04D8 (size: 0x10)

}; // Size: 0x4E8

class AVisLivestockStructure : public AVisStructure
{
    TSubclassOf<class UItemTemplate> FoodItem;                                        // 0x0558 (size: 0x8)
    TSubclassOf<class UItemTemplate> ProducedItem;                                    // 0x0560 (size: 0x8)

}; // Size: 0x570

class AVisMapInfo : public AVisActor
{
    class UTweakableDataComponent* TweakableDataComponent;                            // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

class AVisMapPost : public AVisActor
{
    class UMapPostDataComponent* MapPostDataComponent;                                // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

class AVisMine : public AVisStructure
{
}; // Size: 0x558

class AVisMobileWeapon : public AVisVehicle
{
    class UMountedWeaponDataComponent* MountedWeaponDataComponent;                    // 0x04F8 (size: 0x8)
    class USkeletalMeshComponent* VehicleMesh;                                        // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* AmmoMesh;                                           // 0x0508 (size: 0x8)

}; // Size: 0x510

class AVisOfflineCharacter : public AVisActor
{
    class UOfflineCharacterDataComponent* OfflineCharacterDataComponent;              // 0x04C0 (size: 0x8)
    class USoundCue* DeathCue;                                                        // 0x04C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x04D0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x04D8 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x04E0 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x04E8 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x04F0 (size: 0x8)
    class UTeamDataComponent* TeamDataComponent;                                      // 0x04F8 (size: 0x8)
    class UArmorDataComponent* ArmourDataComponent;                                   // 0x0500 (size: 0x8)

}; // Size: 0x508

class AVisPickupItem : public AVisActor
{
    class UPickupDataComponent* PickupDataComponent;                                  // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x04C8 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x04D0 (size: 0x8)
    class UNiagaraComponent* LootMarkerVFXComponent;                                  // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

class AVisPlayer : public AVisActor
{
    class UVisSpringArmComponent* SpringArm;                                          // 0x04C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x04C8 (size: 0x8)
    class USimPlayerDataComponent* SimPlayerDataComponent;                            // 0x04D0 (size: 0x8)
    class UPlayerMountDataComponent* PlayerMountDataComponent;                        // 0x04D8 (size: 0x8)
    class UPlayerInputDataComponent* PlayerInputDataComponent;                        // 0x04E0 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x04E8 (size: 0x8)
    class UHungerDataComponent* HungerDataComponent;                                  // 0x04F0 (size: 0x8)
    class UStaminaDataComponent* StaminaDataComponent;                                // 0x04F8 (size: 0x8)
    class UTemperatureDataComponent* TemperatureDataComponent;                        // 0x0500 (size: 0x8)
    class UAdminEnvDataComponent* AdminEnvDataComponent;                              // 0x0508 (size: 0x8)
    class UPlayerStatusDataComponent* PlayerStatusDataComponent;                      // 0x0510 (size: 0x8)
    class USkeletalMeshComponent* ItemMeshComponent;                                  // 0x0518 (size: 0x8)
    class USkeletalMeshComponent* ItemSecondaryMeshComponent;                         // 0x0520 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemMeshComponent;                           // 0x0528 (size: 0x8)
    class USkeletalMeshComponent* UnarmedItemSecondaryMeshComponent;                  // 0x0530 (size: 0x8)
    class UStaticMeshComponent* RangedWeaponAmmoMeshComponent;                        // 0x0538 (size: 0x8)
    class UPostProcessComponent* PostProcessComponent;                                // 0x0540 (size: 0x8)
    float RotationAmount;                                                             // 0x0560 (size: 0x4)
    float CameraRotationLerpSpeed;                                                    // 0x0564 (size: 0x4)
    float AimMeshLength;                                                              // 0x0568 (size: 0x4)
    float YawSpeed;                                                                   // 0x064C (size: 0x4)
    class USoundCue* DeathCue;                                                        // 0x0650 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0658 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0660 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0668 (size: 0x8)
    class UStaticMeshComponent* AimMeshComponent;                                     // 0x0670 (size: 0x8)
    class UMaterialInstanceDynamic* AimMeshMaterial;                                  // 0x0678 (size: 0x8)
    class UStaticMeshComponent* MeleeAimMeshComponent;                                // 0x0680 (size: 0x8)
    class UStaticMeshComponent* MeleeAimMeshTargetComponent;                          // 0x0688 (size: 0x8)
    class UStaticMeshComponent* CrowdIdentifierMeshComponent;                         // 0x0690 (size: 0x8)
    TSubclassOf<class AVisFishingIndicator> FishingAimMeshClass;                      // 0x0698 (size: 0x8)
    TSubclassOf<class AVisFishingBobber> FishingBobberClass;                          // 0x06A8 (size: 0x8)
    class UVisPlayerVisualsComponent* PlayerVisualsComponent;                         // 0x06B0 (size: 0x8)
    class UMapMarkerComponent* MapMarker;                                             // 0x06B8 (size: 0x8)
    class UMapMarkerComponent* FamilyMarkerMapMarker;                                 // 0x06C0 (size: 0x8)
    TMap<class EAnvilSimActivityState, class UAnimMontage*> ActivityStateMontageMap;  // 0x06C8 (size: 0x50)
    class UArmorDataComponent* ArmourDataComponent;                                   // 0x0718 (size: 0x8)
    class UBillboardComponent* VoiceIndicator;                                        // 0x0720 (size: 0x8)
    class UNiagaraComponent* TorchVFXComponent;                                       // 0x0728 (size: 0x8)
    class UNiagaraComponent* TorchVFX2Component;                                      // 0x0730 (size: 0x8)
    class UPointLightComponent* TorchPointLightComponent;                             // 0x0738 (size: 0x8)
    class UVisPointLightComponent* TorchVisPointLightComponent;                       // 0x0740 (size: 0x8)
    class UAudioComponent* TorchAudioComponent;                                       // 0x0748 (size: 0x8)
    class UNiagaraComponent* RainVFXComponent;                                        // 0x0750 (size: 0x8)
    class UNiagaraComponent* SnowVFXComponent;                                        // 0x0758 (size: 0x8)
    class UNiagaraComponent* BreathFogVFXComponent;                                   // 0x0760 (size: 0x8)
    class UAudioComponent* RainLowAudioComponent;                                     // 0x0768 (size: 0x8)
    class UAudioComponent* RainMidAudioComponent;                                     // 0x0770 (size: 0x8)
    class UAudioComponent* RainHighAudioComponent;                                    // 0x0778 (size: 0x8)
    class UAudioComponent* SnowLowAudioComponent;                                     // 0x0780 (size: 0x8)
    class UAudioComponent* SnowMidAudioComponent;                                     // 0x0788 (size: 0x8)
    class UAudioComponent* SnowHighAudioComponent;                                    // 0x0790 (size: 0x8)
    class UAudioComponent* WindLowAudioComponent;                                     // 0x0798 (size: 0x8)
    class UAudioComponent* WindMidAudioComponent;                                     // 0x07A0 (size: 0x8)
    class UAudioComponent* WindHighAudioComponent;                                    // 0x07A8 (size: 0x8)
    class UNiagaraComponent* UnderworldCollapseFXComponent;                           // 0x07B0 (size: 0x8)
    class USoundCue* RepairItemSoundCue;                                              // 0x07B8 (size: 0x8)
    class UNiagaraComponent* EnterSwimmingVFXComponent;                               // 0x07C0 (size: 0x8)
    class UNiagaraComponent* SwimmingLoopVFXComponent;                                // 0x07C8 (size: 0x8)
    class USoundCue* EnterSwimmingSoundCue;                                           // 0x07D0 (size: 0x8)
    class UAudioComponent* SwimmingLoopAudioComponent;                                // 0x07D8 (size: 0x8)
    int32 NumDynamicShadowCastingLights;                                              // 0x07E0 (size: 0x4)
    class UMaterialParameterCollection* PostProcessMaterialParameterCollection;       // 0x07E8 (size: 0x8)
    class UMaterialParameterCollection* PositionPostProcessMaterialParameterCollection; // 0x07F0 (size: 0x8)
    class UMaterialParameterCollection* UnderworldCollapseMaterialParameterCollection; // 0x07F8 (size: 0x8)
    class AVisActor* CurrentUsableVisActor;                                           // 0x0868 (size: 0x8)
    class AVisActor* CurrentMountableVisActor;                                        // 0x0870 (size: 0x8)
    class AActor* CurrentUEUsableActor;                                               // 0x0878 (size: 0x8)

    FString GetPlayerName();
    float GetNightVisibilityRadius();
    FLinearColor GetNightShroudLightSourcePositionAndRadius(const int32 Index);
    FVector GetCameraVelocity();
    void BP_UpdateNightShroudMaterials();
    void BP_OnHeldItemChanged();
}; // Size: 0x890

class AVisPowerMill : public AVisStructure
{
    class UPowerMillDataComponent* PowerMillDataComponent;                            // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SKMesh;                                             // 0x0560 (size: 0x8)
    class UVisPowerUnitAnimInstance* AnimInst;                                        // 0x0568 (size: 0x8)

}; // Size: 0x5F0

class AVisProjectile : public AVisActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x04C0 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x04C8 (size: 0x8)
    class UProjectileMovementDataComponent* ProjectileMovementDataComponent;          // 0x04D0 (size: 0x8)

    void OnHiddenChanged(const bool& OldHidden, const bool& NewHidden);
}; // Size: 0x4D8

class AVisRefinery : public AVisStructure
{
    class URefineResourceDataComponent* RefineResourceDataComponent;                  // 0x0558 (size: 0x8)

}; // Size: 0x560

class AVisRelicTechCenter : public AVisStructure
{
    class URelicTechCenterDataComponent* RelicTechCenterDataComponent;                // 0x0558 (size: 0x8)

}; // Size: 0x560

class AVisResource : public AVisActor
{
    class UResourceDataComponent* ResourceDataComponent;                              // 0x04C0 (size: 0x8)
    class UPlantGrowthDataComponent* PlantGrowthComponent;                            // 0x04C8 (size: 0x8)
    TArray<class UStaticMesh*> StageMeshes;                                           // 0x04D0 (size: 0x10)
    bool bProjectToLandscape;                                                         // 0x04E0 (size: 0x1)
    class UArrowComponent* ArrowComponent;                                            // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x04F0 (size: 0x8)
    class UCurveVector* ShakeCurve;                                                   // 0x04F8 (size: 0x8)

}; // Size: 0x510

class AVisRichSoil : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class UDecalComponent* RichSoilDecal;                                             // 0x04C8 (size: 0x8)
    class URichSoilDataComponent* RichSoilDataComponent;                              // 0x04D0 (size: 0x8)

}; // Size: 0x4E0

class AVisSiegeTower : public AVisVehicle
{
}; // Size: 0x500

class AVisSignPost : public AVisStructure
{
    class USignPostDataComponent* SignPostDataComponent;                              // 0x0558 (size: 0x8)
    class ULifetimeDataComponent* LifetimeDataComponent;                              // 0x0560 (size: 0x8)
    TMap<class EAnvilSignPostVisualType, class FText> VisualNameMap;                  // 0x0568 (size: 0x50)
    TMap<class EAnvilSignPostVisualType, class UStaticMesh*> VisualMap;               // 0x05B8 (size: 0x50)
    class UVisStaticMeshComponent* Mesh;                                              // 0x0608 (size: 0x8)

}; // Size: 0x610

class AVisSpawnPoint : public AVisActor
{
    class UPlayerSpawnerDataComponent* PlayerSpawnerDataComponent;                    // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

class AVisSpline : public AVisStructure
{
    class UVisSplineComponent* SplineComponent;                                       // 0x0558 (size: 0x8)
    class UVisSplineComponent* SplineScaffoldingComponent;                            // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisSplineBuildSite : public AVisBuildSite
{
    class UVisSplineComponent* SplineComponent;                                       // 0x0538 (size: 0x8)

}; // Size: 0x540

class AVisStaticTorch : public AVisStructure
{
    class UCombustionDataComponent* CombustionDataComponent;                          // 0x0558 (size: 0x8)

}; // Size: 0x560

class AVisStorehouse : public AVisStructure
{
    class UStorehouseDataComponent* StorehouseDataComponent;                          // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisStructure : public AVisActor
{
    class UVisScaffoldingComponent* ScaffoldingComponent;                             // 0x04C0 (size: 0x8)
    class UTexture2D* StructureIcon;                                                  // 0x04C8 (size: 0x8)
    EBuildSiteCategory BuildSiteCategory;                                             // 0x04D0 (size: 0x1)
    int32 BuildSiteOrder;                                                             // 0x04D4 (size: 0x4)
    EBuildSiteVisibility BuildSiteVisibility;                                         // 0x04D8 (size: 0x1)
    uint32 SupportedVisualComponents;                                                 // 0x04DC (size: 0x4)
    class UUpgradeDataComponent* UpgradeDataComponent;                                // 0x04E0 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x04E8 (size: 0x8)
    class UTeamDataComponent* TeamDataComponent;                                      // 0x04F0 (size: 0x8)
    class UStructureDataComponent* StructureDataComponent;                            // 0x04F8 (size: 0x8)
    class UCollapsibleDataComponent* CollapsibleDataComponent;                        // 0x0500 (size: 0x8)
    class UScorchDataComponent* ScorchDataComponent;                                  // 0x0508 (size: 0x8)
    class UDecayDataComponent* DecayDataComponent;                                    // 0x0510 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0518 (size: 0x8)
    class UDecalComponent* UseVolumeDecalComponent;                                   // 0x0520 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalVolume;                           // 0x0528 (size: 0x8)
    TArray<class UNiagaraSystem*> ScorchEffectAssets;                                 // 0x0530 (size: 0x10)
    TArray<FGeneratedScorchEffectInfo> GeneratedScorchEffecftInfos;                   // 0x0540 (size: 0x10)

    void UpdateVisualComponentsByTag(const FName Tag, const bool bIsVisible, const bool bUpdateMaterials);
}; // Size: 0x558

class AVisTownCenter : public AVisStructure
{
    class UTownHallDataComponent* TownHallDataComponent;                              // 0x0558 (size: 0x8)
    class UVisTownAreaMarkerDecalComponent* TownAreaMarkerDecal;                      // 0x0560 (size: 0x8)

}; // Size: 0x568

class AVisTrap : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x04C8 (size: 0x8)
    class UAnimationAsset* TriggeredAnimation;                                        // 0x04D0 (size: 0x8)
    class UTrapDataComponent* TrapDataComponent;                                      // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

class AVisTreeFall : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* TreeTop;                                              // 0x04C8 (size: 0x8)
    class UCurveFloat* FallCurve;                                                     // 0x04D0 (size: 0x8)
    class UTreeFallDataComponent* TreeFallDataComponent;                              // 0x04D8 (size: 0x8)

}; // Size: 0x4E8

class AVisUnderworldModule : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)

}; // Size: 0x4C8

class AVisUnderworldModuleDynamic : public AVisUnderworldModule
{
    class UChildActorComponent* DynamicPrefabChildActor;                              // 0x04C8 (size: 0x8)
    class UDynamicPrefabDataComponent* DynamicPrefabDataComponent;                    // 0x04D0 (size: 0x8)
    class ADynamicPrefab* SpawnedDynamicPrefab;                                       // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

class AVisVehicle : public AVisActor
{
    class UVehicleMovementDataComponent* VehicleMovementDataComponent;                // 0x04C0 (size: 0x8)
    class UEntityAttachableDataComponent* EntityAttachableDataComponent;              // 0x04C8 (size: 0x8)
    class UAudioComponent* MoveLoopAudioComponent;                                    // 0x04D0 (size: 0x8)
    class UNiagaraComponent* MoveLoopParticleSystem;                                  // 0x04D8 (size: 0x8)
    class UHealthDataComponent* HealthDataComponent;                                  // 0x04E0 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x04F0 (size: 0x8)

}; // Size: 0x4F8

class AVisWindMill : public AVisStructure
{
    class UWindMillDataComponent* WindMillDataComponent;                              // 0x0558 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitDataComponent;                            // 0x0560 (size: 0x8)
    class UEntityAttachableDataComponent* SlotData;                                   // 0x0568 (size: 0x8)
    class USkeletalMeshComponent* SKMesh;                                             // 0x0570 (size: 0x8)
    class UVisPowerUnitAnimInstance* AnimInst;                                        // 0x0578 (size: 0x8)
    float IsRefiningPercentageCurrentMin;                                             // 0x0580 (size: 0x4)

}; // Size: 0x5C0

class AVisWorldEntrance : public AVisActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x04C0 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalVolume;                           // 0x04C8 (size: 0x8)

}; // Size: 0x4D0

class AVisualGlobals : public AInfo
{
    float FoundationDecorSnapRange;                                                   // 0x0290 (size: 0x4)
    TArray<class UStaticMesh*> AutoCreateDynamicInstancedMeshGroup;                   // 0x0298 (size: 0x10)
    TMap<class EAnvilFactionId, class UMaterialInterface*> TownAreaDecalMap;          // 0x02A8 (size: 0x50)
    TMap<class EAnvilFactionId, class UMaterialInterface*> FamilyAreaDecalMap;        // 0x02F8 (size: 0x50)

}; // Size: 0x348

class AvisLadder : public AVisActor
{
    class UTeamDataComponent* TeamDataComponent;                                      // 0x04C0 (size: 0x8)
    class ULadderDataComponent* LadderDataComponent;                                  // 0x04C8 (size: 0x8)
    TMap<float, UStaticMesh*> HalfLengthToLadderMeshes;                               // 0x04D0 (size: 0x50)
    class UArrowComponent* ArrowComponent;                                            // 0x0520 (size: 0x8)
    class UStaticMeshComponent* LadderMesh;                                           // 0x0528 (size: 0x8)

    void UpdateLadderMesh(float HalfLength);
}; // Size: 0x530

class UActionButtonWidget : public UUserWidget
{
    EActionButtonType ActionButtonType;                                               // 0x0278 (size: 0x1)
    EAnvilEntityActionType EntityActionType;                                          // 0x0279 (size: 0x1)
    class UTexture2D* ButtonImageOverride;                                            // 0x0280 (size: 0x8)
    class UButton* ActionButton;                                                      // 0x0288 (size: 0x8)
    class USoundCue* CallForReinforcementsCue;                                        // 0x0290 (size: 0x8)

    void OnClicked();
    bool IsActionButtonEnabled();
    ESlateVisibility GetActionButtonVisibility();
}; // Size: 0x298

class UActionStrip : public UUserWidget
{
    class UTextBlock* DismantleTimerText;                                             // 0x0278 (size: 0x8)

}; // Size: 0x280

class UAdminPlayerListItemData : public UObject
{
}; // Size: 0x58

class UAdminPlayerListItemWidget : public UUserWidget
{
    class UAnvilButtonWidget* NameBox;                                                // 0x0280 (size: 0x8)
    class UAnvilButtonWidget* TeamBox;                                                // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* SteamIdBox;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* TeleportToButton;                                       // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* BanButton;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* SilverAllowanceText;                                            // 0x02A8 (size: 0x8)

    void OnTeleportToClicked();
    void OnBanClicked();
    void CopySteamId();
}; // Size: 0x2D0

class UAdminScreen : public UAnvilScreen
{
    class UListView* PlayerListView;                                                  // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* SortByNameButton;                                       // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* SortByDistanceButton;                                   // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* ReloadButton;                                           // 0x02A8 (size: 0x8)
    class UEditableTextBox* SearchBox;                                                // 0x02B0 (size: 0x8)
    TArray<class UAdminPlayerListItemData*> PlayerList;                               // 0x02B8 (size: 0x10)

    void ReloadList();
    void OnSortByName();
    void OnSortByDistance();
    void OnSearch(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
}; // Size: 0x2C8

class UAlertWidget : public UUserWidget
{
    class UTextBlock* AlertTextBlock;                                                 // 0x0278 (size: 0x8)
    class USizeBox* AcceptButtonBox;                                                  // 0x0280 (size: 0x8)
    class UButton* AcceptButton;                                                      // 0x0288 (size: 0x8)
    class USizeBox* DeclineButtonBox;                                                 // 0x0290 (size: 0x8)
    class UButton* DeclineButton;                                                     // 0x0298 (size: 0x8)

    void OnDeclineClicked();
    void OnAcceptClicked();
}; // Size: 0x2D0

class UAlertsContainerWidget : public UUserWidget
{
    int32 MaxNumVisibleAlerts;                                                        // 0x0278 (size: 0x4)
    TSubclassOf<class UAlertWidget> AlertWidgetClass;                                 // 0x0280 (size: 0x8)
    class UButton* AlertsMaximizeButton;                                              // 0x0288 (size: 0x8)
    class UButton* AlertsMinimizeButton;                                              // 0x0290 (size: 0x8)
    class UVerticalBox* AlertsVerticalBox;                                            // 0x0298 (size: 0x8)

    void OnAlertsMinimizeClicked();
    void OnAlertsMaximizeClicked();
}; // Size: 0x2A0

class UAnvilButtonWidget : public UUserWidget
{
    FText LabelText;                                                                  // 0x0280 (size: 0x18)
    int32 LabelFontSize;                                                              // 0x0298 (size: 0x4)
    float ButtonWidth;                                                                // 0x029C (size: 0x4)
    float ButtonHeight;                                                               // 0x02A0 (size: 0x4)
    class UTextBlock* ButtonText;                                                     // 0x02A8 (size: 0x8)
    class UButton* Button;                                                            // 0x02B0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02B8 (size: 0x8)

    void ContextfulOnClicked();
}; // Size: 0x2D0

class UAnvilCharacterSave : public USaveGame
{
    int32 CompletedGameplayHints;                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

class UAnvilClientVoiceClient : public UObject
{

    void SetVoiceChatEnabledStateFromLocalSave();
    void SetVoiceChatEnabled(const bool bEnabled);
    void SetPlayVoiceInBackgroundEnabled(const bool InPlayVoiceInBackground);
    void SetOutputVolume(const float Volume);
    void SetInputVolume(const float Volume);
    void Reconnect();
}; // Size: 0x100

class UAnvilDialogBox : public UUserWidget
{
    class UTextBlock* HeaderText;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* BodyText;                                                       // 0x0280 (size: 0x8)
    class UThrobber* Throbber;                                                        // 0x0288 (size: 0x8)
    class UComboBoxString* ComboBox;                                                  // 0x0290 (size: 0x8)
    class USlider* Slider;                                                            // 0x0298 (size: 0x8)
    class UTextBlock* SliderCurrentValueText;                                         // 0x02A0 (size: 0x8)
    class UTextBlock* SliderMinValueText;                                             // 0x02A8 (size: 0x8)
    class UTextBlock* SliderMaxValueText;                                             // 0x02B0 (size: 0x8)
    class UTextBlock* TextInputLabelTextBox;                                          // 0x02B8 (size: 0x8)
    class UEditableTextBox* TextInputEditableTextBox;                                 // 0x02C0 (size: 0x8)
    class UTextBlock* LargeTextInputLabelTextBox;                                     // 0x02C8 (size: 0x8)
    class UMultiLineEditableText* LargeTextInputEditableTextBox;                      // 0x02D0 (size: 0x8)
    class UAnvilButtonWidget* LeftButton;                                             // 0x02D8 (size: 0x8)
    class UAnvilButtonWidget* RightButton;                                            // 0x02E0 (size: 0x8)

    void OnTextInputEditableTextChanged(const FText& Text);
    void OnRightButtonClicked();
    void OnLeftButtonClicked();
    void OnLargeTextInputEditableTextChanged(const FText& Text);
    FText GetSliderCurrentValueText();
    void FOnSliderValueChanged(const float Value);
}; // Size: 0x330

class UAnvilDropdownEntryWidget : public UUserWidget
{
    class UComboBoxString* ComboBox;                                                  // 0x0278 (size: 0x8)
    FText LabelText;                                                                  // 0x0280 (size: 0x18)
    TArray<FString> ComboList;                                                        // 0x0298 (size: 0x10)
    class UTextBlock* LabelTextBox;                                                   // 0x02A8 (size: 0x8)

    void OnOptionSelected(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x2D0

class UAnvilGameInstance : public UGameInstance
{
    class UMapWidget* MapWidget;                                                      // 0x0248 (size: 0x8)
    class UHUDWidget* HUDWidget;                                                      // 0x0250 (size: 0x8)
    class UWorldEntityPoolManager* WorldEntityPoolManager;                            // 0x0258 (size: 0x8)
    TArray<class UChatMessage*> ChatMessages;                                         // 0x02E0 (size: 0x10)
    FString TravelAddress;                                                            // 0x0338 (size: 0x10)
    TArray<uint8> ConnectTokenBuffer;                                                 // 0x0348 (size: 0x10)
    class UAnvilCharacterSave* CharacterSave;                                         // 0x0358 (size: 0x8)
    class UAnvilClientVoiceClient* AnvilClientVoiceClient;                            // 0x0360 (size: 0x8)
    FAnvilAssetManager AssetManager;                                                  // 0x0368 (size: 0x1C8)
    FWeatherManager WeatherManager;                                                   // 0x0530 (size: 0x88)
    FAnvilOptionsManager OptionsManager;                                              // 0x05B8 (size: 0x1B0)
    FMapPostManager MapPostManager;                                                   // 0x0768 (size: 0x38)
    TSubclassOf<class AUIGlobals> UIGlobalsClass;                                     // 0x07A0 (size: 0x8)
    TSubclassOf<class UEntityTemplate> R2ConfigClass;                                 // 0x07A8 (size: 0x8)
    TArray<class ALandscapeProxy*> DirtyLandscapeProxies;                             // 0x07B0 (size: 0x10)
    TArray<class AVisActor*> VisActorList;                                            // 0x07C0 (size: 0x10)
    TArray<class AVisActor*> TravelVisActorList;                                      // 0x07D0 (size: 0x10)
    FClientConfigManager ClientConfigManager;                                         // 0x07E0 (size: 0x48)
    TArray<class AVisActor*> VisActorPool;                                            // 0x1850 (size: 0x10)

    void GetVisActors(TArray<class AVisActor*>& OutVisActorList);
    void GetVersion(int32& OutMajor, int32& OutMinor, int32& OutPatch, int32& OutCL);
    void GetTimeOfDay(int32& OutHours, int32& OutMinutes, int32& OutSeconds);
    void GetDayCurrentSeconds(int32& OutSeconds);
    void DumpProperties(FString OutputFileName, const UClass* Type, const TArray<FString>& PropertyNameFilter);
}; // Size: 0x1860

class UAnvilKeyEntryWidget : public UUserWidget
{
    FText LabelText;                                                                  // 0x0290 (size: 0x18)
    FName ActionLabel;                                                                // 0x02A8 (size: 0x8)
    EInputType InputType;                                                             // 0x02B0 (size: 0x1)
    class UTextBlock* LabelTextBox;                                                   // 0x02B8 (size: 0x8)
    class UInputKeySelector* InputSelector;                                           // 0x02C0 (size: 0x8)

    void OnAxisMappingChanged(FInputChord Input);
    void OnActionMappingChanged(FInputChord Input);
}; // Size: 0x2C8

class UAnvilMovieCharacterNameWidget : public UUserWidget
{
    class UTextBlock* NameText;                                                       // 0x0278 (size: 0x8)
    float VisibilitDelayRandomRange;                                                  // 0x0280 (size: 0x4)
    float VisibilitDelayStartTime;                                                    // 0x0284 (size: 0x4)
    FVector VisibiliyDelayPerDistance;                                                // 0x0288 (size: 0x18)
    FVector VisibilityDelayAnchor;                                                    // 0x02A0 (size: 0x18)

}; // Size: 0x2C0

class UAnvilOptionsSave : public USaveGame
{
    TMap<FString, float> VolumeSettings;                                              // 0x0028 (size: 0x50)
    bool bVoiceChatEnabled;                                                           // 0x0078 (size: 0x1)
    FString SavedVoiceOutputDeviceName;                                               // 0x0080 (size: 0x10)
    FString SavedVoiceInputDeviceName;                                                // 0x0090 (size: 0x10)
    bool bShowPlayerName;                                                             // 0x00A0 (size: 0x1)
    bool bInteractCameraZoom;                                                         // 0x00A1 (size: 0x1)
    int32 AcceptedDisclaimerVersion;                                                  // 0x00A4 (size: 0x4)
    int32 LastShardId;                                                                // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UAnvilPanel : public UUserWidget
{
    class UNamedSlot* AnvilPanelSlot0;                                                // 0x0278 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot1;                                                // 0x0280 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot2;                                                // 0x0288 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot3;                                                // 0x0290 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot4;                                                // 0x0298 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot5;                                                // 0x02A0 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot6;                                                // 0x02A8 (size: 0x8)
    class UNamedSlot* AnvilPanelSlot7;                                                // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UAnvilRootWidget : public UUserWidget
{
    TMap<class EAnvilScreenType, class UAnvilScreen*> ScreenWidgets;                  // 0x0278 (size: 0x50)
    class UCanvasPanel* ScreenCanvas;                                                 // 0x02C8 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x02D0 (size: 0x8)
    class UAnvilDialogBox* DialogBox;                                                 // 0x02D8 (size: 0x8)
    class UCanvasPanel* WatermarkCanvas;                                              // 0x02E0 (size: 0x8)
    class UTextBlock* WatermarkVersionText;                                           // 0x02E8 (size: 0x8)
    TArray<EAnvilScreenType> ScreenStack;                                             // 0x02F0 (size: 0x10)

}; // Size: 0x308

class UAnvilScreen : public UUserWidget
{
    bool bOverrideBackground;                                                         // 0x0279 (size: 0x1)
    class UTexture2D* Background;                                                     // 0x0280 (size: 0x8)
    class UCanvasPanelSlot* ParentSlot;                                               // 0x0288 (size: 0x8)

}; // Size: 0x290

class UAnvilSliderWidget : public UUserWidget
{
    FString PropertyLabel;                                                            // 0x0278 (size: 0x10)
    FText SliderLabel;                                                                // 0x0298 (size: 0x18)
    class UTextBlock* LabelTextBox;                                                   // 0x02B0 (size: 0x8)
    class USlider* Slider;                                                            // 0x02B8 (size: 0x8)

    void NativeOnSliderChanged(const float Value);
}; // Size: 0x2C0

class UAnvilWindow : public UStructureWindow
{
    class UImage* CurrentSelectedOutputImage;                                         // 0x02F0 (size: 0x8)
    class UButton* OutputPreviousButton;                                              // 0x02F8 (size: 0x8)
    class UButton* OutputNextButton;                                                  // 0x0300 (size: 0x8)

    void OutputPreviousButtonClicked();
    void OutputNextButtonClicked();
    void OnCurrentSelectedOutputIndexChanged(const uint8& Old, const uint8& New);
}; // Size: 0x308

class UBeaconTowerPlayerInfoMapIcon : public UMapIcon
{
    FSlateColor FriendlyColour;                                                       // 0x0398 (size: 0x14)
    FSlateColor EnemyColour;                                                          // 0x03AC (size: 0x14)
    class UTextBlock* LocationText;                                                   // 0x03C0 (size: 0x8)

    ESlateVisibility GetLocationTextVisibility();
    FText GetLocationText();
}; // Size: 0x3C8

class UBuildMenuStructureButton : public UGridItemWidget
{

    void OnBuild(class UGridItemWidget* ItemSlot);
}; // Size: 0x2F8

class UBuildMenuTabButton : public UGridItemWidget
{
    class UImage* SelectedImage;                                                      // 0x02F8 (size: 0x8)

}; // Size: 0x308

class UBuildMenuWindow : public UHUDWindow
{
    class UPanelWidget* TabButtonPanel;                                               // 0x02B8 (size: 0x8)
    class UGridPanelWidget* StructureButtonGrid;                                      // 0x02C0 (size: 0x8)
    TSubclassOf<class UBuildMenuTabButton> TabButtonClass;                            // 0x02C8 (size: 0x8)
    TMap<class EBuildSiteCategory, class UTexture2D*> TabButtonIcons;                 // 0x02D0 (size: 0x50)

}; // Size: 0x328

class UCentralMarketplaceListEntryWidget : public UUserWidget
{
    class UButton* CancelButton;                                                      // 0x0278 (size: 0x8)
    class USizeBox* ItemImageSizeBox;                                                 // 0x0280 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0288 (size: 0x8)
    class UImage* SubItemImage;                                                       // 0x0290 (size: 0x8)
    class UImage* QualityIconImage;                                                   // 0x0298 (size: 0x8)
    class UTextBlock* ItemNameTextBlock;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* BuyerSellerTextBlock;                                           // 0x02A8 (size: 0x8)
    class USizeBox* QuantityCrateSizeBox;                                             // 0x02B0 (size: 0x8)
    class UTextBlock* QuantityTextBlock;                                              // 0x02B8 (size: 0x8)
    class UTextBlock* PriceTextBlock;                                                 // 0x02C0 (size: 0x8)
    class UAnvilButtonWidget* BuyFulfillButton;                                       // 0x02C8 (size: 0x8)

    void OnCancelButtonClicked();
    void OnBuySellButtonClicked();
    FText GetPlayerNameText();
}; // Size: 0x340

class UCentralMarketplaceMapTooltip : public UUserWidget
{
}; // Size: 0x278

class UCentralMarketplaceOrderGridPanelWidget : public UGridPanelWidget
{
}; // Size: 0x1B8

class UCentralMarketplaceOrderItemWidget : public UGridItemWidget
{
}; // Size: 0x2F8

class UCentralMarketplaceWidget : public UUserWidget
{
    TSubclassOf<class UCentralMarketplaceListEntryWidget> CentralMarketplaceListEntryWidgetClass; // 0x0278 (size: 0x8)
    TSubclassOf<class UItemCategoryButton> ItemCategoryButtonClass;                   // 0x0280 (size: 0x8)
    TMap<class EVisItemCategory, class UTexture2D*> ItemCategoryIcons;                // 0x0288 (size: 0x50)
    bool bIsMapWidget;                                                                // 0x02D8 (size: 0x1)
    class UHorizontalBox* ItemCategoryButtonHorizontalBox;                            // 0x02E0 (size: 0x8)
    class UWidgetSwitcher* MarketTabSwitcher;                                         // 0x02E8 (size: 0x8)
    class UScrollBox* SaleListEntriesScrollBox;                                       // 0x02F0 (size: 0x8)
    class UScrollBox* OrderListEntriesScrollBox;                                      // 0x02F8 (size: 0x8)
    class UAnvilButtonWidget* BuySellTabButton;                                       // 0x0300 (size: 0x8)
    class UAnvilButtonWidget* PlaceOrderTabButton;                                    // 0x0308 (size: 0x8)
    class UAnvilButtonWidget* ActiveOrdersTabButton;                                  // 0x0310 (size: 0x8)
    class UHeaderContainer* HeaderContainer;                                          // 0x0318 (size: 0x8)
    class UCentralMarketplaceOrderGridPanelWidget* OrderGridPanelWidget;              // 0x0320 (size: 0x8)
    class UTextBlock* SelectedOrderItemNameText;                                      // 0x0328 (size: 0x8)
    class UImage* SelectedOrderItemImage;                                             // 0x0330 (size: 0x8)
    class UImage* SelectedOrderCrateImage;                                            // 0x0338 (size: 0x8)
    class UCheckBox* SelectedOrderCrateCheckBox;                                      // 0x0340 (size: 0x8)
    class UTextBlock* OrderCratesTextBlock;                                           // 0x0348 (size: 0x8)
    class UEditableTextBox* SelectedOrderItemQuantityEditableTextBox;                 // 0x0350 (size: 0x8)
    class UEditableTextBox* SelectedOrderItemPriceEditableTextBox;                    // 0x0358 (size: 0x8)
    class UComboBoxString* SelectedOrderItemMinQualityComboBox;                       // 0x0360 (size: 0x8)
    class UTextBlock* SelectedOrderItemTotalPriceTextBlock;                           // 0x0368 (size: 0x8)
    class UAnvilButtonWidget* SelectedItemPlaceOrderButton;                           // 0x0370 (size: 0x8)

    void OnSelectedOrderCrateCheckBoxStateChanged(const bool bIsChecked);
    void OnSelectedItemPlaceOrderButtonClicked();
    void OnPlaceOrderTabButtonClicked();
    void OnBuySellTabButtonClicked();
    void OnActiveOrdersTabButtonClicked();
    bool IsSelectedOrderItemQuantityEditableTextBoxEnabled();
    bool IsSelectedOrderItemPriceEditableTextBoxEnabled();
    bool IsSelectedOrderItemMinQualityComboBoxEnabled();
    bool IsSelectedOrderCrateCheckBoxEnabled();
    bool IsSelectedItemPlaceOrderButtonEnabled();
    bool IsPlaceOrderTabButtonEnabled();
    bool IsBuySellTabButtonEnabled();
    bool IsActiveOrdersTabButtonEnabled();
    ESlateVisibility GetSelectedOrderItemTotalPriceTextVisibility();
    FText GetSelectedOrderItemTotalPriceText();
    ESlateVisibility GetItemCategoryButtonPanelVisibility();
}; // Size: 0x3A0

class UCentralMarketplaceWindow : public UStructureWindow
{
    class UCentralMarketplaceWidget* CentralMarketplaceWidget;                        // 0x02F0 (size: 0x8)

}; // Size: 0x318

class UChatEntryWidget : public UUserWidget
{
    TMap<class EAnvilChatType, class FText> ModeNameMap;                              // 0x0280 (size: 0x50)
    TMap<class FString, class EAnvilChatType> ModeSwitchKeywordMap;                   // 0x02D0 (size: 0x50)
    class URichTextBlock* ChatTextField;                                              // 0x0320 (size: 0x8)

}; // Size: 0x328

class UChatWidget : public UUserWidget
{
    float ChatWidth;                                                                  // 0x0278 (size: 0x4)
    float ChatHeight;                                                                 // 0x027C (size: 0x4)
    float ChatMinimizedHeight;                                                        // 0x0280 (size: 0x4)
    EAnvilChatType CurrentMode;                                                       // 0x0284 (size: 0x1)
    class UButton* MinimizeButton;                                                    // 0x0288 (size: 0x8)
    class UButton* MaximizeButton;                                                    // 0x0290 (size: 0x8)
    class UComboBoxString* ChatEntryDropdown;                                         // 0x0298 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02A0 (size: 0x8)
    class UEditableTextBox* ChatEntryTextField;                                       // 0x02A8 (size: 0x8)
    class UListView* ChatHistoryListView;                                             // 0x02B0 (size: 0x8)
    class UChatEntryWidget* EntryTemplate;                                            // 0x0358 (size: 0x8)
    class UObject* LastItem;                                                          // 0x0360 (size: 0x8)

    void OnModeOptionSelected(FString Item, TEnumAsByte<ESelectInfo::Type> Type);
    void OnMinimized();
    void OnMaximized();
    void OnEntryCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
    void OnEntryChanged(const FText& Text);
}; // Size: 0x368

class UCombustionPanelWidget : public UUserWidget
{
    class UTextBlock* FuelDurationText;                                               // 0x0278 (size: 0x8)
    class UCombustionDataComponent* CombustionDataComponent;                          // 0x0280 (size: 0x8)
    class UInventoryWidget* FuelInputItemGrid;                                        // 0x0288 (size: 0x8)
    class UInventoryWidget* FuelOutputItemGrid;                                       // 0x0290 (size: 0x8)

}; // Size: 0x298

class UConnectScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* BackButton;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* RefreshButton;                                          // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* ConnectButton;                                          // 0x02A0 (size: 0x8)
    class UThrobber* DownloadingThrobber;                                             // 0x02A8 (size: 0x8)
    class UTextBlock* NameValidationMessageText;                                      // 0x02B0 (size: 0x8)

    void OnRefreshButtonClicked();
    void OnConnectButtonClicked();
    void OnBackButtonClicked();
    bool IsRefreshButtonEnabled();
    bool IsConnectButtonEnabled();
    bool IsBackButtonEnabled();
    ESlateVisibility GetThrobberVisibility();
}; // Size: 0x2B8

class UCookingWindow : public UStructureWindow
{
    class UInventoryWidget* RecipeInputItemGrid;                                      // 0x02F0 (size: 0x8)
    class UInventoryWidget* RecipeOutputItemGrid;                                     // 0x02F8 (size: 0x8)
    class UInventoryWidget* WaterInputItemGrid;                                       // 0x0300 (size: 0x8)
    class UTextBlock* CookingDurationText;                                            // 0x0308 (size: 0x8)
    class UCanvasPanel* CheatSheetCanvasPanel;                                        // 0x0310 (size: 0x8)
    class URichTextBlock* CheatSheetTextBlock;                                        // 0x0318 (size: 0x8)
    class UButton* StartCookingButton;                                                // 0x0320 (size: 0x8)
    class UImage* StartCookingButtonImage;                                            // 0x0328 (size: 0x8)
    FSlateBrush InvalidRecipeIcon;                                                    // 0x0330 (size: 0xD0)

    void OnStartCookingButtonClicked();
    ESlateVisibility GetCookingDurationTextVisibility();
    FText GetCookingDurationText();
}; // Size: 0x400

class UCraftingRecipeListWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class UCraftingRecipeWidget : public UGridItemWidget
{
}; // Size: 0x2F8

class UCraftingWindow : public UStructureWindow
{
    class UCraftingRecipeListWidget* CraftingRecipeListWidget;                        // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class UDeathMarketMapIcon : public UMapIcon
{

    void OnLastDeathLocationChanged(const FVector& OldVal, const FVector& NewVal);
}; // Size: 0x398

class UDemoWidget : public UUserWidget
{
    class UTextBlock* NextTestText;                                                   // 0x0278 (size: 0x8)
    class UTextBlock* CountdownHeaderText;                                            // 0x0280 (size: 0x8)
    class UTextBlock* CountdownText;                                                  // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* ConfirmButton;                                          // 0x0290 (size: 0x8)
    class UButton* DiscordButton;                                                     // 0x0298 (size: 0x8)

    void UpdateText();
    void OnDiscordButtonClicked();
    void OnConfirmButtonClicked();
}; // Size: 0x2A8

class UDeploymentFoodItemGridWidget : public UGridPanelWidget
{
}; // Size: 0x1B8

class UDeploymentFoodItemWidget : public UGridItemWidget
{
    class UTexture2D* WildSpawnIcon;                                                  // 0x0310 (size: 0x8)
    class UTextBlock* ItemQuantityText;                                               // 0x0318 (size: 0x8)

}; // Size: 0x320

class UDeploymentFoodWidget : public UUserWidget
{
    class UImage* TooltipImage;                                                       // 0x0278 (size: 0x8)
    class UDeploymentFoodItemGridWidget* DeploymentFoodItemGridWidget;                // 0x0280 (size: 0x8)
    class UTextBlock* DeploymentUnavailableText;                                      // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* CancelButton;                                           // 0x0290 (size: 0x8)
    class UDeploymentScreen* ParentDeploymentScreen;                                  // 0x0298 (size: 0x8)

    void OnCancelButtonClicked();
}; // Size: 0x2B0

class UDeploymentMapWidget : public UMapWidgetBase
{
}; // Size: 0x330

class UDeploymentPointMapIcon : public UWorldEntityMapIcon
{
    class UButton* MapItemButton;                                                     // 0x03A0 (size: 0x8)
    float FlashingFrequency;                                                          // 0x03A8 (size: 0x4)
    float FlashingMinOpacity;                                                         // 0x03AC (size: 0x4)

    void OnDeploymentPointClicked();
    bool IsDeploymentPointEnabled();
    ESlateVisibility GetDeploymentPointVisibility();
}; // Size: 0x3B0

class UDeploymentScreen : public UAnvilScreen
{
    class UDeploymentMapWidget* MapWidget;                                            // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* LogoutButton;                                           // 0x0298 (size: 0x8)
    class UTextBlock* DeploymentInstructionOrSpawnTimerText;                          // 0x02A0 (size: 0x8)
    class UDeploymentFoodWidget* DeploymentFoodWidget;                                // 0x02A8 (size: 0x8)
    class UButton* FamilyCenterDeployButton;                                          // 0x02B0 (size: 0x8)
    class UVerticalBox* FamilyCenterDeployWidget;                                     // 0x02B8 (size: 0x8)

    void OnLogoutButtonClicked();
    void OnFamilyCenterDeployButtonClicked();
    bool IsFamilyCenterDeployButtonEnabled();
    ESlateVisibility GetFamilyCenterDeployWidgetVisibility();
    FText GetDeploymentInstructionOrSpawnTimerText();
}; // Size: 0x2D0

class UDisclaimerWidget : public UUserWidget
{
    class UCheckBox* DisclaimerCheckBox1;                                             // 0x0278 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox2;                                             // 0x0280 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox3;                                             // 0x0288 (size: 0x8)
    class UCheckBox* DisclaimerCheckBox4;                                             // 0x0290 (size: 0x8)
    class UEditableTextBox* AcceptTextBox;                                            // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* CancelButton;                                           // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* ConfirmButton;                                          // 0x02A8 (size: 0x8)

    void OnConfirmButtonClicked();
    void OnCancelButtonClicked();
    bool IsConfirmButtonEnabled();
    bool IsAcceptTextBoxEnabled();
}; // Size: 0x2B0

class UDismantleButtonWidget : public UUserWidget
{
    class UButton* DismantleButton;                                                   // 0x0278 (size: 0x8)
    class UImage* StructureIconImage;                                                 // 0x0280 (size: 0x8)
    class UWidget* ReinforcedIconContainer;                                           // 0x0288 (size: 0x8)

    void OnClicked();
}; // Size: 0x298

class UEntityActorRootComponent : public USceneComponent
{
}; // Size: 0x2A0

class UFactionSelectScreen : public UAnvilScreen
{
    class UButton* FactionAranicButton;                                               // 0x0290 (size: 0x8)
    class UTextBlock* AranicAtCapacityText;                                           // 0x0298 (size: 0x8)
    class UButton* FactionMirrishButton;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* MirrishAtCapacityText;                                          // 0x02A8 (size: 0x8)
    class UButton* FactionNovanButton;                                                // 0x02B0 (size: 0x8)
    class UTextBlock* NovanAtCapacityText;                                            // 0x02B8 (size: 0x8)
    class UAnvilButtonWidget* DeleteProfileButton;                                    // 0x02C0 (size: 0x8)
    class UThrobber* DownloadingThrobber;                                             // 0x02C8 (size: 0x8)
    class UCheckBox* ServerBrowserCheckBox;                                           // 0x02D0 (size: 0x8)
    class UHorizontalBox* ServerBrowserHorizontalBox;                                 // 0x02D8 (size: 0x8)
    class UCheckBox* EditorSpawnCheckBox;                                             // 0x02E0 (size: 0x8)
    class UHorizontalBox* EditorSpawnHorizontalBox;                                   // 0x02E8 (size: 0x8)
    FLinearColor FactionAtCapacityColour;                                             // 0x02F0 (size: 0x10)
    class UWidgetSwitcher* FactionSelectSwitcher;                                     // 0x0300 (size: 0x8)
    class UWidgetSwitcher* FactionLockedSwitcher;                                     // 0x0308 (size: 0x8)
    class UButton* FactionLockedAranicButton;                                         // 0x0310 (size: 0x8)
    class UButton* FactionLockedMirrishButton;                                        // 0x0318 (size: 0x8)
    class UButton* FactionLockedNovanButton;                                          // 0x0320 (size: 0x8)

    void OnSelectedFactionButtonClicked();
    void OnFactionNovanButtonClicked();
    void OnFactionMirrishButtonClicked();
    void OnFactionAranicButtonClicked();
    void OnDeleteProfileButtonClicked();
    bool IsSelectedFactionButtonEnabled();
    bool IsFactionAranicButtonEnabled();
    bool IsDeleteProfileButtonEnabled();
    ESlateVisibility GetThrobberVisibility();
    ESlateVisibility GetDevModeWidgetVisibility();
    ESlateVisibility GetDeleteProfileButtonVisibility();
}; // Size: 0x338

class UFamilyAreaMarkerWindow : public UStructureWindow
{
    TSubclassOf<class UFamilyMemberListItemWidget> FamilyMemberListItemWidgetType;    // 0x02F0 (size: 0x8)
    class UScrollBox* FamilyMembersScrollBox;                                         // 0x02F8 (size: 0x8)
    class UScrollBox* AlliedFamiliesScrollBox;                                        // 0x0300 (size: 0x8)
    class UImage* UpkeepIcon;                                                         // 0x0308 (size: 0x8)
    class UTextBlock* UpkeepTextBlock;                                                // 0x0310 (size: 0x8)
    class UCheckBox* FamilyAreaRestrictedCheckBox;                                    // 0x0318 (size: 0x8)
    class UButton* FamilyAreaAllianceButton;                                          // 0x0320 (size: 0x8)
    class UFamilyInviteDialogWidget* FamilyInviteDialogWidget;                        // 0x0328 (size: 0x8)

    void OnRemoveAlliedFamilyClicked(const uint64 AlliedFamilyFounderOnlineId);
    void OnKickMemberClicked(const uint64 PlayerId);
    void OnFamilyAreaSetAllianceClicked();
    void OnFamilyAreaRestrictedChecked(bool bIsChecked);
    bool IsFamilyAreaSetAllianceButtonEnabled();
    bool IsFamilyAreaRestrictedCheckBoxEnabled();
    ESlateVisibility GetFamilyAreaSetAllianceVisibility();
    ESlateVisibility GetFamilyAreaRestrictedVisibility();
    ECheckBoxState GetFamilyAreaRestrictedCheckedState();
}; // Size: 0x340

class UFamilyInviteDialogPlayerListEntryWidget : public UUserWidget
{
    class UTextBlock* PlayerNameText;                                                 // 0x0278 (size: 0x8)
    class UButton* InviteButton;                                                      // 0x0280 (size: 0x8)

    void OnInviteClicked();
    FText GetPlayerNameText();
}; // Size: 0x290

class UFamilyInviteDialogWidget : public UUserWidget
{
    TSubclassOf<class UFamilyInviteDialogPlayerListEntryWidget> PlayerListEntryWidgetType; // 0x0278 (size: 0x8)
    class UScrollBox* PlayerListScrollBox;                                            // 0x0280 (size: 0x8)
    class UAnvilButtonWidget* CloseButton;                                            // 0x0288 (size: 0x8)

    void OnCloseButtonClicked();
}; // Size: 0x290

class UFamilyMarkerMapIcon : public UMapIcon
{
}; // Size: 0x398

class UFamilyMemberListItemWidget : public UUserWidget
{
    class UImage* OnlineStatusIcon;                                                   // 0x0278 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x0280 (size: 0x8)
    class USizeBox* RoleComboBoxSizeBox;                                              // 0x0288 (size: 0x8)
    class UComboBoxString* RoleComboBox;                                              // 0x0290 (size: 0x8)
    class USizeBox* RoleTextSizeBox;                                                  // 0x0298 (size: 0x8)
    class UTextBlock* RoleTextBlock;                                                  // 0x02A0 (size: 0x8)
    class UButton* KickButton;                                                        // 0x02A8 (size: 0x8)

    void OnKickButtonClicked();
    void OnFamilyRoleSelectionChanged(FString SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType);
    ESlateVisibility GetRoleTextVisibility();
    FText GetRoleText();
    ESlateVisibility GetRoleComboBoxVisibility();
    FText GetPlayerNameText();
    ESlateVisibility GetKickButtonVisibility();
}; // Size: 0x2E0

class UFoodCooldownIconWidget : public UUserWidget
{
    class UImage* FoodIconImage;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x288

class UFoodCooldownWidget : public UUserWidget
{
    class UTexture2D* FoodTypeIconBrushList;                                          // 0x0278 (size: 0x40)
    TSubclassOf<class UFoodCooldownIconWidget> FoodCooldownIconWidgetClass;           // 0x02B8 (size: 0x8)
    class UHorizontalBox* FoodIconsHorizontalBox;                                     // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UFooterContainer : public UUserWidget
{
    float FooterWidth;                                                                // 0x0278 (size: 0x4)
    float FooterHeight;                                                               // 0x027C (size: 0x4)
    class USizeBox* FooterSizeBox;                                                    // 0x0280 (size: 0x8)
    class UNamedSlot* FooterSlot0;                                                    // 0x0288 (size: 0x8)

}; // Size: 0x290

class UGameplayOverlay : public UUserWidget
{
    class UAlertsContainerWidget* AlertsContainerWidget;                              // 0x0278 (size: 0x8)
    class UChatWidget* ChatWidget;                                                    // 0x0280 (size: 0x8)
    class UTextBlock* NotificationText;                                               // 0x0288 (size: 0x8)
    class UTextBlock* SecondaryNotificationText;                                      // 0x0290 (size: 0x8)
    class UTextBlock* PrimaryPromptText;                                              // 0x0298 (size: 0x8)
    class UTextBlock* SecondaryPromptText;                                            // 0x02A0 (size: 0x8)
    class UTexture2D* VictoryBackground;                                              // 0x02A8 (size: 0x8)
    class UTexture2D* AgeEndingBackground;                                            // 0x02B0 (size: 0x8)
    class UTexture2D* PostAgeEndingBackground;                                        // 0x02B8 (size: 0x8)
    class UTexture2D* AranicLogo;                                                     // 0x02C0 (size: 0x8)
    class UTexture2D* MirrishLogo;                                                    // 0x02C8 (size: 0x8)
    class UTexture2D* NovanLogo;                                                      // 0x02D0 (size: 0x8)
    class UTexture2D* MilitaryVictoryLogo;                                            // 0x02D8 (size: 0x8)
    class UTexture2D* CultureVictoryLogo;                                             // 0x02E0 (size: 0x8)
    class USoundCue* VictorySoundCue;                                                 // 0x02E8 (size: 0x8)
    class USoundCue* AgeEndingSoundCue;                                               // 0x02F0 (size: 0x8)
    class UCanvasPanel* WinConditionCanvas;                                           // 0x02F8 (size: 0x8)
    class UImage* WinConditionBackground;                                             // 0x0300 (size: 0x8)
    class UImage* WinConditionLogo;                                                   // 0x0308 (size: 0x8)
    class UImage* VictoryTypeLogo;                                                    // 0x0310 (size: 0x8)

    void PlayWinConditionAnimation();
    ESlateVisibility GetHUDWidgetVisibility();
}; // Size: 0x338

class UGameplayScreen : public UAnvilScreen
{
    class UGameplayOverlay* GameplayOverlay;                                          // 0x0290 (size: 0x8)
    class UHUDWidget* HUDWidget;                                                      // 0x0298 (size: 0x8)
    class UMapWidget* MapWidget;                                                      // 0x02A0 (size: 0x8)
    class UDeploymentScreen* DeploymentScreen;                                        // 0x02A8 (size: 0x8)
    class UWidgetSwitcher* ContentSwitcher;                                           // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UGrainMillWindow : public UStructureWindow
{
    class UInventoryWidget* InputItemGrid;                                            // 0x02F0 (size: 0x8)
    class UInventoryWidget* OutputItemGrid;                                           // 0x02F8 (size: 0x8)
    class UImage* RecipePreviewImage;                                                 // 0x0300 (size: 0x8)
    FSlateBrush InvalidRecipeIcon;                                                    // 0x0310 (size: 0xD0)

}; // Size: 0x3E0

class UGrassRemovalVolumeComponent : public USceneComponent
{
    FVector Extents;                                                                  // 0x02A0 (size: 0x18)
    uint8 bDeferGrassUpdate;                                                          // 0x02B8 (size: 0x1)
    uint8 bSetByUseVolume;                                                            // 0x02B8 (size: 0x1)
    uint8 bSetBySpline;                                                               // 0x02B8 (size: 0x1)
    class USplineDataComponent* SplineDataComponent;                                  // 0x02C0 (size: 0x8)

    void TryRemoveGrass();
    void RemoveGrassWithRetry();
    bool RemoveGrass();
}; // Size: 0x2E0

class UGridItemWidget : public UUserWidget
{
    float ItemWidth;                                                                  // 0x02B8 (size: 0x4)
    float ItemHeight;                                                                 // 0x02BC (size: 0x4)
    class UButton* Button;                                                            // 0x02C0 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02C8 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x02D0 (size: 0x8)
    class UImage* SubItemImage;                                                       // 0x02D8 (size: 0x8)
    class UImage* QualityIconImage;                                                   // 0x02E0 (size: 0x8)
    class UTexture2D* BackgroundImageTexture;                                         // 0x02E8 (size: 0x8)
    bool bIsActive;                                                                   // 0x02F0 (size: 0x1)

    void OnClicked();
}; // Size: 0x2F8

class UGridPanelWidget : public UUniformGridPanel
{
    FIntPoint PreferredDimension;                                                     // 0x0190 (size: 0x8)
    TSubclassOf<class UGridItemWidget> ItemSlotWidgetType;                            // 0x0198 (size: 0x8)
    int32 PreviewItemCount;                                                           // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

class UHUDBuildSiteWidget : public UUserWidget
{
    TSubclassOf<class UResourceWidget> ResourceWidgetClass;                           // 0x0278 (size: 0x8)
    class UTextBlock* RequiredToolText;                                               // 0x0280 (size: 0x8)
    class UVerticalBox* ResourcesContainer;                                           // 0x0288 (size: 0x8)

}; // Size: 0x298

class UHUDDemoHintWidget : public UUserWidget
{
    class UAnvilButtonWidget* HelpButton;                                             // 0x0278 (size: 0x8)
    class UButton* HintMaximizeButton;                                                // 0x0280 (size: 0x8)
    class UButton* HintMinimizeButton;                                                // 0x0288 (size: 0x8)

    void OnHintMinimizeClicked();
    void OnHintMaximizeClicked();
    void OnHelpButtonClicked();
}; // Size: 0x290

class UHUDEntityBillboardWidget : public UUserWidget
{
    class AActor* Target;                                                             // 0x0278 (size: 0x8)
    float WorldZOffset;                                                               // 0x0280 (size: 0x4)
    class UCanvasPanel* Canvas;                                                       // 0x0288 (size: 0x8)
    class UCanvasPanelSlot* CanvasSlot;                                               // 0x0290 (size: 0x8)

}; // Size: 0x298

class UHUDHintWidget : public UUserWidget
{
    class URichTextBlock* PrimaryHintTextBlock;                                       // 0x0278 (size: 0x8)
    class UCanvasPanel* PrimaryHintCanvas;                                            // 0x0280 (size: 0x8)
    class URichTextBlock* SecondaryHintTextBlock;                                     // 0x0288 (size: 0x8)
    class UCanvasPanel* SecondaryHintCanvas;                                          // 0x0290 (size: 0x8)
    class UVerticalBox* HintVerticalBox;                                              // 0x0298 (size: 0x8)
    class UButton* HintMaximizeButton;                                                // 0x02A0 (size: 0x8)
    class UButton* HintMinimizeButton;                                                // 0x02A8 (size: 0x8)

    void OnHintMinimizeClicked();
    void OnHintMaximizeClicked();
}; // Size: 0x2B0

class UHUDNameWidget : public UHUDEntityBillboardWidget
{
    float LocalChatDisplayTime;                                                       // 0x0298 (size: 0x4)
    class UTextBlock* NameText;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* LocalChatText;                                                  // 0x02A8 (size: 0x8)
    class UImage* ReinforcementIcon;                                                  // 0x02B0 (size: 0x8)
    int32 LocalChatTextLimit;                                                         // 0x02B8 (size: 0x4)
    FSlateColor NameTypeColourList;                                                   // 0x02BC (size: 0x64)

    ESlateVisibility GetWidgetVisibility();
    ESlateVisibility GetReinforcementIconVisibility();
    ESlateVisibility GetPlayerNameVisibility();
    FText GetPlayerNameText();
    FSlateColor GetPlayerNameColour();
    ESlateVisibility GetLocalChatTextVisibility();
}; // Size: 0x320

class UHUDPlacementStatusWidget : public UUserWidget
{
    class UTextBlock* StatusText;                                                     // 0x0278 (size: 0x8)

}; // Size: 0x280

class UHUDSignPostWidget : public UHUDEntityBillboardWidget
{
    float MessageDisplayRange;                                                        // 0x0298 (size: 0x4)
    class USignPostMessageWidget* MessageWidget;                                      // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UHUDStatsWidget : public UUserWidget
{
    class UTextBlock* StatsText;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UHUDWidget : public UUserWidget
{
    class UInteractionIconWidget* InteractionIcon;                                    // 0x0278 (size: 0x8)
    class UCanvasPanel* HUDSubCanvas;                                                 // 0x0280 (size: 0x8)
    class UCanvasPanel* NameCanvas;                                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* SignPostMessageCanvas;                                        // 0x0290 (size: 0x8)
    class UCanvasPanel* StatsCanvas;                                                  // 0x0298 (size: 0x8)
    class UCanvasPanel* DismantleButtonsCanvas;                                       // 0x02A0 (size: 0x8)
    class UCanvasPanel* TravelIndicatorCanvas;                                        // 0x02A8 (size: 0x8)
    TMap<class EHUDWindowType, class UHUDWindow*> HUDWindowWidgets;                   // 0x02B0 (size: 0x50)
    TSubclassOf<class UHUDNameWidget> HUDNameWidgetClass;                             // 0x0300 (size: 0x8)
    TSubclassOf<class UHUDSignPostWidget> HUDSignPostWidgetClass;                     // 0x0308 (size: 0x8)
    TSubclassOf<class UHUDStatsWidget> HUDStatsWidgetClass;                           // 0x0310 (size: 0x8)
    TSubclassOf<class UDismantleButtonWidget> DismantleButtonWidgetClass;             // 0x0318 (size: 0x8)
    class UHUDWindow* OpenedHUDWindow;                                                // 0x0320 (size: 0x8)
    class UImage* Compass;                                                            // 0x0328 (size: 0x8)
    class UImage* CompassPlayerArrow;                                                 // 0x0330 (size: 0x8)
    class UInventoryItemHUDWidget* PrimaryHeldItem;                                   // 0x0338 (size: 0x8)
    class UInventoryItemHUDWidget* SecondaryHeldItem;                                 // 0x0340 (size: 0x8)
    class UInventoryItemHUDWidget* PrimaryEquipmentItem;                              // 0x0348 (size: 0x8)
    class UInventoryItemHUDWidget* SecondaryEquipmentItem;                            // 0x0350 (size: 0x8)
    class UProgressBar* GuardBar;                                                     // 0x0358 (size: 0x8)
    class USlider* GuardBarMaxSlider;                                                 // 0x0360 (size: 0x8)
    class UPanelWidget* GuardStatusWidget;                                            // 0x0368 (size: 0x8)
    class UImage* GuardStrengthLeftIcon;                                              // 0x0370 (size: 0x8)
    class UImage* GuardStrengthCenterIcon;                                            // 0x0378 (size: 0x8)
    class UImage* GuardStrengthRightIcon;                                             // 0x0380 (size: 0x8)
    class UTextBlock* PlayerStatusText;                                               // 0x0388 (size: 0x8)
    class UVitalityStatusWidget* PlayerVitality;                                      // 0x0390 (size: 0x8)
    class UVitalityStatusWidget* HorseVitality;                                       // 0x0398 (size: 0x8)
    class UInventoryHUDWidget* InventoryHUD;                                          // 0x03A0 (size: 0x8)
    class UCanvasPanel* DisclaimerCanvas;                                             // 0x03A8 (size: 0x8)
    class UTextBlock* DisclaimerText;                                                 // 0x03B0 (size: 0x8)
    class UCanvasPanel* BuildSiteCanvas;                                              // 0x03B8 (size: 0x8)
    class UHUDPlacementStatusWidget* PlacementStatusWidget;                           // 0x03C0 (size: 0x8)
    class UHUDBuildSiteWidget* BuildSiteWidget;                                       // 0x03C8 (size: 0x8)
    FSlateBrush GuardStrengthEmptyIcon;                                               // 0x03D0 (size: 0xD0)
    FSlateBrush GuardStrengthFillIcon;                                                // 0x04A0 (size: 0xD0)
    class UProgressBar* InteractionProgressBar1;                                      // 0x0570 (size: 0x8)
    class UProgressBar* InteractionProgressBar2;                                      // 0x0578 (size: 0x8)
    class UTextBlock* WeatherStatsText;                                               // 0x0580 (size: 0x8)
    class UTextBlock* BorderRegionIndicatorText;                                      // 0x0588 (size: 0x8)
    class UWidget* ReinforcementStatus;                                               // 0x0590 (size: 0x8)
    class UImage* BackoutImage;                                                       // 0x0598 (size: 0x8)
    class UHUDHintWidget* HUDHintWidget;                                              // 0x05A0 (size: 0x8)
    TArray<class UChatMessage*> NewLocalMessages;                                     // 0x05B0 (size: 0x10)
    FSlateBrush CrossHairBrush;                                                       // 0x05C0 (size: 0xD0)
    class UImage* AccuracyBar;                                                        // 0x0690 (size: 0x8)
    FLinearColor AccuracyBarColor;                                                    // 0x0698 (size: 0x10)
    FLinearColor AccuracyBarFullColor;                                                // 0x06A8 (size: 0x10)
    FLinearColor AimingTooCloseColour;                                                // 0x06B8 (size: 0x10)

    void PlayWinConditionAnimation();
    void PlayBlackoutAnimation();
    ESlateVisibility GetWeatherStatsTextVisibility();
    FText GetWeatherStatsText();
    ESlateVisibility GetNameCanvasVisibility();
    ESlateVisibility GetHUDSubCanvasVisibility();
    ESlateVisibility GetHUDHintVisibility();
}; // Size: 0x6E0

class UHUDWindow : public UUserWidget
{
    class AActor* WindowContext;                                                      // 0x0278 (size: 0x8)
    bool StructureToPlayerTransfer;                                                   // 0x0280 (size: 0x1)
    bool PlayerToStructureTransfer;                                                   // 0x0281 (size: 0x1)
    class UInventoryContainerWidget* StructureInventoryContainerWidget;               // 0x0298 (size: 0x8)
    class UInventoryContainerWidget* StructureInventoryContainerWidget2;              // 0x02A0 (size: 0x8)
    class UPlayerInventoryWidget* PlayerInventoryPanel;                               // 0x02A8 (size: 0x8)
    class UHeaderContainer* TargetHeader;                                             // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UHeaderContainer : public UUserWidget
{
    FText HeaderText;                                                                 // 0x0278 (size: 0x18)
    int32 HeaderTextFontSize;                                                         // 0x0290 (size: 0x4)
    bool bHeaderWidthOverride;                                                        // 0x0294 (size: 0x1)
    float HeaderWidth;                                                                // 0x0298 (size: 0x4)
    float HeaderHeight;                                                               // 0x029C (size: 0x4)
    float UpperPadding;                                                               // 0x02A0 (size: 0x4)
    class UTextBlock* HeaderTextBox;                                                  // 0x02A8 (size: 0x8)
    class USizeBox* HeaderSizeBox;                                                    // 0x02B0 (size: 0x8)
    class USpacer* HeaderSpacer;                                                      // 0x02B8 (size: 0x8)
    class UWidget* TooltipButton;                                                     // 0x02C0 (size: 0x8)
    class UButton* CloseButton;                                                       // 0x02C8 (size: 0x8)

    void OnCloseButtonClicked();
}; // Size: 0x2E0

class UHeatingWindow : public UStructureWindow
{
    class UInventoryWidget* ItemsItemGrid;                                            // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class UHelpScreen : public UAnvilScreen
{
    class UButton* HelpImageButton;                                                   // 0x0290 (size: 0x8)

    void OnHelpImageButtonClicked();
}; // Size: 0x298

class UHitConversionWindow : public UStructureWindow
{
}; // Size: 0x2F0

class UHousePlayerInventoryListItem : public UUserWidget
{
    class UTextBlock* PlayerNameText;                                                 // 0x0278 (size: 0x8)
    class UInventoryWidget* InventoryWidget;                                          // 0x0280 (size: 0x8)

}; // Size: 0x290

class UHousePlayerInventoryWidgetBox : public UScrollBox
{
    TSubclassOf<class UHousePlayerInventoryListItem> PlayerInventoryListItemType;     // 0x0C98 (size: 0x8)

}; // Size: 0xCA0

class UHouseWindow : public UStructureWindow
{
    class UHousePlayerInventoryWidgetBox* PlayerInventoriesBox;                       // 0x02F0 (size: 0x8)
    class UCheckBox* HouseAreaRestrictedCheckBox;                                     // 0x02F8 (size: 0x8)

    void OnHouseAreaRestrictedChecked(bool bIsChecked);
    ESlateVisibility GetHouseAreaRestrictedVisibility();
    ECheckBoxState GetHouseAreaRestrictedCheckedState();
}; // Size: 0x300

class UInteractionIconWidget : public UUserWidget
{
    class UImage* IconBox;                                                            // 0x0278 (size: 0x8)

}; // Size: 0x280

class UInventoryContainerWidget : public UUserWidget
{
    class UInventoryWidget* UnderlyingInventoryWidget;                                // 0x0278 (size: 0x8)
    int32 PreviewItemCount;                                                           // 0x0280 (size: 0x4)
    float WidthOverride;                                                              // 0x0284 (size: 0x4)
    float HeightOverride;                                                             // 0x0288 (size: 0x4)
    uint8 bOverride_WidthOverride;                                                    // 0x028C (size: 0x1)
    uint8 bOverride_HeightOverride;                                                   // 0x028C (size: 0x1)
    class USizeBox* InventoryContainerSizeBox;                                        // 0x0290 (size: 0x8)
    FIntPoint PreferredDimension;                                                     // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UInventoryHUDWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class UInventoryItemHUDWidget : public UInventoryItemWidget
{
    bool bShowDurabilityBar;                                                          // 0x0480 (size: 0x1)

}; // Size: 0x488

class UInventoryItemWidget : public UGridItemWidget
{
    int32 ItemQuantityTextSize;                                                       // 0x03E0 (size: 0x4)
    FSlateColor DisabledTint;                                                         // 0x03E4 (size: 0x14)
    float DedicatedImageOpacity;                                                      // 0x03F8 (size: 0x4)
    TMap<class EAnvilItemSlotBackgroundType, class UTexture2D*> ItemSlotBackgroundMap; // 0x0400 (size: 0x50)
    class UTextBlock* ItemQuantityText;                                               // 0x0450 (size: 0x8)
    class UProgressBar* DurabilityBar;                                                // 0x0458 (size: 0x8)
    class UImage* OverEncumberedImage;                                                // 0x0460 (size: 0x8)
    class UImage* PublicIconImage;                                                    // 0x0468 (size: 0x8)
    class UProgressBar* HitConversionProgressBar;                                     // 0x0470 (size: 0x8)

}; // Size: 0x480

class UInventoryWidget : public UGridPanelWidget
{
    bool bIsPlayerInventory;                                                          // 0x01A8 (size: 0x1)

}; // Size: 0x1B0

class UItemCategoryButton : public UUserWidget
{
    class UButton* ItemCategoryButton;                                                // 0x0278 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0280 (size: 0x8)
    class UImage* SelectedImage;                                                      // 0x0288 (size: 0x8)

    void OnItemCategoryButtonClicked();
}; // Size: 0x2A8

class ULoreWindow : public UHUDWindow
{
    class UTextBlock* Header;                                                         // 0x02B8 (size: 0x8)
    class UImage* TitleIcon;                                                          // 0x02C0 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x02C8 (size: 0x8)
    class URichTextBlock* BodyText;                                                   // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UMainAreaContainer : public UUserWidget
{
    class USizeBox* MainAreaSizeBox;                                                  // 0x0278 (size: 0x8)
    class UBorder* MainAreaBorder;                                                    // 0x0280 (size: 0x8)
    class UVerticalBox* MainAreaVerticalBox;                                          // 0x0288 (size: 0x8)
    class UNamedSlot* MainAreaSlot0;                                                  // 0x0290 (size: 0x8)
    class UNamedSlot* MainAreaSlot1;                                                  // 0x0298 (size: 0x8)
    class UNamedSlot* MainAreaSlot2;                                                  // 0x02A0 (size: 0x8)
    float WidthOverride;                                                              // 0x02A8 (size: 0x4)
    float HeightOverride;                                                             // 0x02AC (size: 0x4)
    float MinDesiredWidth;                                                            // 0x02B0 (size: 0x4)
    float MinDesiredHeight;                                                           // 0x02B4 (size: 0x4)
    float MaxDesiredWidth;                                                            // 0x02B8 (size: 0x4)
    float MaxDesiredHeight;                                                           // 0x02BC (size: 0x4)
    FMargin ContentPadding;                                                           // 0x02C0 (size: 0x10)
    uint8 bOverride_WidthOverride;                                                    // 0x02D0 (size: 0x1)
    uint8 bOverride_HeightOverride;                                                   // 0x02D0 (size: 0x1)
    uint8 bOverride_MinDesiredWidth;                                                  // 0x02D0 (size: 0x1)
    uint8 bOverride_MinDesiredHeight;                                                 // 0x02D0 (size: 0x1)
    uint8 bOverride_MaxDesiredWidth;                                                  // 0x02D0 (size: 0x1)
    uint8 bOverride_MaxDesiredHeight;                                                 // 0x02D0 (size: 0x1)
    uint8 bOverride_ContentPadding;                                                   // 0x02D0 (size: 0x1)

}; // Size: 0x2D8

class UMapIcon : public UMapIconBase
{
    class AActor* Marker;                                                             // 0x0370 (size: 0x8)
    class UTextBlock* LabelBox;                                                       // 0x0380 (size: 0x8)
    class UImage* IconBox;                                                            // 0x0388 (size: 0x8)

    bool IsIconEnabled();
    ESlateVisibility GetIconVisibility();
}; // Size: 0x398

class UMapIconBase : public UUserWidget
{
    FMapIconTypeProperty TypeProperty;                                                // 0x0278 (size: 0x30)
    FMapIconInstanceProperty InstanceProperty;                                        // 0x02A8 (size: 0x88)
    class UCanvasPanelSlot* ParentSlot;                                               // 0x0330 (size: 0x8)
    class UMapWidgetBase* Map;                                                        // 0x0350 (size: 0x8)

}; // Size: 0x370

class UMapMarkerComponent : public UActorComponent
{
    FMapIconInstanceProperty MapIconProperty;                                         // 0x00A0 (size: 0x88)

}; // Size: 0x128

class UMapPostContainerWidget : public UUserWidget
{
    TSubclassOf<class UMapPostWidget> MapPostWidgetClass;                             // 0x0278 (size: 0x8)
    class UCanvasPanel* MapPostCanvas;                                                // 0x0280 (size: 0x8)

}; // Size: 0x288

class UMapPostMapIcon : public UMapIcon
{
}; // Size: 0x398

class UMapPostReplyWidget : public UUserWidget
{
    class UTextBlock* ReplyPosterNameTextBlock;                                       // 0x0278 (size: 0x8)
    class UTextBlock* ReplyTextBlock;                                                 // 0x0280 (size: 0x8)
    class UTextBlock* TimeTextBlock;                                                  // 0x0288 (size: 0x8)

    FText GetTimeSinceReplyText();
    FText GetReplyPosterNameText();
}; // Size: 0x2A0

class UMapPostWidget : public UUserWidget
{
    TSubclassOf<class UMapPostReplyWidget> MapPostReplyWidgetClass;                   // 0x0278 (size: 0x8)
    float OriginalTextWidth;                                                          // 0x0280 (size: 0x4)
    FButtonStyle UpVoteButtonStyle;                                                   // 0x0290 (size: 0x3F0)
    FButtonStyle UpVoteButtonVotedStyle;                                              // 0x0680 (size: 0x3F0)
    FButtonStyle DownVoteButtonStyle;                                                 // 0x0A70 (size: 0x3F0)
    FButtonStyle DownVoteButtonVotedStyle;                                            // 0x0E60 (size: 0x3F0)
    class UBorder* ExpandedMapPostBorder;                                             // 0x1250 (size: 0x8)
    class UBorder* HeaderBorder;                                                      // 0x1258 (size: 0x8)
    class USizeBox* OriginalTextSizeBox;                                              // 0x1260 (size: 0x8)
    class UTextBlock* OriginalPostTextBlock;                                          // 0x1268 (size: 0x8)
    class UTextBlock* OriginalPosterNameTextBlock;                                    // 0x1270 (size: 0x8)
    class UTextBlock* RankTextBlock;                                                  // 0x1278 (size: 0x8)
    class UButton* UpVoteButton;                                                      // 0x1280 (size: 0x8)
    class UButton* DownVoteButton;                                                    // 0x1288 (size: 0x8)
    class UTextBlock* NetVoteCountTextBlock;                                          // 0x1290 (size: 0x8)
    class UTextBlock* TimeSinceOriginalPostTextBlock;                                 // 0x1298 (size: 0x8)
    class USizeBox* RepliesSizeBox;                                                   // 0x12A0 (size: 0x8)
    class UVerticalBox* RepliesVerticalBox;                                           // 0x12A8 (size: 0x8)
    class UEditableTextBox* ReplyInputTextBox;                                        // 0x12B0 (size: 0x8)
    class UButton* ReplyButton;                                                       // 0x12B8 (size: 0x8)
    class UWidgetSwitcher* RenderStateSwitcher;                                       // 0x12C0 (size: 0x8)

    void OnUpVoteButtonClicked();
    void OnReplyInputTextCommitted(const FText& ReplyText, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnReplyInputTextChanged(const FText& Text);
    void OnReplyButtonClicked();
    FEventReply OnHeaderClicked(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDownVoteButtonClicked();
    bool IsVoteButtonEnabled();
    FText GetTimeSinceOriginalPostText();
    FText GetRankText();
    FText GetOriginalPosterNameText();
    FText GetNetVoteCountText();
}; // Size: 0x12F0

class UMapWidget : public UMapWidgetBase
{
    FSlateColor EnemyIconColour;                                                      // 0x0320 (size: 0x14)
    class UBorder* CentralMarketplaceWidgetBorder;                                    // 0x0338 (size: 0x8)
    class UCentralMarketplaceWidget* CentralMarketplaceWidget;                        // 0x0340 (size: 0x8)
    class UMapPostContainerWidget* MapPostContainerWidget;                            // 0x0348 (size: 0x8)
    class UWinConditionWidget* WinConditionWidget;                                    // 0x0350 (size: 0x8)
    TArray<class UMapIcon*> DisplayedBeaconTowerPlayerInfos;                          // 0x03A0 (size: 0x10)

}; // Size: 0x3F0

class UMapWidgetBase : public UUserWidget
{
    class UCanvasPanel* MapSheet;                                                     // 0x0278 (size: 0x8)
    float ZoomSpeed;                                                                  // 0x0284 (size: 0x4)
    float ZoomMin;                                                                    // 0x0288 (size: 0x4)
    float ZoomMax;                                                                    // 0x028C (size: 0x4)
    float ZoomAnimationTime;                                                          // 0x0290 (size: 0x4)
    class UImage* MapImage;                                                           // 0x0298 (size: 0x8)
    class UCanvasPanel* MapImageSheet;                                                // 0x02A0 (size: 0x8)
    class UCanvasPanelSlot* MapImageSheetSlot;                                        // 0x02A8 (size: 0x8)
    class UTexture2D* TerritoryTexture;                                               // 0x02F8 (size: 0x8)

}; // Size: 0x320

class UMarketShopMapIcon : public UMapIcon
{
}; // Size: 0x398

class UNextTestWidget : public UUserWidget
{
    class UTextBlock* NextTestText;                                                   // 0x0278 (size: 0x8)
    class UTextBlock* CountdownText;                                                  // 0x0280 (size: 0x8)
    class UAnvilButtonWidget* ReturnButton;                                           // 0x0288 (size: 0x8)
    class UAnvilButtonWidget* DiscordButton;                                          // 0x0290 (size: 0x8)

    void UpdateText();
    void OnReturnButtonClicked();
    void OnDiscordButtonClicked();
}; // Size: 0x2A0

class UOpeningScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* PlayButton;                                             // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* ExitButton;                                             // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* OptionsButton;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* VersionText;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* CLText;                                                         // 0x02B0 (size: 0x8)
    class UNextTestWidget* NextTestWidget;                                            // 0x02B8 (size: 0x8)
    class UDisclaimerWidget* DisclaimerWidget;                                        // 0x02C0 (size: 0x8)
    class UTextBlock* AnnouncementText;                                               // 0x02C8 (size: 0x8)
    class UButton* DiscordRoleButton;                                                 // 0x02D0 (size: 0x8)
    class UButton* DevModeButton;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* SelectedShardText;                                              // 0x02E0 (size: 0x8)
    class UAnvilButtonWidget* ShardSelectorButton;                                    // 0x02E8 (size: 0x8)

    void UpdateVersionText();
    void ReenableDiscordRoleButton();
    void OnShardSelectorButtonClicked();
    void OnPlayButtonClicked();
    void OnOptionsButtonClicked();
    void OnExitButtonClicked();
    void OnDiscordRoleButtonClicked();
    void OnDevModeButtonClicked();
    bool IsDiscordRoleButtonEnabled();
    FText GetSelectedShardText();
    FText GetAnnouncementText();
}; // Size: 0x300

class UOptionsMenuAudioWidget : public UUserWidget
{
    class UAnvilSliderWidget* MasterVolumeSlider;                                     // 0x0278 (size: 0x8)
    class UAnvilSliderWidget* SFXVolumeSlider;                                        // 0x0280 (size: 0x8)
    class UAnvilDropdownEntryWidget* VoiceChatEnabledDropdown;                        // 0x0288 (size: 0x8)
    class UAnvilSliderWidget* VoiceInputVolumeSlider;                                 // 0x0290 (size: 0x8)
    class UAnvilSliderWidget* VoiceOutputVolumeSlider;                                // 0x0298 (size: 0x8)
    class UAnvilDropdownEntryWidget* VoiceInDropdown;                                 // 0x02A0 (size: 0x8)
    class UAnvilDropdownEntryWidget* VoiceOutDropdown;                                // 0x02A8 (size: 0x8)
    class UAnvilButtonWidget* ReconnectButton;                                        // 0x02B0 (size: 0x8)

    void OnReconnectToVoice();
    bool IsReconnectButtonEnabled();
    ESlateVisibility GetReconnectButtonVisibility();
}; // Size: 0x2C8

class UOptionsMenuGameplayWidget : public UUserWidget
{
    class UAnvilDropdownEntryWidget* ShowPlayerNameDropDown;                          // 0x0278 (size: 0x8)
    class UAnvilDropdownEntryWidget* InteractCameraZoomDropDown;                      // 0x0280 (size: 0x8)

}; // Size: 0x288

class UOptionsMenuKeybindWidget : public UUserWidget
{
    class UPanelWidget* KeybindWidgetContainer;                                       // 0x0278 (size: 0x8)
    class UAnvilButtonWidget* ResetButton;                                            // 0x0280 (size: 0x8)

    void OnResetKeyBinds();
}; // Size: 0x2A0

class UOptionsMenuVideoWidget : public UUserWidget
{
    class UAnvilDropdownEntryWidget* FullscreenDropdown;                              // 0x0278 (size: 0x8)
    class UAnvilDropdownEntryWidget* ResolutionDropdown;                              // 0x0280 (size: 0x8)
    class UAnvilDropdownEntryWidget* QualityDropdown;                                 // 0x0288 (size: 0x8)
    class UAnvilDropdownEntryWidget* ShadowQualityDropdown;                           // 0x0290 (size: 0x8)
    class UAnvilDropdownEntryWidget* VSyncDropdown;                                   // 0x0298 (size: 0x8)

    void SetFullscreen(FString Input);
}; // Size: 0x2A0

class UOptionsScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* BackButton;                                             // 0x0290 (size: 0x8)
    class UPanelWidget* ButtonsPanel;                                                 // 0x0298 (size: 0x8)
    class UWidgetSwitcher* OptionsPanel;                                              // 0x02A0 (size: 0x8)

    void OnBackButtonClicked();
}; // Size: 0x2A8

class UPackingWindow : public UStructureWindow
{
    class UButton* PackButton;                                                        // 0x02F0 (size: 0x8)

    void OnPackButtonClicked();
}; // Size: 0x2F8

class UPauseScreen : public UAnvilScreen
{
    class UAnvilButtonWidget* ResumeButton;                                           // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* OptionsButton;                                          // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* HelpButton;                                             // 0x02A0 (size: 0x8)
    class UAnvilButtonWidget* CodeOfConductButton;                                    // 0x02A8 (size: 0x8)
    class UAnvilButtonWidget* LogOffButton;                                           // 0x02B0 (size: 0x8)
    class UAnvilButtonWidget* ExitButton;                                             // 0x02B8 (size: 0x8)

    void OnOptionsButtonClicked();
    void OnLogOffButtonClicked();
    void OnHelpButtonClicked();
    void OnExitButtonConfirmed();
    void OnExitButtonClicked();
    void OnContinueButtonClicked();
    void OnCodeOfConductButtonClicked();
}; // Size: 0x2C0

class UPlayerInventoryWidget : public UUserWidget
{
    class UInventoryWidget* PlayerInventory;                                          // 0x0278 (size: 0x8)
    class UHeaderContainer* Header;                                                   // 0x0280 (size: 0x8)
    bool bShowAvatarSubmitButton;                                                     // 0x0288 (size: 0x1)
    class UButton* SubmitAvatarButton;                                                // 0x0290 (size: 0x8)
    class UHeaderContainer* AvatarHeader;                                             // 0x0298 (size: 0x8)
    class UImage* AvatarImage;                                                        // 0x02A0 (size: 0x8)
    class UImage* AvatarQualityImage;                                                 // 0x02A8 (size: 0x8)
    class UTextBlock* AvatarNameText;                                                 // 0x02B0 (size: 0x8)
    class UTextBlock* AvatarDescriptionText;                                          // 0x02B8 (size: 0x8)

    void OnSubmitAvatarClicked();
    bool IsSubmitAvatarButtonEnabled();
}; // Size: 0x2D0

class UPledgedPlayerBox : public UScrollBox
{
    TSubclassOf<class UPledgedPlayerListItem> ListItemType;                           // 0x0C98 (size: 0x8)

    void OnVoteChecked(bool bIsChecked, uint64 PlayerId);
}; // Size: 0xCA0

class UPledgedPlayerListItem : public UUserWidget
{
    class UTextBlock* PlayerNameText;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* PlayerStatusText;                                               // 0x0290 (size: 0x8)
    class UCheckBox* VoteButton;                                                      // 0x0298 (size: 0x8)
    class UImage* OnlineStatusIcon;                                                   // 0x02A0 (size: 0x8)
    TMap<class EAnvilPlayerOnlineStatus, class FSlateColor> OnlineStatusSilverColorMap; // 0x02A8 (size: 0x50)

    void OnVoteChecked(bool bIsChecked);
}; // Size: 0x300

class UQuenchingWindow : public UStructureWindow
{
    class UButton* QuenchButton;                                                      // 0x02F0 (size: 0x8)

    void OnQuenchButtonClicked();
}; // Size: 0x2F8

class URefineryProducibleItemWidget : public UGridItemWidget
{
    class UTextBlock* OutputCount;                                                    // 0x02F8 (size: 0x8)
    class UPanelWidget* OutputCountContainer;                                         // 0x0300 (size: 0x8)

}; // Size: 0x308

class URefineryProducibleListWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class URefineryQueueWidget : public UGridPanelWidget
{
}; // Size: 0x1A8

class URefineryQueuedItemWidget : public UGridItemWidget
{
    class UButton* CancelButton;                                                      // 0x02F8 (size: 0x8)
    class UBorder* ItemBorder;                                                        // 0x0300 (size: 0x8)
    FSlateBrush ItemBorderBrush;                                                      // 0x0310 (size: 0xD0)

    void OnCancelClicked();
}; // Size: 0x3E0

class URefineryWindow : public UStructureWindow
{
    class URefineryProducibleListWidget* RefineryProducibleItemsList;                 // 0x02F0 (size: 0x8)
    class URefineryQueueWidget* RefineryQueue;                                        // 0x02F8 (size: 0x8)
    class UTextBlock* QueueTotalTimeText;                                             // 0x0300 (size: 0x8)
    class UTextBlock* QueueTimeText;                                                  // 0x0308 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0310 (size: 0x8)

    void OnStatusChanged(const bool& Old, const bool& New);
}; // Size: 0x320

class URegionEntry : public UObject
{
    TMap<uint64, UWorldEntityHandle*> WorldEntityMap;                                 // 0x0028 (size: 0x50)

}; // Size: 0xD8

class URelicTechCenterWindow : public UStructureWindow
{
    class UVerticalBox* TechProgressVerticalBox;                                      // 0x02F0 (size: 0x8)
    TSubclassOf<class URelicTechProgressWidget> RelicTechProgressWidgetClass;         // 0x02F8 (size: 0x8)

}; // Size: 0x300

class URelicTechProgressWidget : public UUserWidget
{
    class UImage* ItemImage;                                                          // 0x0278 (size: 0x8)
    class UProgressBar* TechProgressBar;                                              // 0x0280 (size: 0x8)

    bool IsImageEnabled();
    float GetNormalizedProgress();
}; // Size: 0x290

class URepairStationWindow : public UStructureWindow
{
    class UButton* RepairButton;                                                      // 0x02F0 (size: 0x8)

    void OnRepairClicked();
}; // Size: 0x2F8

class UResourceWidget : public UUserWidget
{
    class UImage* ResourceIcon;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* ResourceCostText;                                               // 0x0280 (size: 0x8)
    class UTextBlock* ResourceNameText;                                               // 0x0288 (size: 0x8)

}; // Size: 0x290

class URestedStatusWidget : public UUserWidget
{
    TMap<uint8, UTexture2D*> IconTextureMap;                                          // 0x0278 (size: 0x50)
    class UImage* IconImage;                                                          // 0x02C8 (size: 0x8)

    ESlateVisibility GetIconVisibility();
}; // Size: 0x2D0

class UScorchEffectComponent : public UNiagaraComponent
{
    float ScorchThreshold;                                                            // 0x07D0 (size: 0x4)

}; // Size: 0x7E0

class UServerListEntryView : public UObject
{
    FServerListEntry ServerListEntry;                                                 // 0x0028 (size: 0x58)

}; // Size: 0x80

class UServerListEntryWidget : public UUserWidget
{
    class UButton* ServerListEntryButton;                                             // 0x0280 (size: 0x8)
    class UTextBlock* ServerNameTextBlock;                                            // 0x0288 (size: 0x8)
    FSlateColor PopulationOpenColour;                                                 // 0x0290 (size: 0x14)
    FSlateColor PopulationFullColour;                                                 // 0x02A4 (size: 0x14)
    TMap<class FString, class FString> ServerDisplayNames;                            // 0x02B8 (size: 0x50)

    void OnServerEntryClicked();
}; // Size: 0x308

class UServerPartitionComponent : public UActorComponent
{
    bool bVisualizeCookedRegion;                                                      // 0x00A0 (size: 0x1)
    FVector Extents;                                                                  // 0x00A8 (size: 0x18)
    int32 ServerRegionCountX;                                                         // 0x00C0 (size: 0x4)
    int32 ServerRegionCountY;                                                         // 0x00C4 (size: 0x4)
    float TransitionRegionSize;                                                       // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UServerSelectScreen : public UAnvilScreen
{
    class UListView* ServerList;                                                      // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* RefreshButton;                                          // 0x0298 (size: 0x8)
    class UThrobber* Throbber;                                                        // 0x02A0 (size: 0x8)

    void OnRefreshButtonClicked();
    bool IsRefreshButtonEnabled();
    ESlateVisibility GetThrobberVisibility();
}; // Size: 0x2B0

class UShardSelectorListEntryView : public UObject
{
    FShardConfig ShardConfig;                                                         // 0x0028 (size: 0xB0)

}; // Size: 0xD8

class UShardSelectorListEntryWidget : public UUserWidget
{
    class UButton* ShardListEntryButton;                                              // 0x0280 (size: 0x8)
    class UTextBlock* ShardNameText;                                                  // 0x0288 (size: 0x8)
    class UTextBlock* ShardDescriptionText;                                           // 0x0290 (size: 0x8)
    class UTextBlock* PopulationText;                                                 // 0x0298 (size: 0x8)

    void OnShardEntryClicked();
}; // Size: 0x2A0

class UShardSelectorScreen : public UAnvilScreen
{
    class UListView* ShardList;                                                       // 0x0290 (size: 0x8)
    class UAnvilButtonWidget* RefreshButton;                                          // 0x0298 (size: 0x8)
    class UAnvilButtonWidget* BackButton;                                             // 0x02A0 (size: 0x8)

    void OnRefreshButtonClicked();
    void OnBackButtonClicked();
}; // Size: 0x2A8

class USignPostMessageWidget : public UUserWidget
{
    class UTextBlock* MessageBox;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* LifetimeBox;                                                    // 0x0280 (size: 0x8)
    class UTextBlock* BuilderNameBox;                                                 // 0x0288 (size: 0x8)
    class UButton* BuilderNameButton;                                                 // 0x0290 (size: 0x8)
    class AActor* Context;                                                            // 0x0298 (size: 0x8)

    void CopyBuilderId();
}; // Size: 0x2A0

class USignPostWindow : public UStructureWindow
{
    class USignPostMessageWidget* MessageWidget;                                      // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class UStatusWidget : public UUserWidget
{
    class UTexture2D* IconTexture;                                                    // 0x0278 (size: 0x8)
    ESimpleTooltip SimpleTooltip;                                                     // 0x0280 (size: 0x1)
    class UImage* StatusIcon;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x0290 (size: 0x8)
    class UTexture2D* HappyIconTexture;                                               // 0x0298 (size: 0x8)
    class UTexture2D* UnhappyIconTexture;                                             // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UStorehouseWindow : public UStructureWindow
{
    class UButton* PublicButton;                                                      // 0x02F0 (size: 0x8)
    class UButton* PrivateButton;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* StorehouseExpireTimeText;                                       // 0x0300 (size: 0x8)
    class UPanelWidget* StorehouseExpireTimePanel;                                    // 0x0308 (size: 0x8)

    void OnPublicButtonClicked();
    void OnPrivateButtonClicked();
}; // Size: 0x310

class UStructureWindow : public UHUDWindow
{
    class UStatusWidget* HealthStatus;                                                // 0x02B8 (size: 0x8)
    class UStatusWidget* HeartStatus;                                                 // 0x02C0 (size: 0x8)
    class UStatusWidget* HungerStatus;                                                // 0x02C8 (size: 0x8)
    class UStatusWidget* StaminaStatus;                                               // 0x02D0 (size: 0x8)
    class UStatusWidget* DecayStatus;                                                 // 0x02D8 (size: 0x8)
    class UStatusWidget* ReinforcingStatus;                                           // 0x02E0 (size: 0x8)
    class UComboBoxString* FamilyAccessLevel;                                         // 0x02E8 (size: 0x8)

    void OnFamilyAccessLevelSelectionChanged(FString SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x2F0

class USubHeaderContainer : public UUserWidget
{
    float SubHeaderWidth;                                                             // 0x0278 (size: 0x4)
    float SubHeaderHeight;                                                            // 0x027C (size: 0x4)
    class USizeBox* SubHeaderSizeBox;                                                 // 0x0280 (size: 0x8)
    class UNamedSlot* SubHeaderSlot0;                                                 // 0x0288 (size: 0x8)

}; // Size: 0x290

class UTemperatureStatusWidget : public UUserWidget
{
    class UImage* IconFillImage;                                                      // 0x0278 (size: 0x8)
    FLinearColor TemperatureWarmColour;                                               // 0x0280 (size: 0x10)
    FLinearColor TemperatureColdColour;                                               // 0x0290 (size: 0x10)

    ESlateVisibility GetIconVisibility();
}; // Size: 0x2A8

class UTimeSeasonWidget : public UUserWidget
{
    class UCanvasPanel* TimeSeasonPanel;                                              // 0x0278 (size: 0x8)
    float AgeTimeSeconds;                                                             // 0x0280 (size: 0x4)
    int32 CurrentTimeHours;                                                           // 0x0284 (size: 0x4)
    int32 CurrentTimeMinutes;                                                         // 0x0288 (size: 0x4)
    int32 CurrentTimeSeconds;                                                         // 0x028C (size: 0x4)
    float Season;                                                                     // 0x0290 (size: 0x4)
    float RainIntensity;                                                              // 0x0294 (size: 0x4)
    float SnowIntensity;                                                              // 0x0298 (size: 0x4)

    ESlateVisibility GetCurrentVisibility();
}; // Size: 0x2A0

class UTooltipWidget : public UUserWidget
{
    TSubclassOf<class UResourceWidget> ResourceWidgetClass;                           // 0x0278 (size: 0x8)
    class UTextBlock* HeaderText;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* BodyText;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* BodyExtraText;                                                  // 0x0290 (size: 0x8)
    class URichTextBlock* FooterText;                                                 // 0x0298 (size: 0x8)
    class UBorder* ResourceBar;                                                       // 0x02A0 (size: 0x8)
    TArray<class UResourceWidget*> ResourceWidgets;                                   // 0x02A8 (size: 0x10)
    class UVerticalBox* ResourcesContainer;                                           // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class UTownCenterMapIcon : public UMapIcon
{
    class AVisTownCenter* TownCenter;                                                 // 0x0398 (size: 0x8)
    class USizeBox* IconSizeBox;                                                      // 0x03A0 (size: 0x8)
    class UButton* IconButton;                                                        // 0x03A8 (size: 0x8)
    class UTextBlock* TownName;                                                       // 0x03B0 (size: 0x8)
    class UBorder* TownNameBorder;                                                    // 0x03B8 (size: 0x8)
    class UBorder* TownStatusBorder;                                                  // 0x03C0 (size: 0x8)
    class UStatusWidget* NumPledgedStatus;                                            // 0x03C8 (size: 0x8)
    class UStatusWidget* NumTentsStatus;                                              // 0x03D0 (size: 0x8)
    class UStatusWidget* NumReinforcementSuppliesStatus;                              // 0x03D8 (size: 0x8)

    void UpdateName();
    FText GetNumTentsText();
    FText GetNumReinforcementSuppliesText();
    FText GetNumPledgedText();
}; // Size: 0x3E0

class UTownCenterWindow : public UStructureWindow
{
    class UPledgedPlayerBox* PledgedPlayerList;                                       // 0x02F0 (size: 0x8)
    class UTextBlock* LocalPlayerStatus;                                              // 0x02F8 (size: 0x8)
    class UUserWidget* CivicPledgePanel;                                              // 0x0300 (size: 0x8)
    class UHeaderContainer* PledgedHeader;                                            // 0x0308 (size: 0x8)
    class UStatusWidget* RareResourceStatus;                                          // 0x0310 (size: 0x8)
    class UButton* IncreaseTownStatusButton;                                          // 0x0318 (size: 0x8)
    class UHorizontalBox* UpkeepBox;                                                  // 0x0320 (size: 0x8)
    class UImage* UpkeepIcon;                                                         // 0x0328 (size: 0x8)
    class UTextBlock* UpkeepTextBlock;                                                // 0x0330 (size: 0x8)

    void OnIncreaseTownStatusButtonClicked();
}; // Size: 0x338

class UTownStatusWidget : public UUserWidget
{
    class UStatusWidget* PopulationStatus;                                            // 0x0278 (size: 0x8)
    class UStatusWidget* MilitiaPopulationStatus;                                     // 0x0280 (size: 0x8)
    class UStatusWidget* HappinessStatus;                                             // 0x0288 (size: 0x8)
    class UStatusWidget* FoodStatus;                                                  // 0x0290 (size: 0x8)
    class UStatusWidget* TaxStatus;                                                   // 0x0298 (size: 0x8)
    class UStatusWidget* SilverStatus;                                                // 0x02A0 (size: 0x8)

    void UpdateStatus();
}; // Size: 0x2A8

class UVisAnimalAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    EAnvilAnimalState NativeCurrentState;                                             // 0x034C (size: 0x1)
    bool IsReceivingIncomingAttack;                                                   // 0x034D (size: 0x1)

}; // Size: 0x350

class UVisBalljointComponent : public USceneComponent
{
    bool bIsStart;                                                                    // 0x02A0 (size: 0x1)
    class UPowerUnitDataComponent* PowerUnitDataComponent;                            // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* AdapterMesh;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* BalljointMesh;                                        // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* BalljointBaseMesh;                                    // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* LeftTrimMesh;                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* RightTrimMesh;                                        // 0x02D0 (size: 0x8)

}; // Size: 0x2E0

class UVisBowAnimInstance : public UAnimInstance
{
    float NativePlayerAccuracy;                                                       // 0x0348 (size: 0x4)
    bool NativeCharacterIsAiming;                                                     // 0x034C (size: 0x1)
    bool NativeCharacterSecondaryMode;                                                // 0x034D (size: 0x1)
    EAnvilSimActivityState NativeActivityState;                                       // 0x034E (size: 0x1)
    uint8 NativeCurrentActivityChainIndex;                                            // 0x034F (size: 0x1)
    float NativeCurrentMontagePosition;                                               // 0x0350 (size: 0x4)

}; // Size: 0x360

class UVisBuildGhostComponent : public UActorComponent
{
    class UBuildSiteDataComponent* BuildSiteDataComponent;                            // 0x00A0 (size: 0x8)
    FLinearColor ValidPlacementColour;                                                // 0x00A8 (size: 0x10)
    FLinearColor InvalidPlacementColour;                                              // 0x00C8 (size: 0x10)
    class UDecalComponent* BuildCollisionDecalComponent;                              // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UVisCanalWaterControllerComponent : public USceneComponent
{
    float ShiftDelta;                                                                 // 0x02A0 (size: 0x4)
    float ShiftMin;                                                                   // 0x02A4 (size: 0x4)
    bool bIsWell;                                                                     // 0x02A8 (size: 0x1)
    class UPowerUnitDataComponent* PowerUnitDataComponent;                            // 0x02B0 (size: 0x8)
    class USplineDataComponent* SplineDataComponent;                                  // 0x02B8 (size: 0x8)
    class UWellDataComponent* WellDataComponent;                                      // 0x02C0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> WaterMaterials;                           // 0x02C8 (size: 0x10)
    class UStaticMeshComponent* SplineWaterMesh;                                      // 0x02D8 (size: 0x8)
    class UMaterialInstanceDynamic* SplineWaterMaterial;                              // 0x02E0 (size: 0x8)

    void OnSplineUpdate();
    void OnCurrentUpdate();
}; // Size: 0x320

class UVisCartAnimInstance : public UVisVehicleAnimInstance
{
}; // Size: 0x360

class UVisDynamicInstancedMeshGroupComponent : public USceneComponent
{
    TMap<class UStaticMesh*, class UInstancedStaticMeshComponent*> InstancedMeshes;   // 0x02A0 (size: 0x50)

}; // Size: 0x2F0

class UVisDynamicMeshTemplateReferenceComponent : public USceneComponent
{
    TSubclassOf<class AActor> TemplateClass;                                          // 0x02A0 (size: 0x8)
    TArray<class UStaticMeshComponent*> MeshVisualizers;                              // 0x02A8 (size: 0x10)

}; // Size: 0x2C0

class UVisFamilyMeshComponent : public UStaticMeshComponent
{
    int32 FamilyVisualsMaterialIndex;                                                 // 0x05F0 (size: 0x4)
    TArray<FLinearColor> ColourTable;                                                 // 0x05F8 (size: 0x10)

}; // Size: 0x610

class UVisFoundationBottomMeshDecorComponent : public USceneComponent
{
    class UStaticMesh* BottomMesh;                                                    // 0x02A0 (size: 0x8)
    FVector BottomMeshOffset;                                                         // 0x02A8 (size: 0x18)
    class UStaticMeshComponent* BottomMeshComp;                                       // 0x02C0 (size: 0x8)

}; // Size: 0x2D0

class UVisFoundationEdgeMeshDecorComponent : public UArrowComponent
{
    float InnerAngle;                                                                 // 0x0550 (size: 0x4)
    class UStaticMesh* EdgeMesh;                                                      // 0x0558 (size: 0x8)
    FVector EdgeMeshOffset;                                                           // 0x0560 (size: 0x18)
    FRotator EdgeMeshRotation;                                                        // 0x0578 (size: 0x18)
    class UStaticMeshComponent* EdgeMeshComp;                                         // 0x0590 (size: 0x8)

}; // Size: 0x5A0

class UVisFoundationFillerMeshDecorComponent : public UStaticMeshComponent
{
}; // Size: 0x600

class UVisGateAnimInstance : public UAnimInstance
{
    bool bIsOpen;                                                                     // 0x0348 (size: 0x1)

}; // Size: 0x350

class UVisGrainMillAnimInstance : public UAnimInstance
{
    float CurrentCoarseness;                                                          // 0x0348 (size: 0x4)
    float Power;                                                                      // 0x034C (size: 0x4)

}; // Size: 0x350

class UVisInstancedStockpileComponent : public UInstancedStaticMeshComponent
{
    class UInstancedStaticMeshComponent* CurrentInstancedMesh;                        // 0x0738 (size: 0x8)
    TMap<int32, UInstancedStaticMeshComponent*> ItemCodeNameInstancedMeshMap;         // 0x0740 (size: 0x50)

}; // Size: 0x7A0

class UVisItem : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    FText NameText;                                                                   // 0x0040 (size: 0x18)
    FText DescriptionText;                                                            // 0x0058 (size: 0x18)
    FText DescriptionFooter;                                                          // 0x0070 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0088 (size: 0x8)
    EVisItemCategory Category;                                                        // 0x0090 (size: 0x1)
    class USkeletalMesh* Mesh;                                                        // 0x0098 (size: 0x8)
    class UStaticMesh* StockpileMesh;                                                 // 0x00A0 (size: 0x8)
    class UStaticMesh* SingleItemStockpileMesh;                                       // 0x00A8 (size: 0x8)
    bool bAutoSetStockpileExtents;                                                    // 0x00B0 (size: 0x1)
    FVector StockpileExtents;                                                         // 0x00B8 (size: 0x18)
    bool bStockpileCanFlip;                                                           // 0x00D0 (size: 0x1)
    FVector StockpileRandomTranslation;                                               // 0x00D8 (size: 0x18)
    FRotator StockpileRandomRotation;                                                 // 0x00F0 (size: 0x18)
    FVector2D StockpileRandomScale;                                                   // 0x0108 (size: 0x10)
    int8 StockpileOrder;                                                              // 0x0118 (size: 0x1)
    TMap<class EAnvilFactionId, class USkeletalMesh*> FactionMeshOverrides;           // 0x0120 (size: 0x50)
    EEquippedItemGripType GripType;                                                   // 0x0170 (size: 0x1)
    TSubclassOf<class UAnimInstance> AnimClass;                                       // 0x0178 (size: 0x8)
    FRotator MeshRotation;                                                            // 0x0180 (size: 0x18)
    EUnarmedItemMeshLocation UnarmedMeshLocation;                                     // 0x0198 (size: 0x1)
    FVector UnarmedMeshOffset;                                                        // 0x01A0 (size: 0x18)
    FRotator UnarmedMeshRotation;                                                     // 0x01B8 (size: 0x18)
    float UnarmedMeshScale;                                                           // 0x01D0 (size: 0x4)
    int32 AnimationIndex;                                                             // 0x01D4 (size: 0x4)
    TMap<class EAnvilSimActivityState, class UAnimMontage*> ActivityStateMontageMap;  // 0x01D8 (size: 0x50)
    TArray<class UAnimMontage*> AttackChainMontages;                                  // 0x0228 (size: 0x10)
    class UAnimMontage* SecondaryLaunchingProjectileOverride;                         // 0x0238 (size: 0x8)
    class USoundCue* TransferSoundCue;                                                // 0x0240 (size: 0x8)
    class USoundCue* ArmingSoundCue;                                                  // 0x0248 (size: 0x8)
    class UStaticMesh* AmmoMesh;                                                      // 0x0250 (size: 0x8)
    FTransform AmmoMeshTransform;                                                     // 0x0260 (size: 0x60)

}; // Size: 0x2C0

class UVisLadderVehicleAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    bool bIsFrontSeatOccupied;                                                        // 0x034C (size: 0x1)
    bool bIsRearSeatOccupied;                                                         // 0x034D (size: 0x1)

}; // Size: 0x350

class UVisLoreVolumeComponent : public UBoxComponent
{
    FName LoreType;                                                                   // 0x0578 (size: 0x8)

}; // Size: 0x580

class UVisMobileWeaponAnimInstance : public UAnimInstance
{
    float AimYaw;                                                                     // 0x0348 (size: 0x4)
    float AimPitch;                                                                   // 0x034C (size: 0x4)
    bool bPriming;                                                                    // 0x0350 (size: 0x1)
    bool bPrimed;                                                                     // 0x0351 (size: 0x1)
    bool bFiring;                                                                     // 0x0352 (size: 0x1)
    float NativeSpeed;                                                                // 0x0354 (size: 0x4)

}; // Size: 0x360

class UVisMultiItemStockpileComponent : public USceneComponent
{
    FVector StockpileExtents;                                                         // 0x02A0 (size: 0x18)
    bool bForceShowIndividualItems;                                                   // 0x02B8 (size: 0x1)
    TArray<class UStaticMeshComponent*> DisplayedMeshes;                              // 0x02C0 (size: 0x10)
    class UCollisionVisualizerComponent* BoxVisualizer;                               // 0x02D0 (size: 0x8)

}; // Size: 0x2F0

class UVisPlayerAnimInstance : public UAnimInstance
{
    bool bNativeIsAttacking;                                                          // 0x0348 (size: 0x1)
    float NativeDir;                                                                  // 0x034C (size: 0x4)
    float NativeSpeed;                                                                // 0x0350 (size: 0x4)
    float NativeSpeedAbs;                                                             // 0x0354 (size: 0x4)
    EEquippedItemGripType GripType;                                                   // 0x0358 (size: 0x1)
    EEquippedItemGripType PrimaryGripType;                                            // 0x0359 (size: 0x1)
    EEquippedItemGripType SecondaryGripType;                                          // 0x035A (size: 0x1)
    EAnvilCharacterStance NativeStance;                                               // 0x035B (size: 0x1)
    EAnvilVehicleInputState VehicleInputState;                                        // 0x035C (size: 0x1)
    EIncomingAttackDirection IncomingAttackDirection;                                 // 0x035D (size: 0x1)
    bool bNativeStanceOnHorse;                                                        // 0x035E (size: 0x1)
    int32 NativePoseIndex;                                                            // 0x0360 (size: 0x4)
    bool NativeIsAiming;                                                              // 0x0364 (size: 0x1)
    bool NativeIsCrouching;                                                           // 0x0365 (size: 0x1)
    bool bNativeIsGuarding;                                                           // 0x0366 (size: 0x1)
    bool bNativeIsSecondaryEquipped;                                                  // 0x0367 (size: 0x1)
    float AimPitch;                                                                   // 0x0368 (size: 0x4)
    float AimYaw;                                                                     // 0x036C (size: 0x4)
    bool bPriming;                                                                    // 0x0370 (size: 0x1)
    bool bSecondaryMode;                                                              // 0x0371 (size: 0x1)
    bool bSecondaryShieldMode;                                                        // 0x0372 (size: 0x1)
    bool bCombatMode;                                                                 // 0x0373 (size: 0x1)
    bool bWantsToPush;                                                                // 0x0374 (size: 0x1)
    bool bIsPushing;                                                                  // 0x0375 (size: 0x1)
    float IsPushingBlendWeight;                                                       // 0x0378 (size: 0x4)
    bool bIsSwimming;                                                                 // 0x037C (size: 0x1)
    bool bNativeIsFalling;                                                            // 0x037D (size: 0x1)
    float NativeAccuracy;                                                             // 0x0380 (size: 0x4)
    float NativeLadderClimbSpeed;                                                     // 0x0384 (size: 0x4)
    bool bNativeVehicleInputStatePush;                                                // 0x0388 (size: 0x1)
    bool bNativeVehicleInputStatePull;                                                // 0x0389 (size: 0x1)
    bool bNativeVehicleInputStateCharge;                                              // 0x038A (size: 0x1)
    bool bNativeVehicleInputStateStrafeLeft;                                          // 0x038B (size: 0x1)
    bool bNativeVehicleInputStateStrafeRight;                                         // 0x038C (size: 0x1)
    bool bNativePrimaryGripTypeIsPike;                                                // 0x038D (size: 0x1)
    bool bNativeCombatModeIsStanding;                                                 // 0x038E (size: 0x1)
    bool bNativeSecondaryGripIsShieldScondaryShieldOff;                               // 0x038F (size: 0x1)
    bool bNativeIncomingAttack;                                                       // 0x0390 (size: 0x1)
    bool bNativeIncomingAttackDirectionFront;                                         // 0x0391 (size: 0x1)
    bool bNativeIncomingAttackDirectionBack;                                          // 0x0392 (size: 0x1)
    bool bNativeIncomingAttackDirectionLeft;                                          // 0x0393 (size: 0x1)
    bool bNativeIncomingAttackDirectionRight;                                         // 0x0394 (size: 0x1)
    bool bNativeAbsSpeedOver25;                                                       // 0x0395 (size: 0x1)
    bool bNativeAimingStanceNotScorpion;                                              // 0x0396 (size: 0x1)
    bool bNativeAimingNotGuarding;                                                    // 0x0397 (size: 0x1)
    float NativeRangedClampedBowAccuracy;                                             // 0x0398 (size: 0x4)
    float NativeUpperBodySpeedReference;                                              // 0x039C (size: 0x4)
    bool bNativeUpperBodySpeedReferenceOver25;                                        // 0x03A0 (size: 0x1)
    bool bNativeUpperBodySpeedReferenceOver250;                                       // 0x03A1 (size: 0x1)
    bool bNativeNotAimingUpperBodySpeedBelow25;                                       // 0x03A2 (size: 0x1)
    bool bNativeNotAimingUpperBodySpeedAbove25;                                       // 0x03A3 (size: 0x1)
    bool bNativeIsAimingUpperBodySpeedBelow25;                                        // 0x03A4 (size: 0x1)
    bool bNativeIsAimingUpperBodySpeedAbove25;                                        // 0x03A5 (size: 0x1)
    float NativeLegBlendspacePlayrate;                                                // 0x03A8 (size: 0x4)
    bool bNativeSpeedOver10;                                                          // 0x03AC (size: 0x1)
    bool bNativeSpeedOver25;                                                          // 0x03AD (size: 0x1)
    bool bNativeSpeedOver95;                                                          // 0x03AE (size: 0x1)
    bool bNativeSpeedOver150;                                                         // 0x03AF (size: 0x1)
    bool bNativeSpeedOver250;                                                         // 0x03B0 (size: 0x1)
    bool bNativeSpeedOver350;                                                         // 0x03B1 (size: 0x1)
    bool bNativeSpeedOver600;                                                         // 0x03B2 (size: 0x1)

}; // Size: 0x3C0

class UVisPlayerVisualsComponent : public UActorComponent
{
}; // Size: 0xA0

class UVisPointLightComponent : public UPointLightComponent
{
}; // Size: 0x420

class UVisPowerUnitAnimInstance : public UAnimInstance
{
    float InputValue;                                                                 // 0x0348 (size: 0x4)
    float PercentageCurrent;                                                          // 0x034C (size: 0x4)
    float CurrentMax;                                                                 // 0x0350 (size: 0x4)
    float InFlowDirection;                                                            // 0x0354 (size: 0x4)
    float InFlowHeight;                                                               // 0x0358 (size: 0x4)
    class UPowerUnitDataComponent* PowerUnitDataComponent;                            // 0x0360 (size: 0x8)

}; // Size: 0x370

class UVisRandomDecalDecorComponent : public UDecalComponent
{
    float VisibilityChance;                                                           // 0x02F0 (size: 0x4)

}; // Size: 0x300

class UVisRandomMeshDecorComponent : public UStaticMeshComponent
{
    float VisibilityChance;                                                           // 0x05F0 (size: 0x4)

}; // Size: 0x600

class UVisRopeComponent : public USceneComponent
{
    class UCableComponent* LineComponent;                                             // 0x02A0 (size: 0x8)
    class UAnimalRopeAttachableDataComponent* RopeDataComponent;                      // 0x02A8 (size: 0x8)
    class UAnimalRopeSlotDataComponent* RopeSlotDataComponent;                        // 0x02B0 (size: 0x8)

}; // Size: 0x2C0

class UVisScaffoldingComponent : public USceneComponent
{
    class UStaticMesh* Scaffolding1;                                                  // 0x02A0 (size: 0x8)
    class UStaticMesh* Scaffolding2;                                                  // 0x02A8 (size: 0x8)
    class UStaticMesh* ScaffoldingCorner;                                             // 0x02B0 (size: 0x8)
    class UMaterialInterface* GhostMaterial;                                          // 0x02B8 (size: 0x8)

}; // Size: 0x2D0

class UVisSiegeTowerAnimInstance : public UVisVehicleAnimInstance
{
    EAnvilSiegeTowerState LadderState;                                                // 0x0360 (size: 0x1)
    EAnvilSiegeTowerState RampState;                                                  // 0x0361 (size: 0x1)
    float CurrentRampAngle;                                                           // 0x0364 (size: 0x4)

}; // Size: 0x370

class UVisSingleItemStockpileComponent : public UStaticMeshComponent
{
    int32 InventorySlotIndex;                                                         // 0x05F0 (size: 0x4)
    class UStaticMesh* DefaultItemMesh;                                               // 0x05F8 (size: 0x8)
    bool ShowUnderlyingItem;                                                          // 0x0600 (size: 0x1)

}; // Size: 0x620

class UVisSplineComponent : public USceneComponent
{
    FVisSplineComponentOnShapeUpdated OnShapeUpdated;                                 // 0x02A0 (size: 0x10)
    void OnVisSplineShapeUpdated(const class USplineDataComponent* SplineDataComponent);
    class UDecalComponent* GroundDecalComponent;                                      // 0x02B0 (size: 0x8)
    float PreviewPieceLength;                                                         // 0x02B8 (size: 0x4)
    FVector PreviewEndLocation;                                                       // 0x02C0 (size: 0x18)
    FVector PreviewBridgeStartOffSet;                                                 // 0x02D8 (size: 0x18)
    class UMaterialInterface* DecalMaterial;                                          // 0x02F0 (size: 0x8)
    class UMaterial* MaterialOverride;                                                // 0x02F8 (size: 0x8)
    class UStaticMesh* EndPieceMesh;                                                  // 0x0300 (size: 0x8)
    TArray<class UStaticMesh*> MidPieceMeshes;                                        // 0x0308 (size: 0x10)
    class USplineDataComponent* SplineDataComponent;                                  // 0x0320 (size: 0x8)
    TArray<class UStaticMeshComponent*> MidPieces;                                    // 0x0328 (size: 0x10)
    TArray<class UStaticMeshComponent*> EndPieces;                                    // 0x0338 (size: 0x10)

}; // Size: 0x370

class UVisSpringArmComponent : public USpringArmComponent
{
}; // Size: 0x3B0

class UVisStaticMeshComponent : public UVisStaticMeshComponentBase
{
}; // Size: 0x600

class UVisStockpileComponent : public UInstancedStaticMeshComponent
{
    FVector StockpileExtents;                                                         // 0x0738 (size: 0x18)
    class UCollisionVisualizerComponent* BoxVisualizer;                               // 0x0750 (size: 0x8)
    class UVisItem* CurrentItem;                                                      // 0x0758 (size: 0x8)

}; // Size: 0x7A0

class UVisTeamMeshComponent : public UStaticMeshComponent
{
    class UStaticMesh* TeamMeshAranic;                                                // 0x05F0 (size: 0x8)
    class UStaticMesh* TeamMeshMirrish;                                               // 0x05F8 (size: 0x8)
    class UStaticMesh* TeamMeshNovan;                                                 // 0x0600 (size: 0x8)

}; // Size: 0x610

class UVisTeamSkeletalMeshComponent : public USkeletalMeshComponent
{
    TMap<class EAnvilFactionId, class USkeletalMesh*> TeamMeshes;                     // 0x0F80 (size: 0x50)

}; // Size: 0xFD0

class UVisTownAreaMarkerDecalComponent : public UDecalComponent
{
}; // Size: 0x300

class UVisVehicleAnimInstance : public UAnimInstance
{
    float NativeSpeed;                                                                // 0x0348 (size: 0x4)
    float NativeHorizontalMovement;                                                   // 0x034C (size: 0x4)
    float NativeVerticalMovement;                                                     // 0x0350 (size: 0x4)
    bool bIsOccupied;                                                                 // 0x0354 (size: 0x1)
    bool bShouldAnimateMoving;                                                        // 0x0355 (size: 0x1)

}; // Size: 0x360

class UVisWeatherIndicatorAnimInstance : public UAnimInstance
{
    FWeatherData Weather;                                                             // 0x0348 (size: 0x30)

}; // Size: 0x380

class UVitalityStatusWidget : public UUserWidget
{
    class UProgressBar* HungerBar;                                                    // 0x0278 (size: 0x8)
    class UOverlay* HealthOverlay;                                                    // 0x0280 (size: 0x8)
    class UProgressBar* HealthBar;                                                    // 0x0288 (size: 0x8)
    class UOverlay* StaminaOverlay;                                                   // 0x0290 (size: 0x8)
    class UProgressBar* StaminaBar;                                                   // 0x0298 (size: 0x8)
    class UProgressBar* StabilityBar;                                                 // 0x02A0 (size: 0x8)

}; // Size: 0x2C8

class UWildSpawnPointMapIcon : public UMapIcon
{
    class UButton* IconButton;                                                        // 0x0398 (size: 0x8)

}; // Size: 0x3A0

class UWinConditionWidget : public UUserWidget
{
    class UHeaderContainer* HeaderContainer;                                          // 0x0278 (size: 0x8)
    class UProgressBar* Faction0MilitaryProgressBar;                                  // 0x0280 (size: 0x8)
    class UProgressBar* Faction1MilitaryProgressBar;                                  // 0x0288 (size: 0x8)
    class UProgressBar* Faction2MilitaryProgressBar;                                  // 0x0290 (size: 0x8)
    class UTextBlock* Faction0MilitaryTextBox;                                        // 0x0298 (size: 0x8)
    class UTextBlock* Faction1MilitaryTextBox;                                        // 0x02A0 (size: 0x8)
    class UTextBlock* Faction2MilitaryTextBox;                                        // 0x02A8 (size: 0x8)
    class UProgressBar* Faction0CultureProgressBar;                                   // 0x02B0 (size: 0x8)
    class UProgressBar* Faction1CultureProgressBar;                                   // 0x02B8 (size: 0x8)
    class UProgressBar* Faction2CultureProgressBar;                                   // 0x02C0 (size: 0x8)
    class UTextBlock* Faction0CultureTextBox;                                         // 0x02C8 (size: 0x8)
    class UTextBlock* Faction1CultureTextBox;                                         // 0x02D0 (size: 0x8)
    class UTextBlock* Faction2CultureTextBox;                                         // 0x02D8 (size: 0x8)
    class UProgressBar* Faction0CultureTimerProgressBar;                              // 0x02E0 (size: 0x8)
    class UProgressBar* Faction1CultureTimerProgressBar;                              // 0x02E8 (size: 0x8)
    class UProgressBar* Faction2CultureTimerProgressBar;                              // 0x02F0 (size: 0x8)
    FLinearColor ProgressBarNormalColour;                                             // 0x02F8 (size: 0x10)
    FLinearColor ProgressBarVictoryAchievedColour;                                    // 0x0308 (size: 0x10)
    class UTooltipWidget* CachedWinConditionTooltip;                                  // 0x0318 (size: 0x8)

    FText GetFaction2MilitaryText();
    FLinearColor GetFaction2MilitaryProgressBarColour();
    float GetFaction2MilitaryProgress();
    float GetFaction2CultureTimerProgress();
    FText GetFaction2CultureText();
    FLinearColor GetFaction2CultureProgressBarColour();
    float GetFaction2CultureProgress();
    FText GetFaction1MilitaryText();
    FLinearColor GetFaction1MilitaryProgressBarColour();
    float GetFaction1MilitaryProgress();
    float GetFaction1CultureTimerProgress();
    FText GetFaction1CultureText();
    FLinearColor GetFaction1CultureProgressBarColour();
    float GetFaction1CultureProgress();
    FText GetFaction0MilitaryText();
    FLinearColor GetFaction0MilitaryProgressBarColour();
    float GetFaction0MilitaryProgress();
    float GetFaction0CultureTimerProgress();
    FText GetFaction0CultureText();
    FLinearColor GetFaction0CultureProgressBarColour();
    float GetFaction0CultureProgress();
}; // Size: 0x380

class UWorldBeaconTowerMapIcon : public UWorldEntityMapIcon
{
}; // Size: 0x3A0

class UWorldEntityHandle : public UObject
{
    class URegionEntry* RegionEntry;                                                  // 0x0028 (size: 0x8)

}; // Size: 0xE0

class UWorldEntityMapIcon : public UMapIconBase
{
    class UWorldEntityHandle* EntityHandle;                                           // 0x0370 (size: 0x8)
    class USizeBox* IconSizeBox;                                                      // 0x0378 (size: 0x8)
    class UImage* MapItemImage;                                                       // 0x0380 (size: 0x8)
    class UEntityTemplate* EntityTemplateCDO;                                         // 0x0388 (size: 0x8)
    class AVisActor* VisActorCDO;                                                     // 0x0390 (size: 0x8)

}; // Size: 0x3A0

class UWorldEntityPoolManager : public UObject
{
    class UAnvilGameInstance* GameInstance;                                           // 0x0040 (size: 0x8)
    TMap<int32, URegionEntry*> RegionIndexMap;                                        // 0x0048 (size: 0x50)
    TMap<int32, URegionEntry*> RegionHashMap;                                         // 0x0098 (size: 0x50)

}; // Size: 0x120

class UWorldFamilySpawnMapIcon : public UDeploymentPointMapIcon
{
}; // Size: 0x3B0

class UWorldMarketShopMapIcon : public UWorldEntityMapIcon
{
    TSubclassOf<class UCentralMarketplaceMapTooltip> CentralMarketplaceTooltipClass;  // 0x03A0 (size: 0x8)
    class UButton* MapItemButton;                                                     // 0x03A8 (size: 0x8)
    class UCentralMarketplaceMapTooltip* CachedCentralMarketplaceTooltip;             // 0x03B0 (size: 0x8)

    void OnIconClicked();
}; // Size: 0x3B8

class UWorldTempleMapIcon : public UWorldEntityMapIcon
{
}; // Size: 0x3A0

class UWorldTownCenterMapIcon : public UDeploymentPointMapIcon
{
    class UPanelWidget* MainElements;                                                 // 0x03B0 (size: 0x8)
    class UVerticalBox* TownStatusVerticalBox;                                        // 0x03B8 (size: 0x8)
    class UBorder* TownNameBorder;                                                    // 0x03C0 (size: 0x8)
    class UTextBlock* TownNameText;                                                   // 0x03C8 (size: 0x8)
    class UBorder* TownStatusBorder;                                                  // 0x03D0 (size: 0x8)
    class UStatusWidget* NumPledgedStatus;                                            // 0x03D8 (size: 0x8)
    class UStatusWidget* NumTentsStatus;                                              // 0x03E0 (size: 0x8)
    class UStatusWidget* NumReinforcementSuppliesStatus;                              // 0x03E8 (size: 0x8)
    class UTextBlock* TownWarningText;                                                // 0x03F0 (size: 0x8)
    class UImage* DetectionRangeCircle;                                               // 0x03F8 (size: 0x8)

    ESlateVisibility GetTownWarningTextVisibility();
    FText GetTownWarningText();
    ESlateVisibility GetTownStatusBorderVisibility();
    FText GetTownNameText();
    ESlateVisibility GetTownNameBorderVisibility();
    FText GetNumTentsText();
    FText GetNumReinforcementSuppliesText();
    ESlateVisibility GetNumPledgedVisibility();
    FText GetNumPledgedText();
}; // Size: 0x408

class UWorldWildSpawnMapIcon : public UDeploymentPointMapIcon
{
}; // Size: 0x3B0

#endif
