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



---@class AFootprint : AActor
---@field bAutoSet boolean
---@field bShowMesh boolean
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
---@field StructureTiers TMap<TSubclassOf<UEntityTemplate>, boolean>
---@field FootprintSharedComponents TArray<FFootprintSharedCompEntry>
---@field FootprintVisualizer UCollisionVisualizerComponent
---@field MeshVisualizers TArray<UCollisionVisualizerComponent>
---@field StaticMeshVisualizers TArray<UStaticMeshComponent>
AFootprint = {}



---@class AVisActorBase : AActor
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
---@field Delay float
---@field Duration float
---@field MovementSpeedModifier float
---@field RotationSpeedModifier float
---@field bRepeatable boolean
---@field bRequireAim boolean
---@field StaminaCost float
---@field AimedStaminaCost float
FAnvilSimActivity = {}



---@class FCookingFuel
---@field FuelItem TSubclassOf<UItemTemplate>
---@field BurnDurationSec float
FCookingFuel = {}



---@class FCookingRecipe
---@field InputItems TArray<FItemQuantity>
---@field OutputItems TArray<FItemQuantity>
---@field CookDurationSec float
FCookingRecipe = {}



---@class FCraftingRecipe
---@field RecipeIngredients TArray<FItemCost>
---@field CraftedItemTemplate TSubclassOf<UItemTemplate>
---@field CraftedItemCodeName int32
---@field QualityIngredientTemplate TSubclassOf<UItemTemplate>
---@field QualityIngredientCodeName int32
FCraftingRecipe = {}



---@class FFamilyMemberData
---@field PlayerId int64
FFamilyMemberData = {}



---@class FFootprintSharedCompEntry
---@field Comp UProxyComponent
---@field bHighlight boolean
---@field bHide boolean
---@field bNoCopyToBuildSite boolean
FFootprintSharedCompEntry = {}



---@class FGridItem
---@field CodeName int32
---@field UnderlyingCodeName int32
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



---@class FHousePledgedPlayerIdArray
---@field PlayerArray TArray<int64>
FHousePledgedPlayerIdArray = {}



---@class FInventoryItem
---@field Base FGridItem
---@field DedicatedItem FGridItem
---@field Count int32
---@field SlotType EAnvilItemType
---@field Durability float
---@field ItemFlags uint8
---@field Payload uint8
---@field StackLimit int32
---@field bIsDisabled boolean
---@field bTooEncumberedToEquip boolean
FInventoryItem = {}



---@class FItemCost
---@field CostItem TSubclassOf<UItemTemplate>
---@field ItemCodeName int32
---@field Count uint8
---@field RequiredRareResourceArea EAnvilRareResourceAreaType
FItemCost = {}



---@class FItemCount
---@field ItemType TSubclassOf<UItemTemplate>
---@field ItemCodeName int32
---@field Count int32
---@field ItemFlags uint8
FItemCount = {}



---@class FItemQuantity
---@field ItemType TSubclassOf<UItemTemplate>
---@field ItemCodeName int32
---@field Quantity uint8
FItemQuantity = {}



---@class FItemSlot
---@field ProxyRepeat int32
---@field bOr boolean
---@field HeldItem TSubclassOf<UItemTemplate>
---@field Count int32
---@field StackLimit int32
---@field bHoldsLarge boolean
---@field SlotType EAnvilItemType
---@field DedicatedItemType TSubclassOf<UItemTemplate>
---@field DedicatedUnderlyingItemType TSubclassOf<UItemTemplate>
FItemSlot = {}



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
---@field Price int32
FMarketShopItem = {}



---@class FNightShroudLightSource
---@field LightPosition FVector
---@field LightRadius float
FNightShroudLightSource = {}



---@class FNightShroudLightSourceData
---@field LightSourceArray TArray<FNightShroudLightSource>
FNightShroudLightSourceData = {}



---@class FPledgedPlayer
FPledgedPlayer = {}


---@class FProducableItem
---@field ProducedItem TSubclassOf<UItemTemplate>
---@field ProducedItemCost TArray<FItemCost>
---@field ProductionTime float
---@field OutputCount uint8
---@field OutputMax uint32
---@field bRequiresResearch boolean
---@field bCrateProducedItems boolean
FProducableItem = {}



---@class FRefineryProducibleItem
---@field Base FGridItem
---@field OutputCount int32
---@field Cost TArray<FRefineryProducibleItemCost>
---@field bRequiresResearch boolean
---@field bCrateProducedItems boolean
FRefineryProducibleItem = {}



---@class FRefineryProducibleItemCost
---@field CodeName int32
FRefineryProducibleItemCost = {}



---@class FRefineryQueueItem
---@field Base FGridItem
---@field OwnerId int64
---@field bIsPrivate boolean
---@field bCanCancel boolean
FRefineryQueueItem = {}



---@class FTechItem
FTechItem = {}


---@class FTestStruct
---@field Num int32
FTestStruct = {}



---@class FVisvarPowerConnection
---@field RelativeAngle float
---@field InnerWidth float
---@field OuterWidth float
---@field ID uint64
FVisvarPowerConnection = {}



---@class UAIStimulusProxyComponent : UProxyComponent
---@field Type EAnvilStimulusType
---@field bAgroTarget boolean
UAIStimulusProxyComponent = {}



---@class UAdvancedSnappingProxyComponent : UProxyComponent
---@field bBlockSnapping boolean
---@field bDisableMinSnapWhenNotSnapping boolean
---@field bNoOverlap boolean
---@field bOverrideAngleOverlapMin boolean
---@field OverridedAngleOverlapMin float
---@field NumSnappingRequired uint8
UAdvancedSnappingProxyComponent = {}



---@class UAnimalAIDataComponent : UDataComponent
---@field CurrentState EAnvilAnimalState
---@field Velocity FVector
---@field AttachedTarget int64
UAnimalAIDataComponent = {}



---@class UAnimalAIProxyComponent : UProxyComponent
---@field VisionRange float
---@field VisionAngle float
---@field SlowSpeed float
---@field FastSpeed float
---@field Acceleration float
---@field RotationSpeed float
---@field TrapTime float
---@field bHoming boolean
---@field HomingDistance float
UAnimalAIProxyComponent = {}



---@class UAnimalAttackProxyComponent : UProxyComponent
---@field AttackTargetTypes TArray<TSubclassOf<UEntityTemplate>>
---@field OnRoadVisionRange float
---@field ChaseDuration float
---@field ChaseCooldown float
---@field AttackOffset FVector
---@field AttackRadius float
---@field AttackFrequency float
---@field AttackDelay float
---@field MinNumAttacks uint8
---@field MaxNumAttacks uint8
---@field AttackDamage int32
UAnimalAttackProxyComponent = {}



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
---@field InputItemName int32
---@field CurrentSelectedOutputIndex uint8
---@field OutputList TArray<FAnvilOutput>
---@field HitCounter float
UAnvilDataComponent = {}



---@class UAnvilProxyComponent : UProxyComponent
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
---@field LinkRange float
---@field DetectionRange float
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
---@field StepAngle float
UBoxCollisionProxyComponent = {}



---@class UBuildSiteDataComponent : UDataComponent
---@field BuiltStructureEntity int32
---@field RequiredTool EAnvilToolType
---@field bRequiresTownHall boolean
---@field bRequiresCamp boolean
---@field bRequiresSmallCamp boolean
---@field RequiresHorseToComplete boolean
---@field TierPrerequisite uint8
---@field RoadMaterialRequirement int32
---@field ResourceBranchesRequirement int32
---@field ProcessedWoodRequirement int32
---@field ProcessedStoneRequirement int32
---@field ProcessedIronRequirement int32
---@field ReinforcedWoodRequirement int32
---@field ResourceFibreRequirement int32
---@field ResourceBranchesRawRequirement int32
---@field RoadMaterialSubmitted int32
---@field ResourceBranchesSubmitted int32
---@field ProcessedWoodSubmitted int32
---@field ProcessedStoneSubmitted int32
---@field ProcessedIronSubmitted int32
---@field ReinforcedWoodSubmitted int32
---@field ResourceFibreSubmitted int32
---@field ResourceBranchesRawSubmitted int32
---@field BuildGhostPlacementStatus int64
---@field PlacementInfoFlags int32
UBuildSiteDataComponent = {}



---@class UBuildSiteProxyComponent : UProxyComponent
---@field BuiltStructureEntity TSubclassOf<UEntityTemplate>
---@field BuildLocation int32
---@field CompatibleSurfaceTypes int32
---@field RequiredTool EAnvilToolType
---@field bRequiresTownHall boolean
---@field bRequiresCamp boolean
---@field bRequiresSmallCamp boolean
---@field RequiresHorseToComplete boolean
---@field bBuildableOverRoads boolean
---@field bBuildableNearSpawnPoint boolean
---@field bBuildableInEnemyTerritory boolean
---@field bBuildableNearEnemies boolean
---@field bAllowRapidBuild boolean
---@field CanBuildTownStructureWithoutPledge boolean
---@field TierPrerequisite uint8
---@field RequiredDeployable TSubclassOf<UItemTemplate>
---@field MaxHeightShift float
---@field AdditionalMaxHeightShift float
---@field MinDistanceBetweenStructures float
---@field RoadMaterialRequirement int32
---@field ResourceBranchesRequirement int32
---@field ProcessedWoodRequirement int32
---@field ProcessedStoneRequirement int32
---@field ProcessedIronRequirement int32
---@field ReinforcedWoodRequirement int32
---@field ResourceFibreRequirement int32
---@field ResourceBranchesRawRequirement int32
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
---@field StepAngle float
UCapsuleCollisionProxyComponent = {}



---@class UChatMessage : UObject
UChatMessage = {}


---@class UCollisionProxyComponent : UProxyComponent
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field StepAngle float
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
---@field FuelExpiryTimestampAgeSec int32
---@field bIsFueled boolean
---@field bCanCookWithExistingOutputs boolean
---@field CookCompleteTimestampAgeSec int32
---@field bIsFoodBurning boolean
UCookingDataComponent = {}



---@class UCookingProxyComponent : UProxyComponent
---@field FuelList TArray<FCookingFuel>
---@field RecipeList TArray<FCookingRecipe>
---@field FoodBurnDurationSec float
---@field bCanCookWithExistingOutputs boolean
UCookingProxyComponent = {}



---@class UCraftingDataComponent : UDataComponent
---@field RecipeList TArray<FCraftingRecipe>
UCraftingDataComponent = {}



---@class UCraftingProxyComponent : UProxyComponent
---@field RecipeList TArray<FCraftingRecipe>
UCraftingProxyComponent = {}



---@class UDataComponent : UActorComponent
UDataComponent = {}


---@class UDecayProxyComponent : UProxyComponent
---@field bEnabled boolean
---@field StartDelayHours float
---@field DecayTimeHours float
UDecayProxyComponent = {}



---@class UDeployProxyComponent : UProxyComponent
---@field bRequireMounted boolean
---@field bCopyHealthPercentage boolean
---@field DeployedBuildSite TSubclassOf<UEntityTemplate>
UDeployProxyComponent = {}



---@class UDestroyableProxyComponent : UProxyComponent
---@field DestructionEffectEntity TSubclassOf<UEntityTemplate>
UDestroyableProxyComponent = {}



---@class UEditorSpawnerProxyComponent : UProxyComponent
UEditorSpawnerProxyComponent = {}


---@class UEntityAttachableDataComponent : UDataComponent
---@field AttachedEntity int64
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
---@field TargetEntityTypes TArray<TSubclassOf<UEntityTemplate>>
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
---@field SerializationType EEntitySerializationType
---@field bGenerateMeshCollisionsFromVisActor boolean
---@field GenerateMeshCollisionMask int32
---@field GenerateMeshCollisionStepAngle float
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


---@class UFamilyAreaMarkerDataComponent : UDataComponent
---@field FamilyId int32
---@field AllowPublicPledging boolean
---@field Tier uint8
---@field ExtensionTier uint8
---@field ClaimTownCurrencyCost int32
---@field FamilyMembers TArray<FFamilyMemberData>
---@field VisVarMaxNumFamilyMembers int32
---@field VisVarRestrictedBoxExtent float
---@field ParentFamilyArea int64
---@field IsFamilyAreaCore uint8
---@field NumChildAreas uint8
UFamilyAreaMarkerDataComponent = {}



---@class UFamilyAreaMarkerProxyComponent : UProxyComponent
---@field Tier uint8
---@field ClaimTownCurrencyCost int32
---@field IsFamilyAreaCore uint8
UFamilyAreaMarkerProxyComponent = {}



---@class UFarmDataComponent : UDataComponent
---@field NormalizedWaterDuration float
---@field NormalizedFertilizeDuration float
UFarmDataComponent = {}



---@class UFarmProxyComponent : UProxyComponent
---@field FieldTypes TArray<TSubclassOf<UEntityTemplate>>
---@field RichSoilMaturityTimeModifier float
---@field WaterDurationMaxSeconds float
---@field WaterDurationPerUnitItem float
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
---@field StepAngle float
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
---@field Position FVector
---@field Rotation FRotator
---@field Extents FVector
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
---@field IsForCampsOnly boolean
---@field IsGroupHouse boolean
---@field PledgedPlayerIds FHousePledgedPlayerIdArray
UHousingDataComponent = {}



---@class UHousingProxyComponent : UProxyComponent
---@field PlayerCapacity uint8
---@field IsForCampsOnly boolean
---@field IsGroupHouse boolean
---@field bRequiresCeilingCheck boolean
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
---@field bForceStackable boolean
---@field bEnforceWithdrawalStamina boolean
---@field bOnlyAllowMaxDurabilityItems boolean
---@field NormalizedSpoilageFactor float
---@field LifespanWhenEmpty float
---@field bAllowWithdrawal boolean
---@field bConvertItemsToPublic boolean
UInventoryProxyComponent = {}



---@class UItemTemplate : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field ItemType EAnvilItemType
---@field SecondaryType EAnvilItemType
---@field ItemDurabilityType EAnvilItemDurabilityType
---@field ItemPayloadType EAnvilItemPayloadType
---@field PickupEntity TSubclassOf<UEntityTemplate>
---@field ItemDestroyedEffect TSubclassOf<UEntityTemplate>
---@field ItemInvokedEffect TSubclassOf<UEntityTemplate>
---@field ItemHitEffect TSubclassOf<UEntityTemplate>
---@field bStackable boolean
---@field bLarge boolean
---@field bTwoHanded boolean
---@field Encumberance uint8
---@field ArmedDurabilityLossPerSec float
---@field DurabilityLossPerUse float
---@field DurabilityLossPerSec float
---@field bRearmAfterConsumption boolean
---@field StockPileWithdrawalValue float
---@field HeatedItem TSubclassOf<UItemTemplate>
---@field CooledItem TSubclassOf<UItemTemplate>
---@field bRanged boolean
---@field Damage uint8
---@field DamageOffset FVector
---@field DamageRadius float
---@field FireOffset FVector
---@field AmmoType TSubclassOf<UItemTemplate>
---@field ProjectileEntity TSubclassOf<UEntityTemplate>
---@field VariableDamageMaxModifier float
---@field VariableDamageMinModifier float
---@field GuardMeterReductionMultiplier float
---@field bStaggersWielder boolean
---@field ArmourType EAnvilArmourType
---@field DamageType EAnvilDamageType
---@field ArmorMitigation uint8
---@field MitigationSuccessDurabilityLoss uint8
---@field MitigationFailureDurabilityLoss uint8
---@field ArmourMitigatedEffect TSubclassOf<UEntityTemplate>
---@field ToolType EAnvilToolType
---@field ToolEffectiveness float
---@field RegenPerSec float
---@field RegenDuration float
---@field ConversionRatioToFood uint8
---@field FoodType EAnvilFoodType
---@field bDoesSpoil boolean
---@field SpoilageDurabilityLossPerSec float
---@field RequiredStance EAnvilCharacterStance
---@field StanceOverride TMap<EAnvilCharacterStance, TSubclassOf<UItemTemplate>>
---@field AimMovementSpeedModifier float
---@field AimRotationSpeedModifier float
---@field DefaultActivity FAnvilSimActivity
---@field RangedActivity FAnvilSimActivity
---@field BuildActivity FAnvilSimActivity
---@field GatherActivity FAnvilSimActivity
---@field bIsDeployable boolean
---@field DeployedBuildSite TSubclassOf<UEntityTemplate>
---@field GuardMeterCostPerHit float
---@field NightShroudLightRadius float
---@field bAllowCameraPan boolean
---@field MaxEncumbranceforAction float
---@field ShieldDurabilityLossMultiplier float
---@field HungerRestored float
---@field HealthLimitRestored float
---@field StaminaLimitRestored float
---@field QuantityPerCrate uint16
---@field TownCurrencyValue uint16
---@field StunChance float
---@field StunDuration float
---@field StunThrowDistance float
UItemTemplate = {}



---@class ULadderProxyComponent : UProxyComponent
---@field PlayerOffset float
---@field ExitXOffset float
---@field ExitZOffset float
---@field ExitZTolerance float
---@field PitchMin float
---@field PitchMax float
---@field MaxVelocity float
---@field AccelerationMultiplier float
---@field PlayerFallDamage float
---@field LadderFallDamage float
ULadderProxyComponent = {}



---@class ULifetimeDataComponent : UDataComponent
---@field Age float
ULifetimeDataComponent = {}



---@class ULifetimeProxyComponent : UProxyComponent
---@field LifeSpan float
---@field DropResourceOnDeath boolean
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
---@field SilverStored int32
---@field OwnerPlayerName FString
---@field MinItemPrice int32
---@field MaxItemPrice int32
UMarketShopDataComponent = {}



---@class UMarketShopProxyComponent : UProxyComponent
UMarketShopProxyComponent = {}


---@class UMeshCollisionProxyComponent : UProxyComponent
---@field PhysicsAssetName UStaticMesh
---@field Position FVector
---@field Rotation FRotator
---@field ProjectToLandscape uint8
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field StepAngle float
UMeshCollisionProxyComponent = {}



---@class UMeshVisibilityDataComponent : UDataComponent
---@field bIsVisible boolean
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
---@field AimYaw float
---@field AimPitch float
UMountedWeaponDataComponent = {}



---@class UMountedWeaponProxyComponent : UProxyComponent
---@field AimPivot FVector
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
---@field GrowthStage uint8
---@field bCanGrow boolean
UPlantGrowthProxyComponent = {}



---@class UPlayerControllerDataComponent : UDataComponent
---@field PledgedTownHallInfo int64
---@field PledgedMilitiaInfo int64
---@field bShowRespawnScreen uint8
---@field bShowDeathMarker uint8
---@field LastDeathLocation FVector
UPlayerControllerDataComponent = {}



---@class UPlayerControllerProxyComponent : UProxyComponent
UPlayerControllerProxyComponent = {}


---@class UPlayerInputDataComponent : UDataComponent
---@field AimLocation FVector
---@field AimArcEndGroundLocation FVector
---@field ClickHeading FVector
---@field InputMode EAnvilPlayerInputMode
---@field AimMeshType EAnvilPlayerAimMeshType
---@field AimMeshLocation FVector
---@field AimArcRotation float
---@field AimArcA float
---@field AimArcX0 float
---@field AimArcGroundHitDistance float
---@field AimArcCollisionDistance float
---@field CurrentUsableEntityId int64
---@field CurrentMountableEntityId int64
---@field CurrentCollectableResourceType int32
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
---@field SpawnRadius float
---@field Faction EAnvilFactionId
UPlayerSpawnerProxyComponent = {}



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
---@field bCrateProducedItems boolean
---@field NumItemsInQueue int32
---@field ItemProductionTimeLeft float
---@field EstItemProductionTimeLeft float
---@field TotalProductionTimeLeft float
---@field bInventoryFull boolean
---@field Priority uint8
URefineResourceDataComponent = {}



---@class URefineResourceProxyComponent : UProxyComponent
---@field ProducableItemList TArray<FProducableItem>
---@field bCrateProducedItems boolean
URefineResourceProxyComponent = {}



---@class URelicTechCenterDataComponent : UDataComponent
---@field RelicTechCosts TArray<FItemCost>
---@field TechItemsDeposited TArray<int32>
URelicTechCenterDataComponent = {}



---@class URelicTechCenterProxyComponent : UProxyComponent
---@field RelicTechCosts TArray<FItemCost>
URelicTechCenterProxyComponent = {}



---@class URepTestProxyComponent : UProxyComponent
---@field BytesToRep int32
URepTestProxyComponent = {}



---@class URepairProxyComponent : UProxyComponent
---@field TotalRepairCost int32
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
---@field bTrackSpawnedEntity boolean
---@field bDontSpawnInSettlements boolean
---@field bIsRare boolean
---@field bDontSpawnNearPlayers boolean
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
---@field TeamID uint8
---@field Encumbrance uint8
---@field GuardMeter float
---@field ActivityState EAnvilSimActivityState
---@field ActivityAimLocation FVector
---@field CurrentStance EAnvilCharacterStance
---@field PrimaryHeldItemCodeName int32
---@field PrimaryHeldUnderlyingCodeName int32
---@field SecondaryHeldItemCodeName int32
---@field SecondaryHeldUnderlyingCodeName int32
---@field UnarmedPrimaryHeldItemCodeName int32
---@field UnarmedSecondaryHeldItemCodeName int32
---@field CurrentMountedEntity int64
---@field CurrentMountedSeatOffset FVector
---@field PlayerName FString
---@field PlayerUniqueID int64
---@field NobleVoteId int64
---@field TrappedTimer float
---@field StaggerTimer float
---@field bIsAiming boolean
---@field bIsGuarding boolean
---@field bShowStructureStats boolean
---@field bIsAdmin boolean
---@field bDebugDraw boolean
---@field bPriming boolean
---@field bInTravelZone boolean
---@field SecondsUntilFullDecay float
---@field HeldItemLightSourceRadius float
---@field LightSourceData FNightShroudLightSourceData
---@field FoodTypesOnCooldownBits uint8
---@field AimYaw float
---@field AimPitch float
---@field LastIncomingAttackAngle float
---@field bIsMeshHidden boolean
USimPlayerDataComponent = {}



---@class USimPlayerProxyComponent : UProxyComponent
---@field GuardAngleTolerance float
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
---@field BreakDeceleration float
---@field RotationSpeed float
---@field MovementAcceleration float
---@field SprintStaminaDrain float
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
---@field StepAngle float
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
---@field bScaleCost boolean
---@field bPlatformMode boolean
---@field bBridgeMode boolean
---@field PlatformStartOffset FVector
---@field MidPieceZOffset float
---@field MidPiece TSubclassOf<UEntityTemplate>
---@field EndPiece TSubclassOf<UEntityTemplate>
---@field SnappingChannel EAnvilSnappingChannelType
---@field SurfaceType EAnvilPhysicalSurfaceType
---@field CollisionMask int32
---@field StepAngle float
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
---@field StructureType EAnvilBuildStructureType
---@field BuilderId int64
UStructureDataComponent = {}



---@class UStructureProtectionProxyComponent : UProxyComponent
---@field SnappedFoundationDamageMitigation float
UStructureProtectionProxyComponent = {}



---@class UStructureProxyComponent : UProxyComponent
---@field bCannotBeDismantled boolean
---@field bRequireSupport boolean
---@field StructureType EAnvilBuildStructureType
UStructureProxyComponent = {}



---@class USupplyStorageProxyComponent : UProxyComponent
USupplyStorageProxyComponent = {}


---@class UTeamDataComponent : UDataComponent
---@field TeamID uint8
UTeamDataComponent = {}



---@class UTeamProxyComponent : UProxyComponent
---@field TeamID uint8
---@field Accessibility EAnvilAccessibilityType
---@field bAlwaysAllowAccessWhenScorched boolean
UTeamProxyComponent = {}



---@class UTechCenterProxyComponent : UProxyComponent
---@field TechCountList TArray<uint32>
UTechCenterProxyComponent = {}



---@class UTechItemTemplate : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field NameText FText
---@field Description FText
---@field Image UTexture2D
UTechItemTemplate = {}



---@class UTownHallDataComponent : UDataComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field bLocalReinforcementOnly boolean
---@field TownHallId uint8
---@field bTownUnderAttack boolean
---@field bHasSupplyStructure boolean
---@field PledgedPlayersArrayCount int32
---@field NumTotalHouses int32
---@field NumUnclaimedHouses int32
---@field NumTotalTents int32
---@field NumUnclaimedTents int32
---@field NumReinforcementSupplies int32
---@field TownNameId uint8
---@field TownNameOrdinal uint8
UTownHallDataComponent = {}



---@class UTownHallProxyComponent : UProxyComponent
---@field Tier uint8
---@field bIsSmallCamp boolean
---@field bLocalReinforcementOnly boolean
---@field AbandonedStartTime float
UTownHallProxyComponent = {}



---@class UTownMarkerProxyComponent : UProxyComponent
---@field InfluenceRadius float
UTownMarkerProxyComponent = {}



---@class UTrapDataComponent : UDataComponent
---@field bWasTriggered boolean
UTrapDataComponent = {}



---@class UTrapProxyComponent : UProxyComponent
---@field PlayerTrapDurationSec float
---@field AnimalBleedDamagePerSec float
---@field NormalizedAnimalEscapeChance float
UTrapProxyComponent = {}



---@class UUpgradeDataComponent : UDataComponent
---@field UpgradeTarget int32
---@field PopRequirement int32
---@field TierPrerequisite uint8
---@field WorkRequirement int32
---@field ProcessedWoodRequirement int32
---@field ProcessedStoneRequirement int32
---@field ProcessedIronRequirement int32
---@field ReinforcedWoodRequirement int32
---@field WorkSubmitted int32
---@field ProcessedWoodSubmitted int32
---@field ProcessedStoneSubmitted int32
---@field ProcessedIronSubmitted int32
---@field ReinforcedWoodSubmitted int32
---@field bIsUpgrading int32
UUpgradeDataComponent = {}



---@class UUpgradeProxyComponent : UProxyComponent
---@field UpgradeTarget TSubclassOf<UEntityTemplate>
---@field GoldRequirement int32
---@field PopRequirement int32
---@field TierPrerequisite uint8
---@field WorkRequirement int32
---@field ProcessedWoodRequirement int32
---@field ProcessedStoneRequirement int32
---@field ProcessedIronRequirement int32
---@field ReinforcedWoodRequirement int32
UUpgradeProxyComponent = {}



---@class UVehicleMovementDataComponent : UDataComponent
---@field Velocity FVector
---@field RotationalSpeedYaw float
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
---@field bGroupVehicle boolean
---@field bYawInPlace boolean
---@field bLadderMovement boolean
---@field CollisionEffect TSubclassOf<UEntityTemplate>
---@field RammingDamage float
---@field RammingVelocityFactor float
---@field RammingDamageType EAnvilDamageType
---@field bDoAxleRaycasts boolean
---@field bWaterVehicle boolean
---@field bUsePitch boolean
---@field FrontAxleOffset FVector
---@field RearAxleOffset FVector
UVehicleMovementProxyComponent = {}



---@class UVehicleSeatProxyComponent : UProxyComponent
---@field MountedStance EAnvilCharacterStance
---@field PlayerOffset FVector
---@field PlayerExitOffset FVector
---@field bIsDriver boolean
---@field bIsLeft boolean
---@field bUseMountedWeapon boolean
---@field bUseDeployable boolean
---@field bMustNearExitToMount boolean
---@field AnimationIndex int32
---@field MountedAttackDamageMultiplier float
UVehicleSeatProxyComponent = {}



---@class UWellDataComponent : UDataComponent
---@field TotalLevel float
UWellDataComponent = {}



---@class UWellProxyComponent : UProxyComponent
---@field WaterGenerationTimeSec int32
UWellProxyComponent = {}



