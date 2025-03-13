#ifndef UE4SS_SDK_R2_HPP
#define UE4SS_SDK_R2_HPP

#include "R2_enums.hpp"

struct FAnvilOutput
{
    TSubclassOf<class UItemTemplate> OutputCodeName;                                  // 0x0000 (size: 0x8)
    int32 OutputCodeNameVisVar;                                                       // 0x0008 (size: 0x4)
    int32 NumHitsToConvert;                                                           // 0x000C (size: 0x4)
    float TargetHeat;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAnvilSimActivity
{
    EAnvilSimActivityState State;                                                     // 0x0000 (size: 0x1)
    bool bChainable;                                                                  // 0x0001 (size: 0x1)
    float Delay;                                                                      // 0x0004 (size: 0x4)
    float AdditionalDelays;                                                           // 0x0008 (size: 0x8)
    float AttackChainDelays;                                                          // 0x0010 (size: 0x18)
    float Duration;                                                                   // 0x0028 (size: 0x4)
    float AttackChainDurations;                                                       // 0x002C (size: 0x8)
    float MovementSpeedModifier;                                                      // 0x0034 (size: 0x4)
    float RotationSpeedModifier;                                                      // 0x0038 (size: 0x4)
    bool bRepeatable;                                                                 // 0x003C (size: 0x1)
    bool bRequireAim;                                                                 // 0x003D (size: 0x1)
    float StaminaCost;                                                                // 0x0040 (size: 0x4)
    float AimedStaminaCost;                                                           // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FBasicCount
{
    int32 CodeName;                                                                   // 0x0000 (size: 0x4)
    int32 Count;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FBasicItemAndPayloadCount
{
    TSubclassOf<class UItemTemplate> CodeName;                                        // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    uint8 Payload;                                                                    // 0x000C (size: 0x1)
    int32 Count;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FBasicItemCount
{
    TSubclassOf<class UItemTemplate> CodeName;                                        // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    int32 Count;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FBuildAreaInfo
{
    bool TownArea;                                                                    // 0x0000 (size: 0x1)
    bool TownAreaPledgeRequired;                                                      // 0x0001 (size: 0x1)
    bool SmallCampArea;                                                               // 0x0002 (size: 0x1)
    bool LargeCampArea;                                                               // 0x0003 (size: 0x1)
    bool HomesteadArea;                                                               // 0x0004 (size: 0x1)
    bool HomesteadAreaPledgeRequired;                                                 // 0x0005 (size: 0x1)
    bool UndergroundArea;                                                             // 0x0006 (size: 0x1)
    bool WildernessArea;                                                              // 0x0007 (size: 0x1)
    bool WildernessAreaFriendlyRequired;                                              // 0x0008 (size: 0x1)

}; // Size: 0x9

struct FBuildRuleInfo
{
    bool bBuildableOverRoads;                                                         // 0x0000 (size: 0x1)
    bool bBuildableNearSpawnPoint;                                                    // 0x0001 (size: 0x1)
    bool bBuildableInEnemyArea;                                                       // 0x0002 (size: 0x1)
    bool bBuildableNearEnemies;                                                       // 0x0003 (size: 0x1)
    bool bBuildableInWildernessWithoutPledge;                                         // 0x0004 (size: 0x1)
    bool LimitTouchingGroupCount;                                                     // 0x0005 (size: 0x1)
    float RequiredAgeSeconds;                                                         // 0x0008 (size: 0x4)
    int32 NearbyPlayersRequired;                                                      // 0x000C (size: 0x4)
    uint8 TierPrerequisite;                                                           // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FBuildSitePlacementInfo
{
    bool InRichSoil;                                                                  // 0x0000 (size: 0x1)
    bool BeaconTowerLink;                                                             // 0x0001 (size: 0x1)
    bool BeaconTowerTownHallLink;                                                     // 0x0002 (size: 0x1)
    bool InFamilyArea;                                                                // 0x0003 (size: 0x1)
    bool ProximityToRoad;                                                             // 0x0004 (size: 0x1)
    float FamilyAreaExtent;                                                           // 0x0008 (size: 0x4)
    float BeaconTowerAltitudePercent;                                                 // 0x000C (size: 0x4)
    uint8 NumBeaconTowerNeighbours;                                                   // 0x0010 (size: 0x1)
    int32 DistanceToTown;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FCentralMarketplaceListing
{
    int32 ListingId;                                                                  // 0x0000 (size: 0x4)
    FItemCount Item;                                                                  // 0x0008 (size: 0x28)
    int32 PricePerItem;                                                               // 0x0030 (size: 0x4)
    int64 ListingOwnerOnlineId;                                                       // 0x0038 (size: 0x8)
    int32 NumItemsFulfilled;                                                          // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FCentralMarketplaceOrderItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0xC)

}; // Size: 0xC

struct FCentralMarketplaceUserData
{
    int32 DataVersion;                                                                // 0x0000 (size: 0x4)
    int64 DataForMarketEntityId;                                                      // 0x0008 (size: 0x8)
    int32 DataForMarketMapHash;                                                       // 0x0010 (size: 0x4)
    TArray<FCentralMarketplaceListing> SaleListings;                                  // 0x0018 (size: 0x10)
    TArray<FCentralMarketplaceListing> OrderListings;                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCompHandleData
{
    FEntityHandle Target;                                                             // 0x0000 (size: 0x10)
    int32 Index;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompressedTileLayerDataInfo
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Layer;                                                                      // 0x0008 (size: 0x4)
    uint32 DataSize;                                                                  // 0x000C (size: 0x4)
    int32 DataIndex;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FContextfulPlacementStatus
{
    EAnvilPlacementStatus Status;                                                     // 0x0000 (size: 0x1)
    int32 Context;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FControlSurface
{
    FVector Pivot;                                                                    // 0x0000 (size: 0x18)
    float DimensionX;                                                                 // 0x0018 (size: 0x4)
    float DimensionYZ;                                                                // 0x001C (size: 0x4)
    bool bVertical;                                                                   // 0x0020 (size: 0x1)
    bool bInvertedControls;                                                           // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FCookingRecipe
{
    TArray<FBasicItemCount> InputItems;                                               // 0x0000 (size: 0x10)
    TArray<FBasicItemCount> OutputItems;                                              // 0x0010 (size: 0x10)
    float CookDurationSec;                                                            // 0x0020 (size: 0x4)
    float TargetNormalizedTemperature;                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FCraftingRecipe
{
    TArray<FBasicItemCount> RecipeIngredients;                                        // 0x0000 (size: 0x10)
    TSubclassOf<class UItemTemplate> CraftedItem;                                     // 0x0010 (size: 0x8)
    int32 CraftedItemVisVar;                                                          // 0x0018 (size: 0x4)
    TSubclassOf<class UItemTemplate> QualityIngredient;                               // 0x0020 (size: 0x8)
    int32 QualityIngredientVisVar;                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FCustomStackLimit
{
    TSubclassOf<class UItemTemplate> Item;                                            // 0x0000 (size: 0x8)
    uint16 StackLimit;                                                                // 0x0008 (size: 0x2)

}; // Size: 0x10

struct FDismantleVoteInfo
{
    int64 VoterId;                                                                    // 0x0000 (size: 0x8)
    int32 VoteTime;                                                                   // 0x0008 (size: 0x4)
    uint8 VoteCount;                                                                  // 0x000C (size: 0x1)

}; // Size: 0x10

struct FDryingRackRecipe
{
    TSubclassOf<class UItemTemplate> InputItem;                                       // 0x0000 (size: 0x8)
    int32 InputItemVisVar;                                                            // 0x0008 (size: 0x4)
    TSubclassOf<class UItemTemplate> OutputItem;                                      // 0x0010 (size: 0x8)
    int32 OutputItemVisVar;                                                           // 0x0018 (size: 0x4)
    float DryingDurationSeconds;                                                      // 0x001C (size: 0x4)

}; // Size: 0x20

struct FDynamicPrefabSpawnInfo
{
    TSubclassOf<class ADynamicPrefab> CodeName;                                       // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    float SpawnWeight;                                                                // 0x000C (size: 0x4)
    float SpawnWeightVisVar;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FEntityHandle
{
    uint64 ID;                                                                        // 0x0000 (size: 0x8)
    class AVisActorBase* CachedPtr;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FExplorationSpawnedEntityAvoidInfo
{
    TSubclassOf<class UEntityTemplate> EntityTypeToAvoid;                             // 0x0000 (size: 0x8)
    int32 EntityTypeToAvoidVisVar;                                                    // 0x0008 (size: 0x4)
    float Distance;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FExplorationSpawnedEntityInfo
{
    TSubclassOf<class UEntityTemplate> SpawnedEntity;                                 // 0x0000 (size: 0x8)
    int32 SpawnedEntityVisVar;                                                        // 0x0008 (size: 0x4)
    float MinDistFromFamilyArea;                                                      // 0x000C (size: 0x4)
    float ChanceToSpawnPerMin;                                                        // 0x0010 (size: 0x4)
    float MinDistanceBetweenSpawns;                                                   // 0x0014 (size: 0x4)
    int32 MaxNumInRadius;                                                             // 0x0018 (size: 0x4)
    bool bRequiresNavmesh;                                                            // 0x001C (size: 0x1)
    bool bConsiderAllFamilyAreas;                                                     // 0x001D (size: 0x1)
    bool bDontSpawnInSettlements;                                                     // 0x001E (size: 0x1)
    bool bDoExpensiveForbiddenSurfaceCheck;                                           // 0x001F (size: 0x1)
    int32 CompatibleSurfaceTypes;                                                     // 0x0020 (size: 0x4)
    int32 ForbiddenSurfaceTypes;                                                      // 0x0024 (size: 0x4)
    TArray<FExplorationSpawnedEntityAvoidInfo> OtherResourcesToAvoidByDistance;       // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FFamilyHouseInfoType
{
    int32 MapHash;                                                                    // 0x0000 (size: 0x4)
    int32 FamilyId;                                                                   // 0x0004 (size: 0x4)
    bool bHasHousePledge;                                                             // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FFootprintSharedCompEntry
{
    class UProxyComponent* Comp;                                                      // 0x0000 (size: 0x8)
    uint8 bHighlight;                                                                 // 0x0008 (size: 0x1)
    uint8 bHide;                                                                      // 0x0008 (size: 0x1)
    uint8 bNoCopyToBuildSite;                                                         // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FFuelType
{
    TSubclassOf<class UItemTemplate> FuelItem;                                        // 0x0000 (size: 0x8)
    int32 FuelItemVisVar;                                                             // 0x0008 (size: 0x4)
    float BurnDurationSec;                                                            // 0x000C (size: 0x4)
    float NormalizedTemperature;                                                      // 0x0010 (size: 0x4)
    int32 AshGenerated;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FGrainMillRecipe
{
    TArray<FBasicItemCount> InputItems;                                               // 0x0000 (size: 0x10)
    FBasicItemCount OutputItem;                                                       // 0x0010 (size: 0x10)
    float ProductionDuration;                                                         // 0x0020 (size: 0x4)
    float TargetCoarseness;                                                           // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FGridItem
{
    int32 CodeName;                                                                   // 0x0000 (size: 0x4)
    int32 UnderlyingCodeName;                                                         // 0x0004 (size: 0x4)
    uint8 Payload;                                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FHitConverterInput
{
    TSubclassOf<class UItemTemplate> InputCodeName;                                   // 0x0000 (size: 0x8)
    int32 InputCodeNameVisVar;                                                        // 0x0008 (size: 0x4)
    int32 OutputStackSize;                                                            // 0x000C (size: 0x4)
    int32 OutputStackSizeVisVar;                                                      // 0x0010 (size: 0x4)
    int32 NumHitsToConvert;                                                           // 0x0014 (size: 0x4)
    bool bOutputScalesWithInputStackSize;                                             // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FHitConverterOutput
{
    TSubclassOf<class UItemTemplate> OutputCodeName;                                  // 0x0000 (size: 0x8)
    int32 OutputCodeNameVisVar;                                                       // 0x0008 (size: 0x4)
    TArray<FHitConverterInput> InputList;                                             // 0x0010 (size: 0x10)
    TArray<FHitConverterInput> InputListVisVar;                                       // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FHitInfo
{
    int32 Mask;                                                                       // 0x0000 (size: 0x4)
    FVector HitPosition;                                                              // 0x0008 (size: 0x18)
    FVector Normal;                                                                   // 0x0020 (size: 0x18)
    float Distance;                                                                   // 0x0038 (size: 0x4)
    float Time;                                                                       // 0x003C (size: 0x4)
    EAnvilPhysicalSurfaceType Surface;                                                // 0x0040 (size: 0x1)
    bool bInitialOverlap;                                                             // 0x0041 (size: 0x1)

}; // Size: 0x48

struct FHousePledgedPlayerArray
{
    TArray<int64> WrappedArray;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInventoryItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0xC)
    FGridItem DedicatedItem;                                                          // 0x000C (size: 0xC)
    int32 Count;                                                                      // 0x0018 (size: 0x4)
    int64 AcceptedTags;                                                               // 0x0020 (size: 0x8)
    float Durability;                                                                 // 0x0028 (size: 0x4)
    uint8 ItemFlags;                                                                  // 0x002C (size: 0x1)
    uint8 Payload;                                                                    // 0x002D (size: 0x1)
    int32 StackLimit;                                                                 // 0x0030 (size: 0x4)
    bool bIsDisabled;                                                                 // 0x0034 (size: 0x1)
    bool bCantArmDueToHeavyItem;                                                      // 0x0035 (size: 0x1)
    EAnvilItemSlotBackgroundType BackgroundType;                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FItemCount
{
    TSubclassOf<class UItemTemplate> CodeName;                                        // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    TSubclassOf<class UItemTemplate> UnderlyingCodeName;                              // 0x0010 (size: 0x8)
    int32 UnderlyingCodeNameVisVar;                                                   // 0x0018 (size: 0x4)
    float Durability;                                                                 // 0x001C (size: 0x4)
    int32 Count;                                                                      // 0x0020 (size: 0x4)
    uint8 ItemFlags;                                                                  // 0x0024 (size: 0x1)
    uint8 Payload;                                                                    // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FItemSlot
{
    int32 ProxyRepeat;                                                                // 0x0000 (size: 0x4)
    bool bOr;                                                                         // 0x0004 (size: 0x1)
    TSubclassOf<class UItemTemplate> HeldItem;                                        // 0x0008 (size: 0x8)
    bool bIsHeldItemPublic;                                                           // 0x0010 (size: 0x1)
    int32 Count;                                                                      // 0x0014 (size: 0x4)
    int32 StackLimit;                                                                 // 0x0018 (size: 0x4)
    bool bAllowWithdrawal;                                                            // 0x001C (size: 0x1)
    bool bIsPlayerEquipmentSlot;                                                      // 0x001D (size: 0x1)
    TArray<EAnvilItemTag> AcceptedTags;                                               // 0x0020 (size: 0x10)
    TArray<EAnvilItemTag> RequiredTags;                                               // 0x0030 (size: 0x10)
    TArray<EAnvilItemTag> ProhibitedTags;                                             // 0x0040 (size: 0x10)
    TSubclassOf<class UItemTemplate> DedicatedItemType;                               // 0x0050 (size: 0x8)
    TSubclassOf<class UItemTemplate> DedicatedUnderlyingItemType;                     // 0x0058 (size: 0x8)
    bool bCheckDedicatedUnderlyingItem;                                               // 0x0060 (size: 0x1)
    TSubclassOf<class UItemTemplate> RequiredEnablingItem;                            // 0x0068 (size: 0x8)
    EAnvilItemSlotBackgroundType BackgroundType;                                      // 0x0070 (size: 0x1)
    TArray<FCustomStackLimit> CustomStackLimits;                                      // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FLootTableItem
{
    FItemCount ItemToDrop;                                                            // 0x0000 (size: 0x28)
    float NormalizedChanceToDrop;                                                     // 0x0028 (size: 0x4)
    float MinDurability;                                                              // 0x002C (size: 0x4)
    float MaxDurability;                                                              // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FMineChunk
{
    int32 TypeIdx;                                                                    // 0x0000 (size: 0x4)
    FVector WorldPosition;                                                            // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FNavMeshTri
{
    FVector Verts;                                                                    // 0x0000 (size: 0x90)
    int32 NumVerts;                                                                   // 0x0090 (size: 0x4)
    bool bWalkable;                                                                   // 0x0094 (size: 0x1)
    int32 Layer;                                                                      // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FNightShroudLightSource
{
    FVector LightPosition;                                                            // 0x0000 (size: 0x18)
    float LightRadius;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FPlayerAgeDeployData
{
    uint8 TeamId;                                                                     // 0x0000 (size: 0x1)
    FFamilyHouseInfoType FamilyHouseInfo;                                             // 0x0004 (size: 0xC)
    FPledgeInfoType PledgedTownHallInfo;                                              // 0x0010 (size: 0xC)
    FPledgeInfoType PledgedMilitiaInfo;                                               // 0x001C (size: 0xC)
    int64 AllowedToSpawnUnixTimeStamp;                                                // 0x0028 (size: 0x8)
    FString OfflineCharacterServerName;                                               // 0x0030 (size: 0x10)
    bool bIsOfflineAtFamilyCenter;                                                    // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FPledgeInfoType
{
    int32 MapHash;                                                                    // 0x0000 (size: 0x4)
    int32 TownHallId;                                                                 // 0x0004 (size: 0x4)
    bool bHasHousePledge;                                                             // 0x0008 (size: 0x1)
    bool bHasBedPledge;                                                               // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FPledgedPlayer
{
}; // Size: 0x28

struct FProducableItem
{
    TSubclassOf<class UItemTemplate> ProducedItem;                                    // 0x0000 (size: 0x8)
    int32 ProducedItemVisVar;                                                         // 0x0008 (size: 0x4)
    TArray<FBasicItemCount> InputItems;                                               // 0x0010 (size: 0x10)
    float ProductionTime;                                                             // 0x0020 (size: 0x4)
    uint8 OutputCount;                                                                // 0x0024 (size: 0x1)
    bool bRequiresResearch;                                                           // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FR2ConfigArea
{
    float SmallFamilyCenterExtent;                                                    // 0x0000 (size: 0x4)
    float BigFamilyCenterExtent;                                                      // 0x0004 (size: 0x4)
    float TownAreaRadius;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FR2ConfigBuildSite
{
    TArray<FR2ConfigBuildSiteDistanceRule> BuildSiteDistanceRules;                    // 0x0000 (size: 0x10)
    float FamilyStructureWorldEntranceAvoidDist;                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FR2ConfigBuildSiteDistanceRule
{
    TArray<class TSubclassOf<UEntityTemplate>> BuildSites;                            // 0x0000 (size: 0x10)
    float Range;                                                                      // 0x0010 (size: 0x4)
    float LevelDistance;                                                              // 0x0014 (size: 0x4)
    bool bWithinTownRange;                                                            // 0x0018 (size: 0x1)
    uint8 NeighbourLimit;                                                             // 0x0019 (size: 0x1)
    EAnvilTrinaryRequirement FriendlyTeam;                                            // 0x001A (size: 0x1)
    EAnvilPlacementStatus ErrorCode;                                                  // 0x001B (size: 0x1)

}; // Size: 0x20

struct FR2ConfigCombustion
{
    TArray<FFuelType> FuelList;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FR2ConfigSignPost
{
    int32 MaxMessageLen;                                                              // 0x0000 (size: 0x4)
    float MaxLifeTime;                                                                // 0x0004 (size: 0x4)
    float LifeTimeChangeByUpvote;                                                     // 0x0008 (size: 0x4)
    float LifeTimeChangeByDownvote;                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FR2ConfigTradeResources
{
    TArray<class TSubclassOf<UEntityTemplate>> TradeResources;                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FR2Family
{
    int32 FamilyId;                                                                   // 0x0000 (size: 0x4)
    uint8 TeamId;                                                                     // 0x0004 (size: 0x1)
    int64 EntityId;                                                                   // 0x0008 (size: 0x8)
    int32 MapHash;                                                                    // 0x0010 (size: 0x4)
    FVector EntityGlobalPosition;                                                     // 0x0018 (size: 0x18)
    bool bAllowPublicPledging;                                                        // 0x0030 (size: 0x1)
    bool bIsAbandoned;                                                                // 0x0031 (size: 0x1)
    TArray<FR2FamilyMember> MemberOnlineIdList;                                       // 0x0038 (size: 0x10)
    TArray<int32> AlliedFamilyIdList;                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FR2FamilyMember
{
    int64 OnlineId;                                                                   // 0x0000 (size: 0x8)
    EAnvilR2FamilyRoleType Role;                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FR2FloatRange
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FR2InviteToJoinFamilyRequest
{
    int64 TargetFamilyMarkerEntityId;                                                 // 0x0000 (size: 0x8)
    int64 InviterOnlineId;                                                            // 0x0008 (size: 0x8)
    FString InviterPlayerName;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FR2RequestToJoinFamilyRequest
{
    int64 TargetMarkerEntityId;                                                       // 0x0000 (size: 0x8)
    int32 TargetMarkerMapHash;                                                        // 0x0008 (size: 0x4)
    int64 RequesterOnlineId;                                                          // 0x0010 (size: 0x8)
    FString RequesterPlayerName;                                                      // 0x0018 (size: 0x10)
    uint8 RequesterTeamId;                                                            // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FR2WeatherEvent
{
    FR2WeatherEventConfig Config;                                                     // 0x0000 (size: 0x24)
    int64 StartUnixTimestamp;                                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FR2WeatherEventConfig
{
    EAnvilR2WeatherEventType Type;                                                    // 0x0000 (size: 0x1)
    float StartingPositionGlobalX;                                                    // 0x0004 (size: 0x4)
    float StartingPositionGlobalY;                                                    // 0x0008 (size: 0x4)
    float InnerRadius;                                                                // 0x000C (size: 0x4)
    float OuterRadius;                                                                // 0x0010 (size: 0x4)
    float VelocityX;                                                                  // 0x0014 (size: 0x4)
    float VelocityY;                                                                  // 0x0018 (size: 0x4)
    int32 MaxDurationSec;                                                             // 0x001C (size: 0x4)
    float PeakIntensity;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FRayCastResult
{
    bool bHasBlockingHit;                                                             // 0x0000 (size: 0x1)
    FHitInfo BlockingHit;                                                             // 0x0008 (size: 0x48)

}; // Size: 0x50

struct FRefineQueueItem
{
    uint8 Index;                                                                      // 0x0000 (size: 0x1)
    TArray<FItemCount> Resources;                                                     // 0x0008 (size: 0x10)
    uint8 ItemQuality;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FReplicatedRefineQueueItem
{
    uint8 Index;                                                                      // 0x0000 (size: 0x1)
    uint8 ItemQuality;                                                                // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FStatusMessage
{
    EAnvilStatusMessageType MessageType;                                              // 0x0000 (size: 0x1)

}; // Size: 0x20

struct FStructureStats
{
    TSubclassOf<class UEntityTemplate> CodeName;                                      // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    int64 EntityId;                                                                   // 0x0010 (size: 0x8)
    FVector WorldPosition;                                                            // 0x0018 (size: 0x18)
    float MaxHealth;                                                                  // 0x0030 (size: 0x4)
    float Health;                                                                     // 0x0034 (size: 0x4)
    EAnvilDamageTargetType DamageTargetType;                                          // 0x0038 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0039 (size: 0x1)
    int32 TownHallId;                                                                 // 0x003C (size: 0x4)
    TSubclassOf<class UEntityTemplate> TownTradeResource;                             // 0x0040 (size: 0x8)
    int32 TownTradeResourceVisVar;                                                    // 0x0048 (size: 0x4)
    int32 MarkerFamilyId;                                                             // 0x004C (size: 0x4)
    int32 StructureFamilyId;                                                          // 0x0050 (size: 0x4)
    int64 PledgedPlayerId;                                                            // 0x0058 (size: 0x8)
    float RemainingTimeUntilCollapse_Sec;                                             // 0x0060 (size: 0x4)
    bool bShouldDecay;                                                                // 0x0064 (size: 0x1)
    bool bDecaying;                                                                   // 0x0065 (size: 0x1)
    float TimeUntilDecaySec;                                                          // 0x0068 (size: 0x4)
    float DecayDamagePerHour;                                                         // 0x006C (size: 0x4)
    bool bCanBeScorched;                                                              // 0x0070 (size: 0x1)
    float ScorchIntensity;                                                            // 0x0074 (size: 0x4)
    float BurntIntensity;                                                             // 0x0078 (size: 0x4)
    EAnvilScorchState ScorchState;                                                    // 0x007C (size: 0x1)
    uint8 HousedLivestockCount;                                                       // 0x007D (size: 0x1)
    uint8 MaxLivestockCount;                                                          // 0x007E (size: 0x1)
    float FarmWaterDuration;                                                          // 0x0090 (size: 0x4)
    float FarmWaterDurationMax;                                                       // 0x0094 (size: 0x4)
    float CookWaterDurationRemainingSec;                                              // 0x009C (size: 0x4)
    float CookCurrentTemperature;                                                     // 0x00A0 (size: 0x4)
    uint8 WorldEntranceDestinationMapId;                                              // 0x00A4 (size: 0x1)
    int32 WorldEntranceId;                                                            // 0x00A8 (size: 0x4)
    TArray<EAnvilUnderworldModuleEdgeType> ModuleEdgeList;                            // 0x00B0 (size: 0x10)
    bool bIsGrainMill;                                                                // 0x00C0 (size: 0x1)
    float CurrentCoarseness;                                                          // 0x00C4 (size: 0x4)
    float ProductionSpeed;                                                            // 0x00C8 (size: 0x4)
    float ProductionTime;                                                             // 0x00CC (size: 0x4)

}; // Size: 0xD0

struct FTavernBuffConfig
{
    uint8 NumPlayer;                                                                  // 0x0000 (size: 0x1)
    uint8 Level;                                                                      // 0x0001 (size: 0x1)
    float Duration;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTestStruct
{
    int32 Num;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FUnderworldModuleDebugInfo
{
    TArray<FUnderworldModuleDebugInfoEntry> Modules;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUnderworldModuleDebugInfoEntry
{
    TSubclassOf<class UEntityTemplate> CodeName;                                      // 0x0000 (size: 0x8)
    int32 CodeNameVisVar;                                                             // 0x0008 (size: 0x4)
    float PositionX;                                                                  // 0x000C (size: 0x4)
    float PositionY;                                                                  // 0x0010 (size: 0x4)
    uint8 NumRotations;                                                               // 0x0014 (size: 0x1)
    int32 SpawnedPrefabCodeName;                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FVictoryInfo
{
    uint8 VictorTeamId;                                                               // 0x0000 (size: 0x1)
    int64 VictoryUnixTimeStamp;                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVictoryInfoUpdate
{
    EAnvilVictoryType Type;                                                           // 0x0000 (size: 0x1)
    FVictoryInfo Info;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVisvarPowerConnection
{
    float RelativeAngle;                                                              // 0x0000 (size: 0x4)
    float InnerWidth;                                                                 // 0x0004 (size: 0x4)
    float OuterWidth;                                                                 // 0x0008 (size: 0x4)
    uint64 ID;                                                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWeatherData
{
    float NormalizedSeason;                                                           // 0x0000 (size: 0x4)
    float RainIntensity;                                                              // 0x0004 (size: 0x4)
    float SnowIntensity;                                                              // 0x0008 (size: 0x4)
    float Temperature;                                                                // 0x000C (size: 0x4)
    float Wetness;                                                                    // 0x0010 (size: 0x4)
    float Wind;                                                                       // 0x0014 (size: 0x4)
    FVector WindDir;                                                                  // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWorldEntityBeaconTowerData
{
    int32 TowerId;                                                                    // 0x0000 (size: 0x4)
    bool bActive;                                                                     // 0x0004 (size: 0x1)
    float LinkRange;                                                                  // 0x0008 (size: 0x4)
    float DetectionRange;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWorldEntityCentralMarketplaceData
{
    int32 DataVersion;                                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FWorldEntityData
{
    EAnvilWorldEntityType DataType;                                                   // 0x0000 (size: 0x1)
    FWorldEntityWildSpawnData WildSpawnData;                                          // 0x0001 (size: 0x2)
    FWorldEntityTownHallData TownHallData;                                            // 0x0008 (size: 0x38)
    FWorldEntityBeaconTowerData BeaconTowerData;                                      // 0x0040 (size: 0x10)
    FWorldEntityFamilyCenterData FamilyCenterData;                                    // 0x0050 (size: 0x18)
    FWorldEntityCentralMarketplaceData CentralMarketplaceData;                        // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FWorldEntityEntry
{
    EAnvilWorldEntityType Type;                                                       // 0x0000 (size: 0x1)
    int32 CodeName;                                                                   // 0x0004 (size: 0x4)
    int64 EntityId;                                                                   // 0x0008 (size: 0x8)
    int32 RegionIndex;                                                                // 0x0010 (size: 0x4)
    uint8 TeamId;                                                                     // 0x0014 (size: 0x1)
    FVector WorldPos;                                                                 // 0x0018 (size: 0x18)
    FWorldEntityData Data;                                                            // 0x0030 (size: 0x70)

}; // Size: 0xA0

struct FWorldEntityFamilyCenterData
{
    int32 FamilyId;                                                                   // 0x0000 (size: 0x4)
    TArray<FBasicItemAndPayloadCount> StoredFoodCounts;                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWorldEntityTownHallData
{
    int32 TownHallId;                                                                 // 0x0000 (size: 0x4)
    uint8 TownNameOrdinal;                                                            // 0x0004 (size: 0x1)
    uint8 TownNameId;                                                                 // 0x0005 (size: 0x1)
    uint8 Tier;                                                                       // 0x0006 (size: 0x1)
    int32 NumTotalHouses;                                                             // 0x0008 (size: 0x4)
    int32 NumUnclaimedHouses;                                                         // 0x000C (size: 0x4)
    int32 NumTotalTents;                                                              // 0x0010 (size: 0x4)
    int32 NumUnclaimedTents;                                                          // 0x0014 (size: 0x4)
    int32 NumPledgedPlayers;                                                          // 0x0018 (size: 0x4)
    TArray<FBasicItemAndPayloadCount> StoredFoodCounts;                               // 0x0020 (size: 0x10)
    bool bTownUnderAttack;                                                            // 0x0030 (size: 0x1)
    bool bCallForReinforcements;                                                      // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FWorldEntityWildSpawnData
{
    bool bIsActiveWildSpawn;                                                          // 0x0000 (size: 0x1)
    bool bIsWildSpawnNearTown;                                                        // 0x0001 (size: 0x1)

}; // Size: 0x2

class AAnvilPrefab : public AActor
{
}; // Size: 0x290

class AAnvilRockActor : public AAnvilPrefab
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UStaticMeshComponent* RockMeshComponent;                                    // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AAnvilTreeActor : public AActor
{
    TSubclassOf<class UEntityTemplate> EntityTemplate;                                // 0x0290 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class AAnvilWaterPlane : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0290 (size: 0x8)
    class UStaticMeshComponent* WaterMesh;                                            // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class ADynamicPrefab : public AActor
{
    FString CodeNameString;                                                           // 0x0290 (size: 0x10)
    int32 CodeName;                                                                   // 0x02A0 (size: 0x4)
    class UArrowComponent* ArrowComponent;                                            // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class AFootprint : public AActor
{
    bool bAutoSet;                                                                    // 0x0290 (size: 0x1)
    bool bShowMesh;                                                                   // 0x0291 (size: 0x1)
    bool bFillGroundCheckPoints;                                                      // 0x0292 (size: 0x1)
    FVector Position;                                                                 // 0x0298 (size: 0x18)
    FRotator Rotation;                                                                // 0x02B0 (size: 0x18)
    FVector Extents;                                                                  // 0x02C8 (size: 0x18)
    TMap<class TSubclassOf<UEntityTemplate>, class bool> StructureTiers;              // 0x02E0 (size: 0x50)
    TArray<FFootprintSharedCompEntry> FootprintSharedComponents;                      // 0x0330 (size: 0x10)
    class UCollisionVisualizerComponent* FootprintVisualizer;                         // 0x0340 (size: 0x8)
    TArray<class UCollisionVisualizerComponent*> MeshVisualizers;                     // 0x0348 (size: 0x10)
    TArray<class UStaticMeshComponent*> StaticMeshVisualizers;                        // 0x0358 (size: 0x10)

}; // Size: 0x368

class ATemplate : public AActor
{
}; // Size: 0x290

class AUnderworldModulePrefab : public AAnvilPrefab
{
    class UArrowComponent* ArrowComponent;                                            // 0x0290 (size: 0x8)
    class UBoxComponent* ModuleFootprint;                                             // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AVisActorBase : public AActor
{
    class UEntityTemplate* TemplateCDO;                                               // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UAIStimulusProxyComponent : public UProxyComponent
{
    EAnvilStimulusType Type;                                                          // 0x0028 (size: 0x1)
    bool bAgroTarget;                                                                 // 0x0029 (size: 0x1)

}; // Size: 0x30

class UAdminEnvDataComponent : public UDataComponent
{
    bool bFreeBuild;                                                                  // 0x00A8 (size: 0x1)
    bool bDebugDraw;                                                                  // 0x00C8 (size: 0x1)
    bool bGodMode;                                                                    // 0x00E8 (size: 0x1)
    bool bShowStructureStats;                                                         // 0x0108 (size: 0x1)
    bool bShowWeatherStats;                                                           // 0x0128 (size: 0x1)
    bool bDebugHud;                                                                   // 0x0148 (size: 0x1)
    TArray<FStructureStats> StructureStatsList;                                       // 0x0168 (size: 0x10)

}; // Size: 0x190

class UAdminEnvProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UAdvancedSnappingProxyComponent : public UProxyComponent
{
    bool bBlockSnapping;                                                              // 0x0028 (size: 0x1)
    bool bDisableMinSnapWhenNotSnapping;                                              // 0x0029 (size: 0x1)
    bool bNoOverlap;                                                                  // 0x002A (size: 0x1)
    uint8 OverridedAngleOverlapPriority;                                              // 0x002B (size: 0x1)
    float OverridedAngleOverlapMin;                                                   // 0x002C (size: 0x4)
    uint8 NumSnappingRequired;                                                        // 0x0030 (size: 0x1)
    float MaxOverlapDistOverride;                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

class UAnimalAIDataComponent : public UDataComponent
{
    EAnvilAnimalState CurrentState;                                                   // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UAnimalAIProxyComponent : public UProxyComponent
{
    float VisionRange;                                                                // 0x0028 (size: 0x4)
    float VisionAngle;                                                                // 0x002C (size: 0x4)
    float SlowSpeed;                                                                  // 0x0030 (size: 0x4)
    float FastSpeed;                                                                  // 0x0034 (size: 0x4)
    float Acceleration;                                                               // 0x0038 (size: 0x4)
    float RotationSpeed;                                                              // 0x003C (size: 0x4)
    float TrapTime;                                                                   // 0x0040 (size: 0x4)
    float WalkingTime;                                                                // 0x0044 (size: 0x4)
    bool bHoming;                                                                     // 0x0048 (size: 0x1)
    bool bAvoidRoads;                                                                 // 0x0049 (size: 0x1)
    bool bIsTrappable;                                                                // 0x004A (size: 0x1)
    float HomingDistance;                                                             // 0x004C (size: 0x4)

}; // Size: 0x50

class UAnimalAttackProxyComponent : public UProxyComponent
{
    TArray<class TSubclassOf<UEntityTemplate>> AttackTargetTypes;                     // 0x0028 (size: 0x10)
    float OnRoadVisionRange;                                                          // 0x0038 (size: 0x4)
    float PosturingHoldDist;                                                          // 0x003C (size: 0x4)
    float PosturingAggroDist;                                                         // 0x0040 (size: 0x4)
    float PosturingDuration;                                                          // 0x0044 (size: 0x4)
    float ChaseDuration;                                                              // 0x0048 (size: 0x4)
    float ChaseCooldown;                                                              // 0x004C (size: 0x4)
    FVector AttackOffset;                                                             // 0x0050 (size: 0x18)
    float AttackRadius;                                                               // 0x0068 (size: 0x4)
    float AttackFrequency;                                                            // 0x006C (size: 0x4)
    float AttackDelay;                                                                // 0x0070 (size: 0x4)
    uint8 MinNumAttacks;                                                              // 0x0074 (size: 0x1)
    uint8 MaxNumAttacks;                                                              // 0x0075 (size: 0x1)
    int32 AttackDamage;                                                               // 0x0078 (size: 0x4)
    EAnvilDamageType AttackDamageType;                                                // 0x007C (size: 0x1)
    bool bDoesFirstAttackFail;                                                        // 0x007D (size: 0x1)

}; // Size: 0x80

class UAnimalFlyingProxyComponent : public UProxyComponent
{
    float CruisingHeightMin;                                                          // 0x0028 (size: 0x4)
    float CruisingHeightMax;                                                          // 0x002C (size: 0x4)
    float SlowTurningAccel;                                                           // 0x0030 (size: 0x4)
    float FastTurningAccel;                                                           // 0x0034 (size: 0x4)
    float ClimbingSpeedModifier;                                                      // 0x0038 (size: 0x4)
    float DivingSpeedModifier;                                                        // 0x003C (size: 0x4)
    float DiveRange;                                                                  // 0x0040 (size: 0x4)

}; // Size: 0x48

class UAnimalLivestockProxyComponent : public UProxyComponent
{
    float MaxDistanceToHomeLivestockStructure;                                        // 0x0028 (size: 0x4)
    TSubclassOf<class UItemTemplate> FoodItem;                                        // 0x0030 (size: 0x8)
    TArray<class TSubclassOf<UItemTemplate>> ProducedItems;                           // 0x0038 (size: 0x10)
    int32 FeedingTimeOfDayHour;                                                       // 0x0048 (size: 0x4)
    bool bFeedsAtNight;                                                               // 0x004C (size: 0x1)
    float NormalizedChanceToProduceWithoutFood;                                       // 0x0050 (size: 0x4)
    float TimeToBecomeWildSec;                                                        // 0x0054 (size: 0x4)
    TSubclassOf<class UEntityTemplate> WildEntity;                                    // 0x0058 (size: 0x8)

}; // Size: 0x60

class UAnimalRopeAttachableDataComponent : public UDataComponent
{
    FEntityHandle AttachedTarget;                                                     // 0x00A8 (size: 0x10)

}; // Size: 0xD0

class UAnimalRopeAttachableProxyComponent : public UProxyComponent
{
    float MaxFollowSpeed;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

class UAnimalRopeSlotDataComponent : public UDataComponent
{
    FEntityHandle AttachedTarget;                                                     // 0x00A8 (size: 0x10)

}; // Size: 0xD0

class UAnimalRopeSlotProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UAnimalScavengeProxyComponent : public UProxyComponent
{
    float SearchRange;                                                                // 0x0028 (size: 0x4)
    float EatRange;                                                                   // 0x002C (size: 0x4)
    float ScavengeFrequency;                                                          // 0x0030 (size: 0x4)
    TArray<class TSubclassOf<UEntityTemplate>> TargetTypes;                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UAnimalTameProxyComponent : public UProxyComponent
{
    uint8 FeedingNum;                                                                 // 0x0028 (size: 0x1)
    float FeedingFreqSeconds;                                                         // 0x002C (size: 0x4)
    TSubclassOf<class UItemTemplate> TamingFood;                                      // 0x0030 (size: 0x8)
    TSubclassOf<class UEntityTemplate> TamedEntity;                                   // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnvilDataComponent : public UDataComponent
{
    EAnvilAnvilGameplayType GameplayType;                                             // 0x00A8 (size: 0x1)
    int32 InputItemName;                                                              // 0x00C8 (size: 0x4)
    uint8 CurrentSelectedOutputIndex;                                                 // 0x00E8 (size: 0x1)
    TArray<FAnvilOutput> OutputList;                                                  // 0x0108 (size: 0x10)
    float HitCounter;                                                                 // 0x0130 (size: 0x4)

}; // Size: 0x150

class UAnvilProxyComponent : public UProxyComponent
{
    EAnvilAnvilGameplayType GameplayType;                                             // 0x0028 (size: 0x1)
    TSubclassOf<class UItemTemplate> InputItemName;                                   // 0x0030 (size: 0x8)
    TArray<FAnvilOutput> OutputList;                                                  // 0x0038 (size: 0x10)
    EAnvilToolType RequiredTool;                                                      // 0x0048 (size: 0x1)

}; // Size: 0x50

class UArmorDataComponent : public UDataComponent
{
    EAnvilArmourType HeadArmourType;                                                  // 0x00A8 (size: 0x1)
    EAnvilArmourType BodyArmourType;                                                  // 0x00C8 (size: 0x1)

}; // Size: 0xE8

class UArmorProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UBarnProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> ParentType;                                    // 0x0028 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ChildType;                                     // 0x0030 (size: 0x8)
    TSubclassOf<class UItemTemplate> FoodType;                                        // 0x0038 (size: 0x8)
    uint8 BreedingHoursMin;                                                           // 0x0040 (size: 0x1)
    uint8 BreedingHoursMax;                                                           // 0x0041 (size: 0x1)

}; // Size: 0x48

class UBaseBuildSiteEntity : public UEntityTemplate
{
    class UBuildSiteProxyComponent* BuildSiteComp;                                    // 0x0080 (size: 0x8)
    class UTeamProxyComponent* TeamComp;                                              // 0x0088 (size: 0x8)
    class UHealthProxyComponent* HealthComp;                                          // 0x0090 (size: 0x8)
    class UMeshCollisionProxyComponent* MeshCollisionComp;                            // 0x0098 (size: 0x8)
    class UFootprintCollisionProxyComponent* FootprintComp;                           // 0x00A0 (size: 0x8)
    class UBoxCollisionProxyComponent* UseBoxComp;                                    // 0x00A8 (size: 0x8)
    class UBoxCollisionProxyComponent* ActionBoxComp;                                 // 0x00B0 (size: 0x8)
    class UDecayProxyComponent* DecayComp;                                            // 0x00B8 (size: 0x8)
    class UStructureProxyComponent* StructureComp;                                    // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UBaseStructureEntity : public UEntityTemplate
{
    class UTeamProxyComponent* TeamComp;                                              // 0x0080 (size: 0x8)
    class UHealthProxyComponent* HealthComp;                                          // 0x0088 (size: 0x8)
    class URepairProxyComponent* RepairComp;                                          // 0x0090 (size: 0x8)
    class UStructureProxyComponent* StructureComp;                                    // 0x0098 (size: 0x8)
    class UDestroyableProxyComponent* DestroyableComp;                                // 0x00A0 (size: 0x8)
    class UMeshCollisionProxyComponent* MeshCollisionComp;                            // 0x00A8 (size: 0x8)
    class UFootprintCollisionProxyComponent* FootprintComp;                           // 0x00B0 (size: 0x8)
    class UBoxCollisionProxyComponent* UseBoxComp;                                    // 0x00B8 (size: 0x8)
    class UBoxCollisionProxyComponent* ActionBoxComp;                                 // 0x00C0 (size: 0x8)
    class UDecayProxyComponent* DecayComp;                                            // 0x00C8 (size: 0x8)
    class UScorchProxyComponent* ScorchComp;                                          // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UBeaconTowerDataComponent : public UDataComponent
{
    bool bDetected;                                                                   // 0x00A8 (size: 0x1)
    bool bInformed;                                                                   // 0x00C8 (size: 0x1)

}; // Size: 0xE8

class UBeaconTowerProxyComponent : public UProxyComponent
{
    bool bViewerNode;                                                                 // 0x0028 (size: 0x1)
    FR2FloatRange LinkRangeMinMax;                                                    // 0x002C (size: 0x8)
    FR2FloatRange DetectionRangeMinMax;                                               // 0x0034 (size: 0x8)
    FR2FloatRange AltitudeDeltaMinMax;                                                // 0x003C (size: 0x8)
    float AltitudeCheckRadius;                                                        // 0x0044 (size: 0x4)
    float DetectionFuelTimeMultiplier;                                                // 0x0048 (size: 0x4)
    float InformingFuelTimeMultiplier;                                                // 0x004C (size: 0x4)

}; // Size: 0x50

class UBoxCollisionProxyComponent : public UProxyComponent
{
    bool ExtendFootprint;                                                             // 0x0028 (size: 0x1)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    FVector Extents;                                                                  // 0x0060 (size: 0x18)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0078 (size: 0x1)
    int32 CollisionMask;                                                              // 0x007C (size: 0x4)
    int32 Tags;                                                                       // 0x0080 (size: 0x4)
    float StepAngle;                                                                  // 0x0084 (size: 0x4)
    bool bVaultable;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

class UBuildSiteDataComponent : public UDataComponent
{
    TArray<int32> MaterialSubmissions;                                                // 0x00A8 (size: 0x10)
    TArray<FContextfulPlacementStatus> BuildGhostPlacementErrors;                     // 0x00D0 (size: 0x10)
    FBuildSitePlacementInfo PlacementInfo;                                            // 0x00F8 (size: 0x18)
    float VisualGuideMinDistance;                                                     // 0x0128 (size: 0x4)

}; // Size: 0x148

class UBuildSiteProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> BuiltStructureEntity;                          // 0x0028 (size: 0x8)
    int32 BuildLocation;                                                              // 0x0030 (size: 0x4)
    FBuildAreaInfo BuildArea;                                                         // 0x0034 (size: 0x9)
    FBuildRuleInfo BuildRules;                                                        // 0x0040 (size: 0x14)
    int32 CompatibleSurfaceTypes;                                                     // 0x0054 (size: 0x4)
    EAnvilToolType RequiredTool;                                                      // 0x0058 (size: 0x1)
    bool bAllowRapidBuild;                                                            // 0x0059 (size: 0x1)
    bool bBuildsInstantly;                                                            // 0x005A (size: 0x1)
    bool bIsGridDiagonalPiece;                                                        // 0x005B (size: 0x1)
    bool bDisableRotationSnap;                                                        // 0x005C (size: 0x1)
    TSubclassOf<class UItemTemplate> RequiredDeployable;                              // 0x0060 (size: 0x8)
    FVector LevelCheckRayOffset;                                                      // 0x0068 (size: 0x18)
    float MaxHeightShift;                                                             // 0x0080 (size: 0x4)
    float AdditionalMaxHeightShift;                                                   // 0x0084 (size: 0x4)
    TSubclassOf<class UEntityTemplate> GridDiagonalPair;                              // 0x0088 (size: 0x8)
    TArray<FBasicCount> MaterialRequirements;                                         // 0x0090 (size: 0x10)
    float VisualGuideMinDistance;                                                     // 0x00A0 (size: 0x4)

}; // Size: 0xA8

class UCannonProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UCapsuleCollisionProxyComponent : public UProxyComponent
{
    FVector Position;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    float Radius;                                                                     // 0x0058 (size: 0x4)
    float HalfHeight;                                                                 // 0x005C (size: 0x4)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0060 (size: 0x1)
    int32 CollisionMask;                                                              // 0x0064 (size: 0x4)
    int32 Tags;                                                                       // 0x0068 (size: 0x4)
    float StepAngle;                                                                  // 0x006C (size: 0x4)
    bool bVaultable;                                                                  // 0x0070 (size: 0x1)

}; // Size: 0x78

class UCentralMarketplaceDataComponent : public UDataComponent
{
    int32 DataVersion;                                                                // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UCentralMarketplaceProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UChatMessage : public UObject
{
}; // Size: 0x58

class UCollisionProxyComponent : public UProxyComponent
{
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0028 (size: 0x1)
    int32 CollisionMask;                                                              // 0x002C (size: 0x4)
    int32 Tags;                                                                       // 0x0030 (size: 0x4)
    float StepAngle;                                                                  // 0x0034 (size: 0x4)
    bool bVaultable;                                                                  // 0x0038 (size: 0x1)

}; // Size: 0x40

class UCollisionVisualizerComponent : public UPrimitiveComponent
{
    class UBodySetup* ShapeBodySetup;                                                 // 0x0538 (size: 0x8)
    FVector Extents;                                                                  // 0x0550 (size: 0x18)
    FLinearColor Color;                                                               // 0x0568 (size: 0x10)
    bool bHighlight;                                                                  // 0x0578 (size: 0x1)
    bool bIsCapsule;                                                                  // 0x0579 (size: 0x1)

}; // Size: 0x580

class UCombustionDataComponent : public UDataComponent
{
    bool bIsFueled;                                                                   // 0x00A8 (size: 0x1)
    int32 StartTimeStamp;                                                             // 0x00C8 (size: 0x4)
    float TotalFuelTime;                                                              // 0x00E8 (size: 0x4)
    FCompHandleData InputInventory;                                                   // 0x0108 (size: 0x18)
    FCompHandleData OutputInventory;                                                  // 0x0138 (size: 0x18)

}; // Size: 0x168

class UCombustionProxyComponent : public UProxyComponent
{
    bool bGenerateAsh;                                                                // 0x0028 (size: 0x1)
    TArray<class TSubclassOf<UItemTemplate>> OverrideAcceptableFuels;                 // 0x0030 (size: 0x10)
    float FuelTimeMultiplier;                                                         // 0x0040 (size: 0x4)

}; // Size: 0x48

class UConvexCollisionProxyComponent : public UProxyComponent
{
    FVector Position;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0058 (size: 0x1)
    int32 CollisionMask;                                                              // 0x005C (size: 0x4)
    int32 Tags;                                                                       // 0x0060 (size: 0x4)
    float StepAngle;                                                                  // 0x0064 (size: 0x4)
    bool bVaultable;                                                                  // 0x0068 (size: 0x1)

}; // Size: 0x70

class UCookingDataComponent : public UDataComponent
{
    EAnvilCookingType CookType;                                                       // 0x00A8 (size: 0x1)
    TArray<FCookingRecipe> RecipeList;                                                // 0x00C8 (size: 0x10)
    FCompHandleData RecipeInputInventory;                                             // 0x00F0 (size: 0x18)
    FCompHandleData RecipeOutputInventory;                                            // 0x0120 (size: 0x18)
    FCompHandleData WaterInputInventory;                                              // 0x0150 (size: 0x18)
    int32 CookCompleteTimestampAgeSec;                                                // 0x0180 (size: 0x4)
    int32 CurrentRecipeIndex;                                                         // 0x01A0 (size: 0x4)
    float NormalizedWaterLevel;                                                       // 0x01C0 (size: 0x4)
    float EffectiveNormalizedTemp;                                                    // 0x01E0 (size: 0x4)
    uint8 bCanCookWithExistingOutputs;                                                // 0x0200 (size: 0x1)
    bool bIsFoodBurning;                                                              // 0x0220 (size: 0x1)
    bool bIsWatered;                                                                  // 0x0240 (size: 0x1)

}; // Size: 0x260

class UCookingProxyComponent : public UProxyComponent
{
    EAnvilCookingType CookType;                                                       // 0x0028 (size: 0x1)
    TArray<FCookingRecipe> RecipeList;                                                // 0x0030 (size: 0x10)
    float FoodBurnDurationSec;                                                        // 0x0040 (size: 0x4)
    float WaterDurationPerUnitItemAtMaxTempSec;                                       // 0x0044 (size: 0x4)
    float BellowsTemperatureModifier;                                                 // 0x0048 (size: 0x4)
    float TemperatureDiffHighQuality;                                                 // 0x004C (size: 0x4)
    float TemperatureDiffMedQuality;                                                  // 0x0050 (size: 0x4)
    float TemperatureDiffLowQuality;                                                  // 0x0054 (size: 0x4)
    uint8 bCanCookWithExistingOutputs;                                                // 0x0058 (size: 0x1)

}; // Size: 0x60

class UCraftingDataComponent : public UDataComponent
{
    TArray<FCraftingRecipe> RecipeList;                                               // 0x00A8 (size: 0x10)

}; // Size: 0xD0

class UCraftingProxyComponent : public UProxyComponent
{
    TArray<FCraftingRecipe> RecipeList;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

class UCustomHeightmapComponent : public USceneComponent
{
}; // Size: 0x2B0

class UCustomNavmeshVolumeComponent : public USceneComponent
{
}; // Size: 0x2A0

class UDataComponent : public UActorComponent
{
}; // Size: 0xA8

class UDecayDataComponent : public UDataComponent
{
    bool bDecaying;                                                                   // 0x00A8 (size: 0x1)
    bool bDecayingDueToNotEnclosed;                                                   // 0x00C8 (size: 0x1)
    float SecondsUntilFullDecay;                                                      // 0x00E8 (size: 0x4)

}; // Size: 0x108

class UDecayProxyComponent : public UProxyComponent
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    float StartDelayHours;                                                            // 0x002C (size: 0x4)
    float DecayTimeHours;                                                             // 0x0030 (size: 0x4)
    bool bForceDecayPreventionFromTown;                                               // 0x0034 (size: 0x1)

}; // Size: 0x38

class UDeployProxyComponent : public UProxyComponent
{
    bool bRequireMounted;                                                             // 0x0028 (size: 0x1)
    bool bCopyHealthPercentage;                                                       // 0x0029 (size: 0x1)
    bool bForceShowBuildMenu;                                                         // 0x002A (size: 0x1)
    TArray<class TSubclassOf<UEntityTemplate>> DeployableBuildSites;                  // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDestroyableProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> DestructionEffectEntity;                       // 0x0028 (size: 0x8)

}; // Size: 0x30

class UDryingRackProxyComponent : public UProxyComponent
{
    TArray<FDryingRackRecipe> Recipes;                                                // 0x0028 (size: 0x10)
    FR2FloatRange DesiredTempRange;                                                   // 0x0038 (size: 0x8)
    float QualityChangeTime;                                                          // 0x0040 (size: 0x4)

}; // Size: 0x48

class UDynamicPrefabDataComponent : public UDataComponent
{
    int32 SpawnedPrefabCodeName;                                                      // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UDynamicPrefabProxyComponent : public UProxyComponent
{
    TArray<FDynamicPrefabSpawnInfo> PrefabSpawnList;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditorSpawnerProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UEntityAttachableDataComponent : public UDataComponent
{
    FEntityHandle AttachedChildEntity;                                                // 0x00A8 (size: 0x10)
    FEntityHandle AttachedParentEntity;                                               // 0x00D0 (size: 0x10)

}; // Size: 0xF8

class UEntityAttachableProxyComponent : public UProxyComponent
{
    uint8 SlotId;                                                                     // 0x0028 (size: 0x1)
    FVector SlotOffset;                                                               // 0x0030 (size: 0x18)
    FVector DetachLocation;                                                           // 0x0048 (size: 0x18)
    float SlotYaw;                                                                    // 0x0060 (size: 0x4)
    float DetachYaw;                                                                  // 0x0064 (size: 0x4)
    float AngleTolerance;                                                             // 0x0068 (size: 0x4)
    float DistanceTolerance;                                                          // 0x006C (size: 0x4)
    float DetachMaxZDelta;                                                            // 0x0070 (size: 0x4)
    bool bMirrorDetachLocation;                                                       // 0x0074 (size: 0x1)
    TArray<class TSubclassOf<UEntityTemplate>> TargetEntityTypes;                     // 0x0078 (size: 0x10)
    TArray<class TSubclassOf<UItemTemplate>> RequiredEquipments;                      // 0x0088 (size: 0x10)

}; // Size: 0x98

class UEntityTemplate : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    bool bStatic;                                                                     // 0x003C (size: 0x1)
    EEntityRelevancyPolicy RelevancyPolicy;                                           // 0x003D (size: 0x1)
    float RelevancyDistSqr;                                                           // 0x0040 (size: 0x4)
    bool bSkipPersist;                                                                // 0x0044 (size: 0x1)
    bool bShowOnMap;                                                                  // 0x0045 (size: 0x1)
    bool bUseScale;                                                                   // 0x0046 (size: 0x1)
    bool bObserver;                                                                   // 0x0047 (size: 0x1)
    TEnumAsByte<EEntitySerializationType> SerializationType;                          // 0x0048 (size: 0x1)
    bool bGenerateBoxCollisionsFromVisActor;                                          // 0x0049 (size: 0x1)
    bool bGenerateMeshCollisionsFromVisActor;                                         // 0x004A (size: 0x1)
    int32 GenerateMeshCollisionMask;                                                  // 0x004C (size: 0x4)
    float GenerateMeshCollisionStepAngle;                                             // 0x0050 (size: 0x4)
    bool bGenerateMeshCollisionVaultable;                                             // 0x0054 (size: 0x1)
    EAnvilPhysicalSurfaceType GenerateMeshCollisionSurfaceType;                       // 0x0055 (size: 0x1)
    TArray<class UProxyComponent*> Components;                                        // 0x0058 (size: 0x10)
    TSubclassOf<class AVisActorBase> VisActorClass;                                   // 0x0068 (size: 0x8)
    TSubclassOf<class AVisActorBase> VisActorTemplateClass;                           // 0x0070 (size: 0x8)
    class AVisActorBase* VisActorDefaultObject;                                       // 0x0078 (size: 0x8)

    class UProxyComponent* GetProxyComponent(UClass* EntityType, UClass* ComponentType);
}; // Size: 0x80

class UEquipmentProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UExplorationSpawnerProxyComponent : public UProxyComponent
{
    TArray<FExplorationSpawnedEntityInfo> SpawnedEntitiesData;                        // 0x0028 (size: 0x10)

}; // Size: 0x38

class UFamilyCenterDataComponent : public UDataComponent
{
    float FamilyAreaExtent;                                                           // 0x00A8 (size: 0x4)
    bool AllowPublicPledging;                                                         // 0x00C8 (size: 0x1)
    bool bHasMembers;                                                                 // 0x00E8 (size: 0x1)

}; // Size: 0x108

class UFamilyCenterProxyComponent : public UProxyComponent
{
    uint8 Tier;                                                                       // 0x0028 (size: 0x1)

}; // Size: 0x30

class UFamilyInventoryProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UFamilyListProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UFamilyLockProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UFamilyUserProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UFarmDataComponent : public UDataComponent
{
    float NormalizedWaterDuration;                                                    // 0x00A8 (size: 0x4)
    float NormalizedFertilizeDuration;                                                // 0x00C8 (size: 0x4)

}; // Size: 0xE8

class UFarmProxyComponent : public UProxyComponent
{
    TArray<class TSubclassOf<UEntityTemplate>> FieldTypes;                            // 0x0028 (size: 0x10)
    float RichSoilMaturityTimeModifier;                                               // 0x0038 (size: 0x4)
    float WaterDurationMaxSeconds;                                                    // 0x003C (size: 0x4)
    float WaterDurationPerUnitItem;                                                   // 0x0040 (size: 0x4)
    float EnvWetnessWaterDurationIncreaseMultiplier;                                  // 0x0044 (size: 0x4)
    float FertilizeDurationPerUnitItem;                                               // 0x0048 (size: 0x4)

}; // Size: 0x50

class UFishResourceProxyComponent : public UProxyComponent
{
    float ProbabilityWeight;                                                          // 0x0028 (size: 0x4)
    float FishingTimeMin;                                                             // 0x002C (size: 0x4)
    float FishingTimeMax;                                                             // 0x0030 (size: 0x4)
    float ReelWindowTime;                                                             // 0x0034 (size: 0x4)
    TSubclassOf<class UItemTemplate> FishType;                                        // 0x0038 (size: 0x8)

}; // Size: 0x40

class UFootprintCollisionProxyComponent : public UProxyComponent
{
    TSubclassOf<class AFootprint> Box;                                                // 0x0028 (size: 0x8)
    bool bAddToNavMesh;                                                               // 0x0030 (size: 0x1)
    bool bUseMeshAsFootprint;                                                         // 0x0031 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0032 (size: 0x1)
    int32 CollisionMask;                                                              // 0x0034 (size: 0x4)
    int32 Tags;                                                                       // 0x0038 (size: 0x4)
    float StepAngle;                                                                  // 0x003C (size: 0x4)
    bool bVaultable;                                                                  // 0x0040 (size: 0x1)

}; // Size: 0x48

class UGateDataComponent : public UDataComponent
{
    EAnvilGateState OpenCloseState;                                                   // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UGateProxyComponent : public UProxyComponent
{
    float AutoCloseRange;                                                             // 0x0028 (size: 0x4)
    float AutoCloseTime;                                                              // 0x002C (size: 0x4)
    class UCurveFloat* BreachProbCurve;                                               // 0x0030 (size: 0x8)

}; // Size: 0x38

class UGrainMillDataComponent : public UDataComponent
{
    int32 CurrentRecipeIndex;                                                         // 0x00A8 (size: 0x4)
    float SmoothedCoarseness;                                                         // 0x00C8 (size: 0x4)
    int32 NextReadyRecipeIndex;                                                       // 0x00E8 (size: 0x4)
    float Power;                                                                      // 0x0108 (size: 0x4)
    FCompHandleData InputInventory;                                                   // 0x0128 (size: 0x18)
    FCompHandleData OutputInventory;                                                  // 0x0158 (size: 0x18)
    FTransform CurrentCoarsenessKnobSeatTransform;                                    // 0x0190 (size: 0x60)
    FCompHandleData CrankPlayer;                                                      // 0x0208 (size: 0x18)

}; // Size: 0x240

class UGrainMillProxyComponent : public UProxyComponent
{
    TArray<FGrainMillRecipe> RecipeList;                                              // 0x0028 (size: 0x10)
    float CoarsenessKnobRotationRange;                                                // 0x0038 (size: 0x4)
    float CoarsenessKnobSmoothSpeed;                                                  // 0x003C (size: 0x4)
    float CoarsenessKnobPushSpeed;                                                    // 0x0040 (size: 0x4)
    float CoarsenessDriftSpeed;                                                       // 0x0044 (size: 0x4)
    FR2FloatRange CoarsenessEfficiencyImpact;                                         // 0x0048 (size: 0x8)
    FR2FloatRange CoarsenessQualityMapRange;                                          // 0x0050 (size: 0x8)
    float MinActivationPower;                                                         // 0x0058 (size: 0x4)

}; // Size: 0x60

class UGroundCheckBoxProxyComponent : public UProxyComponent
{
    bool ExtendFootprint;                                                             // 0x0028 (size: 0x1)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    FVector Extents;                                                                  // 0x0060 (size: 0x18)
    TArray<FVector> GroundCheckPoints;                                                // 0x0078 (size: 0x10)

}; // Size: 0x88

class UHandsProxyComponent : public UProxyComponent
{
    TArray<FItemSlot> HandSlots;                                                      // 0x0028 (size: 0x10)

}; // Size: 0x38

class UHealthDataComponent : public UDataComponent
{
    float MaxHealth;                                                                  // 0x00A8 (size: 0x4)
    float Health;                                                                     // 0x00C8 (size: 0x4)
    float HealthLimit;                                                                // 0x00E8 (size: 0x4)
    float VisualBloodAmount;                                                          // 0x0108 (size: 0x4)

}; // Size: 0x128

class UHealthProxyComponent : public UProxyComponent
{
    float MaxHealth;                                                                  // 0x0028 (size: 0x4)
    float Lifetime;                                                                   // 0x002C (size: 0x4)
    float AutoRegenRate;                                                              // 0x0030 (size: 0x4)
    float AutoRegenStartDelay;                                                        // 0x0034 (size: 0x4)
    TSubclassOf<class UEntityTemplate> HitEffect;                                     // 0x0038 (size: 0x8)
    EAnvilDamageTargetType TargetType;                                                // 0x0040 (size: 0x1)
    float VisualBloodAmountRecoveryRate;                                              // 0x0044 (size: 0x4)
    float AttackerVisualBloodAmountRatio;                                             // 0x0048 (size: 0x4)
    float AttackerVisualBloodAmountMax;                                               // 0x004C (size: 0x4)

}; // Size: 0x50

class UHeatingDataComponent : public UDataComponent
{
    bool bIsBellowBoosted;                                                            // 0x00A8 (size: 0x1)
    FCompHandleData ItemInventory;                                                    // 0x00C8 (size: 0x18)

}; // Size: 0xF8

class UHeatingProxyComponent : public UProxyComponent
{
    int32 NumItems;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

class UHitConverterDataComponent : public UDataComponent
{
    uint8 CurrentSelectedOutputIndex;                                                 // 0x00A8 (size: 0x1)
    TArray<FHitConverterOutput> OutputList;                                           // 0x00C8 (size: 0x10)
    float HitCounter;                                                                 // 0x00F0 (size: 0x4)

}; // Size: 0x110

class UHitConverterProxyComponent : public UProxyComponent
{
    TArray<FHitConverterOutput> OutputList;                                           // 0x0028 (size: 0x10)
    EAnvilToolType RequiredTool;                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

class UHousingDataComponent : public UDataComponent
{
    uint8 PlayerCapacity;                                                             // 0x00A8 (size: 0x1)
    bool AllowPublicPledging;                                                         // 0x00C8 (size: 0x1)
    bool IsGroupHouse;                                                                // 0x00E8 (size: 0x1)
    bool bIsTownTent;                                                                 // 0x0108 (size: 0x1)
    FHousePledgedPlayerArray PledgedPlayerIds;                                        // 0x0128 (size: 0x10)

}; // Size: 0x150

class UHousingProxyComponent : public UProxyComponent
{
    uint8 PlayerCapacity;                                                             // 0x0028 (size: 0x1)
    bool IsGroupHouse;                                                                // 0x0029 (size: 0x1)
    bool bIsTownTent;                                                                 // 0x002A (size: 0x1)

}; // Size: 0x30

class UHungerDataComponent : public UDataComponent
{
    float Hunger;                                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UHungerProxyComponent : public UProxyComponent
{
    float HungerPerTick;                                                              // 0x0028 (size: 0x4)
    bool bSlowHungerWhenLow;                                                          // 0x002C (size: 0x1)

}; // Size: 0x30

class UImpactSurfaceDataComponent : public UDataComponent
{
    EAnvilPhysicalSurfaceType HitSurface;                                             // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UImpactSurfaceProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UInventoryProxyComponent : public UProxyComponent
{
    TArray<FItemSlot> Slots;                                                          // 0x0028 (size: 0x10)
    bool bUnpackCrates;                                                               // 0x0038 (size: 0x1)
    bool bEnforceWithdrawalStamina;                                                   // 0x0039 (size: 0x1)
    bool bOnlyAllowMaxDurabilityItems;                                                // 0x003A (size: 0x1)
    uint8 bIsCheatBox;                                                                // 0x003B (size: 0x1)
    EAnvilInventoryStackRule StackRule;                                               // 0x003C (size: 0x1)
    float NormalizedSpoilageFactor;                                                   // 0x0040 (size: 0x4)
    float LifespanWhenEmpty;                                                          // 0x0044 (size: 0x4)
    bool bAllowWithdrawal;                                                            // 0x0048 (size: 0x1)
    bool bAllowSubmission;                                                            // 0x0049 (size: 0x1)

}; // Size: 0x50

class UItemTemplate : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    TArray<EAnvilItemTag> ItemTags;                                                   // 0x0040 (size: 0x10)
    EAnvilItemDurabilityType ItemDurabilityType;                                      // 0x0050 (size: 0x1)
    EAnvilItemPayloadType ItemPayloadType;                                            // 0x0051 (size: 0x1)
    TSubclassOf<class UEntityTemplate> PickupEntity;                                  // 0x0058 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ItemDestroyedEffect;                           // 0x0060 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ItemInvokedEffect;                             // 0x0068 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ItemHitEffect;                                 // 0x0070 (size: 0x8)
    float ArmedDurabilityLossPerSec;                                                  // 0x0078 (size: 0x4)
    bool bRearmAfterConsumption;                                                      // 0x007C (size: 0x1)
    bool bRearmSkipsEquipActivity;                                                    // 0x007D (size: 0x1)
    TSubclassOf<class UItemTemplate> HeatedItem;                                      // 0x0080 (size: 0x8)
    TSubclassOf<class UItemTemplate> CooledItem;                                      // 0x0088 (size: 0x8)
    bool bRanged;                                                                     // 0x0090 (size: 0x1)
    bool bHasAlt;                                                                     // 0x0091 (size: 0x1)
    bool bAltIsRanged;                                                                // 0x0092 (size: 0x1)
    FVector DamageOffset;                                                             // 0x0098 (size: 0x18)
    TArray<FVector> AdditionalDamageOffsets;                                          // 0x00B0 (size: 0x10)
    uint32 DamageOffsetCount;                                                         // 0x00C0 (size: 0x4)
    FVector FireOffset;                                                               // 0x00C8 (size: 0x18)
    TSubclassOf<class UItemTemplate> AmmoType;                                        // 0x00E0 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ProjectileEntity;                              // 0x00E8 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ProjectileIndirectEntity;                      // 0x00F0 (size: 0x8)
    bool bStaggersWielder;                                                            // 0x00F8 (size: 0x1)
    EAnvilArmourType ArmourType;                                                      // 0x00F9 (size: 0x1)
    EAnvilDamageType DamageType;                                                      // 0x00FA (size: 0x1)
    uint8 MitigationSuccessDurabilityLoss;                                            // 0x00FB (size: 0x1)
    uint8 MitigationFailureDurabilityLoss;                                            // 0x00FC (size: 0x1)
    TSubclassOf<class UEntityTemplate> ArmourMitigatedEffect;                         // 0x0100 (size: 0x8)
    EAnvilToolType ToolType;                                                          // 0x0108 (size: 0x1)
    float RegenDuration;                                                              // 0x010C (size: 0x4)
    EAnvilFoodType FoodType;                                                          // 0x0110 (size: 0x1)
    bool bDoesSpoil;                                                                  // 0x0111 (size: 0x1)
    float SpoilageDurabilityLossPerSec;                                               // 0x0114 (size: 0x4)
    bool bDoesNotArmWithHeavyItem;                                                    // 0x0118 (size: 0x1)
    bool bDoesNotArmWithHeavyArmour;                                                  // 0x0119 (size: 0x1)
    bool bIsHeavyArmour;                                                              // 0x011A (size: 0x1)
    float AltTransitionTime;                                                          // 0x011C (size: 0x4)
    EAnvilCharacterStance RequiredStance;                                             // 0x0120 (size: 0x1)
    TMap<class EAnvilCharacterStance, class TSubclassOf<UItemTemplate>> StanceOverride; // 0x0128 (size: 0x50)
    FAnvilSimActivity DefaultActivity;                                                // 0x0178 (size: 0x48)
    FAnvilSimActivity AltActivity;                                                    // 0x01C0 (size: 0x48)
    FAnvilSimActivity RangedActivity;                                                 // 0x0208 (size: 0x48)
    FAnvilSimActivity BuildActivity;                                                  // 0x0250 (size: 0x48)
    FAnvilSimActivity GatherActivity;                                                 // 0x0298 (size: 0x48)
    bool bIsDeployable;                                                               // 0x02E0 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DeployedBuildSite;                             // 0x02E8 (size: 0x8)
    float NightShroudLightRadius;                                                     // 0x02F0 (size: 0x4)
    bool bAllowCameraPan;                                                             // 0x02F4 (size: 0x1)
    float StunChance;                                                                 // 0x02F8 (size: 0x4)
    float StunDuration;                                                               // 0x02FC (size: 0x4)
    float StunThrowDistance;                                                          // 0x0300 (size: 0x4)
    uint8 Damage;                                                                     // 0x0304 (size: 0x1)
    float DurabilityLossPerSec;                                                       // 0x0308 (size: 0x4)
    float StockPileWithdrawalValue;                                                   // 0x030C (size: 0x4)
    uint16 QuantityPerCrate;                                                          // 0x0310 (size: 0x2)
    float RegenPerSec;                                                                // 0x0314 (size: 0x4)
    float HungerRestored;                                                             // 0x0318 (size: 0x4)
    float HealthLimitRestored;                                                        // 0x031C (size: 0x4)
    float StaminaLimitRestored;                                                       // 0x0320 (size: 0x4)
    float DurabilityLossPerUse;                                                       // 0x0324 (size: 0x4)
    float DamageRadius;                                                               // 0x0328 (size: 0x4)
    float VariableDamageMaxModifier;                                                  // 0x032C (size: 0x4)
    float VariableDamageMinModifier;                                                  // 0x0330 (size: 0x4)
    float GuardMeterReductionMultiplier;                                              // 0x0334 (size: 0x4)
    float ShieldDurabilityLossMultiplier;                                             // 0x0338 (size: 0x4)
    float ArmourDamageMultiplier;                                                     // 0x033C (size: 0x4)
    float SecondaryArmourDamageMultiplier;                                            // 0x0340 (size: 0x4)
    float GuardMeterCostPerHit;                                                       // 0x0344 (size: 0x4)
    uint8 ArmorMitigation;                                                            // 0x0348 (size: 0x1)
    float StabilityDamage;                                                            // 0x034C (size: 0x4)
    float SecondaryStabilityDamage;                                                   // 0x0350 (size: 0x4)
    uint8 StabilityMitigationPercent;                                                 // 0x0354 (size: 0x1)
    float ToolEffectiveness;                                                          // 0x0358 (size: 0x4)
    float AimMovementSpeedModifier;                                                   // 0x035C (size: 0x4)
    float AimRotationSpeedModifier;                                                   // 0x0360 (size: 0x4)
    float PrimaryMovementSpeedModifier;                                               // 0x0364 (size: 0x4)
    float SecondaryMovementSpeedModifier;                                             // 0x0368 (size: 0x4)
    float PrimaryChanceToPenetrateGuard;                                              // 0x036C (size: 0x4)
    float SecondaryChanceToPenetrateGuard;                                            // 0x0370 (size: 0x4)

}; // Size: 0x378

class ULadderProxyComponent : public UProxyComponent
{
    float PlayerOffset;                                                               // 0x0028 (size: 0x4)
    float ExitXOffset;                                                                // 0x002C (size: 0x4)
    float ExitZOffset;                                                                // 0x0030 (size: 0x4)
    float ExitZTolerance;                                                             // 0x0034 (size: 0x4)
    float PitchMin;                                                                   // 0x0038 (size: 0x4)
    float PitchMax;                                                                   // 0x003C (size: 0x4)
    float MaxVelocity;                                                                // 0x0040 (size: 0x4)
    float Acceleration;                                                               // 0x0044 (size: 0x4)
    float PlayerFallDamage;                                                           // 0x0048 (size: 0x4)
    float LadderFallDamage;                                                           // 0x004C (size: 0x4)

}; // Size: 0x50

class ULatticeMineDataComponent : public UDataComponent
{
    int32 MeshVisibilityLevel;                                                        // 0x00A8 (size: 0x4)
    TArray<FMineChunk> MineChunks;                                                    // 0x00C8 (size: 0x10)

}; // Size: 0xF0

class ULatticeMineProxyComponent : public UProxyComponent
{
    FVector ChunkExtents;                                                             // 0x0028 (size: 0x18)
    FVector ChunkSpacing;                                                             // 0x0040 (size: 0x18)
    FVector GridDimensions;                                                           // 0x0058 (size: 0x18)
    TMap<TSubclassOf<UEntityTemplate>, float> ChunkTypes;                             // 0x0070 (size: 0x50)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x00C0 (size: 0x1)
    int32 CollisionMask;                                                              // 0x00C4 (size: 0x4)
    int32 Tags;                                                                       // 0x00C8 (size: 0x4)
    float StepAngle;                                                                  // 0x00CC (size: 0x4)
    bool bVaultable;                                                                  // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class ULifetimeDataComponent : public UDataComponent
{
    float Age;                                                                        // 0x00A8 (size: 0x4)
    float LifeSpan;                                                                   // 0x00C8 (size: 0x4)

}; // Size: 0xE8

class ULifetimeProxyComponent : public UProxyComponent
{
    bool DropResourceOnDeath;                                                         // 0x0028 (size: 0x1)
    bool ResetIfObserved;                                                             // 0x0029 (size: 0x1)
    float LifeSpan;                                                                   // 0x002C (size: 0x4)

}; // Size: 0x30

class ULivestockStructureProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> LivestockType;                                 // 0x0028 (size: 0x8)
    int32 MaxAnimalCount;                                                             // 0x0030 (size: 0x4)

}; // Size: 0x38

class UMapIntelProxyComponent : public UProxyComponent
{
    int32 DayLengthSeconds;                                                           // 0x0028 (size: 0x4)
    int32 NightStartSeconds;                                                          // 0x002C (size: 0x4)
    int32 NightEndSeconds;                                                            // 0x0030 (size: 0x4)

}; // Size: 0x38

class UMapPostDataComponent : public UDataComponent
{
    EAnvilMapPostType PostType;                                                       // 0x00A8 (size: 0x1)
    int64 BuilderId;                                                                  // 0x00C8 (size: 0x8)

}; // Size: 0xE8

class UMapPostProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UMeshCollisionProxyComponent : public UProxyComponent
{
    class UStaticMesh* PhysicsAssetName;                                              // 0x0028 (size: 0x8)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    uint8 ProjectToLandscape;                                                         // 0x0060 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0061 (size: 0x1)
    int32 CollisionMask;                                                              // 0x0064 (size: 0x4)
    int32 Tags;                                                                       // 0x0068 (size: 0x4)
    float StepAngle;                                                                  // 0x006C (size: 0x4)
    bool bVaultable;                                                                  // 0x0070 (size: 0x1)

}; // Size: 0x78

class UMeshVisibilityDataComponent : public UDataComponent
{
    bool bIsVisible;                                                                  // 0x00A8 (size: 0x1)
    bool bGroup2IsVisible;                                                            // 0x00C8 (size: 0x1)

}; // Size: 0xE8

class UMeshVisibilityProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UMineProxyComponent : public UProxyComponent
{
    int32 InitialReserveCapacity;                                                     // 0x0028 (size: 0x4)
    int32 MiningRatePerUpdate;                                                        // 0x002C (size: 0x4)
    float MiningUpdateTime;                                                           // 0x0030 (size: 0x4)

}; // Size: 0x38

class UMountedWeaponDataComponent : public UDataComponent
{
    bool bPriming;                                                                    // 0x00A8 (size: 0x1)
    bool bPrimed;                                                                     // 0x00C8 (size: 0x1)
    bool bLoaded;                                                                     // 0x00E8 (size: 0x1)
    bool bFiring;                                                                     // 0x0108 (size: 0x1)
    float AimYaw;                                                                     // 0x0128 (size: 0x4)
    float AimPitch;                                                                   // 0x0148 (size: 0x4)

}; // Size: 0x168

class UMountedWeaponProxyComponent : public UProxyComponent
{
    FVector AimPivot;                                                                 // 0x0028 (size: 0x18)
    bool bHighArc;                                                                    // 0x0040 (size: 0x1)
    bool bFixedAim;                                                                   // 0x0041 (size: 0x1)
    bool bRequirePrimedLoad;                                                          // 0x0042 (size: 0x1)
    bool bShowAimMesh;                                                                // 0x0043 (size: 0x1)
    float PrimingTime;                                                                // 0x0044 (size: 0x4)
    TSubclassOf<class UItemTemplate> Weapon;                                          // 0x0048 (size: 0x8)

}; // Size: 0x50

class UMovementTestProxyComponent : public UProxyComponent
{
    FVector Velocity;                                                                 // 0x0028 (size: 0x18)

}; // Size: 0x40

class UOfflineCharacterDataComponent : public UDataComponent
{
    FString OwnerPlayerName;                                                          // 0x00A8 (size: 0x10)

}; // Size: 0xD0

class UOfflineCharacterProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UPackingProxyComponent : public UProxyComponent
{
    TSubclassOf<class UItemTemplate> PackingResource;                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

class UPassiveDamageProxyComponent : public UProxyComponent
{
    FVector Position;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    FVector Extents;                                                                  // 0x0058 (size: 0x18)
    float Damage;                                                                     // 0x0070 (size: 0x4)
    float Frequency;                                                                  // 0x0074 (size: 0x4)
    EAnvilDamageType DamageType;                                                      // 0x0078 (size: 0x1)

}; // Size: 0x80

class UPhysMovementProxyComponent : public UProxyComponent
{
    float Cad;                                                                        // 0x0028 (size: 0x4)
    float Mass;                                                                       // 0x002C (size: 0x4)
    FVector CoGOffset;                                                                // 0x0030 (size: 0x18)
    FVector CuboidTensorExtents;                                                      // 0x0048 (size: 0x18)
    float EngineForce;                                                                // 0x0060 (size: 0x4)
    FVector EngineForcePosition;                                                      // 0x0068 (size: 0x18)

}; // Size: 0x80

class UPickupDataComponent : public UDataComponent
{
    FItemCount Item;                                                                  // 0x00A8 (size: 0x28)

}; // Size: 0xE8

class UPickupProxyComponent : public UProxyComponent
{
    FItemCount Item;                                                                  // 0x0028 (size: 0x28)

}; // Size: 0x50

class UPlantGrowthDataComponent : public UDataComponent
{
    uint8 GrowthStage;                                                                // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UPlantGrowthProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> MaturePlant;                                   // 0x0028 (size: 0x8)
    TSubclassOf<class UItemTemplate> RequiredSeedType;                                // 0x0030 (size: 0x8)
    float StageTime;                                                                  // 0x0038 (size: 0x4)
    float RequiredTemperature;                                                        // 0x003C (size: 0x4)
    uint8 GrowthStage;                                                                // 0x0040 (size: 0x1)
    bool bCanGrow;                                                                    // 0x0041 (size: 0x1)

}; // Size: 0x48

class UPlayerControllerDataComponent : public UDataComponent
{
    FFamilyHouseInfoType FamilyHouseInfo;                                             // 0x00A8 (size: 0xC)
    FPledgeInfoType PledgedTownHallInfo;                                              // 0x00D0 (size: 0xC)
    FPledgeInfoType PledgedMilitiaInfo;                                               // 0x00F8 (size: 0xC)
    uint8 bShowRespawnScreen;                                                         // 0x0120 (size: 0x1)
    uint8 RedeployTarget;                                                             // 0x0140 (size: 0x1)
    uint8 LastDeathMapId;                                                             // 0x0160 (size: 0x1)
    FVector LastDeathLocation;                                                        // 0x0180 (size: 0x18)

}; // Size: 0x1B0

class UPlayerControllerProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UPlayerInputDataComponent : public UDataComponent
{
    FVector ClientAimLocation;                                                        // 0x00A8 (size: 0x18)
    FVector ClientAimArcEndGroundLocation;                                            // 0x00D8 (size: 0x18)
    FVector ClickHeading;                                                             // 0x0108 (size: 0x18)
    EAnvilPlayerInputMode InputMode;                                                  // 0x0138 (size: 0x1)
    EAnvilPlayerAimMeshType AimMeshType;                                              // 0x0158 (size: 0x1)
    FVector ClientAimMeshLocation;                                                    // 0x0178 (size: 0x18)
    float AimArcRotation;                                                             // 0x01A8 (size: 0x4)
    float AimArcA;                                                                    // 0x01C8 (size: 0x4)
    float AimArcX0;                                                                   // 0x01E8 (size: 0x4)
    float AimArcGroundHitDistance;                                                    // 0x0208 (size: 0x4)
    float AimArcCollisionDistance;                                                    // 0x0228 (size: 0x4)
    int64 CurrentUsableEntityId;                                                      // 0x0248 (size: 0x8)
    int64 CurrentMountableEntityId;                                                   // 0x0268 (size: 0x8)
    int32 CurrentCollectableResourceType;                                             // 0x0288 (size: 0x4)
    FStatusMessage PrimaryUsePromptMessage;                                           // 0x02A8 (size: 0x20)
    int32 UsePrompt;                                                                  // 0x02E0 (size: 0x4)
    EAnvilVehicleInputState VehicleInput;                                             // 0x0300 (size: 0x1)
    FVector CameraCurrentPosition;                                                    // 0x0320 (size: 0x18)

}; // Size: 0x350

class UPlayerInputProxyComponent : public UProxyComponent
{
    float CameraPanDeadzoneRadius;                                                    // 0x0028 (size: 0x4)
    float CameraPanMaxDistance;                                                       // 0x002C (size: 0x4)
    float CameraPanLerpAlphaPerSecond;                                                // 0x0030 (size: 0x4)
    float CameraMousePositionNormalizedEdgePanThreshold;                              // 0x0034 (size: 0x4)

}; // Size: 0x38

class UPlayerSpawnerDataComponent : public UDataComponent
{
    EAnvilSpawnType Type;                                                             // 0x00A8 (size: 0x1)
    EAnvilFactionId Faction;                                                          // 0x00C8 (size: 0x1)

}; // Size: 0xE8

class UPlayerSpawnerProxyComponent : public UProxyComponent
{
    EAnvilSpawnType Type;                                                             // 0x0028 (size: 0x1)
    FVector SpawnOffset;                                                              // 0x0030 (size: 0x18)
    FVector SpawnExtents;                                                             // 0x0048 (size: 0x18)
    FRotator SpawnBoxRotation;                                                        // 0x0060 (size: 0x18)
    float SpawnRadius;                                                                // 0x0078 (size: 0x4)
    EAnvilFactionId Faction;                                                          // 0x007C (size: 0x1)

}; // Size: 0x80

class UPlayerStatusDataComponent : public UDataComponent
{
    uint8 RestedLevel;                                                                // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UPlayerStatusProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UPlayerUnstuckProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UPowerMillDataComponent : public UDataComponent
{
    bool bAnimalActive;                                                               // 0x00A8 (size: 0x1)
    float Rotation;                                                                   // 0x00C8 (size: 0x4)

}; // Size: 0xE8

class UPowerMillProxyComponent : public UProxyComponent
{
    float MaxRotationSpeed;                                                           // 0x0028 (size: 0x4)
    float RotationAcceleration;                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

class UPowerToActionConverterProxyComponent : public UProxyComponent
{
    EAnvilConvertedActionType ConversionType;                                         // 0x0028 (size: 0x1)
    float PowerDrainPerAction;                                                        // 0x002C (size: 0x4)

}; // Size: 0x30

class UPowerUnitDataComponent : public UDataComponent
{
    float PercentageCurrent;                                                          // 0x00A8 (size: 0x4)
    float CurrentMax;                                                                 // 0x00C8 (size: 0x4)
    int32 VisVarUpdateHook;                                                           // 0x00E8 (size: 0x4)
    float InFlowDirection;                                                            // 0x0108 (size: 0x4)
    float InFlowHeight;                                                               // 0x0128 (size: 0x4)

}; // Size: 0x148

class UPowerUnitProxyComponent : public UProxyComponent
{
    EAnvilPowerUnitType Type;                                                         // 0x0028 (size: 0x1)
    int32 AllowedDirection;                                                           // 0x002C (size: 0x4)
    float CurrentMax;                                                                 // 0x0030 (size: 0x4)
    float Level;                                                                      // 0x0034 (size: 0x4)
    float FlatResistance;                                                             // 0x0038 (size: 0x4)
    float ResistanceSlopeModifier;                                                    // 0x003C (size: 0x4)
    float InnerWidth;                                                                 // 0x0040 (size: 0x4)
    float OuterWidth;                                                                 // 0x0044 (size: 0x4)

}; // Size: 0x48

class UProjectileMovementProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> PickupEntity;                                  // 0x0028 (size: 0x8)
    float PickupSpawnRate;                                                            // 0x0030 (size: 0x4)
    TSubclassOf<class UEntityTemplate> HitEffect;                                     // 0x0038 (size: 0x8)
    TSubclassOf<class UEntityTemplate> GroundPatch;                                   // 0x0040 (size: 0x8)
    float Speed;                                                                      // 0x0048 (size: 0x4)
    float MaxRange;                                                                   // 0x004C (size: 0x4)
    float BleedDamagePerSec;                                                          // 0x0050 (size: 0x4)
    float BleedTime;                                                                  // 0x0054 (size: 0x4)
    int32 DamageAmount;                                                               // 0x0058 (size: 0x4)
    EAnvilDamageType DamageType;                                                      // 0x005C (size: 0x1)
    float SplashDamageRadius;                                                         // 0x0060 (size: 0x4)
    float Radius;                                                                     // 0x0064 (size: 0x4)
    float HeadingTolerance;                                                           // 0x0068 (size: 0x4)
    float NozzleYawDelta;                                                             // 0x006C (size: 0x4)
    float NozzlePitchMin;                                                             // 0x0070 (size: 0x4)
    float NozzlePitchMax;                                                             // 0x0074 (size: 0x4)
    float RotationSpeed;                                                              // 0x0078 (size: 0x4)
    float ScorchAmount;                                                               // 0x007C (size: 0x4)
    float DislodgeRate;                                                               // 0x0080 (size: 0x4)
    float Lifetime;                                                                   // 0x0084 (size: 0x4)
    float RandomRadius;                                                               // 0x0088 (size: 0x4)

}; // Size: 0x90

class UProxyComponent : public UObject
{
}; // Size: 0x28

class UProxyEntityProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UProxyEntitySpawnerProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> SpawnedEntity;                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

class UQuenchingProxyComponent : public UProxyComponent
{
    TSubclassOf<class UItemTemplate> QuenchingResource;                               // 0x0028 (size: 0x8)

}; // Size: 0x30

class UR2ConfigProxyComponent : public UProxyComponent
{
    FR2ConfigBuildSite BuildSite;                                                     // 0x0028 (size: 0x18)
    FR2ConfigArea Area;                                                               // 0x0040 (size: 0xC)
    FR2ConfigCombustion Combustion;                                                   // 0x0050 (size: 0x10)
    FR2ConfigSignPost SignPost;                                                       // 0x0060 (size: 0x10)
    FR2ConfigTradeResources TradeResourcesConfig;                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

class URareResourceAreaMarkerProxyComponent : public UProxyComponent
{
    EAnvilRareResourceAreaType RareResourceAreaType;                                  // 0x0028 (size: 0x1)
    float AreaRadius;                                                                 // 0x002C (size: 0x4)

}; // Size: 0x30

class URefineResourceDataComponent : public UDataComponent
{
    bool bInventoryFull;                                                              // 0x00A8 (size: 0x1)
    TArray<FReplicatedRefineQueueItem> ReplicatedRefineQueue;                         // 0x00C8 (size: 0x10)
    uint8 NumItemsInQueue;                                                            // 0x00F0 (size: 0x1)
    float ItemProductionTimeLeft;                                                     // 0x0110 (size: 0x4)
    float EstItemProductionTimeLeft;                                                  // 0x0130 (size: 0x4)
    float TotalProductionTimeLeft;                                                    // 0x0150 (size: 0x4)

}; // Size: 0x170

class URefineResourceProxyComponent : public UProxyComponent
{
    TArray<FProducableItem> ProducableItemList;                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class URelicTechCenterDataComponent : public UDataComponent
{
    TArray<FBasicItemCount> RelicTechCosts;                                           // 0x00A8 (size: 0x10)
    TArray<int32> TechItemsDeposited;                                                 // 0x00D0 (size: 0x10)

}; // Size: 0xF8

class URelicTechCenterProxyComponent : public UProxyComponent
{
    TArray<FBasicItemCount> RelicTechCosts;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

class URepTestProxyComponent : public UProxyComponent
{
    int32 BytesToRep;                                                                 // 0x0028 (size: 0x4)

}; // Size: 0x30

class URepairProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class URepairStationProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UResourceDataComponent : public UDataComponent
{
    int32 GatherHitCount;                                                             // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UResourceProxyComponent : public UProxyComponent
{
    EAnvilResourceType Type;                                                          // 0x0028 (size: 0x1)
    uint8 HitPoints;                                                                  // 0x0029 (size: 0x1)
    bool bShouldDestroyOnCollect;                                                     // 0x002A (size: 0x1)
    EAnvilToolType RequiredTool;                                                      // 0x002B (size: 0x1)
    float RequiredTemperature;                                                        // 0x002C (size: 0x4)
    bool bInventoryTransferToPlayer;                                                  // 0x0030 (size: 0x1)
    uint8 DroppedResourceAmount;                                                      // 0x0031 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DroppedResourceEntity;                         // 0x0038 (size: 0x8)
    bool bScatterSecondaryResource;                                                   // 0x0040 (size: 0x1)
    uint8 DroppedSecondaryResourceAmount;                                             // 0x0041 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DroppedSecondaryResourceEntity;                // 0x0048 (size: 0x8)
    TSubclassOf<class UEntityTemplate> HuskEntity;                                    // 0x0050 (size: 0x8)
    bool bSnapHuskEntityToGround;                                                     // 0x0058 (size: 0x1)
    float SilverDropMultiplier;                                                       // 0x005C (size: 0x4)
    TSubclassOf<class UEntityTemplate> DestructionEffect;                             // 0x0060 (size: 0x8)
    TArray<FLootTableItem> LootTable;                                                 // 0x0068 (size: 0x10)

}; // Size: 0x78

class UResourceSpawnerProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> SpawnedResource;                               // 0x0028 (size: 0x8)
    FVector SpawnOffset;                                                              // 0x0030 (size: 0x18)
    float SpawnRadius;                                                                // 0x0048 (size: 0x4)
    float MinimumSpawnRadius;                                                         // 0x004C (size: 0x4)
    float SpawnInterval;                                                              // 0x0050 (size: 0x4)
    int32 SpawnQuantity;                                                              // 0x0054 (size: 0x4)
    float SpawnWaveCountMultiplier;                                                   // 0x0058 (size: 0x4)
    int32 MaxSpawn;                                                                   // 0x005C (size: 0x4)
    int32 GlobalMaxSpawn;                                                             // 0x0060 (size: 0x4)
    int32 ResourceReserveInitial;                                                     // 0x0064 (size: 0x4)
    int32 ReserveReplenishTimeSecs;                                                   // 0x0068 (size: 0x4)
    float SpawnDelayAfterResourceDepleted;                                            // 0x006C (size: 0x4)
    float MinDistanceBetweenSpawns;                                                   // 0x0070 (size: 0x4)
    bool bWaterOnly;                                                                  // 0x0074 (size: 0x1)
    bool bRequiresNavmesh;                                                            // 0x0075 (size: 0x1)
    bool bRequiresPathBackOnNavmesh;                                                  // 0x0076 (size: 0x1)
    bool bTrackSpawnedEntity;                                                         // 0x0077 (size: 0x1)
    bool bDontSpawnInSettlements;                                                     // 0x0078 (size: 0x1)
    bool bIsRare;                                                                     // 0x0079 (size: 0x1)
    bool bDontSpawnNearPlayers;                                                       // 0x007A (size: 0x1)
    bool bAvoidSlopes;                                                                // 0x007B (size: 0x1)
    bool bWalkBackToSpawner;                                                          // 0x007C (size: 0x1)
    int32 CompatibleSurfaceTypes;                                                     // 0x0080 (size: 0x4)
    TArray<class TSubclassOf<UEntityTemplate>> OtherResourcesToAvoid;                 // 0x0088 (size: 0x10)
    TArray<class TSubclassOf<UEntityTemplate>> OtherResourcesToCountForSpawnLimit;    // 0x0098 (size: 0x10)

}; // Size: 0xA8

class URichSoilDataComponent : public UDataComponent
{
    float Radius;                                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class URichSoilProxyComponent : public UProxyComponent
{
    float Radius;                                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

class URoadProxyComponent : public UProxyComponent
{
    float SpeedFactor;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

class UScorchDataComponent : public UDataComponent
{
    uint8 ScorchVisualBits;                                                           // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UScorchProxyComponent : public UProxyComponent
{
    float BurnRate;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

class USeekerProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UShipMovementDataComponent : public UDataComponent
{
    float RudderAngle;                                                                // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UShipMovementProxyComponent : public UProxyComponent
{
    class UStaticMesh* BuoyancyMeshCollisionAssetName;                                // 0x0028 (size: 0x8)
    float MaxRudderAngle;                                                             // 0x0030 (size: 0x4)
    float RudderTurnRate;                                                             // 0x0034 (size: 0x4)
    float DragReferenceSpeed;                                                         // 0x0038 (size: 0x4)
    float Fp;                                                                         // 0x003C (size: 0x4)
    float Fs;                                                                         // 0x0040 (size: 0x4)
    float Cpd1;                                                                       // 0x0044 (size: 0x4)
    float Cpd2;                                                                       // 0x0048 (size: 0x4)
    float Csd1;                                                                       // 0x004C (size: 0x4)
    float Csd2;                                                                       // 0x0050 (size: 0x4)
    float SlammingPower;                                                              // 0x0054 (size: 0x4)
    float GammaMax;                                                                   // 0x0058 (size: 0x4)
    FControlSurface Rudder;                                                           // 0x0060 (size: 0x28)
    float ThrustVectoringPercent;                                                     // 0x0088 (size: 0x4)

}; // Size: 0x90

class USignPostDataComponent : public UDataComponent
{
    FString Message;                                                                  // 0x00A8 (size: 0x10)
    EAnvilSignPostVisualType VisualType;                                              // 0x00D0 (size: 0x1)
    EAnvilVoteType ClientVote;                                                        // 0x00F0 (size: 0x1)

}; // Size: 0x110

class USignPostProxyComponent : public UProxyComponent
{
    EAnvilSignPostVisualType VisualType;                                              // 0x0028 (size: 0x1)

}; // Size: 0x30

class USimPlayerDataComponent : public UDataComponent
{
    FVector Velocity;                                                                 // 0x00A8 (size: 0x18)
    FTransform BaseRelativeTransform;                                                 // 0x00E0 (size: 0x60)
    uint8 GuardStrength;                                                              // 0x0158 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0178 (size: 0x1)
    EAnvilMovementMode CurrentMovementMode;                                           // 0x0198 (size: 0x1)
    float GuardMeter;                                                                 // 0x01B8 (size: 0x4)
    float Stability;                                                                  // 0x01D8 (size: 0x4)
    float StabilityTarget;                                                            // 0x01F8 (size: 0x4)
    float StabilityGuardThreshold;                                                    // 0x0218 (size: 0x4)
    uint8 bIsStabilityCooldownActive;                                                 // 0x0238 (size: 0x1)
    float CurrentActivitySpeedModifier;                                               // 0x0258 (size: 0x4)
    uint8 CurrentActivityChainIndex;                                                  // 0x0278 (size: 0x1)
    EAnvilSimActivityState ActivityState;                                             // 0x0298 (size: 0x1)
    FVector ActivityAimLocation;                                                      // 0x02B8 (size: 0x18)
    EAnvilCharacterStance CurrentStance;                                              // 0x02E8 (size: 0x1)
    int32 PrimaryHeldItemCodeName;                                                    // 0x0308 (size: 0x4)
    int32 PrimaryHeldUnderlyingCodeName;                                              // 0x0328 (size: 0x4)
    int32 SecondaryHeldItemCodeName;                                                  // 0x0348 (size: 0x4)
    int32 SecondaryHeldUnderlyingCodeName;                                            // 0x0368 (size: 0x4)
    int32 UnarmedPrimaryHeldItemCodeName;                                             // 0x0388 (size: 0x4)
    int32 UnarmedSecondaryHeldItemCodeName;                                           // 0x03A8 (size: 0x4)
    FEntityHandle CurrentMountedEntity;                                               // 0x03C8 (size: 0x10)
    FEntityHandle CurrentMovementBase;                                                // 0x03F0 (size: 0x10)
    FVector CurrentMountedSeatOffset;                                                 // 0x0418 (size: 0x18)
    float CurrentMountedSeatRotation;                                                 // 0x0448 (size: 0x4)
    FString PlayerName;                                                               // 0x0468 (size: 0x10)
    int64 PlayerUniqueID;                                                             // 0x0490 (size: 0x8)
    int64 NobleVoteId;                                                                // 0x04B0 (size: 0x8)
    float TrappedTimer;                                                               // 0x04D0 (size: 0x4)
    float StaggerTimer;                                                               // 0x04F0 (size: 0x4)
    bool bStaggered;                                                                  // 0x0510 (size: 0x1)
    bool bIsAiming;                                                                   // 0x0530 (size: 0x1)
    bool bIsGuarding;                                                                 // 0x0550 (size: 0x1)
    bool bIsAdmin;                                                                    // 0x0570 (size: 0x1)
    bool bPriming;                                                                    // 0x0590 (size: 0x1)
    bool bInTravelZone;                                                               // 0x05B0 (size: 0x1)
    bool bAltAttackMode;                                                              // 0x05D0 (size: 0x1)
    bool bAltShieldMode;                                                              // 0x05F0 (size: 0x1)
    bool bIsPushing;                                                                  // 0x0610 (size: 0x1)
    bool bIsMeshHidden;                                                               // 0x0630 (size: 0x1)
    bool bMouseSelectCeiling;                                                         // 0x0650 (size: 0x1)
    bool bIsReinforcing;                                                              // 0x0670 (size: 0x1)
    bool bIsFalling;                                                                  // 0x0690 (size: 0x1)
    bool bBasedMovement;                                                              // 0x06B0 (size: 0x1)
    float HeldItemLightSourceRadius;                                                  // 0x06D0 (size: 0x4)
    TArray<FNightShroudLightSource> LightSourceData;                                  // 0x06F0 (size: 0x10)
    uint8 FoodTypesOnCooldownBits;                                                    // 0x0718 (size: 0x1)
    float AimYaw;                                                                     // 0x0738 (size: 0x4)
    float AimPitch;                                                                   // 0x0758 (size: 0x4)
    float LastIncomingAttackAngle;                                                    // 0x0778 (size: 0x4)
    EAnvilAvatarType Avatar;                                                          // 0x0798 (size: 0x1)
    float AvatarXP;                                                                   // 0x07B8 (size: 0x4)

}; // Size: 0x7E0

class USimPlayerProxyComponent : public UProxyComponent
{
    float GuardAngleToleranceYaw;                                                     // 0x0028 (size: 0x4)
    float GuardAngleTolerancePitchMin;                                                // 0x002C (size: 0x4)
    float GuardAngleTolerancePitchMax;                                                // 0x0030 (size: 0x4)
    float GuardAngleToleranceYawAlt;                                                  // 0x0034 (size: 0x4)
    float GuardAngleTolerancePitchMinAlt;                                             // 0x0038 (size: 0x4)
    float GuardAngleTolerancePitchMaxAlt;                                             // 0x003C (size: 0x4)
    float GuardMeterRegenCD;                                                          // 0x0040 (size: 0x4)
    float GuardMeterEmptyRegenCD;                                                     // 0x0044 (size: 0x4)
    float GuardMeterRegenSpeed;                                                       // 0x0048 (size: 0x4)
    float GuardMeterDecaySpeed;                                                       // 0x004C (size: 0x4)
    float StaggerDuration;                                                            // 0x0050 (size: 0x4)
    float StaggerAmount;                                                              // 0x0054 (size: 0x4)
    float StabilityRegenCD;                                                           // 0x0058 (size: 0x4)
    float Radius;                                                                     // 0x005C (size: 0x4)
    float HalfHeight;                                                                 // 0x0060 (size: 0x4)
    float CrouchedHalfHeight;                                                         // 0x0064 (size: 0x4)
    float MaxVelocity;                                                                // 0x0068 (size: 0x4)
    float MaxSprintVelocity;                                                          // 0x006C (size: 0x4)
    float MaxVelocityCeiling;                                                         // 0x0070 (size: 0x4)
    float MaxFlyVelocity;                                                             // 0x0074 (size: 0x4)
    float MaxSwimVelocity;                                                            // 0x0078 (size: 0x4)
    float BreakDeceleration;                                                          // 0x007C (size: 0x4)
    float RotationSpeed;                                                              // 0x0080 (size: 0x4)
    float MovementAcceleration;                                                       // 0x0084 (size: 0x4)
    float SwimMovementAcceleration;                                                   // 0x0088 (size: 0x4)
    float SprintStaminaDrain;                                                         // 0x008C (size: 0x4)
    float SwimStaminaDrain;                                                           // 0x0090 (size: 0x4)
    float ClimbStaminaCost;                                                           // 0x0094 (size: 0x4)
    FR2FloatRange FallingDistRange;                                                   // 0x0098 (size: 0x8)
    FR2FloatRange FallingDamageRange;                                                 // 0x00A0 (size: 0x8)
    float RammingVelocityFactor;                                                      // 0x00A8 (size: 0x4)
    float RammingStabilityDamage;                                                     // 0x00AC (size: 0x4)
    float AutoPushMaxDistance;                                                        // 0x00B0 (size: 0x4)
    float AutoPushMinDistance;                                                        // 0x00B4 (size: 0x4)
    float AutoPushConeHalfAngleCosine;                                                // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class USnapPointProxyComponent : public UProxyComponent
{
    bool ExtendFootprint;                                                             // 0x0028 (size: 0x1)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    FVector Extents;                                                                  // 0x0060 (size: 0x18)
    EAnvilSnappingChannelType SnappingChannel;                                        // 0x0078 (size: 0x1)
    bool bPointOnLine;                                                                // 0x0079 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x007A (size: 0x1)
    int32 CollisionMask;                                                              // 0x007C (size: 0x4)
    int32 Tags;                                                                       // 0x0080 (size: 0x4)
    float StepAngle;                                                                  // 0x0084 (size: 0x4)
    bool bVaultable;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

class USplineDataComponent : public UDataComponent
{
    TArray<FTransform> MidPieceTransforms;                                            // 0x00A8 (size: 0x10)
    FVector End;                                                                      // 0x00D0 (size: 0x18)
    float SegmentLength;                                                              // 0x0100 (size: 0x4)
    float Slope;                                                                      // 0x0120 (size: 0x4)

}; // Size: 0x140

class USplineProxyComponent : public UProxyComponent
{
    float PieceLength;                                                                // 0x0028 (size: 0x4)
    float MaxSegmentLength;                                                           // 0x002C (size: 0x4)
    float MinSplineLength;                                                            // 0x0030 (size: 0x4)
    float MaxSplineLength;                                                            // 0x0034 (size: 0x4)
    float SlopeMax;                                                                   // 0x0038 (size: 0x4)
    float FlatSlope;                                                                  // 0x003C (size: 0x4)
    bool bPlatformMode;                                                               // 0x0040 (size: 0x1)
    bool bBridgeMode;                                                                 // 0x0041 (size: 0x1)
    FVector PlatformStartOffset;                                                      // 0x0048 (size: 0x18)
    float MidPieceZOffset;                                                            // 0x0060 (size: 0x4)
    TSubclassOf<class UEntityTemplate> MidPiece;                                      // 0x0068 (size: 0x8)
    TSubclassOf<class UEntityTemplate> EndPiece;                                      // 0x0070 (size: 0x8)
    EAnvilSnappingChannelType SnappingChannel;                                        // 0x0078 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0079 (size: 0x1)
    int32 CollisionMask;                                                              // 0x007C (size: 0x4)
    int32 Tags;                                                                       // 0x0080 (size: 0x4)
    float StepAngle;                                                                  // 0x0084 (size: 0x4)
    bool bVaultable;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

class UStaminaDataComponent : public UDataComponent
{
    float Stamina;                                                                    // 0x00A8 (size: 0x4)
    float StaminaLimit;                                                               // 0x00C8 (size: 0x4)

}; // Size: 0xE8

class UStaminaProxyComponent : public UProxyComponent
{
    float StaminaRegenCD;                                                             // 0x0028 (size: 0x4)
    float StaminaRegenSpeed;                                                          // 0x002C (size: 0x4)

}; // Size: 0x30

class UStaticTorchProxyComponent : public UProxyComponent
{
    float NightShroudRadius;                                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

class UStructureDataComponent : public UDataComponent
{
    bool bRestrictedMode;                                                             // 0x00A8 (size: 0x1)
    bool bOnFoundation;                                                               // 0x00C8 (size: 0x1)
    bool bIsCollapsed;                                                                // 0x00E8 (size: 0x1)
    bool bIsFamilyDestroyed;                                                          // 0x0108 (size: 0x1)
    bool bIsTownDestroyed;                                                            // 0x0128 (size: 0x1)
    bool bCanOverrideFamilyAccessLevel;                                               // 0x0148 (size: 0x1)
    bool bCanBeReinforced;                                                            // 0x0168 (size: 0x1)
    bool bReinforcing;                                                                // 0x0188 (size: 0x1)
    bool bReinforced;                                                                 // 0x01A8 (size: 0x1)
    int32 ReinforcingFinishTime;                                                      // 0x01C8 (size: 0x4)
    int32 ReinforcingTime;                                                            // 0x01E8 (size: 0x4)
    EAnvilBuildStructureType StructureType;                                           // 0x0208 (size: 0x1)
    int64 BuilderId;                                                                  // 0x0228 (size: 0x8)
    int32 TownFamilyAreaId;                                                           // 0x0248 (size: 0x4)
    EAnvilR2FamilyRoleType FamilyAccessLevel;                                         // 0x0268 (size: 0x1)

}; // Size: 0x288

class UStructureProtectionProxyComponent : public UProxyComponent
{
    float SnappedFoundationDamageMitigation;                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

class UStructureProxyComponent : public UProxyComponent
{
    bool bCannotBeDismantled;                                                         // 0x0028 (size: 0x1)
    bool bRequireSupport;                                                             // 0x0029 (size: 0x1)
    bool bCanCollapse;                                                                // 0x002A (size: 0x1)
    bool bEnemyCanConvert;                                                            // 0x002B (size: 0x1)
    bool bIsAlwaysEnclosed;                                                           // 0x002C (size: 0x1)
    bool IgnoreMeshVisbilityChanges;                                                  // 0x002D (size: 0x1)
    bool bCanOverrideFamilyAccessLevel;                                               // 0x002E (size: 0x1)
    bool bCanBeReinforced;                                                            // 0x002F (size: 0x1)
    int32 ReinforcingTime;                                                            // 0x0030 (size: 0x4)
    uint8 CrenellationLevel;                                                          // 0x0034 (size: 0x1)
    EAnvilBuildStructureType StructureType;                                           // 0x0035 (size: 0x1)
    TArray<FBasicItemCount> ReinforcementCosts;                                       // 0x0038 (size: 0x10)

}; // Size: 0x48

class UTavernDataComponent : public UDataComponent
{
    uint8 CurrentBuffLevel;                                                           // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UTavernProxyComponent : public UProxyComponent
{
    TArray<FTavernBuffConfig> Buffs;                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UTeamDataComponent : public UDataComponent
{
    uint8 TeamId;                                                                     // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UTeamProxyComponent : public UProxyComponent
{
    uint8 TeamId;                                                                     // 0x0028 (size: 0x1)
    EAnvilAccessibilityType Accessibility;                                            // 0x0029 (size: 0x1)
    bool bAlwaysAllowAccessWhenScorched;                                              // 0x002A (size: 0x1)
    bool bAllowAccessUsingVehicles;                                                   // 0x002B (size: 0x1)

}; // Size: 0x30

class UTechItemTemplate : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    FText NameText;                                                                   // 0x0040 (size: 0x18)
    FText Description;                                                                // 0x0058 (size: 0x18)
    class UTexture2D* Image;                                                          // 0x0070 (size: 0x8)

}; // Size: 0x78

class UTemperatureDataComponent : public UDataComponent
{
    float CurrentNormalizedTemperature;                                               // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UTemperatureProxyComponent : public UProxyComponent
{
    float DamagePerFreezingTick;                                                      // 0x0028 (size: 0x4)
    float StructureInteriorTempIncreasePerSec;                                        // 0x002C (size: 0x4)
    float WarmStructureTempIncreasePerSec;                                            // 0x0030 (size: 0x4)
    float WarmStructureSearchRadius;                                                  // 0x0034 (size: 0x4)

}; // Size: 0x38

class UTemplateComponent : public USceneComponent
{
    TSubclassOf<class ATemplate> TemplateActor;                                       // 0x02A0 (size: 0x8)
    TArray<class UActorComponent*> SpawnedComponents;                                 // 0x02A8 (size: 0x10)

}; // Size: 0x2C0

class UTempleProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UTownHallDataComponent : public UDataComponent
{
    uint8 Tier;                                                                       // 0x00A8 (size: 0x1)
    bool bIsSmallCamp;                                                                // 0x00C8 (size: 0x1)
    int32 TownHallId;                                                                 // 0x00E8 (size: 0x4)
    float Range;                                                                      // 0x0108 (size: 0x4)
    int32 PledgedPlayersArrayCount;                                                   // 0x0128 (size: 0x4)
    int32 NumTotalHouses;                                                             // 0x0148 (size: 0x4)
    int32 NumUnclaimedHouses;                                                         // 0x0168 (size: 0x4)
    int32 NumTotalTents;                                                              // 0x0188 (size: 0x4)
    int32 NumUnclaimedTents;                                                          // 0x01A8 (size: 0x4)
    uint8 TownNameId;                                                                 // 0x01C8 (size: 0x1)
    uint8 TownNameOrdinal;                                                            // 0x01E8 (size: 0x1)

}; // Size: 0x208

class UTownHallProxyComponent : public UProxyComponent
{
    uint8 Tier;                                                                       // 0x0028 (size: 0x1)
    bool bIsSmallCamp;                                                                // 0x0029 (size: 0x1)
    bool bLocalReinforcementOnly;                                                     // 0x002A (size: 0x1)
    float AbandonedStartTime;                                                         // 0x002C (size: 0x4)
    uint8 OriginalOwnerTeamId;                                                        // 0x0030 (size: 0x1)

}; // Size: 0x38

class UTrapDataComponent : public UDataComponent
{
    bool bWasTriggered;                                                               // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UTrapProxyComponent : public UProxyComponent
{
    float PlayerTrapDurationSec;                                                      // 0x0028 (size: 0x4)
    float AnimalBleedDamagePerSec;                                                    // 0x002C (size: 0x4)
    float NormalizedAnimalEscapeChance;                                               // 0x0030 (size: 0x4)
    TSubclassOf<class UEntityTemplate> MissEffect;                                    // 0x0038 (size: 0x8)

}; // Size: 0x40

class UTreeFallDataComponent : public UDataComponent
{
    float FallingDir;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UTreeFallProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UTweakableDataComponent : public UDataComponent
{
    uint8 PopulationRequirementT2;                                                    // 0x00A8 (size: 0x1)
    uint8 PopulationRequirementT3;                                                    // 0x00C8 (size: 0x1)
    uint8 TentRequirementT2;                                                          // 0x00E8 (size: 0x1)
    uint8 TentRequirementT3;                                                          // 0x0108 (size: 0x1)
    uint8 TownCenterRequiredBuilders;                                                 // 0x0128 (size: 0x1)
    uint8 TownMapDisableSize;                                                         // 0x0148 (size: 0x1)
    float UpkeepCostReinforced;                                                       // 0x0168 (size: 0x4)
    bool bClientsUseVisActorPool;                                                     // 0x0188 (size: 0x1)

}; // Size: 0x1A8

class UTweakableProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UUnderworldModuleProxyComponent : public UProxyComponent
{
    bool bIsStatic;                                                                   // 0x0028 (size: 0x1)
    TArray<EAnvilUnderworldModuleEdgeType> EdgeList;                                  // 0x0030 (size: 0x10)
    int32 NumDynamicModulesMin;                                                       // 0x0040 (size: 0x4)
    int32 NumDynamicModulesMax;                                                       // 0x0044 (size: 0x4)
    int32 MaxNumDynamicModuleSpawnDistance;                                           // 0x0048 (size: 0x4)
    float TimeUntilCollapseMin_Hrs;                                                   // 0x004C (size: 0x4)
    float TimeUntilCollapseMax_Hrs;                                                   // 0x0050 (size: 0x4)
    float TelegraphEventStartTimeBeforeCollapse_Hrs;                                  // 0x0054 (size: 0x4)
    float TelegraphEventIntervalMin_Sec;                                              // 0x0058 (size: 0x4)
    float TelegraphEventIntervalMax_Sec;                                              // 0x005C (size: 0x4)

}; // Size: 0x60

class UUpgradeDataComponent : public UDataComponent
{
    TArray<int32> MaterialSubmissions;                                                // 0x00A8 (size: 0x10)
    bool bIsUpgrading;                                                                // 0x00D0 (size: 0x1)

}; // Size: 0xF0

class UUpgradeProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> UpgradeTarget;                                 // 0x0028 (size: 0x8)
    uint8 TierPrerequisite;                                                           // 0x0030 (size: 0x1)
    TArray<FBasicCount> MaterialRequirements;                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

class UVehicleMovementDataComponent : public UDataComponent
{
    FVector FrontAxleCastHit;                                                         // 0x00A8 (size: 0x18)
    FVector RearAxleCastHit;                                                          // 0x00D8 (size: 0x18)
    uint8 SeatOccupancyBits;                                                          // 0x0108 (size: 0x1)

}; // Size: 0x128

class UVehicleMovementProxyComponent : public UProxyComponent
{
    float Acceleration;                                                               // 0x0028 (size: 0x4)
    float MaxVelocity;                                                                // 0x002C (size: 0x4)
    float RotationalSpeed;                                                            // 0x0030 (size: 0x4)
    float SprintFactor;                                                               // 0x0034 (size: 0x4)
    float SprintRotationalSpeedFactor;                                                // 0x0038 (size: 0x4)
    float SprintStaminaDrain;                                                         // 0x003C (size: 0x4)
    float WalkStaminaDrain;                                                           // 0x0040 (size: 0x4)
    float RoadFactor;                                                                 // 0x0044 (size: 0x4)
    float WindFactor;                                                                 // 0x0048 (size: 0x4)
    bool bGroupVehicle;                                                               // 0x004C (size: 0x1)
    bool bYawInPlace;                                                                 // 0x004D (size: 0x1)
    bool bLadderMovement;                                                             // 0x004E (size: 0x1)
    bool bCanWorldEntranceTravel;                                                     // 0x004F (size: 0x1)
    bool bWaterVehicle;                                                               // 0x0050 (size: 0x1)
    bool bSailBoat;                                                                   // 0x0051 (size: 0x1)
    bool bDoAxleRaycasts;                                                             // 0x0052 (size: 0x1)
    bool bAllowSwitchSeat;                                                            // 0x0053 (size: 0x1)
    bool bUsePitch;                                                                   // 0x0054 (size: 0x1)
    bool bCanBeMovementBase;                                                          // 0x0055 (size: 0x1)
    TSubclassOf<class UEntityTemplate> CollisionEffect;                               // 0x0058 (size: 0x8)
    float RammingDamage;                                                              // 0x0060 (size: 0x4)
    float RammingVelocityFactor;                                                      // 0x0064 (size: 0x4)
    EAnvilDamageType RammingDamageType;                                               // 0x0068 (size: 0x1)
    float RammingStabilityDamage;                                                     // 0x006C (size: 0x4)
    float RammingStabilitySplashDamage;                                               // 0x0070 (size: 0x4)
    float RammingStabilitySplashDamageRadius;                                         // 0x0074 (size: 0x4)
    FVector FrontAxleOffset;                                                          // 0x0078 (size: 0x18)
    FVector RearAxleOffset;                                                           // 0x0090 (size: 0x18)
    FR2FloatRange FallingDistRange;                                                   // 0x00A8 (size: 0x8)
    FR2FloatRange FallingDamageRange;                                                 // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UVehicleSeatProxyComponent : public UProxyComponent
{
    EAnvilCharacterStance MountedStance;                                              // 0x0028 (size: 0x1)
    FVector PlayerOffset;                                                             // 0x0030 (size: 0x18)
    FRotator PlayerRotation;                                                          // 0x0048 (size: 0x18)
    FVector PlayerExitOffset;                                                         // 0x0060 (size: 0x18)
    float DismountMaxDelta;                                                           // 0x0078 (size: 0x4)
    bool bIsDriver;                                                                   // 0x007C (size: 0x1)
    bool bIsLeft;                                                                     // 0x007D (size: 0x1)
    bool bUseMountedWeapon;                                                           // 0x007E (size: 0x1)
    bool bPrimeMountedWeapon;                                                         // 0x007F (size: 0x1)
    bool bUseDeployable;                                                              // 0x0080 (size: 0x1)
    bool bMustNearExitToMount;                                                        // 0x0081 (size: 0x1)
    bool bRevertRequiredEquipments;                                                   // 0x0082 (size: 0x1)
    bool bMirrorDetachLocation;                                                       // 0x0083 (size: 0x1)
    int32 AnimationIndex;                                                             // 0x0084 (size: 0x4)
    float MountedAttackDamageMultiplier;                                              // 0x0088 (size: 0x4)
    TArray<class TSubclassOf<UItemTemplate>> RequiredEquipments;                      // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UVisStaticMeshComponentBase : public UStaticMeshComponent
{
    bool bUseCustomGeneratedCollisionMask;                                            // 0x05F0 (size: 0x1)
    int32 CustomGeneratedCollisionMask;                                               // 0x05F4 (size: 0x4)
    EVisMeshProfile VisMeshProfile;                                                   // 0x05F8 (size: 0x1)
    bool bMeshVisibility;                                                             // 0x05F9 (size: 0x1)
    bool bMeshVisibilityGroup2;                                                       // 0x05FA (size: 0x1)

}; // Size: 0x600

class UWeatherDataComponent : public UDataComponent
{
    TArray<FR2WeatherEvent> ActiveWeatherEvents;                                      // 0x00A8 (size: 0x10)
    float CurrentNormalizedSeason;                                                    // 0x00D0 (size: 0x4)
    float GlobalNormalizedTemperature;                                                // 0x00F0 (size: 0x4)
    float GlobalNormalizedWetness;                                                    // 0x0110 (size: 0x4)
    float GlobalNormalizedWind;                                                       // 0x0130 (size: 0x4)
    float GlobalWindDirectionX;                                                       // 0x0150 (size: 0x4)
    float GlobalWindDirectionY;                                                       // 0x0170 (size: 0x4)

}; // Size: 0x190

class UWeatherProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UWellDataComponent : public UDataComponent
{
    float TotalLevel;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UWellProxyComponent : public UProxyComponent
{
    int32 WaterGenerationTimeSec;                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

class UWindMillDataComponent : public UDataComponent
{
    float Rotation;                                                                   // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UWindMillProxyComponent : public UProxyComponent
{
    float MaxRotationSpeed;                                                           // 0x0028 (size: 0x4)
    float RotationAcceleration;                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

class UWorldEntranceDataComponent : public UDataComponent
{
    FVector ArrivalPosition;                                                          // 0x00A8 (size: 0x18)

}; // Size: 0xD8

class UWorldEntranceProxyComponent : public UProxyComponent
{
    FVector ArrivalPosition;                                                          // 0x0028 (size: 0x18)
    EAnvilMapId DestinationMapId;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

#endif
