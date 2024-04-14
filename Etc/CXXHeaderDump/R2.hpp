#ifndef UE4SS_SDK_R2_HPP
#define UE4SS_SDK_R2_HPP

#include "R2_enums.hpp"

struct FAcceptedFood
{
    TSubclassOf<class UItemTemplate> Item;                                            // 0x0000 (size: 0x8)
    int32 ConversionRate;                                                             // 0x0008 (size: 0x4)

}; // Size: 0x10

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
    float Delay;                                                                      // 0x0004 (size: 0x4)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float MovementSpeedModifier;                                                      // 0x000C (size: 0x4)
    float RotationSpeedModifier;                                                      // 0x0010 (size: 0x4)
    bool bRepeatable;                                                                 // 0x0014 (size: 0x1)
    bool bRequireAim;                                                                 // 0x0015 (size: 0x1)
    float StaminaCost;                                                                // 0x0018 (size: 0x4)
    float AimedStaminaCost;                                                           // 0x001C (size: 0x4)

}; // Size: 0x20

struct FCookingFuel
{
    TSubclassOf<class UItemTemplate> FuelItem;                                        // 0x0000 (size: 0x8)
    float BurnDurationSec;                                                            // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FCookingRecipe
{
    TArray<FItemQuantity> InputItems;                                                 // 0x0000 (size: 0x10)
    TArray<FItemQuantity> OutputItems;                                                // 0x0010 (size: 0x10)
    float CookDurationSec;                                                            // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FCraftingRecipe
{
    TArray<FItemCost> RecipeIngredients;                                              // 0x0000 (size: 0x10)
    TSubclassOf<class UItemTemplate> CraftedItemTemplate;                             // 0x0010 (size: 0x8)
    int32 CraftedItemCodeName;                                                        // 0x0018 (size: 0x4)
    TSubclassOf<class UItemTemplate> QualityIngredientTemplate;                       // 0x0020 (size: 0x8)
    int32 QualityIngredientCodeName;                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FFamilyMemberData
{
    int64 PlayerId;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FFootprintSharedCompEntry
{
    class UProxyComponent* Comp;                                                      // 0x0000 (size: 0x8)
    uint8 bHighlight;                                                                 // 0x0008 (size: 0x1)
    uint8 bHide;                                                                      // 0x0008 (size: 0x1)
    uint8 bNoCopyToBuildSite;                                                         // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FGridItem
{
    int32 CodeName;                                                                   // 0x0000 (size: 0x4)
    int32 UnderlyingCodeName;                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHeatingFuel
{
    TSubclassOf<class UItemTemplate> FuelItem;                                        // 0x0000 (size: 0x8)
    float BurnDurationSec;                                                            // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FHitConverterInput
{
    TSubclassOf<class UItemTemplate> InputCodeName;                                   // 0x0000 (size: 0x8)
    int32 InputCodeNameVisVar;                                                        // 0x0008 (size: 0x4)
    int32 OutputStackSize;                                                            // 0x000C (size: 0x4)
    int32 OutputStackSizeVisVar;                                                      // 0x0010 (size: 0x4)
    int32 NumHitsToConvert;                                                           // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FHitConverterOutput
{
    TSubclassOf<class UItemTemplate> OutputCodeName;                                  // 0x0000 (size: 0x8)
    int32 OutputCodeNameVisVar;                                                       // 0x0008 (size: 0x4)
    TArray<FHitConverterInput> InputList;                                             // 0x0010 (size: 0x10)
    TArray<FHitConverterInput> InputListVisVar;                                       // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FHousePledgedPlayerIdArray
{
    TArray<int64> PlayerArray;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInventoryItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0x8)
    FGridItem DedicatedItem;                                                          // 0x0008 (size: 0x8)
    int32 Count;                                                                      // 0x0010 (size: 0x4)
    int64 AcceptedTags;                                                               // 0x0018 (size: 0x8)
    float Durability;                                                                 // 0x0020 (size: 0x4)
    uint8 ItemFlags;                                                                  // 0x0024 (size: 0x1)
    uint8 Payload;                                                                    // 0x0025 (size: 0x1)
    int32 StackLimit;                                                                 // 0x0028 (size: 0x4)
    bool bIsDisabled;                                                                 // 0x002C (size: 0x1)
    bool bTooEncumberedToEquip;                                                       // 0x002D (size: 0x1)

}; // Size: 0x30

struct FItemCost
{
    TSubclassOf<class UItemTemplate> CostItem;                                        // 0x0000 (size: 0x8)
    int32 ItemCodeName;                                                               // 0x0008 (size: 0x4)
    uint8 Count;                                                                      // 0x000C (size: 0x1)
    EAnvilRareResourceAreaType RequiredRareResourceArea;                              // 0x000D (size: 0x1)

}; // Size: 0x10

struct FItemCount
{
    TSubclassOf<class UItemTemplate> ItemType;                                        // 0x0000 (size: 0x8)
    int32 ItemCodeName;                                                               // 0x0008 (size: 0x4)
    int32 Count;                                                                      // 0x000C (size: 0x4)
    uint8 ItemFlags;                                                                  // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FItemQuantity
{
    TSubclassOf<class UItemTemplate> ItemType;                                        // 0x0000 (size: 0x8)
    int32 ItemCodeName;                                                               // 0x0008 (size: 0x4)
    uint8 Quantity;                                                                   // 0x000C (size: 0x1)

}; // Size: 0x10

struct FItemSlot
{
    int32 ProxyRepeat;                                                                // 0x0000 (size: 0x4)
    bool bOr;                                                                         // 0x0004 (size: 0x1)
    TSubclassOf<class UItemTemplate> HeldItem;                                        // 0x0008 (size: 0x8)
    int32 Count;                                                                      // 0x0010 (size: 0x4)
    int32 StackLimit;                                                                 // 0x0014 (size: 0x4)
    bool bAllowWithdrawal;                                                            // 0x0018 (size: 0x1)
    TArray<EAnvilItemTag> AcceptedTags;                                               // 0x0020 (size: 0x10)
    TArray<EAnvilItemTag> RequiredTags;                                               // 0x0030 (size: 0x10)
    TArray<EAnvilItemTag> ProhibitedTags;                                             // 0x0040 (size: 0x10)
    TSubclassOf<class UItemTemplate> DedicatedItemType;                               // 0x0050 (size: 0x8)
    TSubclassOf<class UItemTemplate> DedicatedUnderlyingItemType;                     // 0x0058 (size: 0x8)
    TSubclassOf<class UItemTemplate> RequiredEnablingItem;                            // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FLootTableItem
{
    FItemCount ItemToDrop;                                                            // 0x0000 (size: 0x18)
    float NormalizedChanceToDrop;                                                     // 0x0018 (size: 0x4)
    float MinDurability;                                                              // 0x001C (size: 0x4)
    float MaxDurability;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FMarketShopItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0x8)
    int32 Count;                                                                      // 0x0008 (size: 0x4)
    float Durability;                                                                 // 0x000C (size: 0x4)
    uint8 Payload;                                                                    // 0x0010 (size: 0x1)
    int32 Price;                                                                      // 0x0014 (size: 0x4)
    int32 DefaultPrice;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FNightShroudLightSource
{
    FVector LightPosition;                                                            // 0x0000 (size: 0x18)
    float LightRadius;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FNightShroudLightSourceData
{
    TArray<FNightShroudLightSource> LightSourceArray;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPledgedPlayer
{
}; // Size: 0x28

struct FProducableItem
{
    TSubclassOf<class UItemTemplate> ProducedItem;                                    // 0x0000 (size: 0x8)
    TArray<FItemCost> ProducedItemCost;                                               // 0x0008 (size: 0x10)
    float ProductionTime;                                                             // 0x0018 (size: 0x4)
    uint8 OutputCount;                                                                // 0x001C (size: 0x1)
    uint32 OutputMax;                                                                 // 0x0020 (size: 0x4)
    bool bRequiresResearch;                                                           // 0x0024 (size: 0x1)
    bool bCrateProducedItems;                                                         // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FRefineryProducibleItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0x8)
    int32 OutputCount;                                                                // 0x0008 (size: 0x4)
    TArray<FRefineryProducibleItemCost> Cost;                                         // 0x0010 (size: 0x10)
    bool bRequiresResearch;                                                           // 0x0020 (size: 0x1)
    bool bCrateProducedItems;                                                         // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FRefineryProducibleItemCost
{
    int32 CodeName;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0xC

struct FRefineryQueueItem
{
    FGridItem Base;                                                                   // 0x0000 (size: 0x8)
    int64 OwnerId;                                                                    // 0x0008 (size: 0x8)
    bool bIsPrivate;                                                                  // 0x0010 (size: 0x1)
    bool bCanCancel;                                                                  // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FTechItem
{
}; // Size: 0x8

struct FTestStruct
{
    int32 Num;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FVisvarPowerConnection
{
    float RelativeAngle;                                                              // 0x0000 (size: 0x4)
    float InnerWidth;                                                                 // 0x0004 (size: 0x4)
    float OuterWidth;                                                                 // 0x0008 (size: 0x4)
    uint64 ID;                                                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

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

class AFootprint : public AActor
{
    bool bAutoSet;                                                                    // 0x0290 (size: 0x1)
    bool bShowMesh;                                                                   // 0x0291 (size: 0x1)
    FVector Position;                                                                 // 0x0298 (size: 0x18)
    FRotator Rotation;                                                                // 0x02B0 (size: 0x18)
    FVector Extents;                                                                  // 0x02C8 (size: 0x18)
    TMap<class TSubclassOf<UEntityTemplate>, class bool> StructureTiers;              // 0x02E0 (size: 0x50)
    TArray<FFootprintSharedCompEntry> FootprintSharedComponents;                      // 0x0330 (size: 0x10)
    class UCollisionVisualizerComponent* FootprintVisualizer;                         // 0x0340 (size: 0x8)
    TArray<class UCollisionVisualizerComponent*> MeshVisualizers;                     // 0x0348 (size: 0x10)
    TArray<class UStaticMeshComponent*> StaticMeshVisualizers;                        // 0x0358 (size: 0x10)

}; // Size: 0x368

class AVisActorBase : public AActor
{
}; // Size: 0x290

class UAIStimulusProxyComponent : public UProxyComponent
{
    EAnvilStimulusType Type;                                                          // 0x0028 (size: 0x1)
    bool bAgroTarget;                                                                 // 0x0029 (size: 0x1)

}; // Size: 0x30

class UAdvancedSnappingProxyComponent : public UProxyComponent
{
    bool bBlockSnapping;                                                              // 0x0028 (size: 0x1)
    bool bDisableMinSnapWhenNotSnapping;                                              // 0x0029 (size: 0x1)
    bool bNoOverlap;                                                                  // 0x002A (size: 0x1)
    bool bOverrideAngleOverlapMin;                                                    // 0x002B (size: 0x1)
    float OverridedAngleOverlapMin;                                                   // 0x002C (size: 0x4)
    uint8 NumSnappingRequired;                                                        // 0x0030 (size: 0x1)
    float MaxOverlapDistOverride;                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

class UAnimalAIDataComponent : public UDataComponent
{
    EAnvilAnimalState CurrentState;                                                   // 0x00A8 (size: 0x1)
    FVector Velocity;                                                                 // 0x00C8 (size: 0x18)
    int64 AttachedTarget;                                                             // 0x00F8 (size: 0x8)

}; // Size: 0x118

class UAnimalAIProxyComponent : public UProxyComponent
{
    float VisionRange;                                                                // 0x0028 (size: 0x4)
    float VisionAngle;                                                                // 0x002C (size: 0x4)
    float SlowSpeed;                                                                  // 0x0030 (size: 0x4)
    float FastSpeed;                                                                  // 0x0034 (size: 0x4)
    float Acceleration;                                                               // 0x0038 (size: 0x4)
    float RotationSpeed;                                                              // 0x003C (size: 0x4)
    float TrapTime;                                                                   // 0x0040 (size: 0x4)
    bool bHoming;                                                                     // 0x0044 (size: 0x1)
    float HomingDistance;                                                             // 0x0048 (size: 0x4)

}; // Size: 0x50

class UAnimalAttackProxyComponent : public UProxyComponent
{
    TArray<class TSubclassOf<UEntityTemplate>> AttackTargetTypes;                     // 0x0028 (size: 0x10)
    float OnRoadVisionRange;                                                          // 0x0038 (size: 0x4)
    float ChaseDuration;                                                              // 0x003C (size: 0x4)
    float ChaseCooldown;                                                              // 0x0040 (size: 0x4)
    FVector AttackOffset;                                                             // 0x0048 (size: 0x18)
    float AttackRadius;                                                               // 0x0060 (size: 0x4)
    float AttackFrequency;                                                            // 0x0064 (size: 0x4)
    float AttackDelay;                                                                // 0x0068 (size: 0x4)
    uint8 MinNumAttacks;                                                              // 0x006C (size: 0x1)
    uint8 MaxNumAttacks;                                                              // 0x006D (size: 0x1)
    int32 AttackDamage;                                                               // 0x0070 (size: 0x4)

}; // Size: 0x78

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
    int64 AttachedTarget;                                                             // 0x00A8 (size: 0x8)

}; // Size: 0xC8

class UAnimalRopeAttachableProxyComponent : public UProxyComponent
{
    float MaxFollowSpeed;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

class UAnimalRopeSlotDataComponent : public UDataComponent
{
    int64 AttachedTarget;                                                             // 0x00A8 (size: 0x8)

}; // Size: 0xC8

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
    int32 InputItemName;                                                              // 0x00A8 (size: 0x4)
    uint8 CurrentSelectedOutputIndex;                                                 // 0x00C8 (size: 0x1)
    TArray<FAnvilOutput> OutputList;                                                  // 0x00E8 (size: 0x10)
    float HitCounter;                                                                 // 0x00F8 (size: 0x4)

}; // Size: 0x118

class UAnvilProxyComponent : public UProxyComponent
{
    TSubclassOf<class UItemTemplate> InputItemName;                                   // 0x0028 (size: 0x8)
    TArray<FAnvilOutput> OutputList;                                                  // 0x0030 (size: 0x10)
    EAnvilToolType RequiredTool;                                                      // 0x0040 (size: 0x1)

}; // Size: 0x48

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
    float LinkRange;                                                                  // 0x002C (size: 0x4)
    float DetectionRange;                                                             // 0x0030 (size: 0x4)
    float DetectionFuelCostPerHour;                                                   // 0x0034 (size: 0x4)
    float InformingFuelCostPerHour;                                                   // 0x0038 (size: 0x4)

}; // Size: 0x40

class UBoxCollisionProxyComponent : public UProxyComponent
{
    bool ExtendFootprint;                                                             // 0x0028 (size: 0x1)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    FVector Extents;                                                                  // 0x0060 (size: 0x18)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0078 (size: 0x1)
    int32 CollisionMask;                                                              // 0x007C (size: 0x4)
    float StepAngle;                                                                  // 0x0080 (size: 0x4)

}; // Size: 0x88

class UBuildSiteDataComponent : public UDataComponent
{
    int32 BuiltStructureEntity;                                                       // 0x00A8 (size: 0x4)
    EAnvilToolType RequiredTool;                                                      // 0x00C8 (size: 0x1)
    bool bRequiresTownHall;                                                           // 0x00E8 (size: 0x1)
    bool bRequiresCamp;                                                               // 0x0108 (size: 0x1)
    bool bRequiresSmallCamp;                                                          // 0x0128 (size: 0x1)
    bool RequiresHorseToComplete;                                                     // 0x0148 (size: 0x1)
    bool bBuildsInstantly;                                                            // 0x0168 (size: 0x1)
    uint8 TierPrerequisite;                                                           // 0x0188 (size: 0x1)
    int32 RoadMaterialRequirement;                                                    // 0x01A8 (size: 0x4)
    int32 ResourceBranchesRequirement;                                                // 0x01C8 (size: 0x4)
    int32 ProcessedWoodRequirement;                                                   // 0x01E8 (size: 0x4)
    int32 ProcessedStoneRequirement;                                                  // 0x0208 (size: 0x4)
    int32 ProcessedIronRequirement;                                                   // 0x0228 (size: 0x4)
    int32 ReinforcedWoodRequirement;                                                  // 0x0248 (size: 0x4)
    int32 ResourceFibreRequirement;                                                   // 0x0268 (size: 0x4)
    int32 AnimalFatRequirement;                                                       // 0x0288 (size: 0x4)
    int32 AnimalBonesRequirement;                                                     // 0x02A8 (size: 0x4)
    int32 ProcessedLeatherRequirement;                                                // 0x02C8 (size: 0x4)
    int32 RoadMaterialSubmitted;                                                      // 0x02E8 (size: 0x4)
    int32 ResourceBranchesSubmitted;                                                  // 0x0308 (size: 0x4)
    int32 ProcessedWoodSubmitted;                                                     // 0x0328 (size: 0x4)
    int32 ProcessedStoneSubmitted;                                                    // 0x0348 (size: 0x4)
    int32 ProcessedIronSubmitted;                                                     // 0x0368 (size: 0x4)
    int32 ReinforcedWoodSubmitted;                                                    // 0x0388 (size: 0x4)
    int32 ResourceFibreSubmitted;                                                     // 0x03A8 (size: 0x4)
    int32 AnimalFatSubmitted;                                                         // 0x03C8 (size: 0x4)
    int32 AnimalBonesSubmitted;                                                       // 0x03E8 (size: 0x4)
    int32 ProcessedLeatherSubmitted;                                                  // 0x0408 (size: 0x4)
    int64 BuildGhostPlacementStatus;                                                  // 0x0428 (size: 0x8)
    int32 PlacementInfoFlags;                                                         // 0x0448 (size: 0x4)

}; // Size: 0x468

class UBuildSiteProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> BuiltStructureEntity;                          // 0x0028 (size: 0x8)
    int32 BuildLocation;                                                              // 0x0030 (size: 0x4)
    int32 CompatibleSurfaceTypes;                                                     // 0x0034 (size: 0x4)
    EAnvilToolType RequiredTool;                                                      // 0x0038 (size: 0x1)
    bool bRequiresTownHall;                                                           // 0x0039 (size: 0x1)
    bool bRequiresCamp;                                                               // 0x003A (size: 0x1)
    bool bRequiresSmallCamp;                                                          // 0x003B (size: 0x1)
    bool RequiresHorseToComplete;                                                     // 0x003C (size: 0x1)
    bool bBuildableOverRoads;                                                         // 0x003D (size: 0x1)
    bool bBuildableNearSpawnPoint;                                                    // 0x003E (size: 0x1)
    bool bBuildableInEnemyTerritory;                                                  // 0x003F (size: 0x1)
    bool bBuildableNearEnemies;                                                       // 0x0040 (size: 0x1)
    bool bAllowRapidBuild;                                                            // 0x0041 (size: 0x1)
    bool CanBuildTownStructureWithoutPledge;                                          // 0x0042 (size: 0x1)
    bool bBuildsInstantly;                                                            // 0x0043 (size: 0x1)
    uint8 TierPrerequisite;                                                           // 0x0044 (size: 0x1)
    TSubclassOf<class UItemTemplate> RequiredDeployable;                              // 0x0048 (size: 0x8)
    float MaxHeightShift;                                                             // 0x0050 (size: 0x4)
    float AdditionalMaxHeightShift;                                                   // 0x0054 (size: 0x4)
    float MinDistanceBetweenStructures;                                               // 0x0058 (size: 0x4)
    TArray<class TSubclassOf<UEntityTemplate>> MinDistanceStructureTypes;             // 0x0060 (size: 0x10)
    int32 RoadMaterialRequirement;                                                    // 0x0070 (size: 0x4)
    int32 ResourceBranchesRequirement;                                                // 0x0074 (size: 0x4)
    int32 ProcessedWoodRequirement;                                                   // 0x0078 (size: 0x4)
    int32 ProcessedStoneRequirement;                                                  // 0x007C (size: 0x4)
    int32 ProcessedIronRequirement;                                                   // 0x0080 (size: 0x4)
    int32 ReinforcedWoodRequirement;                                                  // 0x0084 (size: 0x4)
    int32 ResourceFibreRequirement;                                                   // 0x0088 (size: 0x4)
    int32 AnimalFatRequirement;                                                       // 0x008C (size: 0x4)
    int32 AnimalBonesRequirement;                                                     // 0x0090 (size: 0x4)
    int32 ProcessedLeatherRequirement;                                                // 0x0094 (size: 0x4)

}; // Size: 0x98

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
    float StepAngle;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UChatMessage : public UObject
{
}; // Size: 0x58

class UCollisionProxyComponent : public UProxyComponent
{
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0028 (size: 0x1)
    int32 CollisionMask;                                                              // 0x002C (size: 0x4)
    float StepAngle;                                                                  // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCollisionVisualizerComponent : public UPrimitiveComponent
{
    class UBodySetup* ShapeBodySetup;                                                 // 0x0538 (size: 0x8)
    FVector Extents;                                                                  // 0x0540 (size: 0x18)
    FLinearColor Color;                                                               // 0x0558 (size: 0x10)
    bool bHighlight;                                                                  // 0x0568 (size: 0x1)
    bool bIsCapsule;                                                                  // 0x0569 (size: 0x1)

}; // Size: 0x570

class UConstructionFacilityProxyComponent : public UProxyComponent
{
    EAnvilBuildLocationType LocationType;                                             // 0x0028 (size: 0x1)
    FVector BuildSiteSpawnOffset;                                                     // 0x0030 (size: 0x18)
    FRotator BuildSiteSpawnRotation;                                                  // 0x0048 (size: 0x18)

}; // Size: 0x60

class UCookingDataComponent : public UDataComponent
{
    int32 FuelExpiryTimestampAgeSec;                                                  // 0x00A8 (size: 0x4)
    bool bIsFueled;                                                                   // 0x00C8 (size: 0x1)
    bool bCanCookWithExistingOutputs;                                                 // 0x00E8 (size: 0x1)
    int32 CookCompleteTimestampAgeSec;                                                // 0x0108 (size: 0x4)
    bool bIsFoodBurning;                                                              // 0x0128 (size: 0x1)

}; // Size: 0x148

class UCookingProxyComponent : public UProxyComponent
{
    TArray<FCookingFuel> FuelList;                                                    // 0x0028 (size: 0x10)
    TArray<FCookingRecipe> RecipeList;                                                // 0x0038 (size: 0x10)
    float FoodBurnDurationSec;                                                        // 0x0048 (size: 0x4)
    bool bCanCookWithExistingOutputs;                                                 // 0x004C (size: 0x1)

}; // Size: 0x50

class UCraftingDataComponent : public UDataComponent
{
    TArray<FCraftingRecipe> RecipeList;                                               // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UCraftingProxyComponent : public UProxyComponent
{
    TArray<FCraftingRecipe> RecipeList;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDataComponent : public UActorComponent
{
}; // Size: 0xA8

class UDecayProxyComponent : public UProxyComponent
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    float StartDelayHours;                                                            // 0x002C (size: 0x4)
    float DecayTimeHours;                                                             // 0x0030 (size: 0x4)

}; // Size: 0x38

class UDeployProxyComponent : public UProxyComponent
{
    bool bRequireMounted;                                                             // 0x0028 (size: 0x1)
    bool bCopyHealthPercentage;                                                       // 0x0029 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DeployedBuildSite;                             // 0x0030 (size: 0x8)

}; // Size: 0x38

class UDestroyableProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> DestructionEffectEntity;                       // 0x0028 (size: 0x8)

}; // Size: 0x30

class UEditorSpawnerProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UEntityAttachableDataComponent : public UDataComponent
{
    int64 AttachedEntity;                                                             // 0x00A8 (size: 0x8)

}; // Size: 0xC8

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
    bool bGenerateMeshCollisionsFromVisActor;                                         // 0x0049 (size: 0x1)
    int32 GenerateMeshCollisionMask;                                                  // 0x004C (size: 0x4)
    float GenerateMeshCollisionStepAngle;                                             // 0x0050 (size: 0x4)
    TArray<class UProxyComponent*> Components;                                        // 0x0058 (size: 0x10)
    TSubclassOf<class AVisActorBase> VisActorClass;                                   // 0x0068 (size: 0x8)
    TSubclassOf<class AVisActorBase> VisActorTemplateClass;                           // 0x0070 (size: 0x8)
    class AVisActorBase* VisActorDefaultObject;                                       // 0x0078 (size: 0x8)

    class UProxyComponent* GetProxyComponent(UClass* EntityType, UClass* ComponentType);
}; // Size: 0x80

class UEquipmentProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UFamilyAreaMarkerDataComponent : public UDataComponent
{
    int32 FamilyId;                                                                   // 0x00A8 (size: 0x4)
    bool AllowPublicPledging;                                                         // 0x00C8 (size: 0x1)
    uint8 Tier;                                                                       // 0x00E8 (size: 0x1)
    TArray<FFamilyMemberData> FamilyMembers;                                          // 0x0108 (size: 0x10)
    int32 VisVarMaxNumFamilyMembers;                                                  // 0x0118 (size: 0x4)
    float VisVarRestrictedBoxExtent;                                                  // 0x0138 (size: 0x4)
    int64 ParentFamilyArea;                                                           // 0x0158 (size: 0x8)
    int64 AttachedFamilyArea;                                                         // 0x0178 (size: 0x8)
    uint8 IsFamilyAreaCore;                                                           // 0x0198 (size: 0x1)
    uint8 NumChildAreas;                                                              // 0x01B8 (size: 0x1)

}; // Size: 0x1D8

class UFamilyAreaMarkerProxyComponent : public UProxyComponent
{
    uint8 Tier;                                                                       // 0x0028 (size: 0x1)
    uint8 IsFamilyAreaCore;                                                           // 0x0029 (size: 0x1)

}; // Size: 0x30

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
    float FertilizeDurationPerUnitItem;                                               // 0x0044 (size: 0x4)

}; // Size: 0x48

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
    float StepAngle;                                                                  // 0x0038 (size: 0x4)

}; // Size: 0x40

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

class UGroundCheckBoxProxyComponent : public UProxyComponent
{
    FVector Position;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    FVector Extents;                                                                  // 0x0058 (size: 0x18)

}; // Size: 0x70

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
    int32 FuelExpiryTimestampAgeSec;                                                  // 0x00A8 (size: 0x4)
    bool bIsFueled;                                                                   // 0x00C8 (size: 0x1)
    bool bIsBellowBoosted;                                                            // 0x00E8 (size: 0x1)

}; // Size: 0x108

class UHeatingProxyComponent : public UProxyComponent
{
    TArray<FHeatingFuel> FuelList;                                                    // 0x0028 (size: 0x10)
    int32 NumItems;                                                                   // 0x0038 (size: 0x4)

}; // Size: 0x40

class UHitConverterDataComponent : public UDataComponent
{
    uint8 CurrentSelectedOutputIndex;                                                 // 0x00A8 (size: 0x1)
    TArray<FHitConverterOutput> OutputList;                                           // 0x00C8 (size: 0x10)
    float HitCounter;                                                                 // 0x00D8 (size: 0x4)

}; // Size: 0xF8

class UHitConverterProxyComponent : public UProxyComponent
{
    TArray<FHitConverterOutput> OutputList;                                           // 0x0028 (size: 0x10)
    EAnvilToolType RequiredTool;                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

class UHousingDataComponent : public UDataComponent
{
    uint8 PlayerCapacity;                                                             // 0x00A8 (size: 0x1)
    bool AllowPublicPledging;                                                         // 0x00C8 (size: 0x1)
    bool IsForCampsOnly;                                                              // 0x00E8 (size: 0x1)
    bool IsGroupHouse;                                                                // 0x0108 (size: 0x1)
    FHousePledgedPlayerIdArray PledgedPlayerIds;                                      // 0x0128 (size: 0x10)

}; // Size: 0x138

class UHousingProxyComponent : public UProxyComponent
{
    uint8 PlayerCapacity;                                                             // 0x0028 (size: 0x1)
    bool IsForCampsOnly;                                                              // 0x0029 (size: 0x1)
    bool IsGroupHouse;                                                                // 0x002A (size: 0x1)
    bool bRequiresCeilingCheck;                                                       // 0x002B (size: 0x1)

}; // Size: 0x30

class UHungerDataComponent : public UDataComponent
{
    float Hunger;                                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UHungerProxyComponent : public UProxyComponent
{
    float HungerPerTick;                                                              // 0x0028 (size: 0x4)

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
    EAnvilInventoryStackRule StackRule;                                               // 0x0039 (size: 0x1)
    bool bEnforceWithdrawalStamina;                                                   // 0x003A (size: 0x1)
    bool bOnlyAllowMaxDurabilityItems;                                                // 0x003B (size: 0x1)
    float NormalizedSpoilageFactor;                                                   // 0x003C (size: 0x4)
    float LifespanWhenEmpty;                                                          // 0x0040 (size: 0x4)
    bool bAllowWithdrawal;                                                            // 0x0044 (size: 0x1)

}; // Size: 0x48

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
    uint8 Encumberance;                                                               // 0x0078 (size: 0x1)
    float ArmedDurabilityLossPerSec;                                                  // 0x007C (size: 0x4)
    float DurabilityLossPerUse;                                                       // 0x0080 (size: 0x4)
    float DurabilityLossPerSec;                                                       // 0x0084 (size: 0x4)
    bool bRearmAfterConsumption;                                                      // 0x0088 (size: 0x1)
    bool bRearmSkipsEquipActivity;                                                    // 0x0089 (size: 0x1)
    float StockPileWithdrawalValue;                                                   // 0x008C (size: 0x4)
    TSubclassOf<class UItemTemplate> HeatedItem;                                      // 0x0090 (size: 0x8)
    TSubclassOf<class UItemTemplate> CooledItem;                                      // 0x0098 (size: 0x8)
    bool bRanged;                                                                     // 0x00A0 (size: 0x1)
    uint8 Damage;                                                                     // 0x00A1 (size: 0x1)
    FVector DamageOffset;                                                             // 0x00A8 (size: 0x18)
    float DamageRadius;                                                               // 0x00C0 (size: 0x4)
    FVector FireOffset;                                                               // 0x00C8 (size: 0x18)
    TSubclassOf<class UItemTemplate> AmmoType;                                        // 0x00E0 (size: 0x8)
    TSubclassOf<class UEntityTemplate> ProjectileEntity;                              // 0x00E8 (size: 0x8)
    float VariableDamageMaxModifier;                                                  // 0x00F0 (size: 0x4)
    float VariableDamageMinModifier;                                                  // 0x00F4 (size: 0x4)
    float GuardMeterReductionMultiplier;                                              // 0x00F8 (size: 0x4)
    bool bStaggersWielder;                                                            // 0x00FC (size: 0x1)
    EAnvilArmourType ArmourType;                                                      // 0x00FD (size: 0x1)
    EAnvilDamageType DamageType;                                                      // 0x00FE (size: 0x1)
    uint8 ArmorMitigation;                                                            // 0x00FF (size: 0x1)
    uint8 MitigationSuccessDurabilityLoss;                                            // 0x0100 (size: 0x1)
    uint8 MitigationFailureDurabilityLoss;                                            // 0x0101 (size: 0x1)
    TSubclassOf<class UEntityTemplate> ArmourMitigatedEffect;                         // 0x0108 (size: 0x8)
    EAnvilToolType ToolType;                                                          // 0x0110 (size: 0x1)
    float ToolEffectiveness;                                                          // 0x0114 (size: 0x4)
    float RegenPerSec;                                                                // 0x0118 (size: 0x4)
    float RegenDuration;                                                              // 0x011C (size: 0x4)
    uint8 ConversionRatioToFood;                                                      // 0x0120 (size: 0x1)
    EAnvilFoodType FoodType;                                                          // 0x0121 (size: 0x1)
    bool bDoesSpoil;                                                                  // 0x0122 (size: 0x1)
    float SpoilageDurabilityLossPerSec;                                               // 0x0124 (size: 0x4)
    EAnvilCharacterStance RequiredStance;                                             // 0x0128 (size: 0x1)
    TMap<class EAnvilCharacterStance, class TSubclassOf<UItemTemplate>> StanceOverride; // 0x0130 (size: 0x50)
    float AimMovementSpeedModifier;                                                   // 0x0180 (size: 0x4)
    float AimRotationSpeedModifier;                                                   // 0x0184 (size: 0x4)
    FAnvilSimActivity DefaultActivity;                                                // 0x0188 (size: 0x20)
    FAnvilSimActivity RangedActivity;                                                 // 0x01A8 (size: 0x20)
    FAnvilSimActivity BuildActivity;                                                  // 0x01C8 (size: 0x20)
    FAnvilSimActivity GatherActivity;                                                 // 0x01E8 (size: 0x20)
    bool bIsDeployable;                                                               // 0x0208 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DeployedBuildSite;                             // 0x0210 (size: 0x8)
    float GuardMeterCostPerHit;                                                       // 0x0218 (size: 0x4)
    float NightShroudLightRadius;                                                     // 0x021C (size: 0x4)
    bool bAllowCameraPan;                                                             // 0x0220 (size: 0x1)
    float MaxEncumbranceforAction;                                                    // 0x0224 (size: 0x4)
    float ShieldDurabilityLossMultiplier;                                             // 0x0228 (size: 0x4)
    float HungerRestored;                                                             // 0x022C (size: 0x4)
    float HealthLimitRestored;                                                        // 0x0230 (size: 0x4)
    float StaminaLimitRestored;                                                       // 0x0234 (size: 0x4)
    uint16 QuantityPerCrate;                                                          // 0x0238 (size: 0x2)
    uint16 DefaultMarketValue;                                                        // 0x023A (size: 0x2)
    float StunChance;                                                                 // 0x023C (size: 0x4)
    float StunDuration;                                                               // 0x0240 (size: 0x4)
    float StunThrowDistance;                                                          // 0x0244 (size: 0x4)

}; // Size: 0x248

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

class ULifetimeDataComponent : public UDataComponent
{
    float Age;                                                                        // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class ULifetimeProxyComponent : public UProxyComponent
{
    float LifeSpan;                                                                   // 0x0028 (size: 0x4)
    bool DropResourceOnDeath;                                                         // 0x002C (size: 0x1)

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

class UMarketShopDataComponent : public UDataComponent
{
    TArray<int32> PriceList;                                                          // 0x00A8 (size: 0x10)
    TArray<int32> DefaultPriceList;                                                   // 0x00B8 (size: 0x10)
    int32 SilverStored;                                                               // 0x00C8 (size: 0x4)
    FString OwnerPlayerName;                                                          // 0x00E8 (size: 0x10)
    int32 MinItemPrice;                                                               // 0x0110 (size: 0x4)
    int32 MaxItemPrice;                                                               // 0x0130 (size: 0x4)

}; // Size: 0x150

class UMarketShopProxyComponent : public UProxyComponent
{
    int32 AutoBuySeconds;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

class UMeshCollisionProxyComponent : public UProxyComponent
{
    class UStaticMesh* PhysicsAssetName;                                              // 0x0028 (size: 0x8)
    FVector Position;                                                                 // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    uint8 ProjectToLandscape;                                                         // 0x0060 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0061 (size: 0x1)
    int32 CollisionMask;                                                              // 0x0064 (size: 0x4)
    float StepAngle;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UMeshVisibilityDataComponent : public UDataComponent
{
    bool bIsVisible;                                                                  // 0x00A8 (size: 0x1)

}; // Size: 0xC8

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
    float AimYaw;                                                                     // 0x0108 (size: 0x4)
    float AimPitch;                                                                   // 0x0128 (size: 0x4)

}; // Size: 0x148

class UMountedWeaponProxyComponent : public UProxyComponent
{
    FVector AimPivot;                                                                 // 0x0028 (size: 0x18)
    float PrimingTime;                                                                // 0x0040 (size: 0x4)
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

}; // Size: 0x78

class UPickupDataComponent : public UDataComponent
{
    FItemCount Item;                                                                  // 0x00A8 (size: 0x18)

}; // Size: 0xC0

class UPickupProxyComponent : public UProxyComponent
{
    FItemCount Item;                                                                  // 0x0028 (size: 0x18)

}; // Size: 0x40

class UPlantGrowthDataComponent : public UDataComponent
{
    uint8 GrowthStage;                                                                // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UPlantGrowthProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> MaturePlant;                                   // 0x0028 (size: 0x8)
    TSubclassOf<class UItemTemplate> RequiredSeedType;                                // 0x0030 (size: 0x8)
    float StageTime;                                                                  // 0x0038 (size: 0x4)
    uint8 GrowthStage;                                                                // 0x003C (size: 0x1)
    bool bCanGrow;                                                                    // 0x003D (size: 0x1)

}; // Size: 0x40

class UPlayerControllerDataComponent : public UDataComponent
{
    int64 PledgedTownHallInfo;                                                        // 0x00A8 (size: 0x8)
    int64 PledgedMilitiaInfo;                                                         // 0x00C8 (size: 0x8)
    uint8 bShowRespawnScreen;                                                         // 0x00E8 (size: 0x1)
    uint8 bShowDeathMarker;                                                           // 0x0108 (size: 0x1)
    FVector LastDeathLocation;                                                        // 0x0128 (size: 0x18)

}; // Size: 0x158

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
    int32 UsePrompt;                                                                  // 0x02A8 (size: 0x4)
    EAnvilVehicleInputState VehicleInput;                                             // 0x02C8 (size: 0x1)
    int64 CurrentBuildGhostEntityId;                                                  // 0x02E8 (size: 0x8)
    FVector CameraCurrentPosition;                                                    // 0x0308 (size: 0x18)

}; // Size: 0x338

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
    float SpawnRadius;                                                                // 0x0060 (size: 0x4)
    EAnvilFactionId Faction;                                                          // 0x0064 (size: 0x1)

}; // Size: 0x68

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
    int32 VisVarUpdateHook;                                                           // 0x00C8 (size: 0x4)
    float InFlowDirection;                                                            // 0x00E8 (size: 0x4)
    float InFlowHeight;                                                               // 0x0108 (size: 0x4)

}; // Size: 0x128

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
    float Radius;                                                                     // 0x0060 (size: 0x4)
    float HeadingTolerance;                                                           // 0x0064 (size: 0x4)
    float NozzleYawDelta;                                                             // 0x0068 (size: 0x4)
    float NozzlePitchMin;                                                             // 0x006C (size: 0x4)
    float NozzlePitchMax;                                                             // 0x0070 (size: 0x4)
    float RotationSpeed;                                                              // 0x0074 (size: 0x4)
    float ScorchAmount;                                                               // 0x0078 (size: 0x4)
    float DislodgeRate;                                                               // 0x007C (size: 0x4)

}; // Size: 0x80

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

class URareResourceAreaMarkerProxyComponent : public UProxyComponent
{
    EAnvilRareResourceAreaType RareResourceAreaType;                                  // 0x0028 (size: 0x1)
    float AreaRadius;                                                                 // 0x002C (size: 0x4)

}; // Size: 0x30

class URefineResourceDataComponent : public UDataComponent
{
    bool bCrateProducedItems;                                                         // 0x00A8 (size: 0x1)
    int32 NumItemsInQueue;                                                            // 0x00C8 (size: 0x4)
    float ItemProductionTimeLeft;                                                     // 0x00E8 (size: 0x4)
    float EstItemProductionTimeLeft;                                                  // 0x0108 (size: 0x4)
    float TotalProductionTimeLeft;                                                    // 0x0128 (size: 0x4)
    bool bInventoryFull;                                                              // 0x0148 (size: 0x1)
    uint8 Priority;                                                                   // 0x0168 (size: 0x1)

}; // Size: 0x188

class URefineResourceProxyComponent : public UProxyComponent
{
    TArray<FProducableItem> ProducableItemList;                                       // 0x0028 (size: 0x10)
    bool bCrateProducedItems;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

class URelicTechCenterDataComponent : public UDataComponent
{
    TArray<FItemCost> RelicTechCosts;                                                 // 0x00A8 (size: 0x10)
    TArray<int32> TechItemsDeposited;                                                 // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class URelicTechCenterProxyComponent : public UProxyComponent
{
    TArray<FItemCost> RelicTechCosts;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

class URepTestProxyComponent : public UProxyComponent
{
    int32 BytesToRep;                                                                 // 0x0028 (size: 0x4)

}; // Size: 0x30

class URepairProxyComponent : public UProxyComponent
{
    int32 TotalRepairCost;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

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
    EAnvilToolType RequiredTool;                                                      // 0x002A (size: 0x1)
    bool bInventoryTransferToPlayer;                                                  // 0x002B (size: 0x1)
    uint8 DroppedResourceAmount;                                                      // 0x002C (size: 0x1)
    TSubclassOf<class UEntityTemplate> DroppedResourceEntity;                         // 0x0030 (size: 0x8)
    bool bScatterSecondaryResource;                                                   // 0x0038 (size: 0x1)
    uint8 DroppedSecondaryResourceAmount;                                             // 0x0039 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DroppedSecondaryResourceEntity;                // 0x0040 (size: 0x8)
    TSubclassOf<class UEntityTemplate> HuskEntity;                                    // 0x0048 (size: 0x8)
    bool bSnapHuskEntityToGround;                                                     // 0x0050 (size: 0x1)
    TSubclassOf<class UEntityTemplate> DestructionEffect;                             // 0x0058 (size: 0x8)
    TArray<FLootTableItem> LootTable;                                                 // 0x0060 (size: 0x10)

}; // Size: 0x70

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
    bool bTrackSpawnedEntity;                                                         // 0x0075 (size: 0x1)
    bool bDontSpawnInSettlements;                                                     // 0x0076 (size: 0x1)
    bool bIsRare;                                                                     // 0x0077 (size: 0x1)
    bool bDontSpawnNearPlayers;                                                       // 0x0078 (size: 0x1)
    bool bWalkBackToSpawner;                                                          // 0x0079 (size: 0x1)
    int32 CompatibleSurfaceTypes;                                                     // 0x007C (size: 0x4)
    TArray<class TSubclassOf<UEntityTemplate>> OtherResourcesToAvoid;                 // 0x0080 (size: 0x10)
    TArray<class TSubclassOf<UEntityTemplate>> OtherResourcesToCountForSpawnLimit;    // 0x0090 (size: 0x10)

}; // Size: 0xA0

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

class USimPlayerDataComponent : public UDataComponent
{
    FVector Velocity;                                                                 // 0x00A8 (size: 0x18)
    uint8 GuardStrength;                                                              // 0x00D8 (size: 0x1)
    uint8 TeamID;                                                                     // 0x00F8 (size: 0x1)
    uint8 Encumbrance;                                                                // 0x0118 (size: 0x1)
    float GuardMeter;                                                                 // 0x0138 (size: 0x4)
    EAnvilSimActivityState ActivityState;                                             // 0x0158 (size: 0x1)
    FVector ActivityAimLocation;                                                      // 0x0178 (size: 0x18)
    EAnvilCharacterStance CurrentStance;                                              // 0x01A8 (size: 0x1)
    int32 PrimaryHeldItemCodeName;                                                    // 0x01C8 (size: 0x4)
    int32 PrimaryHeldUnderlyingCodeName;                                              // 0x01E8 (size: 0x4)
    int32 SecondaryHeldItemCodeName;                                                  // 0x0208 (size: 0x4)
    int32 SecondaryHeldUnderlyingCodeName;                                            // 0x0228 (size: 0x4)
    int32 UnarmedPrimaryHeldItemCodeName;                                             // 0x0248 (size: 0x4)
    int32 UnarmedSecondaryHeldItemCodeName;                                           // 0x0268 (size: 0x4)
    int64 CurrentMountedEntity;                                                       // 0x0288 (size: 0x8)
    FVector CurrentMountedSeatOffset;                                                 // 0x02A8 (size: 0x18)
    FString PlayerName;                                                               // 0x02D8 (size: 0x10)
    int64 PlayerUniqueID;                                                             // 0x02E8 (size: 0x8)
    int64 NobleVoteId;                                                                // 0x0308 (size: 0x8)
    float TrappedTimer;                                                               // 0x0328 (size: 0x4)
    float StaggerTimer;                                                               // 0x0348 (size: 0x4)
    bool bIsAiming;                                                                   // 0x0368 (size: 0x1)
    bool bIsGuarding;                                                                 // 0x0388 (size: 0x1)
    bool bShowStructureStats;                                                         // 0x03A8 (size: 0x1)
    bool bIsAdmin;                                                                    // 0x03C8 (size: 0x1)
    bool bDebugDraw;                                                                  // 0x03E8 (size: 0x1)
    bool bPriming;                                                                    // 0x0408 (size: 0x1)
    bool bInTravelZone;                                                               // 0x0428 (size: 0x1)
    bool bIsMeshHidden;                                                               // 0x0448 (size: 0x1)
    bool bIsHomesteadOwnerInTown;                                                     // 0x0468 (size: 0x1)
    bool bShowEnvStats;                                                               // 0x0488 (size: 0x1)
    float SecondsUntilFullDecay;                                                      // 0x04A8 (size: 0x4)
    float HeldItemLightSourceRadius;                                                  // 0x04C8 (size: 0x4)
    FNightShroudLightSourceData LightSourceData;                                      // 0x04E8 (size: 0x10)
    uint8 FoodTypesOnCooldownBits;                                                    // 0x04F8 (size: 0x1)
    float AimYaw;                                                                     // 0x0518 (size: 0x4)
    float AimPitch;                                                                   // 0x0538 (size: 0x4)
    float LastIncomingAttackAngle;                                                    // 0x0558 (size: 0x4)

}; // Size: 0x578

class USimPlayerProxyComponent : public UProxyComponent
{
    float GuardAngleTolerance;                                                        // 0x0028 (size: 0x4)
    float GuardMeterRegenCD;                                                          // 0x002C (size: 0x4)
    float GuardMeterEmptyRegenCD;                                                     // 0x0030 (size: 0x4)
    float GuardMeterRegenSpeed;                                                       // 0x0034 (size: 0x4)
    float GuardMeterDecaySpeed;                                                       // 0x0038 (size: 0x4)
    float StaggerDuration;                                                            // 0x003C (size: 0x4)
    float StaggerAmount;                                                              // 0x0040 (size: 0x4)
    float Radius;                                                                     // 0x0044 (size: 0x4)
    float HalfHeight;                                                                 // 0x0048 (size: 0x4)
    float CrouchedHalfHeight;                                                         // 0x004C (size: 0x4)
    float MaxVelocity;                                                                // 0x0050 (size: 0x4)
    float MaxSprintVelocity;                                                          // 0x0054 (size: 0x4)
    float MaxVelocityCeiling;                                                         // 0x0058 (size: 0x4)
    float MaxFlyVelocity;                                                             // 0x005C (size: 0x4)
    float BreakDeceleration;                                                          // 0x0060 (size: 0x4)
    float RotationSpeed;                                                              // 0x0064 (size: 0x4)
    float MovementAcceleration;                                                       // 0x0068 (size: 0x4)
    float SprintStaminaDrain;                                                         // 0x006C (size: 0x4)
    float ClimbStaminaCostSmall;                                                      // 0x0070 (size: 0x4)
    float ClimbStaminaCostTall;                                                       // 0x0074 (size: 0x4)

}; // Size: 0x78

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
    float StepAngle;                                                                  // 0x0080 (size: 0x4)

}; // Size: 0x88

class USplineDataComponent : public UDataComponent
{
    TArray<FTransform> MidPieceTransforms;                                            // 0x00A8 (size: 0x10)
    FVector End;                                                                      // 0x00B8 (size: 0x18)
    float SegmentLength;                                                              // 0x00E8 (size: 0x4)
    float Slope;                                                                      // 0x0108 (size: 0x4)

}; // Size: 0x128

class USplineProxyComponent : public UProxyComponent
{
    float PieceLength;                                                                // 0x0028 (size: 0x4)
    float MaxSegmentLength;                                                           // 0x002C (size: 0x4)
    float MinSplineLength;                                                            // 0x0030 (size: 0x4)
    float MaxSplineLength;                                                            // 0x0034 (size: 0x4)
    float SlopeMax;                                                                   // 0x0038 (size: 0x4)
    float FlatSlope;                                                                  // 0x003C (size: 0x4)
    bool bScaleCost;                                                                  // 0x0040 (size: 0x1)
    bool bPlatformMode;                                                               // 0x0041 (size: 0x1)
    bool bBridgeMode;                                                                 // 0x0042 (size: 0x1)
    FVector PlatformStartOffset;                                                      // 0x0048 (size: 0x18)
    float MidPieceZOffset;                                                            // 0x0060 (size: 0x4)
    TSubclassOf<class UEntityTemplate> MidPiece;                                      // 0x0068 (size: 0x8)
    TSubclassOf<class UEntityTemplate> EndPiece;                                      // 0x0070 (size: 0x8)
    EAnvilSnappingChannelType SnappingChannel;                                        // 0x0078 (size: 0x1)
    EAnvilPhysicalSurfaceType SurfaceType;                                            // 0x0079 (size: 0x1)
    int32 CollisionMask;                                                              // 0x007C (size: 0x4)
    float StepAngle;                                                                  // 0x0080 (size: 0x4)

}; // Size: 0x88

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

class UStaticTorchDataComponent : public UDataComponent
{
    bool bIsTorchActive;                                                              // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UStaticTorchProxyComponent : public UProxyComponent
{
    float ActiveSecondsPerUnitFuel;                                                   // 0x0028 (size: 0x4)
    float NightShroudRadius;                                                          // 0x002C (size: 0x4)

}; // Size: 0x30

class UStructureDataComponent : public UDataComponent
{
    bool bRestrictedMode;                                                             // 0x00A8 (size: 0x1)
    bool bOnFoundation;                                                               // 0x00C8 (size: 0x1)
    EAnvilBuildStructureType StructureType;                                           // 0x00E8 (size: 0x1)
    int64 BuilderId;                                                                  // 0x0108 (size: 0x8)
    int32 TownFamilyAreaId;                                                           // 0x0128 (size: 0x4)

}; // Size: 0x148

class UStructureProtectionProxyComponent : public UProxyComponent
{
    float SnappedFoundationDamageMitigation;                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

class UStructureProxyComponent : public UProxyComponent
{
    bool bCannotBeDismantled;                                                         // 0x0028 (size: 0x1)
    bool bRequireSupport;                                                             // 0x0029 (size: 0x1)
    bool IgnoreMeshVisbilityChanges;                                                  // 0x002A (size: 0x1)
    EAnvilBuildStructureType StructureType;                                           // 0x002B (size: 0x1)

}; // Size: 0x30

class USupplyStorageProxyComponent : public UProxyComponent
{
}; // Size: 0x28

class UTeamDataComponent : public UDataComponent
{
    uint8 TeamID;                                                                     // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UTeamProxyComponent : public UProxyComponent
{
    uint8 TeamID;                                                                     // 0x0028 (size: 0x1)
    EAnvilAccessibilityType Accessibility;                                            // 0x0029 (size: 0x1)
    bool bAlwaysAllowAccessWhenScorched;                                              // 0x002A (size: 0x1)

}; // Size: 0x30

class UTechCenterProxyComponent : public UProxyComponent
{
    TArray<uint32> TechCountList;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UTechItemTemplate : public UObject
{
    FString CodeNameString;                                                           // 0x0028 (size: 0x10)
    int32 CodeName;                                                                   // 0x0038 (size: 0x4)
    FText NameText;                                                                   // 0x0040 (size: 0x18)
    FText Description;                                                                // 0x0058 (size: 0x18)
    class UTexture2D* Image;                                                          // 0x0070 (size: 0x8)

}; // Size: 0x78

class UTownHallDataComponent : public UDataComponent
{
    uint8 Tier;                                                                       // 0x00A8 (size: 0x1)
    bool bIsSmallCamp;                                                                // 0x00C8 (size: 0x1)
    uint8 TownHallId;                                                                 // 0x00E8 (size: 0x1)
    int32 PledgedPlayersArrayCount;                                                   // 0x0108 (size: 0x4)
    int32 NumTotalHouses;                                                             // 0x0128 (size: 0x4)
    int32 NumUnclaimedHouses;                                                         // 0x0148 (size: 0x4)
    int32 NumTotalTents;                                                              // 0x0168 (size: 0x4)
    int32 NumUnclaimedTents;                                                          // 0x0188 (size: 0x4)
    int32 NumReinforcementSupplies;                                                   // 0x01A8 (size: 0x4)
    uint8 TownNameId;                                                                 // 0x01C8 (size: 0x1)
    uint8 TownNameOrdinal;                                                            // 0x01E8 (size: 0x1)

}; // Size: 0x208

class UTownHallProxyComponent : public UProxyComponent
{
    uint8 Tier;                                                                       // 0x0028 (size: 0x1)
    bool bIsSmallCamp;                                                                // 0x0029 (size: 0x1)
    bool bLocalReinforcementOnly;                                                     // 0x002A (size: 0x1)
    float AbandonedStartTime;                                                         // 0x002C (size: 0x4)

}; // Size: 0x30

class UTownMarkerProxyComponent : public UProxyComponent
{
    float InfluenceRadius;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

class UTrapDataComponent : public UDataComponent
{
    bool bWasTriggered;                                                               // 0x00A8 (size: 0x1)

}; // Size: 0xC8

class UTrapProxyComponent : public UProxyComponent
{
    float PlayerTrapDurationSec;                                                      // 0x0028 (size: 0x4)
    float AnimalBleedDamagePerSec;                                                    // 0x002C (size: 0x4)
    float NormalizedAnimalEscapeChance;                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UUpgradeDataComponent : public UDataComponent
{
    int32 UpgradeTarget;                                                              // 0x00A8 (size: 0x4)
    int32 PopRequirement;                                                             // 0x00C8 (size: 0x4)
    uint8 TierPrerequisite;                                                           // 0x00E8 (size: 0x1)
    int32 WorkRequirement;                                                            // 0x0108 (size: 0x4)
    int32 ProcessedWoodRequirement;                                                   // 0x0128 (size: 0x4)
    int32 ProcessedStoneRequirement;                                                  // 0x0148 (size: 0x4)
    int32 ProcessedIronRequirement;                                                   // 0x0168 (size: 0x4)
    int32 ReinforcedWoodRequirement;                                                  // 0x0188 (size: 0x4)
    int32 SilverRequirement;                                                          // 0x01A8 (size: 0x4)
    int32 AnimalFatRequirement;                                                       // 0x01C8 (size: 0x4)
    int32 AnimalBonesRequirement;                                                     // 0x01E8 (size: 0x4)
    int32 ProcessedLeatherRequirement;                                                // 0x0208 (size: 0x4)
    int32 WorkSubmitted;                                                              // 0x0228 (size: 0x4)
    int32 ProcessedWoodSubmitted;                                                     // 0x0248 (size: 0x4)
    int32 ProcessedStoneSubmitted;                                                    // 0x0268 (size: 0x4)
    int32 ProcessedIronSubmitted;                                                     // 0x0288 (size: 0x4)
    int32 ReinforcedWoodSubmitted;                                                    // 0x02A8 (size: 0x4)
    int32 SilverSubmitted;                                                            // 0x02C8 (size: 0x4)
    int32 AnimalFatSubmitted;                                                         // 0x02E8 (size: 0x4)
    int32 AnimalBonesSubmitted;                                                       // 0x0308 (size: 0x4)
    int32 ProcessedLeatherSubmitted;                                                  // 0x0328 (size: 0x4)
    int32 bIsUpgrading;                                                               // 0x0348 (size: 0x4)

}; // Size: 0x368

class UUpgradeProxyComponent : public UProxyComponent
{
    TSubclassOf<class UEntityTemplate> UpgradeTarget;                                 // 0x0028 (size: 0x8)
    int32 GoldRequirement;                                                            // 0x0030 (size: 0x4)
    int32 PopRequirement;                                                             // 0x0034 (size: 0x4)
    uint8 TierPrerequisite;                                                           // 0x0038 (size: 0x1)
    int32 WorkRequirement;                                                            // 0x003C (size: 0x4)
    int32 ProcessedWoodRequirement;                                                   // 0x0040 (size: 0x4)
    int32 ProcessedStoneRequirement;                                                  // 0x0044 (size: 0x4)
    int32 ProcessedIronRequirement;                                                   // 0x0048 (size: 0x4)
    int32 ReinforcedWoodRequirement;                                                  // 0x004C (size: 0x4)
    int32 SilverRequirement;                                                          // 0x0050 (size: 0x4)
    int32 AnimalFatRequirement;                                                       // 0x0054 (size: 0x4)
    int32 AnimalBonesRequirement;                                                     // 0x0058 (size: 0x4)
    int32 ProcessedLeatherRequirement;                                                // 0x005C (size: 0x4)

}; // Size: 0x60

class UVehicleMovementDataComponent : public UDataComponent
{
    FVector Velocity;                                                                 // 0x00A8 (size: 0x18)
    FVector FrontAxleCastHit;                                                         // 0x00D8 (size: 0x18)
    FVector RearAxleCastHit;                                                          // 0x0108 (size: 0x18)
    uint8 SeatOccupancyBits;                                                          // 0x0138 (size: 0x1)

}; // Size: 0x158

class UVehicleMovementProxyComponent : public UProxyComponent
{
    float Acceleration;                                                               // 0x0028 (size: 0x4)
    float MaxVelocity;                                                                // 0x002C (size: 0x4)
    float RotationalSpeed;                                                            // 0x0030 (size: 0x4)
    float SprintFactor;                                                               // 0x0034 (size: 0x4)
    float SprintRotationalSpeedFactor;                                                // 0x0038 (size: 0x4)
    float SprintStaminaDrain;                                                         // 0x003C (size: 0x4)
    float WalkStaminaDrain;                                                           // 0x0040 (size: 0x4)
    bool bGroupVehicle;                                                               // 0x0044 (size: 0x1)
    bool bYawInPlace;                                                                 // 0x0045 (size: 0x1)
    bool bLadderMovement;                                                             // 0x0046 (size: 0x1)
    TSubclassOf<class UEntityTemplate> CollisionEffect;                               // 0x0048 (size: 0x8)
    float RammingDamage;                                                              // 0x0050 (size: 0x4)
    float RammingVelocityFactor;                                                      // 0x0054 (size: 0x4)
    EAnvilDamageType RammingDamageType;                                               // 0x0058 (size: 0x1)
    bool bDoAxleRaycasts;                                                             // 0x0059 (size: 0x1)
    bool bWaterVehicle;                                                               // 0x005A (size: 0x1)
    bool bUsePitch;                                                                   // 0x005B (size: 0x1)
    FVector FrontAxleOffset;                                                          // 0x0060 (size: 0x18)
    FVector RearAxleOffset;                                                           // 0x0078 (size: 0x18)

}; // Size: 0x90

class UVehicleSeatProxyComponent : public UProxyComponent
{
    EAnvilCharacterStance MountedStance;                                              // 0x0028 (size: 0x1)
    FVector PlayerOffset;                                                             // 0x0030 (size: 0x18)
    FVector PlayerExitOffset;                                                         // 0x0048 (size: 0x18)
    bool bIsDriver;                                                                   // 0x0060 (size: 0x1)
    bool bIsLeft;                                                                     // 0x0061 (size: 0x1)
    bool bUseMountedWeapon;                                                           // 0x0062 (size: 0x1)
    bool bUseDeployable;                                                              // 0x0063 (size: 0x1)
    bool bMustNearExitToMount;                                                        // 0x0064 (size: 0x1)
    bool bRevertRequiredEquipments;                                                   // 0x0065 (size: 0x1)
    int32 AnimationIndex;                                                             // 0x0068 (size: 0x4)
    float MountedAttackDamageMultiplier;                                              // 0x006C (size: 0x4)
    TArray<class TSubclassOf<UItemTemplate>> RequiredEquipments;                      // 0x0070 (size: 0x10)

}; // Size: 0x80

class UWellDataComponent : public UDataComponent
{
    float TotalLevel;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xC8

class UWellProxyComponent : public UProxyComponent
{
    int32 WaterGenerationTimeSec;                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

#endif
