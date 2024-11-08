---@meta

---@class AAnvilPrefab : AActor
AAnvilPrefab = {}


---@class AAnvilRockActor : AAnvilPrefab
---@field ArrowComponent UArrowComponent
---@field RockMeshComponent UStaticMeshComponent
AAnvilRockActor = {}



---@class AAnvilTreeActor : AActor
---@field EntityTemplate TSubclassOf<UEntityTemplate>
---@field ArrowComponent UArrowComponent
---@field StaticMesh UStaticMeshComponent
AAnvilTreeActor = {}



---@class AAnvilWaterPlane : AActor
---@field Arrow UArrowComponent
---@field WaterMesh UStaticMeshComponent
AAnvilWaterPlane = {}



---@class ADynamicPrefab : AActor
---@field CodeNameString FString
---@field CodeName int32
---@field ArrowComponent UArrowComponent
ADynamicPrefab = {}



---@class AFootprint : AActor
---@field bAutoSet boolean
---@field bShowMesh boolean
---@field bFillGroundCheckPoints boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field StructureTiers TMap<TSubclassOf<UEntityTemplate>, boolean>
---@field FootprintSharedComponents TArray<FFootprintSharedCompEntry>
---@field FootprintVisualizer UCollisionVisualizerComponent
---@field MeshVisualizers TArray<UCollisionVisualizerComponent>
---@field StaticMeshVisualizers TArray<UStaticMeshComponent>
AFootprint = {}



---@class ATemplate : AActor
ATemplate = {}


---@class AUnderworldModulePrefab : AAnvilPrefab
---@field ArrowComponent UArrowComponent
---@field ModuleFootprint UBoxComponent
AUnderworldModulePrefab = {}



---@class AVisActorBase : AActor
---@field TemplateCDO UEntityTemplate
AVisActorBase = {}



---@class FAcceptedFood
---@field Item TSubclassOf<UItemTemplate>
---@field ConversionRate int32
FAcceptedFood = {}



---@class FAnvilOutput
---@field OutputCodeName TSubclassOf<UItemTemplate>
---@field OutputCodeNameVisVar int32
---@field NumHitsToConvert int32
---@field TargetHeat float
FAnvilOutput = {}



---@class FAnvilSimActivity
---@field State EAnvilSimActivityState
---@field bChainable boolean
---@field Delay float
---@field AdditionalDelays float
---@field AttackChainDelays float
---@field Duration float
---@field AttackChainDurations float
---@field MovementSpeedModifier float
---@field RotationSpeedModifier float
---@field bRepeatable boolean
---@field bRequireAim boolean
---@field StaminaCost float
---@field AimedStaminaCost float
FAnvilSimActivity = {}



---@class FBasicCount
---@field CodeName int32
---@field Count int32
FBasicCount = {}



---@class FBasicItemAndPayloadCount
---@field CodeName TSubclassOf<UItemTemplate>
---@field CodeNameVisVar int32
---@field Payload uint8
---@field Count int32
FBasicItemAndPayloadCount = {}



---@class FBasicItemCount
---@field CodeName TSubclassOf<UItemTemplate>
---@field CodeNameVisVar int32
---@field Count int32
FBasicItemCount = {}



---@class FCentralMarketplaceListing
---@field ListingId int32
---@field Item FItemCount
---@field PricePerItem int32
---@field ListingOwnerOnlineId int64
---@field NumItemsFulfilled int32
FCentralMarketplaceListing = {}



---@class FCentralMarketplaceOrderItem
---@field Base FGridItem
FCentralMarketplaceOrderItem = {}



---@class FCentralMarketplaceUserData
---@field DataVersion int32
---@field DataForMarketEntityId int64
---@field DataForMarketMapHash int32
---@field SaleListings TArray<FCentralMarketplaceListing>
---@field OrderListings TArray<FCentralMarketplaceListing>
FCentralMarketplaceUserData = {}



---@class FCompressedTileLayerDataInfo
---@field X int32
---@field Y int32
---@field Layer int32
---@field DataSize uint32
---@field DataIndex int32
FCompressedTileLayerDataInfo = {}



---@class FContextfulPlacementStatus
---@field Status EAnvilPlacementStatus
---@field Context int32
FContextfulPlacementStatus = {}



---@class FCookingRecipe
---@field InputItems TArray<FBasicItemCount>
---@field OutputItems TArray<FBasicItemCount>
---@field CookDurationSec float
---@field TargetNormalizedTemperature float
FCookingRecipe = {}



---@class FCraftingRecipe
---@field RecipeIngredients TArray<FBasicItemCount>
---@field CraftedItem TSubclassOf<UItemTemplate>
---@field CraftedItemVisVar int32
---@field QualityIngredient TSubclassOf<UItemTemplate>
---@field QualityIngredientVisVar int32
FCraftingRecipe = {}



---@class FDismantleVoteInfo
---@field VoterId int64
---@field VoteTime int32
---@field VoteCount uint8
FDismantleVoteInfo = {}



---@class FDryingRackRecipe
---@field InputItem TSubclassOf<UItemTemplate>
---@field InputItemVisVar int32
---@field OutputItem TSubclassOf<UItemTemplate>
---@field OutputItemVisVar int32
---@field DryingDurationSeconds float
FDryingRackRecipe = {}



---@class FDynamicPrefabSpawnInfo
---@field CodeName TSubclassOf<ADynamicPrefab>
---@field CodeNameVisVar int32
---@field SpawnWeight float
---@field SpawnWeightVisVar float
FDynamicPrefabSpawnInfo = {}



---@class FEntityHandle
---@field ID uint64
---@field CachedPtr AVisActorBase
FEntityHandle = {}



---@class FExplorationSpawnedEntityAvoidInfo
---@field EntityTypeToAvoid TSubclassOf<UEntityTemplate>
---@field EntityTypeToAvoidVisVar int32
---@field Distance float
FExplorationSpawnedEntityAvoidInfo = {}



---@class FExplorationSpawnedEntityInfo
---@field SpawnedEntity TSubclassOf<UEntityTemplate>
---@field SpawnedEntityVisVar int32
---@field MinDistFromFamilyArea float
---@field ChanceToSpawnPerMin float
---@field MinDistanceBetweenSpawns float
---@field MaxNumInRadius int32
---@field bRequiresNavmesh boolean
---@field bConsiderAllFamilyAreas boolean
---@field bDontSpawnInSettlements boolean
---@field bDoExpensiveForbiddenSurfaceCheck boolean
---@field CompatibleSurfaceTypes int32
---@field ForbiddenSurfaceTypes int32
---@field OtherResourcesToAvoidByDistance TArray<FExplorationSpawnedEntityAvoidInfo>
FExplorationSpawnedEntityInfo = {}



---@class FFamilyHouseInfoType
---@field MapHash int32
---@field FamilyId int32
---@field bHasHousePledge boolean
FFamilyHouseInfoType = {}



---@class FFootprintSharedCompEntry
---@field Comp UProxyComponent
---@field bHighlight boolean
---@field bHide boolean
---@field bNoCopyToBuildSite boolean
FFootprintSharedCompEntry = {}



---@class FFuelType
---@field FuelItem TSubclassOf<UItemTemplate>
---@field FuelItemVisVar int32
---@field BurnDurationSec float
---@field NormalizedTemperature float
FFuelType = {}



---@class FGridItem
---@field CodeName int32
---@field UnderlyingCodeName int32
---@field Payload uint8
FGridItem = {}



---@class FHeatingFuel
---@field FuelItem TSubclassOf<UItemTemplate>
---@field BurnDurationSec float
FHeatingFuel = {}



---@class FHitConverterInput
---@field InputCodeName TSubclassOf<UItemTemplate>
---@field InputCodeNameVisVar int32
---@field OutputStackSize int32
---@field OutputStackSizeVisVar int32
---@field NumHitsToConvert int32
FHitConverterInput = {}



---@class FHitConverterOutput
---@field OutputCodeName TSubclassOf<UItemTemplate>
---@field OutputCodeNameVisVar int32
---@field InputList TArray<FHitConverterInput>
---@field InputListVisVar TArray<FHitConverterInput>
FHitConverterOutput = {}



---@class FHitInfo
---@field Mask int32
---@field HitPosition FVector
---@field Normal FVector
---@field Distance float
---@field Time float
---@field Surface EAnvilPhysicalSurfaceType
---@field bInitialOverlap boolean
FHitInfo = {}



---@class FHousePledgedPlayerArray
---@field WrappedArray TArray<int64>
FHousePledgedPlayerArray = {}



---@class FInventoryItem
---@field Base FGridItem
---@field DedicatedItem FGridItem
---@field Count int32
---@field AcceptedTags int64
---@field Durability float
---@field ItemFlags uint8
---@field Payload uint8
---@field StackLimit int32
---@field bIsDisabled boolean
---@field bCantArmDueToHeavyItem boolean
---@field BackgroundType EAnvilItemSlotBackgroundType
FInventoryItem = {}



---@class FItemCount
---@field CodeName TSubclassOf<UItemTemplate>
---@field CodeNameVisVar int32
---@field UnderlyingCodeName TSubclassOf<UItemTemplate>
---@field UnderlyingCodeNameVisVar int32
---@field Durability float
---@field Count int32
---@field ItemFlags uint8
---@field Payload uint8
FItemCount = {}



---@class FItemSlot
---@field ProxyRepeat int32
---@field bOr boolean
---@field HeldItem TSubclassOf<UItemTemplate>
---@field Count int32
---@field StackLimit int32
---@field bAllowWithdrawal boolean
---@field bIsPlayerEquipmentSlot boolean
---@field AcceptedTags TArray<EAnvilItemTag>
---@field RequiredTags TArray<EAnvilItemTag>
---@field ProhibitedTags TArray<EAnvilItemTag>
---@field DedicatedItemType TSubclassOf<UItemTemplate>
---@field DedicatedUnderlyingItemType TSubclassOf<UItemTemplate>
---@field bCheckDedicatedUnderlyingItem boolean
---@field RequiredEnablingItem TSubclassOf<UItemTemplate>
---@field BackgroundType EAnvilItemSlotBackgroundType
FItemSlot = {}



---@class FLatticeMineProxyData
---@field ChunkExtents FVector
---@field GridDimensions FVector
---@field ChunkTypes TMap<TSubclassOf<UEntityTemplate>, float>
FLatticeMineProxyData = {}



---@class FLootTableItem
---@field ItemToDrop FItemCount
---@field NormalizedChanceToDrop float
---@field MinDurability float
---@field MaxDurability float
FLootTableItem = {}



---@class FMarketShopItem
---@field Base FGridItem
---@field Count int32
---@field Durability float
---@field Payload uint8
---@field Price int32
---@field DefaultPrice int32
FMarketShopItem = {}



---@class FMinDistBetweenStructsEntry
---@field CodeName TSubclassOf<UEntityTemplate>
---@field CodeNameVisVar int32
---@field Range float
---@field NumLimit uint8
FMinDistBetweenStructsEntry = {}



---@class FNavMeshTri
---@field Verts FVector
---@field NumVerts int32
---@field bWalkable boolean
---@field Layer int32
FNavMeshTri = {}



---@class FNightShroudLightSource
---@field LightPosition FVector
---@field LightRadius float
FNightShroudLightSource = {}



---@class FPlayerAgeDeployData
---@field TeamId uint8
---@field FamilyHouseInfo FFamilyHouseInfoType
---@field PledgedTownHallInfo FPledgeInfoType
---@field PledgedMilitiaInfo FPledgeInfoType
---@field AllowedToSpawnUnixTimeStamp int64
---@field OfflineCharacterServerName FString
---@field bIsOfflineAtFamilyCenter boolean
FPlayerAgeDeployData = {}



---@class FPledgeInfoType
---@field MapHash int32
---@field TownHallId int32
---@field bHasHousePledge boolean
---@field bHasBedPledge boolean
FPledgeInfoType = {}



---@class FPledgedPlayer
FPledgedPlayer = {}


---@class FProducableItem
---@field ProducedItem TSubclassOf<UItemTemplate>
---@field ProducedItemVisVar int32
---@field InputItems TArray<FBasicItemCount>
---@field ProductionTime float
---@field OutputCount uint8
---@field bRequiresResearch boolean
FProducableItem = {}



---@class FR2Family
---@field FamilyId int32
---@field TeamId uint8
---@field EntityId int64
---@field MapHash int32
---@field EntityGlobalPosition FVector
---@field bAllowPublicPledging boolean
---@field bIsAbandoned boolean
---@field MemberOnlineIdList TArray<FR2FamilyMember>
---@field AlliedFamilyIdList TArray<int32>
FR2Family = {}



---@class FR2FamilyMember
---@field OnlineId int64
---@field Role EAnvilR2FamilyRoleType
FR2FamilyMember = {}



---@class FR2FloatRange
---@field Min float
---@field Max float
FR2FloatRange = {}



---@class FR2WeatherEvent
---@field Config FR2WeatherEventConfig
---@field StartUnixTimestamp int64
FR2WeatherEvent = {}



---@class FR2WeatherEventConfig
---@field Type EAnvilR2WeatherEventType
---@field StartingPositionGlobalX float
---@field StartingPositionGlobalY float
---@field InnerRadius float
---@field OuterRadius float
---@field VelocityX float
---@field VelocityY float
---@field MaxDurationSec int32
---@field PeakIntensity float
FR2WeatherEventConfig = {}



---@class FRayCastResult
---@field bHasBlockingHit boolean
---@field BlockingHit FHitInfo
FRayCastResult = {}



---@class FRefineQueueItem
---@field Index uint8
---@field Resources TArray<FItemCount>
---@field ItemQuality uint8
FRefineQueueItem = {}



---@class FReplicatedRefineQueueItem
---@field Index uint8
---@field ItemQuality uint8
FReplicatedRefineQueueItem = {}



---@class FStatusMessage
---@field MessageType EAnvilStatusMessageType
FStatusMessage = {}



---@class FStructureStats
---@field CodeName TSubclassOf<UEntityTemplate>
---@field CodeNameVisVar int32
---@field EntityId int64
---@field WorldPosition FVector
---@field MaxHealth float
---@field Health float
---@field DamageTargetType EAnvilDamageTargetType
---@field TeamId uint8
---@field TownHallId int32
---@field MarkerFamilyId int32
---@field StructureFamilyId int32
---@field bShouldDecay boolean
---@field bCanDecayBePrevented boolean
---@field TimeUntilDecaySec float
---@field DecayDamagePerHour float
---@field bCanBeScorched boolean
---@field ScorchIntensity float
---@field BurntIntensity float
---@field ScorchState EAnvilScorchState
---@field HousedLivestockCount uint8
---@field MaxLivestockCount uint8
---@field PledgedPlayerId int64
---@field FarmWaterDuration float
---@field FarmWaterDurationMax float
---@field CookWaterDurationRemainingSec float
---@field CookCurrentTemperature float
---@field WorldEntranceDestinationMapId uint8
---@field WorldEntranceId int32
---@field ModuleEdgeList TArray<EAnvilUnderworldModuleEdgeType>
---@field RemainingTimeUntilCollapse_Sec float
FStructureStats = {}



---@class FTavernBuffConfig
---@field NumPlayer uint8
---@field Level uint8
---@field Duration float
FTavernBuffConfig = {}



---@class FTechItem
FTechItem = {}


---@class FTestStruct
---@field Num int32
FTestStruct = {}



---@class FUnderworldModuleDebugInfo
---@field Modules TArray<FUnderworldModuleDebugInfoEntry>
FUnderworldModuleDebugInfo = {}



---@class FUnderworldModuleDebugInfoEntry
---@field CodeName TSubclassOf<UEntityTemplate>
---@field CodeNameVisVar int32
---@field PositionX float
---@field PositionY float
---@field NumRotations uint8
---@field SpawnedPrefabCodeName int32
FUnderworldModuleDebugInfoEntry = {}



---@class FVisvarPowerConnection
---@field RelativeAngle float
---@field InnerWidth float
---@field OuterWidth float
---@field ID uint64
FVisvarPowerConnection = {}



---@class FWeatherData
---@field NormalizedSeason float
---@field RainIntensity float
---@field SnowIntensity float
---@field Temperature float
---@field Wetness float
---@field Wind float
---@field WindDir FVector
FWeatherData = {}



---@class FWorldEntityBeaconTowerData
---@field TowerId int32
---@field bActive boolean
---@field LinkRange float
---@field DetectionRange float
FWorldEntityBeaconTowerData = {}



---@class FWorldEntityCentralMarketplaceData
---@field DataVersion int32
FWorldEntityCentralMarketplaceData = {}



---@class FWorldEntityData
---@field DataType EAnvilWorldEntityType
---@field WildSpawnData FWorldEntityWildSpawnData
---@field TownHallData FWorldEntityTownHallData
---@field BeaconTowerData FWorldEntityBeaconTowerData
---@field FamilyCenterData FWorldEntityFamilyCenterData
---@field CentralMarketplaceData FWorldEntityCentralMarketplaceData
FWorldEntityData = {}



---@class FWorldEntityEntry
---@field Type EAnvilWorldEntityType
---@field CodeName int32
---@field EntityId int64
---@field RegionIndex int32
---@field TeamId uint8
---@field WorldPos FVector
---@field Data FWorldEntityData
FWorldEntityEntry = {}



---@class FWorldEntityFamilyCenterData
---@field FamilyId int32
---@field StoredFoodCounts TArray<FBasicItemAndPayloadCount>
FWorldEntityFamilyCenterData = {}



---@class FWorldEntityTownHallData
---@field TownHallId int32
---@field TownNameOrdinal uint8
---@field TownNameId uint8
---@field Tier uint8
---@field NumTotalHouses int32
---@field NumUnclaimedHouses int32
---@field NumTotalTents int32
---@field NumUnclaimedTents int32
---@field NumPledgedPlayers int32
---@field StoredFoodCounts TArray<FBasicItemAndPayloadCount>
---@field bTownUnderAttack boolean
---@field bCallForReinforcements boolean
FWorldEntityTownHallData = {}



---@class FWorldEntityWildSpawnData
---@field bIsActiveWildSpawn boolean
FWorldEntityWildSpawnData = {}



---@class UAIStimulusProxyComponent : UProxyComponent
---@field Type EAnvilStimulusType
---@field bAgroTarget boolean
UAIStimulusProxyComponent = {}



---@class UAdminEnvDataComponent : UDataComponent
---@field bDebugDrawHook boolean
---@field bShowStructureStatsHook boolean
---@field bShowWeatherStatsHook boolean
---@field bFastReinforcementsAlertCooldown boolean
UAdminEnvDataComponent = {}



---@class UAdminEnvProxyComponent : UProxyComponent
UAdminEnvProxyComponent = {}


---@class UAdvancedSnappingProxyComponent : UProxyComponent
---@field bBlockSnapping boolean
---@field bDisableMinSnapWhenNotSnapping boolean
---@field bNoOverlap boolean
---@field bOverrideAngleOverlapMin boolean
---@field OverridedAngleOverlapMin float
---@field NumSnappingRequired uint8
---@field MaxOverlapDistOverride float
UAdvancedSnappingProxyComponent = {}



---@class UAnimalAIDataComponent : UDataComponent
---@field CurrentState EAnvilAnimalState
UAnimalAIDataComponent = {}



---@class UAnimalAIProxyComponent : UProxyComponent
---@field VisionRange float
---@field VisionAngle float
---@field SlowSpeed float
---@field FastSpeed float
---@field Acceleration float
---@field RotationSpeed float
---@field TrapTime float
---@field WalkingTime float
---@field bHoming boolean
---@field bAvoidRoads boolean
---@field bIsTrappable boolean
---@field HomingDistance float
UAnimalAIProxyComponent = {}



---@class UAnimalAttackProxyComponent : UProxyComponent
---@field AttackTargetTypes TArray<TSubclassOf<UEntityTemplate>>
---@field OnRoadVisionRange float
---@field PosturingHoldDist float
---@field PosturingAggroDist float
---@field PosturingDuration float
---@field ChaseDuration float
---@field ChaseCooldown float
---@field AttackOffset FVector
---@field AttackRadius float
---@field AttackFrequency float
---@field AttackDelay float
---@field MinNumAttacks uint8
---@field MaxNumAttacks uint8
---@field AttackDamage int32
---@field AttackDamageType EAnvilDamageType
---@field bDoesFirstAttackFail boolean
UAnimalAttackProxyComponent = {}



---@class UAnimalFlyingProxyComponent : UProxyComponent
---@field CruisingHeightMin float
---@field CruisingHeightMax float
---@field SlowTurningAccel float
---@field FastTurningAccel float
---@field ClimbingSpeedModifier float
---@field DivingSpeedModifier float
---@field DiveRange float
UAnimalFlyingProxyComponent = {}



---@class UAnimalLivestockProxyComponent : UProxyComponent
---@field MaxDistanceToHomeLivestockStructure float
---@field FoodItem TSubclassOf<UItemTemplate>
---@field ProducedItems TArray<TSubclassOf<UItemTemplate>>
---@field FeedingTimeOfDayHour int32
---@field bFeedsAtNight boolean
---@field NormalizedChanceToProduceWithoutFood float
---@field TimeToBecomeWildSec float
---@field WildEntity TSubclassOf<UEntityTemplate>
UAnimalLivestockProxyComponent = {}



---@class UAnimalRopeAttachableDataComponent : UDataComponent
---@field AttachedTarget FEntityHandle
UAnimalRopeAttachableDataComponent = {}



---@class UAnimalRopeAttachableProxyComponent : UProxyComponent
---@field MaxFollowSpeed float
UAnimalRopeAttachableProxyComponent = {}



---@class UAnimalRopeSlotDataComponent : UDataComponent
---@field AttachedTarget FEntityHandle
UAnimalRopeSlotDataComponent = {}



---@class UAnimalRopeSlotProxyComponent : UProxyComponent
UAnimalRopeSlotProxyComponent = {}


---@class UAnimalScavengeProxyComponent : UProxyComponent
---@field SearchRange float
---@field EatRange float
---@field ScavengeFrequency float
---@field TargetTypes TArray<TSubclassOf<UEntityTemplate>>
UAnimalScavengeProxyComponent = {}



---@class UAnimalTameProxyComponent : UProxyComponent
---@field FeedingNum uint8
---@field FeedingFreqSeconds float
---@field TamingFood TSubclassOf<UItemTemplate>
---@field TamedEntity TSubclassOf<UEntityTemplate>
UAnimalTameProxyComponent = {}



---@class UAnvilDataComponent : UDataComponent
---@field GameplayType EAnvilAnvilGameplayType
---@field InputItemName int32
---@field CurrentSelectedOutputIndex uint8
---@field OutputList TArray<FAnvilOutput>
---@field HitCounter float
UAnvilDataComponent = {}



---@class UAnvilProxyComponent : UProxyComponent
---@field GameplayType EAnvilAnvilGameplayType
---@field InputItemName TSubclassOf<UItemTemplate>
---@field OutputList TArray<FAnvilOutput>
---@field RequiredTool EAnvilToolType
UAnvilProxyComponent = {}



---@class UArmorDataComponent : UDataComponent
---@field HeadArmourType EAnvilArmourType
---@field BodyArmourType EAnvilArmourType
UArmorDataComponent = {}



---@class UArmorProxyComponent : UProxyComponent
UArmorProxyComponent = {}


---@class UBarnProxyComponent : UProxyComponent
---@field ParentType TSubclassOf<UEntityTemplate>
---@field ChildType TSubclassOf<UEntityTemplate>
---@field FoodType TSubclassOf<UItemTemplate>
---@field BreedingHoursMin uint8
---@field BreedingHoursMax uint8
UBarnProxyComponent = {}



---@class UBaseBuildSiteEntity : UEntityTemplate
---@field BuildSiteComp UBuildSiteProxyComponent
---@field TeamComp UTeamProxyComponent
---@field HealthComp UHealthProxyComponent
---@field MeshCollisionComp UMeshCollisionProxyComponent
---@field FootprintComp UFootprintCollisionProxyComponent
---@field UseBoxComp UBoxCollisionProxyComponent
---@field ActionBoxComp UBoxCollisionProxyComponent
---@field DecayComp UDecayProxyComponent
---@field StructureComp UStructureProxyComponent
UBaseBuildSiteEntity = {}



---@class UBaseStructureEntity : UEntityTemplate
---@field TeamComp UTeamProxyComponent
---@field HealthComp UHealthProxyComponent
---@field RepairComp URepairProxyComponent
---@field StructureComp UStructureProxyComponent
---@field DestroyableComp UDestroyableProxyComponent
---@field MeshCollisionComp UMeshCollisionProxyComponent
---@field FootprintComp UFootprintCollisionProxyComponent
---@field UseBoxComp UBoxCollisionProxyComponent
---@field ActionBoxComp UBoxCollisionProxyComponent
---@field DecayComp UDecayProxyComponent
---@field ScorchComp UScorchProxyComponent
UBaseStructureEntity = {}



---@class UBeaconTowerDataComponent : UDataComponent
---@field bDetected boolean
---@field bInformed boolean
UBeaconTowerDataComponent = {}



---@class UBeaconTowerProxyComponent : UProxyComponent
---@field bViewerNode boolean
---@field LinkRangeMinMax FR2FloatRange
---@field DetectionRangeMinMax FR2FloatRange
---@field AltitudeDeltaMinMax FR2FloatRange
---@field AltitudeCheckRadius float
---@field DetectionFuelCostPerHour float
---@field InformingFuelCostPerHour float
UBeaconTowerProxyComponent = {}



---@class UBoxCollisionProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UBoxCollisionProxyComponent = {}



---@class UBuildSiteDataComponent : UDataComponent
---@field NearbyPlayersRequired int32
---@field MaterialSubmissions TArray<int32>
---@field BuildGhostPlacementStatus FContextfulPlacementStatus
---@field PlacementInfoFlags int32
UBuildSiteDataComponent = {}



---@class UBuildSiteProxyComponent : UProxyComponent
---@field BuiltStructureEntity TSubclassOf<UEntityTemplate>
---@field BuildLocation int32
---@field CompatibleSurfaceTypes int32
---@field AllowedBuildAreas int32
---@field DisallowedBuildAreas int32
---@field RequiredTool EAnvilToolType
---@field bRequiresTownHall boolean
---@field bRequiresCamp boolean
---@field bRequiresSmallCamp boolean
---@field bRequiresClaimedFamilyHouse boolean
---@field bRequiresTerritoryOwnership boolean
---@field bBuildableOverRoads boolean
---@field bBuildableNearSpawnPoint boolean
---@field bBuildableInEnemyTerritory boolean
---@field bBuildableNearEnemies boolean
---@field bIsBuildableUnderground boolean
---@field bOnlyBuildableUnderground boolean
---@field bAllowRapidBuild boolean
---@field CanBuildTownStructureWithoutPledge boolean
---@field bBuildsInstantly boolean
---@field bMinDistanceCheckIgnoreEnemyStructures boolean
---@field bIsGridDiagonalPiece boolean
---@field TierPrerequisite uint8
---@field RequiredDeployable TSubclassOf<UItemTemplate>
---@field LevelCheckRayOffset FVector
---@field MaxHeightShift float
---@field AdditionalMaxHeightShift float
---@field MinDistBetweenStructs TArray<FMinDistBetweenStructsEntry>
---@field GridDiagonalPair TSubclassOf<UEntityTemplate>
---@field NearbyPlayersRequired int32
---@field MaterialRequirements TArray<FBasicCount>
UBuildSiteProxyComponent = {}



---@class UCannonProxyComponent : UProxyComponent
UCannonProxyComponent = {}


---@class UCapsuleCollisionProxyComponent : UProxyComponent
---@field Position FVector
---@field Rotation FRotator
---@field Radius float
---@field HalfHeight float
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UCapsuleCollisionProxyComponent = {}



---@class UCentralMarketplaceDataComponent : UDataComponent
---@field DataVersion int32
UCentralMarketplaceDataComponent = {}



---@class UCentralMarketplaceProxyComponent : UProxyComponent
UCentralMarketplaceProxyComponent = {}


---@class UChatMessage : UObject
UChatMessage = {}


---@class UCollisionProxyComponent : UProxyComponent
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UCollisionProxyComponent = {}



---@class UCollisionVisualizerComponent : UPrimitiveComponent
---@field ShapeBodySetup UBodySetup
---@field Extents FVector
---@field Color FLinearColor
---@field bHighlight boolean
---@field bIsCapsule boolean
UCollisionVisualizerComponent = {}



---@class UConstructionFacilityProxyComponent : UProxyComponent
---@field LocationType EAnvilBuildLocationType
---@field BuildSiteSpawnOffset FVector
---@field BuildSiteSpawnRotation FRotator
UConstructionFacilityProxyComponent = {}



---@class UCookingDataComponent : UDataComponent
---@field CookType EAnvilCookingType
---@field FuelList TArray<FFuelType>
---@field RecipeList TArray<FCookingRecipe>
---@field WaterDurationPerUnitItemAtMaxTempSecVisVar float
---@field FuelExpiryTimestampAgeSec int32
---@field CookCompleteTimestampAgeSec int32
---@field CurrentRecipeIndex int32
---@field NormalizedWaterLevel float
---@field EffectiveNormalizedTemp float
---@field bCanCookWithExistingOutputs uint8
---@field bIsFueled boolean
---@field bIsFoodBurning boolean
---@field bIsWatered boolean
UCookingDataComponent = {}



---@class UCookingProxyComponent : UProxyComponent
---@field CookType EAnvilCookingType
---@field FuelList TArray<FFuelType>
---@field RecipeList TArray<FCookingRecipe>
---@field FoodBurnDurationSec float
---@field WaterDurationPerUnitItemAtMaxTempSec float
---@field BellowsTemperatureModifier float
---@field TemperatureDiffHighQuality float
---@field TemperatureDiffMedQuality float
---@field TemperatureDiffLowQuality float
---@field bCanCookWithExistingOutputs uint8
UCookingProxyComponent = {}



---@class UCraftingDataComponent : UDataComponent
---@field RecipeList TArray<FCraftingRecipe>
UCraftingDataComponent = {}



---@class UCraftingProxyComponent : UProxyComponent
---@field RecipeList TArray<FCraftingRecipe>
UCraftingProxyComponent = {}



---@class UCustomHeightmapComponent : USceneComponent
UCustomHeightmapComponent = {}


---@class UCustomNavmeshVolumeComponent : USceneComponent
UCustomNavmeshVolumeComponent = {}


---@class UDataComponent : UActorComponent
UDataComponent = {}


---@class UDecayProxyComponent : UProxyComponent
---@field bEnabled boolean
---@field StartDelayHours float
---@field DecayTimeHours float
---@field bForceDecayPreventionFromTown boolean
UDecayProxyComponent = {}



---@class UDeployProxyComponent : UProxyComponent
---@field bRequireMounted boolean
---@field bCopyHealthPercentage boolean
---@field DeployedBuildSite TSubclassOf<UEntityTemplate>
UDeployProxyComponent = {}



---@class UDestroyableProxyComponent : UProxyComponent
---@field DestructionEffectEntity TSubclassOf<UEntityTemplate>
UDestroyableProxyComponent = {}



---@class UDryingRackProxyComponent : UProxyComponent
---@field Recipes TArray<FDryingRackRecipe>
---@field DesiredWetRange FR2FloatRange
---@field DesiredTempRange FR2FloatRange
---@field QualityChangeTime float
UDryingRackProxyComponent = {}



---@class UDynamicPrefabDataComponent : UDataComponent
---@field SpawnedPrefabCodeName int32
UDynamicPrefabDataComponent = {}



---@class UDynamicPrefabProxyComponent : UProxyComponent
---@field PrefabSpawnList TArray<FDynamicPrefabSpawnInfo>
UDynamicPrefabProxyComponent = {}



---@class UEditorSpawnerProxyComponent : UProxyComponent
UEditorSpawnerProxyComponent = {}


---@class UEntityAttachableDataComponent : UDataComponent
---@field AttachedChildEntity FEntityHandle
---@field AttachedParentEntity FEntityHandle
UEntityAttachableDataComponent = {}



---@class UEntityAttachableProxyComponent : UProxyComponent
---@field SlotId uint8
---@field SlotOffset FVector
---@field DetachLocation FVector
---@field SlotYaw float
---@field DetachYaw float
---@field AngleTolerance float
---@field DistanceTolerance float
---@field DetachMaxZDelta float
---@field bMirrorDetachLocation boolean
---@field TargetEntityTypes TArray<TSubclassOf<UEntityTemplate>>
---@field RequiredEquipments TArray<TSubclassOf<UItemTemplate>>
UEntityAttachableProxyComponent = {}



---@class UEntityTemplate : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field bStatic boolean
---@field RelevancyPolicy EEntityRelevancyPolicy
---@field RelevancyDistSqr float
---@field bSkipPersist boolean
---@field bShowOnMap boolean
---@field bUseScale boolean
---@field bObserver boolean
---@field SerializationType EEntitySerializationType
---@field bGenerateBoxCollisionsFromVisActor boolean
---@field bGenerateMeshCollisionsFromVisActor boolean
---@field GenerateMeshCollisionMask int32
---@field GenerateMeshCollisionStepAngle float
---@field bGenerateMeshCollisionVaultable boolean
---@field GenerateMeshCollisionSurfaceType EAnvilPhysicalSurfaceType
---@field Components TArray<UProxyComponent>
---@field VisActorClass TSubclassOf<AVisActorBase>
---@field VisActorTemplateClass TSubclassOf<AVisActorBase>
---@field VisActorDefaultObject AVisActorBase
UEntityTemplate = {}

---@param EntityType UClass
---@param ComponentType UClass
---@return UProxyComponent
function UEntityTemplate:GetProxyComponent(EntityType, ComponentType) end


---@class UEquipmentProxyComponent : UProxyComponent
UEquipmentProxyComponent = {}


---@class UExplorationSpawnerProxyComponent : UProxyComponent
---@field SpawnedEntitiesData TArray<FExplorationSpawnedEntityInfo>
UExplorationSpawnerProxyComponent = {}



---@class UFamilyCenterDataComponent : UDataComponent
---@field FamilyAreaRadius float
---@field AllowPublicPledging boolean
---@field bHasMembers boolean
UFamilyCenterDataComponent = {}



---@class UFamilyCenterProxyComponent : UProxyComponent
---@field FamilyAreaRadius float
---@field Tier uint8
UFamilyCenterProxyComponent = {}



---@class UFamilyInventoryProxyComponent : UProxyComponent
UFamilyInventoryProxyComponent = {}


---@class UFamilyListProxyComponent : UProxyComponent
UFamilyListProxyComponent = {}


---@class UFamilyUserProxyComponent : UProxyComponent
UFamilyUserProxyComponent = {}


---@class UFarmDataComponent : UDataComponent
---@field NormalizedWaterDuration float
---@field NormalizedFertilizeDuration float
UFarmDataComponent = {}



---@class UFarmProxyComponent : UProxyComponent
---@field FieldTypes TArray<TSubclassOf<UEntityTemplate>>
---@field RichSoilMaturityTimeModifier float
---@field WaterDurationMaxSeconds float
---@field WaterDurationPerUnitItem float
---@field EnvWetnessWaterDurationIncreaseMultiplier float
---@field FertilizeDurationPerUnitItem float
UFarmProxyComponent = {}



---@class UFishResourceProxyComponent : UProxyComponent
---@field ProbabilityWeight float
---@field FishingTimeMin float
---@field FishingTimeMax float
---@field ReelWindowTime float
---@field FishType TSubclassOf<UItemTemplate>
UFishResourceProxyComponent = {}



---@class UFootprintCollisionProxyComponent : UProxyComponent
---@field Box TSubclassOf<AFootprint>
---@field bAddToNavMesh boolean
---@field bUseMeshAsFootprint boolean
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UFootprintCollisionProxyComponent = {}



---@class UGateDataComponent : UDataComponent
---@field OpenCloseState EAnvilGateState
UGateDataComponent = {}



---@class UGateProxyComponent : UProxyComponent
---@field AutoCloseRange float
---@field AutoCloseTime float
---@field BreachProbCurve UCurveFloat
UGateProxyComponent = {}



---@class UGroundCheckBoxProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field GroundCheckPoints TArray<FVector>
UGroundCheckBoxProxyComponent = {}



---@class UHandsProxyComponent : UProxyComponent
---@field HandSlots TArray<FItemSlot>
UHandsProxyComponent = {}



---@class UHealthDataComponent : UDataComponent
---@field MaxHealth float
---@field Health float
---@field HealthLimit float
---@field VisualBloodAmount float
UHealthDataComponent = {}



---@class UHealthProxyComponent : UProxyComponent
---@field MaxHealth float
---@field Lifetime float
---@field AutoRegenRate float
---@field AutoRegenStartDelay float
---@field HitEffect TSubclassOf<UEntityTemplate>
---@field TargetType EAnvilDamageTargetType
---@field VisualBloodAmountRecoveryRate float
---@field AttackerVisualBloodAmountRatio float
---@field AttackerVisualBloodAmountMax float
UHealthProxyComponent = {}



---@class UHeatingDataComponent : UDataComponent
---@field FuelExpiryTimestampAgeSec int32
---@field bIsFueled boolean
---@field bIsBellowBoosted boolean
UHeatingDataComponent = {}



---@class UHeatingProxyComponent : UProxyComponent
---@field FuelList TArray<FHeatingFuel>
---@field NumItems int32
UHeatingProxyComponent = {}



---@class UHitConverterDataComponent : UDataComponent
---@field CurrentSelectedOutputIndex uint8
---@field OutputList TArray<FHitConverterOutput>
---@field HitCounter float
UHitConverterDataComponent = {}



---@class UHitConverterProxyComponent : UProxyComponent
---@field OutputList TArray<FHitConverterOutput>
---@field RequiredTool EAnvilToolType
UHitConverterProxyComponent = {}



---@class UHousingDataComponent : UDataComponent
---@field PlayerCapacity uint8
---@field AllowPublicPledging boolean
---@field IsGroupHouse boolean
---@field bIsTownTent boolean
---@field PledgedPlayerIds FHousePledgedPlayerArray
UHousingDataComponent = {}



---@class UHousingProxyComponent : UProxyComponent
---@field PlayerCapacity uint8
---@field IsGroupHouse boolean
---@field bRequiresCeilingCheck boolean
---@field bIsTownTent boolean
UHousingProxyComponent = {}



---@class UHungerDataComponent : UDataComponent
---@field Hunger float
UHungerDataComponent = {}



---@class UHungerProxyComponent : UProxyComponent
---@field HungerPerTick float
UHungerProxyComponent = {}



---@class UImpactSurfaceDataComponent : UDataComponent
---@field HitSurface EAnvilPhysicalSurfaceType
UImpactSurfaceDataComponent = {}



---@class UImpactSurfaceProxyComponent : UProxyComponent
UImpactSurfaceProxyComponent = {}


---@class UInventoryProxyComponent : UProxyComponent
---@field Slots TArray<FItemSlot>
---@field bUnpackCrates boolean
---@field bEnforceWithdrawalStamina boolean
---@field bOnlyAllowMaxDurabilityItems boolean
---@field bIsCheatBox uint8
---@field StackRule EAnvilInventoryStackRule
---@field NormalizedSpoilageFactor float
---@field LifespanWhenEmpty float
---@field bAllowWithdrawal boolean
---@field bAllowSubmission boolean
UInventoryProxyComponent = {}



---@class UItemTemplate : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field ItemTags TArray<EAnvilItemTag>
---@field ItemDurabilityType EAnvilItemDurabilityType
---@field ItemPayloadType EAnvilItemPayloadType
---@field PickupEntity TSubclassOf<UEntityTemplate>
---@field ItemDestroyedEffect TSubclassOf<UEntityTemplate>
---@field ItemInvokedEffect TSubclassOf<UEntityTemplate>
---@field ItemHitEffect TSubclassOf<UEntityTemplate>
---@field ArmedDurabilityLossPerSec float
---@field bRearmAfterConsumption boolean
---@field bRearmSkipsEquipActivity boolean
---@field HeatedItem TSubclassOf<UItemTemplate>
---@field CooledItem TSubclassOf<UItemTemplate>
---@field bRanged boolean
---@field bHasAlt boolean
---@field bAltIsRanged boolean
---@field DamageOffset FVector
---@field AdditionalDamageOffsets TArray<FVector>
---@field DamageOffsetCount uint32
---@field FireOffset FVector
---@field AmmoType TSubclassOf<UItemTemplate>
---@field ProjectileEntity TSubclassOf<UEntityTemplate>
---@field ProjectileIndirectEntity TSubclassOf<UEntityTemplate>
---@field bStaggersWielder boolean
---@field ArmourType EAnvilArmourType
---@field DamageType EAnvilDamageType
---@field MitigationSuccessDurabilityLoss uint8
---@field MitigationFailureDurabilityLoss uint8
---@field ArmourMitigatedEffect TSubclassOf<UEntityTemplate>
---@field ToolType EAnvilToolType
---@field RegenDuration float
---@field FoodType EAnvilFoodType
---@field bDoesSpoil boolean
---@field SpoilageDurabilityLossPerSec float
---@field bDoesNotArmWithHeavyItem boolean
---@field bDoesNotArmWithHeavyArmour boolean
---@field bIsHeavyArmour boolean
---@field AltTransitionTime float
---@field RequiredStance EAnvilCharacterStance
---@field StanceOverride TMap<EAnvilCharacterStance, TSubclassOf<UItemTemplate>>
---@field DefaultActivity FAnvilSimActivity
---@field AltActivity FAnvilSimActivity
---@field RangedActivity FAnvilSimActivity
---@field BuildActivity FAnvilSimActivity
---@field GatherActivity FAnvilSimActivity
---@field bIsDeployable boolean
---@field DeployedBuildSite TSubclassOf<UEntityTemplate>
---@field NightShroudLightRadius float
---@field bAllowCameraPan boolean
---@field StunChance float
---@field StunDuration float
---@field StunThrowDistance float
---@field Damage uint8
---@field DefaultMarketplaceValue uint16
---@field DurabilityLossPerSec float
---@field StockPileWithdrawalValue float
---@field QuantityPerCrate uint16
---@field RegenPerSec float
---@field HungerRestored float
---@field HealthLimitRestored float
---@field StaminaLimitRestored float
---@field DurabilityLossPerUse float
---@field DamageRadius float
---@field VariableDamageMaxModifier float
---@field VariableDamageMinModifier float
---@field GuardMeterReductionMultiplier float
---@field ShieldDurabilityLossMultiplier float
---@field GuardMeterCostPerHit float
---@field ArmorMitigation uint8
---@field StabilityDamage float
---@field SecondaryStabilityDamage float
---@field StabilityMitigationPercent uint8
---@field ToolEffectiveness float
---@field AimMovementSpeedModifier float
---@field AimRotationSpeedModifier float
---@field PrimaryMovementSpeedModifier float
---@field SecondaryMovementSpeedModifier float
---@field PrimaryChanceToPenetrateGuard float
---@field SecondaryChanceToPenetrateGuard float
UItemTemplate = {}



---@class ULadderProxyComponent : UProxyComponent
---@field PlayerOffset float
---@field ExitXOffset float
---@field ExitZOffset float
---@field ExitZTolerance float
---@field PitchMin float
---@field PitchMax float
---@field MaxVelocity float
---@field Acceleration float
---@field PlayerFallDamage float
---@field LadderFallDamage float
ULadderProxyComponent = {}



---@class ULatticeMineProxyComponent : UProxyComponent
---@field Data FLatticeMineProxyData
ULatticeMineProxyComponent = {}



---@class ULifetimeDataComponent : UDataComponent
---@field Age float
ULifetimeDataComponent = {}



---@class ULifetimeProxyComponent : UProxyComponent
---@field LifeSpan float
---@field DropResourceOnDeath boolean
---@field ResetIfObserved boolean
ULifetimeProxyComponent = {}



---@class ULivestockStructureProxyComponent : UProxyComponent
---@field LivestockType TSubclassOf<UEntityTemplate>
---@field MaxAnimalCount int32
ULivestockStructureProxyComponent = {}



---@class UMapIntelProxyComponent : UProxyComponent
---@field DayLengthSeconds int32
---@field NightStartSeconds int32
---@field NightEndSeconds int32
UMapIntelProxyComponent = {}



---@class UMapPostDataComponent : UDataComponent
---@field PostType EAnvilMapPostType
---@field BuilderId int64
UMapPostDataComponent = {}



---@class UMapPostProxyComponent : UProxyComponent
UMapPostProxyComponent = {}


---@class UMarketShopDataComponent : UDataComponent
---@field PriceList TArray<int32>
---@field DefaultPriceList TArray<int32>
---@field SilverStored int32
---@field OwnerPlayerName FString
---@field MinItemPrice int32
---@field MaxItemPrice int32
UMarketShopDataComponent = {}



---@class UMarketShopProxyComponent : UProxyComponent
---@field AutoBuySeconds int32
UMarketShopProxyComponent = {}



---@class UMeshCollisionProxyComponent : UProxyComponent
---@field PhysicsAssetName UStaticMesh
---@field Position FVector
---@field Rotation FRotator
---@field ProjectToLandscape uint8
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UMeshCollisionProxyComponent = {}



---@class UMeshVisibilityDataComponent : UDataComponent
---@field bIsVisible boolean
---@field bGroup2IsVisible boolean
UMeshVisibilityDataComponent = {}



---@class UMeshVisibilityProxyComponent : UProxyComponent
UMeshVisibilityProxyComponent = {}


---@class UMineProxyComponent : UProxyComponent
---@field InitialReserveCapacity int32
---@field MiningRatePerUpdate int32
---@field MiningUpdateTime float
UMineProxyComponent = {}



---@class UMountedWeaponDataComponent : UDataComponent
---@field bPriming boolean
---@field bPrimed boolean
---@field bLoaded boolean
---@field bFiring boolean
---@field AimYaw float
---@field AimPitch float
UMountedWeaponDataComponent = {}



---@class UMountedWeaponProxyComponent : UProxyComponent
---@field AimPivot FVector
---@field bHighArc boolean
---@field bFixedAim boolean
---@field bRequirePrimedLoad boolean
---@field PrimingTime float
---@field Weapon TSubclassOf<UItemTemplate>
UMountedWeaponProxyComponent = {}



---@class UMovementTestProxyComponent : UProxyComponent
---@field Velocity FVector
UMovementTestProxyComponent = {}



---@class UOfflineCharacterDataComponent : UDataComponent
---@field OwnerPlayerName FString
UOfflineCharacterDataComponent = {}



---@class UOfflineCharacterProxyComponent : UProxyComponent
UOfflineCharacterProxyComponent = {}


---@class UPackingProxyComponent : UProxyComponent
---@field PackingResource TSubclassOf<UItemTemplate>
UPackingProxyComponent = {}



---@class UPassiveDamageProxyComponent : UProxyComponent
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field Damage float
---@field Frequency float
---@field DamageType EAnvilDamageType
UPassiveDamageProxyComponent = {}



---@class UPickupDataComponent : UDataComponent
---@field Item FItemCount
UPickupDataComponent = {}



---@class UPickupProxyComponent : UProxyComponent
---@field Item FItemCount
UPickupProxyComponent = {}



---@class UPlantGrowthDataComponent : UDataComponent
---@field GrowthStage uint8
UPlantGrowthDataComponent = {}



---@class UPlantGrowthProxyComponent : UProxyComponent
---@field MaturePlant TSubclassOf<UEntityTemplate>
---@field RequiredSeedType TSubclassOf<UItemTemplate>
---@field StageTime float
---@field RequiredTemperature float
---@field GrowthStage uint8
---@field bCanGrow boolean
UPlantGrowthProxyComponent = {}



---@class UPlayerControllerDataComponent : UDataComponent
---@field FamilyHouseInfo FFamilyHouseInfoType
---@field PledgedTownHallInfo FPledgeInfoType
---@field PledgedMilitiaInfo FPledgeInfoType
---@field bShowRespawnScreen uint8
---@field RedeployTarget uint8
---@field LastDeathMapId uint8
---@field LastDeathLocation FVector
UPlayerControllerDataComponent = {}



---@class UPlayerControllerProxyComponent : UProxyComponent
UPlayerControllerProxyComponent = {}


---@class UPlayerInputDataComponent : UDataComponent
---@field ClientAimLocation FVector
---@field ClientAimArcEndGroundLocation FVector
---@field ClickHeading FVector
---@field InputMode EAnvilPlayerInputMode
---@field AimMeshType EAnvilPlayerAimMeshType
---@field ClientAimMeshLocation FVector
---@field AimArcRotation float
---@field AimArcA float
---@field AimArcX0 float
---@field AimArcGroundHitDistance float
---@field AimArcCollisionDistance float
---@field CurrentUsableEntityId int64
---@field CurrentMountableEntityId int64
---@field CurrentCollectableResourceType int32
---@field PrimaryUsePromptMessage FStatusMessage
---@field UsePrompt int32
---@field VehicleInput EAnvilVehicleInputState
---@field CurrentBuildGhostEntityId int64
---@field CameraCurrentPosition FVector
UPlayerInputDataComponent = {}



---@class UPlayerInputProxyComponent : UProxyComponent
---@field CameraPanDeadzoneRadius float
---@field CameraPanMaxDistance float
---@field CameraPanLerpAlphaPerSecond float
---@field CameraMousePositionNormalizedEdgePanThreshold float
UPlayerInputProxyComponent = {}



---@class UPlayerSpawnerDataComponent : UDataComponent
---@field Type EAnvilSpawnType
---@field Faction EAnvilFactionId
UPlayerSpawnerDataComponent = {}



---@class UPlayerSpawnerProxyComponent : UProxyComponent
---@field Type EAnvilSpawnType
---@field SpawnOffset FVector
---@field SpawnExtents FVector
---@field SpawnBoxRotation FRotator
---@field SpawnRadius float
---@field Faction EAnvilFactionId
UPlayerSpawnerProxyComponent = {}



---@class UPlayerStatusDataComponent : UDataComponent
---@field RestedLevel uint8
UPlayerStatusDataComponent = {}



---@class UPlayerStatusProxyComponent : UProxyComponent
UPlayerStatusProxyComponent = {}


---@class UPlayerUnstuckProxyComponent : UProxyComponent
UPlayerUnstuckProxyComponent = {}


---@class UPowerMillDataComponent : UDataComponent
---@field bAnimalActive boolean
---@field Rotation float
UPowerMillDataComponent = {}



---@class UPowerMillProxyComponent : UProxyComponent
---@field MaxRotationSpeed float
---@field RotationAcceleration float
UPowerMillProxyComponent = {}



---@class UPowerToActionConverterProxyComponent : UProxyComponent
---@field ConversionType EAnvilConvertedActionType
---@field PowerDrainPerAction float
UPowerToActionConverterProxyComponent = {}



---@class UPowerUnitDataComponent : UDataComponent
---@field PercentageCurrent float
---@field CurrentMax float
---@field VisVarUpdateHook int32
---@field InFlowDirection float
---@field InFlowHeight float
UPowerUnitDataComponent = {}



---@class UPowerUnitProxyComponent : UProxyComponent
---@field Type EAnvilPowerUnitType
---@field AllowedDirection int32
---@field CurrentMax float
---@field Level float
---@field FlatResistance float
---@field ResistanceSlopeModifier float
---@field InnerWidth float
---@field OuterWidth float
UPowerUnitProxyComponent = {}



---@class UProjectileMovementProxyComponent : UProxyComponent
---@field PickupEntity TSubclassOf<UEntityTemplate>
---@field PickupSpawnRate float
---@field HitEffect TSubclassOf<UEntityTemplate>
---@field GroundPatch TSubclassOf<UEntityTemplate>
---@field Speed float
---@field MaxRange float
---@field BleedDamagePerSec float
---@field BleedTime float
---@field DamageAmount int32
---@field DamageType EAnvilDamageType
---@field Radius float
---@field HeadingTolerance float
---@field NozzleYawDelta float
---@field NozzlePitchMin float
---@field NozzlePitchMax float
---@field RotationSpeed float
---@field ScorchAmount float
---@field DislodgeRate float
---@field Lifetime float
---@field RandomRadius float
UProjectileMovementProxyComponent = {}



---@class UProxyComponent : UObject
UProxyComponent = {}


---@class UProxyEntityProxyComponent : UProxyComponent
UProxyEntityProxyComponent = {}


---@class UProxyEntitySpawnerProxyComponent : UProxyComponent
---@field SpawnedEntity TSubclassOf<UEntityTemplate>
UProxyEntitySpawnerProxyComponent = {}



---@class UQuenchingProxyComponent : UProxyComponent
---@field QuenchingResource TSubclassOf<UItemTemplate>
UQuenchingProxyComponent = {}



---@class URareResourceAreaMarkerProxyComponent : UProxyComponent
---@field RareResourceAreaType EAnvilRareResourceAreaType
---@field AreaRadius float
URareResourceAreaMarkerProxyComponent = {}



---@class URefineResourceDataComponent : UDataComponent
---@field bInventoryFull boolean
---@field ReplicatedRefineQueue TArray<FReplicatedRefineQueueItem>
---@field NumItemsInQueue uint8
---@field ItemProductionTimeLeft float
---@field EstItemProductionTimeLeft float
---@field TotalProductionTimeLeft float
URefineResourceDataComponent = {}



---@class URefineResourceProxyComponent : UProxyComponent
---@field ProducableItemList TArray<FProducableItem>
URefineResourceProxyComponent = {}



---@class URelicTechCenterDataComponent : UDataComponent
---@field RelicTechCosts TArray<FBasicItemCount>
---@field TechItemsDeposited TArray<int32>
URelicTechCenterDataComponent = {}



---@class URelicTechCenterProxyComponent : UProxyComponent
---@field RelicTechCosts TArray<FBasicItemCount>
URelicTechCenterProxyComponent = {}



---@class URepTestProxyComponent : UProxyComponent
---@field BytesToRep int32
URepTestProxyComponent = {}



---@class URepairProxyComponent : UProxyComponent
URepairProxyComponent = {}


---@class URepairStationProxyComponent : UProxyComponent
URepairStationProxyComponent = {}


---@class UResourceDataComponent : UDataComponent
---@field GatherHitCount int32
UResourceDataComponent = {}



---@class UResourceProxyComponent : UProxyComponent
---@field Type EAnvilResourceType
---@field HitPoints uint8
---@field RequiredTool EAnvilToolType
---@field RequiredTemperature float
---@field bInventoryTransferToPlayer boolean
---@field DroppedResourceAmount uint8
---@field DroppedResourceEntity TSubclassOf<UEntityTemplate>
---@field bScatterSecondaryResource boolean
---@field DroppedSecondaryResourceAmount uint8
---@field DroppedSecondaryResourceEntity TSubclassOf<UEntityTemplate>
---@field HuskEntity TSubclassOf<UEntityTemplate>
---@field bSnapHuskEntityToGround boolean
---@field DestructionEffect TSubclassOf<UEntityTemplate>
---@field LootTable TArray<FLootTableItem>
UResourceProxyComponent = {}



---@class UResourceSpawnerProxyComponent : UProxyComponent
---@field SpawnedResource TSubclassOf<UEntityTemplate>
---@field SpawnOffset FVector
---@field SpawnRadius float
---@field MinimumSpawnRadius float
---@field SpawnInterval float
---@field SpawnQuantity int32
---@field SpawnWaveCountMultiplier float
---@field MaxSpawn int32
---@field GlobalMaxSpawn int32
---@field ResourceReserveInitial int32
---@field ReserveReplenishTimeSecs int32
---@field SpawnDelayAfterResourceDepleted float
---@field MinDistanceBetweenSpawns float
---@field bWaterOnly boolean
---@field bRequiresNavmesh boolean
---@field bTrackSpawnedEntity boolean
---@field bDontSpawnInSettlements boolean
---@field bIsRare boolean
---@field bDontSpawnNearPlayers boolean
---@field bAvoidSlopes boolean
---@field bWalkBackToSpawner boolean
---@field CompatibleSurfaceTypes int32
---@field OtherResourcesToAvoid TArray<TSubclassOf<UEntityTemplate>>
---@field OtherResourcesToCountForSpawnLimit TArray<TSubclassOf<UEntityTemplate>>
UResourceSpawnerProxyComponent = {}



---@class URichSoilDataComponent : UDataComponent
---@field Radius float
URichSoilDataComponent = {}



---@class URichSoilProxyComponent : UProxyComponent
---@field Radius float
URichSoilProxyComponent = {}



---@class URoadProxyComponent : UProxyComponent
---@field SpeedFactor float
URoadProxyComponent = {}



---@class UScorchDataComponent : UDataComponent
---@field ScorchVisualBits uint8
UScorchDataComponent = {}



---@class UScorchProxyComponent : UProxyComponent
---@field BurnRate float
UScorchProxyComponent = {}



---@class USeekerProxyComponent : UProxyComponent
USeekerProxyComponent = {}


---@class USimPlayerDataComponent : UDataComponent
---@field Velocity FVector
---@field GuardStrength uint8
---@field TeamId uint8
---@field CurrentMovementMode EAnvilMovementMode
---@field GuardMeter float
---@field Stability float
---@field CurrentActivitySpeedModifier float
---@field CurrentActivityChainIndex uint8
---@field ActivityState EAnvilSimActivityState
---@field ActivityAimLocation FVector
---@field CurrentStance EAnvilCharacterStance
---@field PrimaryHeldItemCodeName int32
---@field PrimaryHeldUnderlyingCodeName int32
---@field SecondaryHeldItemCodeName int32
---@field SecondaryHeldUnderlyingCodeName int32
---@field UnarmedPrimaryHeldItemCodeName int32
---@field UnarmedSecondaryHeldItemCodeName int32
---@field CurrentMountedEntity FEntityHandle
---@field CurrentMountedSeatOffset FVector
---@field PlayerName FString
---@field PlayerUniqueID int64
---@field NobleVoteId int64
---@field TrappedTimer float
---@field StaggerTimer float
---@field bStaggered boolean
---@field bIsAiming boolean
---@field bIsGuarding boolean
---@field bIsAdmin boolean
---@field bPriming boolean
---@field bInTravelZone boolean
---@field bAltAttackMode boolean
---@field bAltShieldMode boolean
---@field bIsPushing boolean
---@field bIsMeshHidden boolean
---@field bIsReinforcing boolean
---@field SecondsUntilFullDecay float
---@field HeldItemLightSourceRadius float
---@field LightSourceData TArray<FNightShroudLightSource>
---@field FoodTypesOnCooldownBits uint8
---@field AimYaw float
---@field AimPitch float
---@field LastIncomingAttackAngle float
USimPlayerDataComponent = {}



---@class USimPlayerProxyComponent : UProxyComponent
---@field GuardAngleToleranceYaw float
---@field GuardAngleTolerancePitchMin float
---@field GuardAngleTolerancePitchMax float
---@field GuardAngleToleranceYawAlt float
---@field GuardAngleTolerancePitchMinAlt float
---@field GuardAngleTolerancePitchMaxAlt float
---@field GuardMeterRegenCD float
---@field GuardMeterEmptyRegenCD float
---@field GuardMeterRegenSpeed float
---@field GuardMeterDecaySpeed float
---@field StaggerDuration float
---@field StaggerAmount float
---@field Radius float
---@field HalfHeight float
---@field CrouchedHalfHeight float
---@field MaxVelocity float
---@field MaxSprintVelocity float
---@field MaxVelocityCeiling float
---@field MaxFlyVelocity float
---@field MaxSwimVelocity float
---@field BreakDeceleration float
---@field RotationSpeed float
---@field MovementAcceleration float
---@field SwimMovementAcceleration float
---@field SprintStaminaDrain float
---@field SwimStaminaDrain float
---@field ClimbStaminaCost float
---@field FallingDistRange FR2FloatRange
---@field FallingDamageRange FR2FloatRange
---@field RammingVelocityFactor float
---@field RammingStabilityDamage float
USimPlayerProxyComponent = {}



---@class USnapPointProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field SnappingChannel EAnvilSnappingChannelType
---@field bPointOnLine boolean
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
USnapPointProxyComponent = {}



---@class USplineDataComponent : UDataComponent
---@field MidPieceTransforms TArray<FTransform>
---@field End FVector
---@field SegmentLength float
---@field Slope float
USplineDataComponent = {}



---@class USplineProxyComponent : UProxyComponent
---@field PieceLength float
---@field MaxSegmentLength float
---@field MinSplineLength float
---@field MaxSplineLength float
---@field SlopeMax float
---@field FlatSlope float
---@field bPlatformMode boolean
---@field bBridgeMode boolean
---@field PlatformStartOffset FVector
---@field MidPieceZOffset float
---@field MidPiece TSubclassOf<UEntityTemplate>
---@field EndPiece TSubclassOf<UEntityTemplate>
---@field SnappingChannel EAnvilSnappingChannelType
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
USplineProxyComponent = {}



---@class UStaminaDataComponent : UDataComponent
---@field Stamina float
---@field StaminaLimit float
UStaminaDataComponent = {}



---@class UStaminaProxyComponent : UProxyComponent
---@field StaminaRegenCD float
---@field StaminaRegenSpeed float
UStaminaProxyComponent = {}



---@class UStaticTorchDataComponent : UDataComponent
---@field bIsTorchActive boolean
UStaticTorchDataComponent = {}



---@class UStaticTorchProxyComponent : UProxyComponent
---@field ActiveSecondsPerUnitFuel float
---@field NightShroudRadius float
UStaticTorchProxyComponent = {}



---@class UStructureDataComponent : UDataComponent
---@field bRestrictedMode boolean
---@field bOnFoundation boolean
---@field bIsCollapsed boolean
---@field bIsFamilyDestroyed boolean
---@field bIsTownDestroyed boolean
---@field bCanOverrideFamilyAccessLevel boolean
---@field bCanBeReinforced boolean
---@field bReinforcing boolean
---@field bReinforced boolean
---@field ReinforcingFinishTime int32
---@field ReinforcingTime int32
---@field StructureType EAnvilBuildStructureType
---@field BuilderId int64
---@field TownFamilyAreaId int32
---@field FamilyAccessLevel EAnvilR2FamilyRoleType
UStructureDataComponent = {}



---@class UStructureProtectionProxyComponent : UProxyComponent
---@field SnappedFoundationDamageMitigation float
UStructureProtectionProxyComponent = {}



---@class UStructureProxyComponent : UProxyComponent
---@field bCannotBeDismantled boolean
---@field bRequireSupport boolean
---@field bCanCollapse boolean
---@field bIsAlwaysEnclosed boolean
---@field IgnoreMeshVisbilityChanges boolean
---@field bCanOverrideFamilyAccessLevel boolean
---@field bCanBeReinforced boolean
---@field ReinforcingTime int32
---@field CrenellationLevel uint8
---@field StructureType EAnvilBuildStructureType
---@field ReinforcementCosts TArray<FBasicItemCount>
UStructureProxyComponent = {}



---@class UTavernDataComponent : UDataComponent
---@field CurrentBuffLevel uint8
UTavernDataComponent = {}



---@class UTavernProxyComponent : UProxyComponent
---@field Buffs TArray<FTavernBuffConfig>
UTavernProxyComponent = {}



---@class UTeamDataComponent : UDataComponent
---@field TeamId uint8
UTeamDataComponent = {}



---@class UTeamProxyComponent : UProxyComponent
---@field TeamId uint8
---@field Accessibility EAnvilAccessibilityType
---@field bAlwaysAllowAccessWhenScorched boolean
---@field bAllowAccessUsingVehicles boolean
UTeamProxyComponent = {}



---@class UTechItemTemplate : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field NameText FText
---@field Description FText
---@field Image UTexture2D
UTechItemTemplate = {}



---@class UTemperatureDataComponent : UDataComponent
---@field CurrentNormalizedTemperature float
UTemperatureDataComponent = {}



---@class UTemperatureProxyComponent : UProxyComponent
---@field DamagePerFreezingTick float
---@field StructureInteriorTempIncreasePerSec float
---@field WarmStructureTempIncreasePerSec float
---@field WarmStructureSearchRadius float
UTemperatureProxyComponent = {}



---@class UTemplateComponent : USceneComponent
---@field TemplateActor TSubclassOf<ATemplate>
---@field SpawnedComponents TArray<UActorComponent>
UTemplateComponent = {}



---@class UTownHallDataComponent : UDataComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field TownHallId int32
---@field PledgedPlayersArrayCount int32
---@field NumTotalHouses int32
---@field NumUnclaimedHouses int32
---@field NumTotalTents int32
---@field NumUnclaimedTents int32
---@field NumMarketplaces int32
---@field TownNameId uint8
---@field TownNameOrdinal uint8
---@field CurrentBuildRadius float
UTownHallDataComponent = {}



---@class UTownHallProxyComponent : UProxyComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field bLocalReinforcementOnly boolean
---@field AbandonedStartTime float
UTownHallProxyComponent = {}



---@class UTrapDataComponent : UDataComponent
---@field bWasTriggered boolean
UTrapDataComponent = {}



---@class UTrapProxyComponent : UProxyComponent
---@field PlayerTrapDurationSec float
---@field AnimalBleedDamagePerSec float
---@field NormalizedAnimalEscapeChance float
---@field MissEffect TSubclassOf<UEntityTemplate>
UTrapProxyComponent = {}



---@class UTweakableDataComponent : UDataComponent
---@field PopulationRequirementT2 uint8
---@field PopulationRequirementT3 uint8
---@field MarketplaceRequirementT2 uint8
---@field MarketplaceRequirementT3 uint8
---@field TentRequirementT2 uint8
---@field TentRequirementT3 uint8
---@field TownCenterRequiredBuilders uint8
---@field TownMapDisableSize uint8
UTweakableDataComponent = {}



---@class UTweakableProxyComponent : UProxyComponent
UTweakableProxyComponent = {}


---@class UUnderworldModuleProxyComponent : UProxyComponent
---@field bIsStatic boolean
---@field EdgeList TArray<EAnvilUnderworldModuleEdgeType>
---@field NumDynamicModulesMin int32
---@field NumDynamicModulesMax int32
---@field MaxNumDynamicModuleSpawnDistance int32
---@field TimeUntilCollapseMin_Hrs float
---@field TimeUntilCollapseMax_Hrs float
---@field TelegraphEventStartTimeBeforeCollapse_Hrs float
---@field TelegraphEventIntervalMin_Sec float
---@field TelegraphEventIntervalMax_Sec float
UUnderworldModuleProxyComponent = {}



---@class UUpgradeDataComponent : UDataComponent
---@field MaterialSubmissions TArray<int32>
---@field bIsUpgrading boolean
UUpgradeDataComponent = {}



---@class UUpgradeProxyComponent : UProxyComponent
---@field UpgradeTarget TSubclassOf<UEntityTemplate>
---@field TierPrerequisite uint8
---@field MaterialRequirements TArray<FBasicCount>
UUpgradeProxyComponent = {}



---@class UVehicleMovementDataComponent : UDataComponent
---@field FrontAxleCastHit FVector
---@field RearAxleCastHit FVector
---@field SeatOccupancyBits uint8
UVehicleMovementDataComponent = {}



---@class UVehicleMovementProxyComponent : UProxyComponent
---@field Acceleration float
---@field MaxVelocity float
---@field RotationalSpeed float
---@field SprintFactor float
---@field SprintRotationalSpeedFactor float
---@field SprintStaminaDrain float
---@field WalkStaminaDrain float
---@field RoadFactor float
---@field WindFactor float
---@field bGroupVehicle boolean
---@field bYawInPlace boolean
---@field bLadderMovement boolean
---@field bCanWorldEntranceTravel boolean
---@field bWaterVehicle boolean
---@field bSailBoat boolean
---@field bDoAxleRaycasts boolean
---@field bAllowSwitchSeat boolean
---@field bUsePitch boolean
---@field CollisionEffect TSubclassOf<UEntityTemplate>
---@field RammingDamage float
---@field RammingVelocityFactor float
---@field RammingDamageType EAnvilDamageType
---@field RammingStabilityDamage float
---@field RammingStabilitySplashDamage float
---@field RammingStabilitySplashDamageRadius float
---@field FrontAxleOffset FVector
---@field RearAxleOffset FVector
---@field FallingDistRange FR2FloatRange
---@field FallingDamageRange FR2FloatRange
UVehicleMovementProxyComponent = {}



---@class UVehicleSeatProxyComponent : UProxyComponent
---@field MountedStance EAnvilCharacterStance
---@field PlayerOffset FVector
---@field PlayerExitOffset FVector
---@field DismountMaxDelta float
---@field bIsDriver boolean
---@field bIsLeft boolean
---@field bUseMountedWeapon boolean
---@field bPrimeMountedWeapon boolean
---@field bUseDeployable boolean
---@field bMustNearExitToMount boolean
---@field bRevertRequiredEquipments boolean
---@field bMirrorDetachLocation boolean
---@field AnimationIndex int32
---@field MountedAttackDamageMultiplier float
---@field RequiredEquipments TArray<TSubclassOf<UItemTemplate>>
UVehicleSeatProxyComponent = {}



---@class UVisStaticMeshComponentBase : UStaticMeshComponent
---@field bUseCustomGeneratedCollisionMask boolean
---@field CustomGeneratedCollisionMask int32
---@field VisMeshProfile EVisMeshProfile
---@field bMeshVisibility boolean
---@field bMeshVisibilityGroup2 boolean
UVisStaticMeshComponentBase = {}



---@class UWeatherDataComponent : UDataComponent
---@field ActiveWeatherEvents TArray<FR2WeatherEvent>
---@field CurrentNormalizedSeason float
---@field GlobalNormalizedTemperature float
---@field GlobalNormalizedWetness float
---@field GlobalNormalizedWind float
---@field GlobalWindDirectionX float
---@field GlobalWindDirectionY float
UWeatherDataComponent = {}



---@class UWeatherProxyComponent : UProxyComponent
UWeatherProxyComponent = {}


---@class UWellDataComponent : UDataComponent
---@field TotalLevel float
UWellDataComponent = {}



---@class UWellProxyComponent : UProxyComponent
---@field WaterGenerationTimeSec int32
UWellProxyComponent = {}



---@class UWindMillDataComponent : UDataComponent
---@field Rotation float
UWindMillDataComponent = {}



---@class UWindMillProxyComponent : UProxyComponent
---@field MaxRotationSpeed float
---@field RotationAcceleration float
UWindMillProxyComponent = {}



---@class UWorldEntranceDataComponent : UDataComponent
---@field ArrivalPosition FVector
UWorldEntranceDataComponent = {}



---@class UWorldEntranceProxyComponent : UProxyComponent
---@field ArrivalPosition FVector
---@field DestinationMapId EAnvilMapId
UWorldEntranceProxyComponent = {}



