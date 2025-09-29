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
---@field bUsableWithLowStamina boolean
FAnvilSimActivity = {}



---@class FAvatarProfile
---@field AvatarId int32
---@field Type EAnvilAvatarType
---@field OwnerType EAnvilAvatarOwnerType
---@field OwnerId int64
---@field StackSize int32
---@field Attributes TArray<float>
FAvatarProfile = {}



---@class FAvatarProfilesRequestData
---@field Profiles TArray<FAvatarProfile>
FAvatarProfilesRequestData = {}



---@class FBasedEntityEntry
---@field Handle FEntityHandle
---@field RelativeTransform FTransform
FBasedEntityEntry = {}



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



---@class FBoundingBox
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
FBoundingBox = {}



---@class FBuildAreaInfo
---@field TownArea boolean
---@field FortressArea boolean
---@field TownAreaPledgeRequired boolean
---@field SmallCampArea boolean
---@field LargeCampArea boolean
---@field HomesteadArea boolean
---@field HomesteadAreaPledgeRequired boolean
---@field UndergroundArea boolean
---@field WildernessArea boolean
---@field WildernessAreaFriendlyRequired boolean
FBuildAreaInfo = {}



---@class FBuildRuleInfo
---@field bBuildableOverRoads boolean
---@field bBuildableNearSpawnPoint boolean
---@field bBuildableInEnemyArea boolean
---@field bBuildableNearEnemies boolean
---@field bBuildableInWildernessWithoutPledge boolean
---@field LimitTouchingGroupCount boolean
---@field bAllowCrossingHomesteadAreaBorder boolean
---@field RequiredAgeSeconds float
---@field NearbyPlayersRequired int32
---@field TierPrerequisite uint8
FBuildRuleInfo = {}



---@class FBuildSitePlacementInfo
---@field InRichSoil boolean
---@field BeaconTowerLink boolean
---@field BeaconTowerTownHallLink boolean
---@field InFamilyArea boolean
---@field ProximityToRoad boolean
---@field FamilyAreaExtent float
---@field BeaconTowerAltitudePercent float
---@field NumBeaconTowerNeighbours uint8
---@field DistanceToTown int32
FBuildSitePlacementInfo = {}



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



---@class FClientChatMessage
---@field TeamId uint8
---@field SenderId int64
---@field SenderName FString
---@field Text FString
FClientChatMessage = {}



---@class FCompHandleData
---@field Target FEntityHandle
---@field Index int32
FCompHandleData = {}



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



---@class FControlSurface
---@field Pivot FVector
---@field DimensionX float
---@field DimensionYZ float
---@field bVertical boolean
---@field bInvertedControls boolean
FControlSurface = {}



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



---@class FCustomStackLimit
---@field CodeName TSubclassOf<UItemTemplate>
---@field CodeNameVisVar int32
---@field StackLimit int32
FCustomStackLimit = {}



---@class FDeploymentAvatarUserData
---@field EntityInfo FEntityIdAndMapHash
---@field AvatarProfiles TArray<FAvatarProfile>
FDeploymentAvatarUserData = {}



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



---@class FEntityIdAndMapHash
---@field EntityId int64
---@field MapHash int32
FEntityIdAndMapHash = {}



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
---@field AshGenerated int32
FFuelType = {}



---@class FGrainMillRecipe
---@field InputItems TArray<FBasicItemCount>
---@field OutputItem FBasicItemCount
---@field ProductionDuration float
---@field TargetCoarseness float
FGrainMillRecipe = {}



---@class FGridItem
---@field CodeName int32
---@field UnderlyingCodeName int32
---@field Payload uint8
FGridItem = {}



---@class FHitConverterInput
---@field InputCodeName TSubclassOf<UItemTemplate>
---@field InputCodeNameVisVar int32
---@field OutputStackSize int32
---@field OutputStackSizeVisVar int32
---@field NumHitsToConvert int32
---@field bOutputScalesWithInputStackSize boolean
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



---@class FInventorySlot
---@field ProxyRepeat int32
---@field Base FItemCount
---@field StackLimit int32
---@field bOr boolean
---@field bAllowWithdrawal boolean
---@field bIsPlayerEquipmentSlot boolean
---@field bCheckDedicatedUnderlyingItem boolean
---@field AcceptedTags TArray<EAnvilItemTag>
---@field AcceptedTagsVisVar int64
---@field RequiredTags TArray<EAnvilItemTag>
---@field RequiredTagsVisVar int64
---@field ProhibitedTags TArray<EAnvilItemTag>
---@field ProhibitedTagsVisVar int64
---@field DedicatedItemType TSubclassOf<UItemTemplate>
---@field DedicatedItemTypeVisVar int32
---@field DedicatedUnderlyingItem TSubclassOf<UItemTemplate>
---@field DedicatedUnderlyingItemVisVar int32
---@field RequiredEnablingItem TSubclassOf<UItemTemplate>
---@field RequiredEnablingItemVisVar int32
---@field BackgroundType EAnvilItemSlotBackgroundType
---@field CustomStackLimits TArray<FCustomStackLimit>
FInventorySlot = {}



---@class FInventorySlotData
---@field Slot FInventorySlot
---@field bHidden boolean
---@field bIsDisabled boolean
---@field bCantArmDueToHeavyItem boolean
---@field PriorityGroup uint8
FInventorySlotData = {}



---@class FItemCount
---@field CodeName TSubclassOf<UItemTemplate>
---@field CodeNameVisVar int32
---@field UnderlyingCodeName TSubclassOf<UItemTemplate>
---@field UnderlyingCodeNameVisVar int32
---@field Durability float
---@field Count int32
---@field ItemFlags TArray<EAnvilItemFlag>
---@field ItemFlagsVisVar int64
---@field Payload uint8
FItemCount = {}



---@class FLootTableItem
---@field ItemToDrop FItemCount
---@field NormalizedChanceToDrop float
---@field MinDurability float
---@field MaxDurability float
FLootTableItem = {}



---@class FMapAvatarInfo
---@field EntityId int64
---@field PositionX float
---@field PositionY float
---@field NumAvatars int32
FMapAvatarInfo = {}



---@class FMineChunk
---@field TypeIdx int32
---@field WorldPosition FVector
FMineChunk = {}



---@class FMovementInputState
---@field Forward boolean
---@field Backward boolean
---@field Right boolean
---@field Left boolean
---@field Sprint boolean
FMovementInputState = {}



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
---@field bMakePublic boolean
---@field RequiredStructure TSubclassOf<UEntityTemplate>
FProducableItem = {}



---@class FR2ConfigArea
---@field SmallFamilyCenterExtent float
---@field BigFamilyCenterExtent float
---@field TownAreaRadius float
---@field FortressAreaRadius float
---@field FortressToTownPaddingDist float
---@field CampToCampPaddingDist float
FR2ConfigArea = {}



---@class FR2ConfigBuildSite
---@field BuildSiteDistanceRules TArray<FR2ConfigBuildSiteDistanceRule>
---@field FamilyStructureWorldEntranceAvoidDist float
FR2ConfigBuildSite = {}



---@class FR2ConfigBuildSiteDistanceRule
---@field BuildSites TArray<TSubclassOf<UEntityTemplate>>
---@field Range float
---@field LevelDistance float
---@field bWithinTownRange boolean
---@field NeighbourLimit uint8
---@field FriendlyTeam EAnvilTrinaryRequirement
---@field ErrorCode EAnvilPlacementStatus
FR2ConfigBuildSiteDistanceRule = {}



---@class FR2ConfigCombustion
---@field FuelList TArray<FFuelType>
FR2ConfigCombustion = {}



---@class FR2ConfigItem
---@field CrateAcceptedTags TArray<EAnvilItemTag>
FR2ConfigItem = {}



---@class FR2ConfigSignPost
---@field MaxMessageLen int32
---@field MaxLifeTime float
---@field LifeTimeChangeByUpvote float
---@field LifeTimeChangeByDownvote float
FR2ConfigSignPost = {}



---@class FR2ConfigTradeResources
---@field TradeResources TArray<TSubclassOf<UEntityTemplate>>
FR2ConfigTradeResources = {}



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



---@class FR2InviteToJoinFamilyRequest
---@field TargetFamilyMarkerEntityId int64
---@field InviterOnlineId int64
---@field InviterPlayerName FString
FR2InviteToJoinFamilyRequest = {}



---@class FR2RequestToJoinFamilyRequest
---@field TargetMarkerEntityId int64
---@field TargetMarkerMapHash int32
---@field RequesterOnlineId int64
---@field RequesterPlayerName FString
---@field RequesterTeamId uint8
FR2RequestToJoinFamilyRequest = {}



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



---@class FRegionMapAvatarInfoLists
---@field MapHash int32
---@field PersonalList TArray<FMapAvatarInfo>
---@field FamilyList TArray<FMapAvatarInfo>
---@field PublicList TArray<FMapAvatarInfo>
FRegionMapAvatarInfoLists = {}



---@class FRepairMessage
---@field TargetName TSubclassOf<UEntityTemplate>
---@field TargetNameVisVar int32
---@field NormalizedHealth float
---@field TargetArea EAnvilTargetAreaType
FRepairMessage = {}



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
---@field TownFamilyId int32
---@field TownTradeResource TSubclassOf<UEntityTemplate>
---@field TownTradeResourceVisVar int32
---@field MarkerFamilyId int32
---@field StructureFamilyId int32
---@field PledgedPlayerId int64
---@field RemainingTimeUntilCollapse_Sec float
---@field bShouldDecay boolean
---@field bDecaying boolean
---@field TimeUntilDecaySec float
---@field DecayDamagePerHour float
---@field bCanBeScorched boolean
---@field ScorchIntensity float
---@field BurntIntensity float
---@field ScorchState EAnvilScorchState
---@field HousedLivestockCount uint8
---@field MaxLivestockCount uint8
---@field FarmWaterDuration float
---@field FarmWaterDurationMax float
---@field CookWaterDurationRemainingSec float
---@field CookCurrentTemperature float
---@field WorldEntranceDestinationMapId uint8
---@field WorldEntranceId int32
---@field ModuleEdgeList TArray<EAnvilUnderworldModuleEdgeType>
---@field bIsGrainMill boolean
---@field CurrentCoarseness float
---@field ProductionSpeed float
---@field ProductionTime float
FStructureStats = {}



---@class FTavernBuffConfig
---@field NumPlayer uint8
---@field Level uint8
---@field Duration float
FTavernBuffConfig = {}



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
---@field SequenceNumber int32
FUnderworldModuleDebugInfoEntry = {}



---@class FVersionInfo
---@field Major int32
---@field Minor int32
---@field Patch int32
---@field ChangeList int32
FVersionInfo = {}



---@class FVictoryInfo
---@field VictorTeamId uint8
---@field VictoryUnixTimeStamp int64
FVictoryInfo = {}



---@class FVictoryInfoUpdate
---@field Type EAnvilVictoryType
---@field Info FVictoryInfo
FVictoryInfoUpdate = {}



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
---@field TempleData FWorldEntityTempleData
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



---@class FWorldEntityInventoryUserData
---@field EntityInfo FEntityIdAndMapHash
---@field Items TArray<FBasicItemCount>
FWorldEntityInventoryUserData = {}



---@class FWorldEntityTempleData
---@field bUnderAttack boolean
FWorldEntityTempleData = {}



---@class FWorldEntityTownHallData
---@field TownHallId int32
---@field TownNameOrdinal uint8
---@field TownNameId uint8
---@field Tier uint8
---@field bIsSmallCamp boolean
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
---@field bIsWildSpawnNearTown boolean
FWorldEntityWildSpawnData = {}



---@class UAIStimulusProxyComponent : UProxyComponent
---@field Type EAnvilStimulusType
---@field bAgroTarget boolean
UAIStimulusProxyComponent = {}



---@class UAdminEnvDataComponent : UDataComponent
---@field bFreeBuild boolean
---@field bDebugDraw boolean
---@field bGodMode boolean
---@field bShowStructureStats boolean
---@field bShowWeatherStats boolean
---@field bDebugHud boolean
---@field bShowLocateCoords boolean
---@field bDebugCrowdIndentifier boolean
---@field StructureStatsList TArray<FStructureStats>
---@field DebugHUDSpeed int32
UAdminEnvDataComponent = {}



---@class UAdminEnvProxyComponent : UProxyComponent
UAdminEnvProxyComponent = {}


---@class UAdvancedSnappingProxyComponent : UProxyComponent
---@field bBlockSnapping boolean
---@field bDisableMinSnapWhenNotSnapping boolean
---@field bNoOverlap boolean
---@field bNoFoundationCheckWhenSnapped boolean
---@field OverridedAngleOverlapPriority uint8
---@field OverridedAngleOverlapMin float
---@field NumSnappingRequired uint8
---@field NotEnoughSnappingErrorMessage EAnvilPlacementStatus
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


---@class UAvatarGroupProxyComponent : UProxyComponent
UAvatarGroupProxyComponent = {}


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
---@field DetectionFuelTimeMultiplier float
---@field InformingFuelTimeMultiplier float
UBeaconTowerProxyComponent = {}



---@class UBoxCollisionProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UBoxCollisionProxyComponent = {}



---@class UBuildSiteDataComponent : UDataComponent
---@field MaterialSubmissions TArray<int32>
---@field BuildGhostPlacementErrors TArray<FContextfulPlacementStatus>
---@field PlacementInfo FBuildSitePlacementInfo
---@field VisualGuideMinDistance float
UBuildSiteDataComponent = {}



---@class UBuildSiteProxyComponent : UProxyComponent
---@field BuiltStructureEntity TSubclassOf<UEntityTemplate>
---@field BuildLocation int32
---@field BuildArea FBuildAreaInfo
---@field BuildRules FBuildRuleInfo
---@field CompatibleSurfaceTypes int32
---@field RequiredTool EAnvilToolType
---@field bAllowRapidBuild boolean
---@field bBuildsInstantly boolean
---@field bIsGridDiagonalPiece boolean
---@field bDisableRotationSnap boolean
---@field RequiredDeployable TSubclassOf<UItemTemplate>
---@field LevelCheckRayOffset FVector
---@field MaxHeightShift float
---@field AdditionalMaxHeightShift float
---@field GridDiagonalPair TSubclassOf<UEntityTemplate>
---@field MaterialRequirements TArray<FBasicCount>
---@field VisualGuideMinDistance float
UBuildSiteProxyComponent = {}



---@class UCannonProxyComponent : UProxyComponent
UCannonProxyComponent = {}


---@class UCapsuleCollisionProxyComponent : UProxyComponent
---@field Position FVector
---@field Rotation FRotator
---@field Radius float
---@field HalfHeight float
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
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


---@class UCollapsibleDataComponent : UDataComponent
---@field bIsCollapsed boolean
UCollapsibleDataComponent = {}



---@class UCollapsibleProxyComponent : UProxyComponent
---@field bUseSeparateCollapsedCollisions boolean
UCollapsibleProxyComponent = {}



---@class UCollisionProxyComponent : UProxyComponent
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
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



---@class UCombustionDataComponent : UDataComponent
---@field bIsFueled boolean
---@field StartTimeStamp int32
---@field TotalFuelTime float
---@field InputInventory FCompHandleData
---@field OutputInventory FCompHandleData
UCombustionDataComponent = {}



---@class UCombustionProxyComponent : UProxyComponent
---@field bGenerateAsh boolean
---@field OverrideAcceptableFuels TArray<TSubclassOf<UItemTemplate>>
---@field FuelTimeMultiplier float
UCombustionProxyComponent = {}



---@class UConvexCollisionProxyComponent : UProxyComponent
---@field Position FVector
---@field Rotation FRotator
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
UConvexCollisionProxyComponent = {}



---@class UCookingDataComponent : UDataComponent
---@field CookType EAnvilCookingType
---@field RecipeList TArray<FCookingRecipe>
---@field RecipeInputInventory FCompHandleData
---@field RecipeOutputInventory FCompHandleData
---@field WaterInputInventory FCompHandleData
---@field CookCompleteTimestampAgeSec int32
---@field CurrentRecipeIndex int32
---@field NormalizedWaterLevel float
---@field EffectiveNormalizedTemp float
---@field bCanCookWithExistingOutputs uint8
---@field bIsFoodBurning boolean
---@field bIsWatered boolean
UCookingDataComponent = {}



---@class UCookingProxyComponent : UProxyComponent
---@field CookType EAnvilCookingType
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
---@field ComponentIndex int32
UDataComponent = {}



---@class UDecayDataComponent : UDataComponent
---@field bDecaying boolean
---@field bDecayingDueToNotEnclosed boolean
---@field bDecayingDueToNoWater boolean
---@field SecondsUntilFullDecay float
UDecayDataComponent = {}



---@class UDecayProxyComponent : UProxyComponent
---@field bEnabled boolean
---@field StartDelayHours float
---@field DecayTimeHours float
---@field bForceDecayPreventionFromTown boolean
UDecayProxyComponent = {}



---@class UDeployProxyComponent : UProxyComponent
---@field bCopyHealthPercentage boolean
---@field bForceShowBuildMenu boolean
---@field DeployableBuildSites TArray<TSubclassOf<UEntityTemplate>>
UDeployProxyComponent = {}



---@class UDestroyableProxyComponent : UProxyComponent
---@field DestructionEffectEntity TSubclassOf<UEntityTemplate>
UDestroyableProxyComponent = {}



---@class UDryingRackDataComponent : UDataComponent
---@field Recipes TArray<FDryingRackRecipe>
---@field ReplicatedCurrentItemDryingProgress float
UDryingRackDataComponent = {}



---@class UDryingRackProxyComponent : UProxyComponent
---@field Recipes TArray<FDryingRackRecipe>
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
---@field bIgnoreErrorNoInteractionMask boolean
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
---@field FamilyAreaExtent float
---@field AllowPublicPledging boolean
---@field bHasMembers boolean
UFamilyCenterDataComponent = {}



---@class UFamilyCenterProxyComponent : UProxyComponent
---@field Tier uint8
UFamilyCenterProxyComponent = {}



---@class UFamilyListProxyComponent : UProxyComponent
UFamilyListProxyComponent = {}


---@class UFamilyLockProxyComponent : UProxyComponent
UFamilyLockProxyComponent = {}


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
---@field TargetArea EAnvilTargetAreaType
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



---@class UGrainMillDataComponent : UDataComponent
---@field CurrentRecipeIndex int32
---@field SmoothedCoarseness float
---@field NextReadyRecipeIndex int32
---@field Power float
---@field InputInventory FCompHandleData
---@field OutputInventory FCompHandleData
---@field CurrentCoarsenessKnobSeatTransform FTransform
---@field CrankPlayer FCompHandleData
UGrainMillDataComponent = {}



---@class UGrainMillProxyComponent : UProxyComponent
---@field RecipeList TArray<FGrainMillRecipe>
---@field CoarsenessKnobRotationRange float
---@field CoarsenessKnobSmoothSpeed float
---@field CoarsenessKnobPushSpeed float
---@field CoarsenessDriftSpeed float
---@field CoarsenessEfficiencyImpact FR2FloatRange
---@field CoarsenessQualityMapRange FR2FloatRange
---@field PlayerCrankPower float
---@field MinActivationPower float
UGrainMillProxyComponent = {}



---@class UGroundCheckBoxProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field GroundCheckPoints TArray<FVector>
UGroundCheckBoxProxyComponent = {}



---@class UHandsProxyComponent : UProxyComponent
---@field HandSlots TArray<FInventorySlot>
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
---@field TargetArea EAnvilTargetAreaType
---@field VisualBloodAmountRecoveryRate float
---@field AttackerVisualBloodAmountRatio float
---@field AttackerVisualBloodAmountMax float
UHealthProxyComponent = {}



---@class UHeatingDataComponent : UDataComponent
---@field bIsBellowBoosted boolean
---@field ItemInventory FCompHandleData
UHeatingDataComponent = {}



---@class UHeatingProxyComponent : UProxyComponent
---@field NumItems int32
UHeatingProxyComponent = {}



---@class UHitConverterDataComponent : UDataComponent
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
---@field bIsTownTent boolean
UHousingProxyComponent = {}



---@class UHungerDataComponent : UDataComponent
---@field Hunger float
UHungerDataComponent = {}



---@class UHungerProxyComponent : UProxyComponent
---@field HungerPerTick float
---@field bSlowHungerWhenLow boolean
UHungerProxyComponent = {}



---@class UImpactSurfaceDataComponent : UDataComponent
---@field HitSurface EAnvilPhysicalSurfaceType
---@field HitTarget FEntityHandle
UImpactSurfaceDataComponent = {}



---@class UImpactSurfaceProxyComponent : UProxyComponent
UImpactSurfaceProxyComponent = {}


---@class UInventoryProxyComponent : UProxyComponent
---@field Slots TArray<FInventorySlot>
---@field bUnpackCrates boolean
---@field bEnforceWithdrawalStamina boolean
---@field bOnlyAllowMaxDurabilityItems boolean
---@field bDropItemsOnDeath boolean
---@field bIsCheatBox uint8
---@field StackRule EAnvilInventoryStackRule
---@field NormalizedSpoilageFactor float
---@field LifespanWhenEmpty float
---@field bAllowWithdrawal boolean
---@field bAllowSubmission boolean
---@field bIsPublicInventory boolean
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
---@field bUsesAccuracy boolean
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
---@field bAltAllowCameraPan boolean
---@field StunChance float
---@field StunDuration float
---@field StunThrowDistance float
---@field AccuracyGainPerSec float
---@field Damage uint8
---@field DurabilityLossPerSec float
---@field StockPileWithdrawalValue float
---@field QuantityPerCrate uint16
---@field RegenPerSec float
---@field HungerRestored float
---@field HealthLimitRestored float
---@field StaminaLimitRestored float
---@field DurabilityLossPerUse float
---@field DamageRadius float
---@field AltDamageRadius float
---@field MinRangedDistance float
---@field VariableDamageMaxModifier float
---@field VariableDamageMinModifier float
---@field ShieldDurabilityLossMultiplier float
---@field ArmourDamageMultiplier float
---@field SecondaryArmourDamageMultiplier float
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



---@class ULadderDataComponent : UDataComponent
---@field CurrentHalfLength float
ULadderDataComponent = {}



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
---@field ValidHalfLengths TArray<float>
ULadderProxyComponent = {}



---@class ULatticeMineDataComponent : UDataComponent
---@field MeshVisibilityLevel int32
---@field MineChunks TArray<FMineChunk>
ULatticeMineDataComponent = {}



---@class ULatticeMineProxyComponent : UProxyComponent
---@field ChunkExtents FVector
---@field ChunkSpacing FVector
---@field GridDimensions FVector
---@field ChunkTypes TMap<TSubclassOf<UEntityTemplate>, float>
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
---@field CollisionMask int32
---@field Tags int32
---@field StepAngle float
---@field bVaultable boolean
ULatticeMineProxyComponent = {}



---@class ULifetimeDataComponent : UDataComponent
---@field Age float
---@field LifeSpan float
ULifetimeDataComponent = {}



---@class ULifetimeProxyComponent : UProxyComponent
---@field DropResourceOnDeath boolean
---@field ResetIfObserved boolean
---@field LifeSpan float
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


---@class UMeshCollisionProxyComponent : UProxyComponent
---@field PhysicsAssetName UStaticMesh
---@field Position FVector
---@field Rotation FRotator
---@field ProjectToLandscape uint8
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
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
---@field bShowAimMesh boolean
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
---@field Damage float
---@field Frequency float
---@field DamageType EAnvilDamageType
UPassiveDamageProxyComponent = {}



---@class UPhysMovementProxyComponent : UProxyComponent
---@field Cad float
---@field Mass float
---@field CoGOffset FVector
---@field CuboidTensorExtents FVector
---@field EngineForce float
---@field EngineForcePosition FVector
---@field SeatThrustForce float
---@field SeatSprintThrustFactor float
UPhysMovementProxyComponent = {}



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
---@field RangedAimStartOffset FVector
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
---@field MinRangedDistance float
---@field CurrentUsableEntity FEntityHandle
---@field CurrentMountableEntity FEntityHandle
---@field CurrentSelectedPlayer FEntityHandle
---@field CurrentCollectableResourceType int32
---@field PrimaryUsePromptMessage FStatusMessage
---@field UsePrompt int32
---@field VehicleInput FMovementInputState
---@field CameraCurrentPosition FVector
UPlayerInputDataComponent = {}



---@class UPlayerInputProxyComponent : UProxyComponent
---@field CameraPanDeadzoneRadius float
---@field CameraPanLerpAlphaPerSecond float
---@field StanceToCameraPanMaxDistance TMap<EAnvilCharacterStance, float>
---@field CameraMousePositionNormalizedEdgePanThreshold float
---@field RangedAimStartOffset FVector
UPlayerInputProxyComponent = {}



---@class UPlayerMountDataComponent : UDataComponent
---@field CurrentMountedEntity FEntityHandle
---@field CurrentVehicleSeat FCompHandleData
UPlayerMountDataComponent = {}



---@class UPlayerMountProxyComponent : UProxyComponent
UPlayerMountProxyComponent = {}


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



---@class UProjectileMovementDataComponent : UDataComponent
---@field bHidden boolean
UProjectileMovementDataComponent = {}



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
---@field SplashDamageRadius float
---@field StabilityDamage float
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
---@field RandomRadiusMin float
---@field AccuracyAtFurthestDist float
---@field bDistanceBasedAccuracy boolean
---@field bForceKillPlayers boolean
---@field bHitEffectNoPitch boolean
---@field bScaleDamageWithAccuracy boolean
UProjectileMovementProxyComponent = {}



---@class UProxyComponent : UObject
---@field Order int32
UProxyComponent = {}



---@class UProxyEntityProxyComponent : UProxyComponent
UProxyEntityProxyComponent = {}


---@class UProxyEntitySpawnerProxyComponent : UProxyComponent
---@field bSpawnOnInit boolean
---@field SpawnedEntity TSubclassOf<UEntityTemplate>
---@field Position FVector
---@field Rotation FRotator
UProxyEntitySpawnerProxyComponent = {}



---@class UQuenchingProxyComponent : UProxyComponent
---@field QuenchingResource TSubclassOf<UItemTemplate>
UQuenchingProxyComponent = {}



---@class UR2ConfigProxyComponent : UProxyComponent
---@field BuildSite FR2ConfigBuildSite
---@field Area FR2ConfigArea
---@field Combustion FR2ConfigCombustion
---@field SignPost FR2ConfigSignPost
---@field TradeResourcesConfig FR2ConfigTradeResources
---@field Item FR2ConfigItem
UR2ConfigProxyComponent = {}



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



---@class URelicSiteProxyComponent : UProxyComponent
URelicSiteProxyComponent = {}


---@class URelicSiteSpawnLocationProxyComponent : UProxyComponent
URelicSiteSpawnLocationProxyComponent = {}


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
---@field bShouldDestroyOnCollect boolean
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
---@field bNotifyPlayerIfNoSilverDropped boolean
---@field SilverDropMultiplier float
---@field DestructionEffect TSubclassOf<UEntityTemplate>
---@field LootTable TArray<FLootTableItem>
UResourceProxyComponent = {}



---@class UResourceSpawnerProxyComponent : UProxyComponent
---@field SpawnedResource TSubclassOf<UEntityTemplate>
---@field SpawnOffset FVector
---@field SpawnRadius float
---@field MinimumSpawnRadius float
---@field SpawnInterval float
---@field InitialSpawnDelay float
---@field SpawnQuantity int32
---@field SpawnWaveCountMultiplier float
---@field MaxSpawn int32
---@field GlobalMaxSpawn int32
---@field ResourceReserveInitial int32
---@field ReserveReplenishTimeSecs int32
---@field SpawnDelayAfterResourceDepleted float
---@field MinDistanceBetweenSpawns float
---@field bWaterOnly boolean
---@field bDisableRandomRotation boolean
---@field bRequiresNavmesh boolean
---@field bRequiresPathBackOnNavmesh boolean
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
---@field ScorchDamagePerSecond float
UScorchProxyComponent = {}



---@class USeekerProxyComponent : UProxyComponent
USeekerProxyComponent = {}


---@class UShipMovementDataComponent : UDataComponent
---@field bIsSailOpen boolean
---@field bIsGangplankLeftOpen boolean
---@field bIsGangplankRightOpen boolean
UShipMovementDataComponent = {}



---@class UShipMovementProxyComponent : UProxyComponent
---@field BuoyancyMeshCollisionAssetName UStaticMesh
---@field MaxRudderAngle float
---@field RudderTurnRate float
---@field DragReferenceSpeed float
---@field Fp float
---@field Fs float
---@field Cpd1 float
---@field Cpd2 float
---@field Csd1 float
---@field Csd2 float
---@field SlammingPower float
---@field GammaMax float
---@field Rudder FControlSurface
---@field ThrustVectoringPercent float
---@field NoSailThrustHorizonalMultiplier float
---@field NoSailInputFactor float
---@field SailInputCurve UCurveFloat
UShipMovementProxyComponent = {}



---@class USiegeTowerDataComponent : UDataComponent
---@field RampState EAnvilSiegeTowerState
---@field CurrentRampAngle float
USiegeTowerDataComponent = {}



---@class USiegeTowerProxyComponent : UProxyComponent
---@field CloseRampAngle float
---@field RampOpenSpeed float
---@field ValidRampAngleRange FR2FloatRange
---@field RampOperationBox FBoundingBox
USiegeTowerProxyComponent = {}



---@class USignPostDataComponent : UDataComponent
---@field Message FString
---@field VisualType EAnvilSignPostVisualType
---@field ClientVote EAnvilVoteType
USignPostDataComponent = {}



---@class USignPostProxyComponent : UProxyComponent
---@field VisualType EAnvilSignPostVisualType
USignPostProxyComponent = {}



---@class USimPlayerDataComponent : UDataComponent
---@field BaseRelativeTransform FTransform
---@field GuardStrength uint8
---@field TeamId uint8
---@field CurrentMovementMode EAnvilMovementMode
---@field Stability float
---@field StabilityTarget float
---@field StabilityGuardThreshold float
---@field bIsStabilityCooldownActive uint8
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
---@field CurrentMovementBase FEntityHandle
---@field bIsMovementCorrection boolean
---@field PlayerName FString
---@field PlayerUniqueID int64
---@field NobleVoteId int64
---@field TrappedTimer float
---@field StaggerTimer float
---@field bStaggered boolean
---@field bIsAiming boolean
---@field bIsGuarding boolean
---@field bIsMarchMode boolean
---@field bIsAdmin boolean
---@field bPriming boolean
---@field bInTravelZone boolean
---@field bAltAttackMode boolean
---@field bAltShieldMode boolean
---@field bIsPushing boolean
---@field bIsMeshHidden boolean
---@field bMouseSelectCeiling boolean
---@field bIsReinforcing boolean
---@field bIsFalling boolean
---@field bBasedMovement boolean
---@field HeldItemLightSourceRadius float
---@field LightSourceData TArray<FNightShroudLightSource>
---@field FoodTypesOnCooldownBits uint8
---@field Accuracy float
---@field AimYaw float
---@field AimPitch float
---@field LastIncomingAttackAngle float
---@field Avatar EAnvilAvatarType
---@field AvatarXP float
---@field ControlledAvatarProfile FAvatarProfile
USimPlayerDataComponent = {}



---@class USimPlayerProxyComponent : UProxyComponent
---@field GuardAngleToleranceYaw float
---@field GuardAngleTolerancePitchMin float
---@field GuardAngleTolerancePitchMax float
---@field GuardAngleToleranceYawAlt float
---@field GuardAngleTolerancePitchMinAlt float
---@field GuardAngleTolerancePitchMaxAlt float
---@field StaggerDuration float
---@field StaggerAmount float
---@field StabilityRegenCD float
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
---@field AutoPushMaxDistance float
---@field AutoPushMinDistance float
---@field AutoPushConeHalfAngleCosine float
USimPlayerProxyComponent = {}



---@class USnapPointProxyComponent : UProxyComponent
---@field ExtendFootprint boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field SnappingChannel EAnvilSnappingChannelType
---@field bPointOnLine boolean
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field TargetArea EAnvilTargetAreaType
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
---@field TargetArea EAnvilTargetAreaType
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



---@class UStaticTorchProxyComponent : UProxyComponent
---@field NightShroudRadius float
UStaticTorchProxyComponent = {}



---@class UStorehouseDataComponent : UDataComponent
---@field FamilyOwnedInventories boolean
---@field PublicInventory FCompHandleData
---@field ViewerRentExpireTime int32
---@field ViewerCanRelease boolean
---@field ViewerInventory FCompHandleData
UStorehouseDataComponent = {}



---@class UStorehouseProxyComponent : UProxyComponent
---@field FamilyOwnedInventories boolean
---@field NumSlotsPerInv uint8
---@field StackSize int32
---@field RentPrice int32
---@field RentDuration int32
---@field ExtendPrice int32
---@field ExtendDuration int32
UStorehouseProxyComponent = {}



---@class UStructureDataComponent : UDataComponent
---@field bRestrictedMode boolean
---@field bOnFoundation boolean
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
---@field bCannotBeDamagedInTown boolean
---@field bRequireSupport boolean
---@field bEnemyCanConvert boolean
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



---@class UTempleProxyComponent : UProxyComponent
UTempleProxyComponent = {}


---@class UTownHallDataComponent : UDataComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field TownHallId int32
---@field SubType EAnvilTownSubType
---@field Range float
---@field PledgedPlayersArrayCount int32
---@field NumTotalHouses int32
---@field NumUnclaimedHouses int32
---@field NumTotalTents int32
---@field NumUnclaimedTents int32
---@field TownNameId uint8
---@field TownNameOrdinal uint8
---@field TownFamilyId int32
UTownHallDataComponent = {}



---@class UTownHallProxyComponent : UProxyComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field bLocalReinforcementOnly boolean
---@field SubType EAnvilTownSubType
---@field AbandonedStartTime float
---@field OriginalOwnerTeamId uint8
UTownHallProxyComponent = {}



---@class UTownSiteProxyComponent : UProxyComponent
UTownSiteProxyComponent = {}


---@class UTrapDataComponent : UDataComponent
---@field bWasTriggered boolean
UTrapDataComponent = {}



---@class UTrapProxyComponent : UProxyComponent
---@field PlayerTrapDurationSec float
---@field AnimalBleedDamagePerSec float
---@field NormalizedAnimalEscapeChance float
---@field MissEffect TSubclassOf<UEntityTemplate>
UTrapProxyComponent = {}



---@class UTreeFallDataComponent : UDataComponent
---@field FallingDir float
UTreeFallDataComponent = {}



---@class UTreeFallProxyComponent : UProxyComponent
UTreeFallProxyComponent = {}


---@class UTweakableDataComponent : UDataComponent
---@field PopulationRequirementT2 uint8
---@field PopulationRequirementT3 uint8
---@field TentRequirementT2 uint8
---@field TentRequirementT3 uint8
---@field TownCenterRequiredBuilders uint8
---@field TownMapDisableSize uint8
---@field UpkeepCostReinforced float
---@field bClientsUseVisActorPool boolean
---@field bGlobalMaxVelocity float
---@field ForcedTimeOfDayNormalized uint8
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
---@field BasedEntities TArray<FBasedEntityEntry>
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
---@field bGroupVehicle boolean
---@field bYawInPlace boolean
---@field bLadderMovement boolean
---@field bCanWorldEntranceTravel boolean
---@field bWaterVehicle boolean
---@field bSailBoat boolean
---@field bDoAxleRaycasts boolean
---@field bAllowSwitchSeat boolean
---@field bUsePitch boolean
---@field bCanBeMovementBase boolean
---@field bRammingForceKillPlayer boolean
---@field bRammingAllowFriendlyFire boolean
---@field bCanBreachGates boolean
---@field MovementPlayerInteraction EAnvilVehicleMovementPlayerInteractionType
---@field CollisionEffect TSubclassOf<UEntityTemplate>
---@field RammingVelocityTime float
---@field RammingDamageType EAnvilDamageType
---@field RammingStabilityDamage float
---@field RammingStabilitySplashDamage float
---@field RammingStabilitySplashDamageRadius float
---@field RammingSpeedFactorRange FR2FloatRange
---@field RammingDamageRange FR2FloatRange
---@field RamCD float
---@field FrontAxleOffset FVector
---@field RearAxleOffset FVector
---@field MaxSubmersionDepth float
---@field FallingDistRange FR2FloatRange
---@field FallingDamageRange FR2FloatRange
UVehicleMovementProxyComponent = {}



---@class UVehicleSeatDataComponent : UDataComponent
---@field Occupant FCompHandleData
UVehicleSeatDataComponent = {}



---@class UVehicleSeatProxyComponent : UProxyComponent
---@field MountedStance EAnvilCharacterStance
---@field TargetArea EAnvilTargetAreaType
---@field PlayerOffset FVector
---@field PlayerRotation FRotator
---@field PlayerExitOffset FVector
---@field DismountMaxDelta float
---@field SeatThrustOffset FVector
---@field bIsDriver boolean
---@field bIsLeft boolean
---@field bSeatThrustInput boolean
---@field bEngineThrustInput boolean
---@field bRudderRotationInput boolean
---@field bUseMountedWeapon boolean
---@field bPrimeMountedWeapon boolean
---@field bMustNearExitToMount boolean
---@field bMountSeatLOSCheckIgnoreVehicle boolean
---@field bRevertRequiredEquipments boolean
---@field bMirrorDetachLocation boolean
---@field AnimationIndex int32
---@field MountedAttackDamageMultiplier float
---@field RequiredEquipments TArray<TSubclassOf<UItemTemplate>>
UVehicleSeatProxyComponent = {}



---@class UVisStaticMeshComponentBase : UStaticMeshComponent
---@field bUseCustomGeneratedCollisionMask boolean
---@field CustomGeneratedCollisionMask int32
---@field GeneratedCollisionTags int32
---@field GeneratedTargetArea EAnvilTargetAreaType
---@field GeneratedOrder int32
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



