---@meta

---@class AAnvilGameModeBase : AGameModeBase
AAnvilGameModeBase = {}


---@class AAnvilHUD : AHUD
---@field ScreenshotRT UTextureRenderTarget2D
AAnvilHUD = {}



---@class AAnvilMovieCharacter : AVisActorBase
---@field SimPlayerDataComponent USimPlayerDataComponent
---@field ItemMeshComponent USkeletalMeshComponent
---@field ItemSecondaryMeshComponent USkeletalMeshComponent
---@field UnarmedItemMeshComponent USkeletalMeshComponent
---@field UnarmedItemSecondaryMeshComponent USkeletalMeshComponent
---@field VehicleInputState EAnvilVehicleInputState
---@field Capsule UCapsuleComponent
---@field Mesh USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field PlayerVisualsComponent UVisPlayerVisualsComponent
---@field TorchVFXComponent UNiagaraComponent
AAnvilMovieCharacter = {}



---@class AAnvilMovieCharacterDirector : AActor
---@field NumMovieCharacters int32
---@field MovieCharacterStates TArray<FAnvilMovieCharacterState>
---@field MovieCharacterClass TSubclassOf<AAnvilMovieCharacter>
---@field AnvilMovieItemAssignments TArray<FAnvilMovieItemAssignment>
---@field FactionId EAnvilFactionId
---@field HeadArmourType EAnvilArmourType
---@field BodyArmourType EAnvilArmourType
---@field RandomDirectionAngle float
---@field NumRows int32
---@field NumColumns int32
---@field RowSize float
---@field ColumnSize float
---@field RowBias float
---@field ColumnBias float
---@field MovementSpeed float
---@field MovementDelay float
---@field AnimationDelay float
---@field AnimationVelocityMultiplier float
---@field RowToRecord int32
---@field VehicleClass TSubclassOf<AVisVehicle>
---@field VehicleToCharacterOffset FVector
---@field CharacterAnimationMontage UAnimMontage
---@field VehicleSeatName FName
---@field NumRowsGuarding int32
---@field bIsDirectorEnabled boolean
---@field LandscapePopUpDistance float
---@field SpawnDelay float
AAnvilMovieCharacterDirector = {}



---@class AAnvilMoviePipelineController : APlayerController
AAnvilMoviePipelineController = {}


---@class AAnvilMoviePipelineGameMode : AGameModeBase
AAnvilMoviePipelineGameMode = {}


---@class AAnvilPlayerController : APlayerController
---@field RootWidget UAnvilRootWidget
AAnvilPlayerController = {}



---@class ADayNightManager : AActor
ADayNightManager = {}

---@return int32
function ADayNightManager:GetDayCurrentSeconds() end


---@class AEntityActor : AActor
---@field EntityTemplate TSubclassOf<UEntityTemplate>
---@field bShowVisActorPreview boolean
---@field VisActorPreview UChildActorComponent
---@field SceneComponent UEntityActorRootComponent
AEntityActor = {}



---@class AGameplayGameMode : AAnvilGameModeBase
AGameplayGameMode = {}


---@class AGameplayPlayerController : AAnvilPlayerController
---@field CallForReinforcementsCue USoundCue
AGameplayPlayerController = {}



---@class AMainMenuGameMode : AAnvilGameModeBase
AMainMenuGameMode = {}


---@class AMainMenuPlayerController : AAnvilPlayerController
AMainMenuPlayerController = {}


---@class AMapBorderActor : ACameraActor
---@field bPreCapture boolean
---@field bCapture boolean
---@field BoxVisualizer UStaticMeshComponent
AMapBorderActor = {}



---@class AMapEditorNote : AActor
---@field NoteTextComponent UTextRenderComponent
AMapEditorNote = {}



---@class AMapList : AInfo
---@field MapDatabase TMap<FName, FMapData>
AMapList = {}



---@class AMapMarkerActor : AActor
---@field Marker UMapMarkerComponent
AMapMarkerActor = {}



---@class APlayerVisualsInfo : AInfo
---@field FactionArmourMeshesMap TMap<EAnvilFactionId, FArmourTypeMeshes>
APlayerVisualsInfo = {}



---@class AProxyPawn : ADefaultPawn
---@field VisPlayer AVisPlayer
---@field VisController AVisController
---@field MaxCameraDistance float
---@field MinCameraDistance float
AProxyPawn = {}

function AProxyPawn:StopBandwidthRecording() end
---@param WatchTarget FString
function AProxyPawn:StartBandwidthRecording(WatchTarget) end
---@param bDrawCollisions boolean
function AProxyPawn:SetDrawCollisions(bDrawCollisions) end
---@param Height float
function AProxyPawn:SetCameraHeight(Height) end
---@param FOV float
function AProxyPawn:SetCameraFov(FOV) end
---@param Angle float
function AProxyPawn:SetCameraAngle(Angle) end
function AProxyPawn:OnRotateCameraStop() end
function AProxyPawn:OnRotateCameraStart() end
function AProxyPawn:OnPanCameraStop() end
function AProxyPawn:OnPanCameraStart() end
---@param BuildSiteCodeName uint32
---@param ContextID uint64
function AProxyPawn:EnterBuildMode(BuildSiteCodeName, ContextID) end
---@param Radius float
function AProxyPawn:DrawSphere(Radius) end
function AProxyPawn:ClearFogOfWar() end
---@param Adjust float
function AProxyPawn:ChangeHeight(Adjust) end
function AProxyPawn:AutoMoveOff() end
---@param Arg FString
---@param bIsSprint boolean
function AProxyPawn:AutoMove(Arg, bIsSprint) end


---@class AServerPartition : AActor
---@field ServerPartitionComponent UServerPartitionComponent
---@field SceneComponent USceneComponent
---@field NavMeshBlockers TArray<UBoxComponent>
AServerPartition = {}



---@class AUIGlobals : AInfo
---@field TooltipClass TSubclassOf<UUserWidget>
---@field TownNames1 TArray<FText>
---@field TownNames2 TArray<FText>
---@field TownNames3 TArray<FText>
---@field IconTemplates TMap<EMapIconType, FMapIconTypeProperty>
---@field WorldEntityIconClasses TMap<EAnvilWorldEntityType, TSubclassOf<UWorldEntityMapIcon>>
---@field QualityIconTextures TMap<EAnvilItemQualityType, UTexture2D>
AUIGlobals = {}



---@class AVisActor : AVisActorBase
---@field VisDisplayName FText
---@field Description FText
---@field DescriptionFooter FText
---@field MapIconProperty FMapIconInstanceProperty
---@field UseWindowType EHUDWindowType
---@field UseDisclaimerText FText
---@field bUseForceCameraZoom boolean
---@field AdditionalActionButtons TArray<EActionButtonType>
---@field bNightVisibility boolean
---@field bUseInteractionOutline boolean
---@field InteractionIcon UTexture2D
---@field AnimSpeed float
---@field AnimRotationalSpeed FRotator
---@field AnimVelocity FVector
---@field TemplateCDO UEntityTemplate
---@field MeshVisibilityDataComponent UMeshVisibilityDataComponent
---@field PositionSmoothSpeed float
---@field RotationSmoothSpeed float
---@field ClientMovementSmoothingDistance float
---@field bHasLandscapeCollisions boolean
---@field bUseDepthStencilForInteractionHighlight boolean
---@field ToggleVisibilityComponents TArray<USceneComponent>
AVisActor = {}



---@class AVisAnimal : AVisActor
---@field AnimalAIDataComponent UAnimalAIDataComponent
---@field HealthDataComponent UHealthDataComponent
---@field Capsule UCapsuleComponent
---@field Mesh USkeletalMeshComponent
---@field CurrentStateMontageMap TMap<EAnvilAnimalState, UAnimMontage>
AVisAnimal = {}



---@class AVisAnvilStructure : AVisStructure
---@field AnvilDataComponent UAnvilDataComponent
---@field ConvertedItemMeshComponent USkeletalMeshComponent
---@field ConvertedItemMeshMap TMap<FString, USkeletalMesh>
---@field HitVFXLocation USceneComponent
---@field HitSuccessVFX UNiagaraSystem
---@field HitFailVFX UNiagaraSystem
---@field HitSuccessSoundCue USoundCue
---@field HitFailSoundCue USoundCue
AVisAnvilStructure = {}

---@param Old float
---@param New float
function AVisAnvilStructure:OnHitCounterChanged(Old, New) end


---@class AVisBeaconTower : AVisStructure
---@field BeaconTowerDataComponent UBeaconTowerDataComponent
AVisBeaconTower = {}



---@class AVisBuildSite : AVisActor
---@field VisBuildGhostComponent UVisBuildGhostComponent
---@field BuildSiteDataComponent UBuildSiteDataComponent
---@field StructureDataComponent UStructureDataComponent
---@field Icon UTexture2D
---@field Category EBuildSiteCategory
---@field Order int32
---@field BuildSiteVisibility EBuildSiteVisibility
---@field ArrowComponent UArrowComponent
---@field Mesh UStaticMeshComponent
---@field BuildCollisionDecalComponent UDecalComponent
---@field BuildSiteMaterial UMaterialInterface
AVisBuildSite = {}



---@class AVisCart : AVisVehicle
---@field HungerDataComponent UHungerDataComponent
---@field StaminaDataComponent UStaminaDataComponent
---@field AnimalAIDataComponent UAnimalAIDataComponent
---@field SeatSocketName FName
---@field Mesh USkeletalMeshComponent
---@field SaddleMesh USkeletalMeshComponent
---@field HalterHeadMesh USkeletalMeshComponent
---@field HalterBodyMesh USkeletalMeshComponent
---@field SaddleMeshes TArray<USkeletalMesh>
AVisCart = {}



---@class AVisCentralMarketplace : AVisStructure
---@field CentralMarketplaceDataComponent UCentralMarketplaceDataComponent
AVisCentralMarketplace = {}



---@class AVisController : AVisActor
---@field PlayerControllerDataComponent UPlayerControllerDataComponent
---@field DeathMarker UMapMarkerComponent
AVisController = {}



---@class AVisCookingStructure : AVisStructure
---@field bShowCheatSheet boolean
---@field CookingDataComponent UCookingDataComponent
---@field WaterMeshMaterialMap TMap<TSubclassOf<UItemTemplate>, UMaterialInterface>
---@field WaterLevelMesh UStaticMeshComponent
---@field WaterHeightCurve UCurveFloat
---@field WaterScaleCurve UCurveVector
---@field BoilingTemperatureHighAudio UAudioComponent
---@field BoilingTemperatureLowAudio UAudioComponent
AVisCookingStructure = {}



---@class AVisCraftingStructure : AVisStructure
---@field CraftingDataComponent UCraftingDataComponent
AVisCraftingStructure = {}



---@class AVisDryingRack : AVisStructure
---@field BaseMesh UStaticMeshComponent
---@field DryingItemMesh UStaticMeshComponent
---@field DryingRackProxy UDryingRackProxyComponent
---@field DryingItemMeshMaterial UMaterialInstanceDynamic
AVisDryingRack = {}



---@class AVisEffect : AVisActor
---@field ArrowComponent UArrowComponent
---@field AudioComponent UAudioComponent
---@field NiagaraComponent UNiagaraComponent
---@field Mesh USkeletalMeshComponent
---@field LifetimeDataComponent ULifetimeDataComponent
---@field bSeekAudioComponent boolean
AVisEffect = {}



---@class AVisEntityPrefab : AVisActor
---@field ArrowComponent UArrowComponent
---@field MeshVisibilityArea UBoxComponent
AVisEntityPrefab = {}



---@class AVisFamilyCenter : AVisFamilyMarkerArea
---@field FamilyCenterDataComponent UFamilyCenterDataComponent
---@field BuildAreaDecalComponent UDecalComponent
AVisFamilyCenter = {}



---@class AVisFamilyInventory : AVisStructure
AVisFamilyInventory = {}


---@class AVisFamilyMarkerArea : AVisStructure
---@field FamilyAreaMarkerDataComponent UFamilyAreaMarkerDataComponent
AVisFamilyMarkerArea = {}



---@class AVisFarm : AVisStructure
---@field FarmDecalComponent UDecalComponent
---@field FertilizeDecalComponent UDecalComponent
---@field RoughnessStart float
---@field RoughnessEnd float
---@field FarmDataComponent UFarmDataComponent
AVisFarm = {}



---@class AVisFishingBobber : AActor
---@field ArrowComponent UArrowComponent
---@field MeshComponent UStaticMeshComponent
---@field LineComponent UCableComponent
---@field IdleCurve UCurveVector
---@field HookedCurve UCurveVector
---@field CastOffsetZ float
---@field CastDelay float
---@field CastSpeed float
---@field SlackLineLengthFactor float
---@field TightLineLengthFactor float
---@field Caster AVisPlayer
AVisFishingBobber = {}



---@class AVisFishingIndicator : AActor
---@field ArrowComponent UArrowComponent
---@field MeshComponent UStaticMeshComponent
---@field InvalidColour FLinearColor
---@field ValidColour FLinearColor
---@field ReadyColour FLinearColor
---@field MeshMaterial UMaterialInstanceDynamic
AVisFishingIndicator = {}



---@class AVisGate : AVisStructure
---@field GateDataComponent UGateDataComponent
---@field Mesh USkeletalMeshComponent
AVisGate = {}



---@class AVisHeatingStructure : AVisStructure
---@field HeatingDataComponent UHeatingDataComponent
AVisHeatingStructure = {}



---@class AVisHitConverterStructure : AVisStructure
---@field HitConverterDataComponent UHitConverterDataComponent
---@field ConvertedItemMeshComponent UStaticMeshComponent
---@field ItemMeshInfoMap TMap<FString, FHitConverterItemMeshInfo>
---@field HitVFXLocation USceneComponent
---@field HitSuccessVFX UNiagaraSystem
---@field HitFailVFX UNiagaraSystem
---@field HitSuccessSoundCue USoundCue
---@field HitFailSoundCue USoundCue
AVisHitConverterStructure = {}

---@param Old float
---@param New float
function AVisHitConverterStructure:OnHitConverterCounterChanged(Old, New) end


---@class AVisHouse : AVisStructure
---@field HousingDataComponent UHousingDataComponent
---@field PlayerSpawnerDataComponent UPlayerSpawnerDataComponent
AVisHouse = {}



---@class AVisImpactEffect : AVisActor
---@field HitEffectActors TSubclassOf<AActor>
---@field ArrowComponent UArrowComponent
---@field ImpactSurfaceDataComponent UImpactSurfaceDataComponent
AVisImpactEffect = {}



---@class AVisItemStash : AVisActor
---@field ArrowComponent UArrowComponent
---@field LootMarkerVFXComponent UNiagaraComponent
AVisItemStash = {}



---@class AVisLivestockStructure : AVisStructure
---@field FoodItem TSubclassOf<UItemTemplate>
---@field ProducedItem TSubclassOf<UItemTemplate>
AVisLivestockStructure = {}



---@class AVisMapInfo : AVisActor
---@field TweakableDataComponent UTweakableDataComponent
AVisMapInfo = {}



---@class AVisMapPost : AVisActor
---@field MapPostDataComponent UMapPostDataComponent
AVisMapPost = {}



---@class AVisMarketShop : AVisStructure
---@field MarketShopDataComponent UMarketShopDataComponent
AVisMarketShop = {}



---@class AVisMine : AVisStructure
AVisMine = {}


---@class AVisMobileWeapon : AVisVehicle
---@field MountedWeaponDataComponent UMountedWeaponDataComponent
---@field VehicleMesh USkeletalMeshComponent
---@field AmmoMesh USkeletalMeshComponent
AVisMobileWeapon = {}



---@class AVisOfflineCharacter : AVisActor
---@field OfflineCharacterDataComponent UOfflineCharacterDataComponent
---@field DeathCue USoundCue
---@field Capsule UCapsuleComponent
---@field Mesh USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field PlayerVisualsComponent UVisPlayerVisualsComponent
---@field HealthDataComponent UHealthDataComponent
---@field TeamDataComponent UTeamDataComponent
---@field ArmourDataComponent UArmorDataComponent
AVisOfflineCharacter = {}



---@class AVisPickupItem : AVisActor
---@field PickupDataComponent UPickupDataComponent
---@field Mesh UStaticMeshComponent
---@field ArrowComponent UArrowComponent
---@field LootMarkerVFXComponent UNiagaraComponent
AVisPickupItem = {}



---@class AVisPlayer : AVisActor
---@field SpringArm UVisSpringArmComponent
---@field SimPlayerDataComponent USimPlayerDataComponent
---@field PlayerInputDataComponent UPlayerInputDataComponent
---@field HealthDataComponent UHealthDataComponent
---@field HungerDataComponent UHungerDataComponent
---@field StaminaDataComponent UStaminaDataComponent
---@field TemperatureDataComponent UTemperatureDataComponent
---@field AdminEnvDataComponent UAdminEnvDataComponent
---@field PlayerStatusDataComponent UPlayerStatusDataComponent
---@field ItemMeshComponent USkeletalMeshComponent
---@field ItemSecondaryMeshComponent USkeletalMeshComponent
---@field UnarmedItemMeshComponent USkeletalMeshComponent
---@field UnarmedItemSecondaryMeshComponent USkeletalMeshComponent
---@field PostProcessComponent UPostProcessComponent
---@field LandscapeCullVirtualTextureVolumeClass TSubclassOf<ARuntimeVirtualTextureVolume>
---@field RotationAmount float
---@field CameraRotationLerpSpeed float
---@field AimMeshLength float
---@field YawSpeed float
---@field DeathCue USoundCue
---@field Capsule UCapsuleComponent
---@field Mesh USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field AimMeshComponent UStaticMeshComponent
---@field AimMeshMaterial UMaterialInstanceDynamic
---@field MeleeAimMeshComponent UStaticMeshComponent
---@field MeleeAimMeshTargetComponent UStaticMeshComponent
---@field FishingAimMeshClass TSubclassOf<AVisFishingIndicator>
---@field FishingBobberClass TSubclassOf<AVisFishingBobber>
---@field PlayerVisualsComponent UVisPlayerVisualsComponent
---@field MapMarker UMapMarkerComponent
---@field FamilyMarkerMapMarker UMapMarkerComponent
---@field ActivityStateMontageMap TMap<EAnvilSimActivityState, UAnimMontage>
---@field ArmourDataComponent UArmorDataComponent
---@field VoiceIndicator UBillboardComponent
---@field TorchVFXComponent UNiagaraComponent
---@field TorchAudioComponent UAudioComponent
---@field RainVFXComponent UNiagaraComponent
---@field SnowVFXComponent UNiagaraComponent
---@field BreathFogVFXComponent UNiagaraComponent
---@field RainLowAudioComponent UAudioComponent
---@field RainMidAudioComponent UAudioComponent
---@field RainHighAudioComponent UAudioComponent
---@field SnowLowAudioComponent UAudioComponent
---@field SnowMidAudioComponent UAudioComponent
---@field SnowHighAudioComponent UAudioComponent
---@field WindLowAudioComponent UAudioComponent
---@field WindMidAudioComponent UAudioComponent
---@field WindHighAudioComponent UAudioComponent
---@field RepairItemSoundCue USoundCue
---@field PostProcessMaterialParameterCollection UMaterialParameterCollection
---@field PositionPostProcessMaterialParameterCollection UMaterialParameterCollection
---@field CurrentUsableVisActor AVisActor
---@field CurrentMountableVisActor AVisActor
---@field CurrentUEUsableActor AActor
AVisPlayer = {}

---@return float
function AVisPlayer:GetVelocityHeadingDegrees() end
---@return FString
function AVisPlayer:GetPlayerName() end
---@return float
function AVisPlayer:GetNightVisibilityRadius() end
---@param Index int32
---@return FLinearColor
function AVisPlayer:GetNightShroudLightSourcePositionAndRadius(Index) end
---@return FVector
function AVisPlayer:GetCameraVelocity() end
function AVisPlayer:BP_UpdateNightShroudMaterials() end
function AVisPlayer:BP_OnHeldItemChanged() end
---@return FVector
function AVisPlayer:AnimGetVelocity() end


---@class AVisPowerMill : AVisStructure
---@field PowerMillDataComponent UPowerMillDataComponent
---@field SKMesh USkeletalMeshComponent
---@field AnimInst UVisPowerUnitAnimInstance
AVisPowerMill = {}



---@class AVisRefinery : AVisStructure
---@field RefineResourceDataComponent URefineResourceDataComponent
AVisRefinery = {}



---@class AVisRelicTechCenter : AVisStructure
---@field RelicTechCenterDataComponent URelicTechCenterDataComponent
AVisRelicTechCenter = {}



---@class AVisResource : AVisActor
---@field ResourceDataComponent UResourceDataComponent
---@field PlantGrowthComponent UPlantGrowthDataComponent
---@field StageMeshes TArray<UStaticMesh>
---@field bApplyIdBasedRandomRotation boolean
---@field ArrowComponent UArrowComponent
---@field Mesh UStaticMeshComponent
---@field ShakeCurve UCurveVector
AVisResource = {}



---@class AVisRichSoil : AVisActor
---@field ArrowComponent UArrowComponent
---@field RichSoilDecal UDecalComponent
---@field RichSoilDataComponent URichSoilDataComponent
AVisRichSoil = {}



---@class AVisSpawnPoint : AVisActor
---@field PlayerSpawnerDataComponent UPlayerSpawnerDataComponent
AVisSpawnPoint = {}



---@class AVisSpline : AVisStructure
---@field SplineComponent UVisSplineComponent
---@field SplineScaffoldingComponent UVisSplineComponent
AVisSpline = {}



---@class AVisSplineBuildSite : AVisBuildSite
---@field SplineComponent UVisSplineComponent
AVisSplineBuildSite = {}



---@class AVisStaticTorch : AVisStructure
---@field StaticTorchDataComponent UStaticTorchDataComponent
AVisStaticTorch = {}



---@class AVisStructure : AVisActor
---@field ScaffoldingComponent UVisScaffoldingComponent
---@field StructureIcon UTexture2D
---@field BuildSiteCategory EBuildSiteCategory
---@field BuildSiteOrder int32
---@field BuildSiteVisibility EBuildSiteVisibility
---@field UpgradeDataComponent UUpgradeDataComponent
---@field HealthDataComponent UHealthDataComponent
---@field TeamDataComponent UTeamDataComponent
---@field StructureDataComponent UStructureDataComponent
---@field ScorchDataComponent UScorchDataComponent
---@field ArrowComponent UArrowComponent
---@field UseVolumeDecalComponent UDecalComponent
---@field GrassRemovalVolume UGrassRemovalVolumeComponent
---@field GeneratedScorchEffects int32
---@field ScorchEffectAssets TArray<UNiagaraSystem>
AVisStructure = {}

---@param Tag FName
---@param bIsVisible boolean
function AVisStructure:UpdateVisualComponentsByTag(Tag, bIsVisible) end


---@class AVisTownCenter : AVisStructure
---@field TownHallDataComponent UTownHallDataComponent
AVisTownCenter = {}



---@class AVisTrap : AVisActor
---@field ArrowComponent UArrowComponent
---@field Mesh USkeletalMeshComponent
---@field TriggeredAnimation UAnimationAsset
---@field TrapDataComponent UTrapDataComponent
AVisTrap = {}



---@class AVisVehicle : AVisActor
---@field VehicleMovementDataComponent UVehicleMovementDataComponent
---@field MoveLoopAudioComponent UAudioComponent
---@field MoveLoopParticleSystem UNiagaraComponent
---@field HealthDataComponent UHealthDataComponent
---@field ArrowComponent UArrowComponent
AVisVehicle = {}



---@class AVisWindMill : AVisStructure
---@field WindMillDataComponent UWindMillDataComponent
---@field PowerUnitDataComponent UPowerUnitDataComponent
---@field SlotData UEntityAttachableDataComponent
---@field SKMesh USkeletalMeshComponent
---@field AnimInst UVisPowerUnitAnimInstance
---@field IsRefiningPercentageCurrentMin float
AVisWindMill = {}



---@class AVisWorldEntrance : AVisActor
---@field ArrowComponent UArrowComponent
---@field GrassRemovalVolume UGrassRemovalVolumeComponent
AVisWorldEntrance = {}



---@class AVisualGlobals : AInfo
---@field FoundationDecorSnapRange float
AVisualGlobals = {}



---@class AvisLadder : AVisStructure
AvisLadder = {}


---@class FAlert
FAlert = {}


---@class FAnvilAssetManager
---@field EntityTemplateObjectLibrary UObjectLibrary
---@field ItemTemplateObjectLibrary UObjectLibrary
---@field VisItemObjectLibrary UObjectLibrary
---@field BuildSiteList TArray<AVisBuildSite>
---@field VisItemList TArray<UVisItem>
FAnvilAssetManager = {}



---@class FAnvilDataTableManager
FAnvilDataTableManager = {}


---@class FAnvilMovieCharacterState
---@field MovieCharacter AAnvilMovieCharacter
---@field MovieVehicle AVisVehicle
---@field MovingActor AActor
---@field MovementDelay float
---@field AnimationDelay float
---@field Direction FVector
FAnvilMovieCharacterState = {}



---@class FAnvilMovieItemAssignment
---@field PrimaryArmedItemCodeName FString
---@field SecondaryArmedItemCodeName FString
---@field PrimaryUnarmedItemCodeName FString
---@field SecondaryUnarmedItemCodeName FString
---@field ChanceToAssign float
FAnvilMovieItemAssignment = {}



---@class FAnvilOptionsManager
---@field AudioVolumeMap TMap<FString, FAudioVolumeClass>
---@field GameInstance UAnvilGameInstance
---@field OptionsSave UAnvilOptionsSave
FAnvilOptionsManager = {}



---@class FAnvilPropertyUtil
FAnvilPropertyUtil = {}


---@class FArmourTypeMeshes
---@field HeadArmourMeshes USkeletalMesh
---@field BodyArmourMeshes USkeletalMesh
FArmourTypeMeshes = {}



---@class FAudioVolumeClass
---@field Mixer USoundMix
---@field SoundClass USoundClass
FAudioVolumeClass = {}



---@class FAutoMoveState
FAutoMoveState = {}


---@class FBuildSiteCostData : FTableRowBase
---@field RoadMaterial int16
---@field ResourceBranches int16
---@field ProcessedWood int16
---@field ProcessedStone int16
---@field ProcessedIron int16
---@field ReinforcedWood int16
---@field ResourceFibre int16
---@field AnimalFat int16
---@field AnimalBones int16
---@field ProcessedLeather int16
---@field ResourceStoneFragments int16
---@field ProcessedWoodHard int16
---@field Nails int16
---@field Mortar int16
---@field Gravel int16
FBuildSiteCostData = {}



---@class FCachedCameraState
FCachedCameraState = {}


---@class FCameraRotateState
FCameraRotateState = {}


---@class FCentralMarketplaceUserDataKey
---@field DataForMarketEntityId int64
---@field DataForMarketMapHash int32
FCentralMarketplaceUserDataKey = {}



---@class FCentralMarketplaceUserDataManager
FCentralMarketplaceUserDataManager = {}


---@class FClientConfig
---@field GlobalShardConfig FGlobalShardConfig
---@field AvailableShardList TArray<FShardConfig>
FClientConfig = {}



---@class FClientConfigManager
FClientConfigManager = {}


---@class FClientConnectionRequest
---@field OnlineId uint64
---@field ProtocolId uint64
---@field TargetServerName FString
---@field SelectedFactionId uint8
---@field QueueTypeToJoin uint8
---@field MajorVersion int32
---@field MinorVersion int32
FClientConnectionRequest = {}



---@class FConnectToServerResponse
---@field ResponseType EClientConnectToServerResponseType
---@field SelectedFactionId uint8
---@field ConnectTokenBase64 FString
---@field ServerNameToJoin FString
---@field ServerAddressToJoin FString
---@field QueuePosition int32
FConnectToServerResponse = {}



---@class FContextfulPlacementStatus
FContextfulPlacementStatus = {}


---@class FDayNightKeyFrame
---@field Label FString
---@field NormalizedPosition float
---@field AtmosphericLightIntensity float
---@field AtmosphericLightColor FLinearColor
---@field SunLightIntensity float
---@field SunLightColor FLinearColor
---@field SunLightShadowBias float
---@field SunLightShadowSlopeBias float
---@field MoonLightIntensity float
---@field MoonLightColor FLinearColor
---@field AtmosphereRayleighScatteringColor FLinearColor
---@field WhiteBalanceTemp float
---@field WhiteBalanceTint float
FDayNightKeyFrame = {}



---@class FDecayData : FTableRowBase
---@field bEnabled boolean
---@field StartDelayHours float
---@field DecayTimeHours float
FDecayData = {}



---@class FDeleteProfileResponse
---@field OnlineId uint64
---@field bDeletedProfile boolean
FDeleteProfileResponse = {}



---@class FEquipmentData : FTableRowBase
---@field DurabilityLossPerUse float
---@field DamageRadius float
---@field VariableDamageMaxModifier float
---@field VariableDamageMinModifier float
---@field GuardMeterReductionMultiplier float
---@field ShieldDurabilityLossMultiplier float
---@field GuardMeterCostPerHit float
---@field ArmorMitigation uint8
---@field ToolEffectiveness float
---@field AimMovementSpeedModifier float
---@field AimRotationSpeedModifier float
FEquipmentData = {}



---@class FFactionLockResponse
---@field LockedFactionId uint8
---@field bCanDeleteProfile boolean
FFactionLockResponse = {}



---@class FFoodData : FTableRowBase
---@field RegenPerSec float
---@field HungerRestored float
---@field HealthLimitRestored float
---@field StaminaLimitRestored float
FFoodData = {}



---@class FGlobalShardConfig
---@field DiscordRoleServerUrl FString
FGlobalShardConfig = {}



---@class FGraphData
FGraphData = {}


---@class FHealthData : FTableRowBase
---@field MaxHealth float
FHealthData = {}



---@class FHitConverterItemMeshInfo
---@field Meshes TArray<UStaticMesh>
---@field MaterialOverrides TArray<UMaterialInterface>
FHitConverterItemMeshInfo = {}



---@class FItemData : FTableRowBase
---@field Damage uint8
---@field DefaultMarketplaceValue uint16
---@field DurabilityLossPerSec float
---@field StockPileWithdrawalValue float
---@field QuantityPerCrate uint16
FItemData = {}



---@class FLoreData : FTableRowBase
---@field Header FText
---@field TitleIcon UTexture2D
---@field TitleText FText
---@field BodyText FText
---@field HintText FText
FLoreData = {}



---@class FMapData
---@field MapId EAnvilMapId
---@field bIsSecondaryWorld boolean
---@field WorldSize FVector2D
---@field WorldOrigin FVector2D
---@field CapturePadding FVector2D
---@field MapImage UTexture2D
---@field MapTerritoryMask UTexture2D
---@field MapTreeLayerImage UTexture2D
FMapData = {}



---@class FMapIconInstanceProperty
---@field Label FText
---@field Icon UTexture2D
---@field AltIcons TArray<UTexture2D>
---@field MapModeIconOverrides TMap<EMapMode, UTexture2D>
---@field MapActorType EMapIconType
FMapIconInstanceProperty = {}



---@class FMapIconTypeProperty
---@field bRotationFixed boolean
---@field bPositionFixed boolean
---@field bHasWorldEntityMapIcon boolean
---@field BaseSize float
---@field BaseSizeZoomFactor float
---@field FontSize float
---@field FontSizeZoomFactor float
---@field ZOrder int32
---@field MinDisplayScale float
---@field MaxDisplayScale float
---@field UpdateRange float
---@field IconClass TSubclassOf<UMapIcon>
FMapIconTypeProperty = {}



---@class FProfileInfoResponse
---@field OnlineId uint64
---@field Timestamp int64
---@field AgeDeployData FString
FProfileInfoResponse = {}



---@class FQueueStatusResponse
---@field QueueStatus QueueStatusType
---@field QueuedServerName FString
---@field QueuePosition int32
FQueueStatusResponse = {}



---@class FRefineryQueueItem
---@field Base FGridItem
---@field bCanCancel boolean
FRefineryQueueItem = {}



---@class FServerListEntry
---@field ServerName FString
---@field ServerAddress FString
---@field MapName FString
---@field RegionIndex int32
---@field OriginX float
---@field OriginY float
---@field ExtentsX float
---@field ExtentsY float
---@field WorldEntityPoolData FString
FServerListEntry = {}



---@class FServerListResponse
---@field ServerList TArray<FServerListEntry>
---@field WorldEntityPoolVersion uint32
FServerListResponse = {}



---@class FServerRegion
FServerRegion = {}


---@class FShardConfig
---@field ShardId int32
---@field ShardName FString
---@field bEnabled boolean
---@field AnvilServiceHttpUrl FString
---@field Announcement FString
---@field NextTestUnixTimestamp FString
FShardConfig = {}



---@class FUpgradeCostData : FTableRowBase
---@field ProcessedWood int16
---@field ProcessedStone int16
---@field ProcessedIron int16
---@field Silver int16
---@field ReinforcedWood int16
---@field AnimalFat int16
---@field AnimalBones int16
---@field ProcessedLeather int16
---@field Mortar int16
---@field Gravel int16
FUpgradeCostData = {}



---@class FVoiceLoginInfo
---@field OnlineId FString
---@field LoginToken FString
---@field ChannelType EVoiceChannelType
---@field ChannelName FString
---@field LocalChannelJoinToken FString
---@field TextChannelJoinToken FString
---@field BroadcastChannelJoinToken FString
FVoiceLoginInfo = {}



---@class FVoiceLoginToken
---@field LoginToken FString
---@field LocalChanToken FString
FVoiceLoginToken = {}



---@class FWeatherManager
---@field SeasonToAutumnCurve UCurveFloat
---@field SeasonToWinterCurve UCurveFloat
---@field SeasonToTempCurve UCurveFloat
---@field SeasonToTintCurve UCurveFloat
---@field TemperatureVisualsCurve UCurveFloat
---@field WetnessVisualsCurve UCurveFloat
---@field WindVisualsCurve UCurveFloat
---@field WeatherSeasonsMaterialParameterCollection UMaterialParameterCollection
---@field WinterPostProcessVolume APostProcessVolume
FWeatherManager = {}



---@class UActionButtonWidget : UUserWidget
---@field ActionButtonType EActionButtonType
---@field ActionButton UButton
---@field CallForReinforcementsCue USoundCue
UActionButtonWidget = {}

function UActionButtonWidget:OnHovered() end
function UActionButtonWidget:OnClicked() end
---@return boolean
function UActionButtonWidget:IsActionButtonEnabled() end
---@return ESlateVisibility
function UActionButtonWidget:GetActionButtonVisibility() end


---@class UActionStrip : UUserWidget
---@field DismantleTimerText UTextBlock
UActionStrip = {}



---@class UAdminPlayerListItemData : UObject
UAdminPlayerListItemData = {}


---@class UAdminPlayerListItemWidget : UUserWidget
---@field NameBox UAnvilButtonWidget
---@field TeamBox UAnvilButtonWidget
---@field SteamIdBox UAnvilButtonWidget
---@field TeleportToButton UAnvilButtonWidget
---@field BanButton UAnvilButtonWidget
UAdminPlayerListItemWidget = {}

function UAdminPlayerListItemWidget:OnTeleportToClicked() end
function UAdminPlayerListItemWidget:OnBanClicked() end
function UAdminPlayerListItemWidget:CopySteamId() end


---@class UAdminScreen : UAnvilScreen
---@field PlayerListView UListView
---@field SortByNameButton UAnvilButtonWidget
---@field SortByDistanceButton UAnvilButtonWidget
---@field ReloadButton UAnvilButtonWidget
---@field SearchBox UEditableTextBox
---@field PlayerList TArray<UAdminPlayerListItemData>
UAdminScreen = {}

function UAdminScreen:ReloadList() end
function UAdminScreen:OnSortByName() end
function UAdminScreen:OnSortByDistance() end
---@param Text FText
---@param Method ETextCommit::Type
function UAdminScreen:OnSearch(Text, Method) end


---@class UAlertWidget : UUserWidget
---@field AlertTextBlock UTextBlock
---@field AcceptButtonBox USizeBox
---@field AcceptButton UButton
---@field DeclineButtonBox USizeBox
---@field DeclineButton UButton
UAlertWidget = {}

function UAlertWidget:OnDeclineClicked() end
function UAlertWidget:OnAcceptClicked() end


---@class UAlertsContainerWidget : UUserWidget
---@field MaxNumVisibleAlerts int32
---@field AlertWidgetClass TSubclassOf<UAlertWidget>
---@field AlertsMaximizeButton UButton
---@field AlertsMinimizeButton UButton
---@field AlertsVerticalBox UVerticalBox
UAlertsContainerWidget = {}

function UAlertsContainerWidget:OnAlertsMinimizeClicked() end
function UAlertsContainerWidget:OnAlertsMaximizeClicked() end


---@class UAnvilButtonWidget : UUserWidget
---@field LabelText FText
---@field LabelFontSize int32
---@field ButtonWidth float
---@field ButtonHeight float
---@field ButtonText UTextBlock
---@field Button UButton
---@field SizeBox USizeBox
UAnvilButtonWidget = {}

function UAnvilButtonWidget:ContextfulOnClicked() end


---@class UAnvilCharacterSave : USaveGame
---@field FogOfWarData TArray<uint8>
---@field CompletedGameplayHints int32
UAnvilCharacterSave = {}



---@class UAnvilClientVoiceClient : UObject
UAnvilClientVoiceClient = {}

function UAnvilClientVoiceClient:SetVoiceChatEnabledStateFromLocalSave() end
---@param bEnabled boolean
function UAnvilClientVoiceClient:SetVoiceChatEnabled(bEnabled) end
---@param InPlayVoiceInBackground boolean
function UAnvilClientVoiceClient:SetPlayVoiceInBackgroundEnabled(InPlayVoiceInBackground) end
---@param Volume float
function UAnvilClientVoiceClient:SetOutputVolume(Volume) end
---@param Volume float
function UAnvilClientVoiceClient:SetInputVolume(Volume) end
function UAnvilClientVoiceClient:Reconnect() end


---@class UAnvilDialogBox : UUserWidget
---@field HeaderText UTextBlock
---@field BodyText UTextBlock
---@field Throbber UThrobber
---@field ComboBox UComboBoxString
---@field Slider USlider
---@field SliderCurrentValueText UTextBlock
---@field SliderMinValueText UTextBlock
---@field SliderMaxValueText UTextBlock
---@field TextInputLabelTextBox UTextBlock
---@field TextInputEditableTextBox UEditableTextBox
---@field LeftButton UAnvilButtonWidget
---@field RightButton UAnvilButtonWidget
UAnvilDialogBox = {}

function UAnvilDialogBox:OnRightButtonClicked() end
function UAnvilDialogBox:OnLeftButtonClicked() end
---@return FText
function UAnvilDialogBox:GetSliderCurrentValueText() end
---@param Value float
function UAnvilDialogBox:FOnSliderValueChanged(Value) end


---@class UAnvilDropdownEntryWidget : UUserWidget
---@field ComboBox UComboBoxString
---@field LabelText FText
---@field ComboList TArray<FString>
---@field LabelTextBox UTextBlock
UAnvilDropdownEntryWidget = {}

---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UAnvilDropdownEntryWidget:OnOptionSelected(SelectedItem, SelectionType) end


---@class UAnvilGameInstance : UGameInstance
---@field MapWidget UMapWidget
---@field HUDWidget UHUDWidget
---@field WorldEntityPoolManager UWorldEntityPoolManager
---@field TravelAddress FString
---@field ConnectTokenBuffer TArray<uint8>
---@field CharacterSave UAnvilCharacterSave
---@field AnvilClientVoiceClient UAnvilClientVoiceClient
---@field AssetManager FAnvilAssetManager
---@field WeatherManager FWeatherManager
---@field OptionsManager FAnvilOptionsManager
---@field UIGlobalsClass TSubclassOf<AUIGlobals>
---@field DirtyLandscapeProxies TArray<ALandscapeProxy>
---@field VisActorList TArray<AVisActor>
---@field TravelVisActorList TArray<AVisActor>
---@field ClientConfigManager FClientConfigManager
UAnvilGameInstance = {}

---@param OutVisActorList TArray<AVisActor>
function UAnvilGameInstance:GetVisActors(OutVisActorList) end
---@param OutMajor int32
---@param OutMinor int32
---@param OutPatch int32
---@param OutCL int32
function UAnvilGameInstance:GetVersion(OutMajor, OutMinor, OutPatch, OutCL) end
---@param OutHours int32
---@param OutMinutes int32
---@param OutSeconds int32
function UAnvilGameInstance:GetTimeOfDay(OutHours, OutMinutes, OutSeconds) end
---@param OutSeconds int32
function UAnvilGameInstance:GetDayCurrentSeconds(OutSeconds) end
---@param OutputFileName FString
---@param Type UClass
---@param PropertyNameFilter TArray<FString>
function UAnvilGameInstance:DumpProperties(OutputFileName, Type, PropertyNameFilter) end


---@class UAnvilKeyEntryWidget : UUserWidget
---@field LabelText FText
---@field ActionLabel FName
---@field InputType EInputType
---@field LabelTextBox UTextBlock
---@field InputSelector UInputKeySelector
UAnvilKeyEntryWidget = {}

---@param Input FInputChord
function UAnvilKeyEntryWidget:OnAxisMappingChanged(Input) end
---@param Input FInputChord
function UAnvilKeyEntryWidget:OnActionMappingChanged(Input) end


---@class UAnvilMovieCharacterNameWidget : UUserWidget
---@field NameText UTextBlock
---@field VisibilitDelayRandomRange float
---@field VisibilitDelayStartTime float
---@field VisibiliyDelayPerDistance FVector
---@field VisibilityDelayAnchor FVector
UAnvilMovieCharacterNameWidget = {}



---@class UAnvilOptionsSave : USaveGame
---@field VolumeSettings TMap<FString, float>
---@field SavedVoiceOutputDeviceName FString
---@field SavedVoiceInputDeviceName FString
---@field bShowPlayerName boolean
---@field bInteractCameraZoom boolean
---@field AcceptedDisclaimerVersion int32
---@field LastShardId int32
UAnvilOptionsSave = {}



---@class UAnvilPanel : UUserWidget
---@field AnvilPanelSlot0 UNamedSlot
---@field AnvilPanelSlot1 UNamedSlot
---@field AnvilPanelSlot2 UNamedSlot
---@field AnvilPanelSlot3 UNamedSlot
---@field AnvilPanelSlot4 UNamedSlot
---@field AnvilPanelSlot5 UNamedSlot
---@field AnvilPanelSlot6 UNamedSlot
---@field AnvilPanelSlot7 UNamedSlot
UAnvilPanel = {}



---@class UAnvilRootWidget : UUserWidget
---@field ScreenWidgets TMap<EAnvilScreenType, UAnvilScreen>
---@field ScreenCanvas UCanvasPanel
---@field BackgroundImage UImage
---@field DialogBox UAnvilDialogBox
---@field WatermarkCanvas UCanvasPanel
---@field WatermarkVersionText UTextBlock
---@field ScreenStack TArray<EAnvilScreenType>
UAnvilRootWidget = {}



---@class UAnvilScreen : UUserWidget
---@field bOverrideBackground boolean
---@field Background UTexture2D
---@field ParentSlot UCanvasPanelSlot
UAnvilScreen = {}



---@class UAnvilSliderWidget : UUserWidget
---@field PropertyLabel FString
---@field SliderLabel FText
---@field LabelTextBox UTextBlock
---@field Slider USlider
UAnvilSliderWidget = {}

---@param Value float
function UAnvilSliderWidget:NativeOnSliderChanged(Value) end


---@class UAnvilWindow : UStructureWindow
---@field CurrentSelectedOutputImage UImage
---@field OutputPreviousButton UButton
---@field OutputNextButton UButton
UAnvilWindow = {}

function UAnvilWindow:OutputPreviousButtonClicked() end
function UAnvilWindow:OutputNextButtonClicked() end
---@param Old uint8
---@param New uint8
function UAnvilWindow:OnCurrentSelectedOutputIndexChanged(Old, New) end


---@class UBeaconTowerPlayerInfoMapIcon : UMapIcon
---@field FriendlyColour FSlateColor
---@field EnemyColour FSlateColor
UBeaconTowerPlayerInfoMapIcon = {}



---@class UBuildMenuStructureButton : UGridItemWidget
---@field TownAreaIconImage UImage
---@field FamilyAreaIconImage UImage
UBuildMenuStructureButton = {}

---@param ItemSlot UGridItemWidget
function UBuildMenuStructureButton:OnBuild(ItemSlot) end


---@class UBuildMenuTabButton : UGridItemWidget
---@field SelectedImage UImage
UBuildMenuTabButton = {}



---@class UBuildMenuWindow : UHUDWindow
---@field TabButtonPanel UPanelWidget
---@field StructureButtonGrid UGridPanelWidget
---@field TabButtonClass TSubclassOf<UBuildMenuTabButton>
---@field TabButtonIcons TMap<EBuildSiteCategory, UTexture2D>
---@field BuildLocation int32
UBuildMenuWindow = {}



---@class UCentralMarketplaceListEntryWidget : UUserWidget
---@field CancelButton UButton
---@field ItemImage UImage
---@field QualityIconImage UImage
---@field ItemNameTextBlock UTextBlock
---@field BuyerSellerTextBlock UTextBlock
---@field QuantityTextBlock UTextBlock
---@field PriceTextBlock UTextBlock
---@field BuyFulfillButton UAnvilButtonWidget
UCentralMarketplaceListEntryWidget = {}

function UCentralMarketplaceListEntryWidget:OnCancelButtonClicked() end
function UCentralMarketplaceListEntryWidget:OnBuySellButtonClicked() end
---@return FText
function UCentralMarketplaceListEntryWidget:GetPlayerNameText() end


---@class UCentralMarketplaceMapTooltip : UUserWidget
UCentralMarketplaceMapTooltip = {}


---@class UCentralMarketplaceOrderGridPanelWidget : UGridPanelWidget
UCentralMarketplaceOrderGridPanelWidget = {}


---@class UCentralMarketplaceOrderItemWidget : UGridItemWidget
UCentralMarketplaceOrderItemWidget = {}


---@class UCentralMarketplaceWidget : UUserWidget
---@field CentralMarketplaceListEntryWidgetClass TSubclassOf<UCentralMarketplaceListEntryWidget>
---@field ItemCategoryButtonClass TSubclassOf<UItemCategoryButton>
---@field ItemCategoryIcons TMap<EVisItemCategory, UTexture2D>
---@field bIsMapWidget boolean
---@field ItemCategoryButtonHorizontalBox UHorizontalBox
---@field MarketTabSwitcher UWidgetSwitcher
---@field SaleListEntriesScrollBox UScrollBox
---@field OrderListEntriesScrollBox UScrollBox
---@field BuySellTabButton UAnvilButtonWidget
---@field PlaceOrderTabButton UAnvilButtonWidget
---@field ActiveOrdersTabButton UAnvilButtonWidget
---@field HeaderContainer UHeaderContainer
---@field OrderGridPanelWidget UCentralMarketplaceOrderGridPanelWidget
---@field SelectedOrderItemNameText UTextBlock
---@field SelectedOrderItemImage UImage
---@field SelectedOrderItemQuantityEditableTextBox UEditableTextBox
---@field SelectedOrderItemPriceEditableTextBox UEditableTextBox
---@field SelectedOrderItemMinQualityComboBox UComboBoxString
---@field SelectedOrderItemTotalPriceTextBlock UTextBlock
---@field SelectedItemPlaceOrderButton UAnvilButtonWidget
UCentralMarketplaceWidget = {}

function UCentralMarketplaceWidget:OnSelectedItemPlaceOrderButtonClicked() end
function UCentralMarketplaceWidget:OnPlaceOrderTabButtonClicked() end
function UCentralMarketplaceWidget:OnBuySellTabButtonClicked() end
function UCentralMarketplaceWidget:OnActiveOrdersTabButtonClicked() end
---@return boolean
function UCentralMarketplaceWidget:IsSelectedItemPlaceOrderButtonEnabled() end
---@return boolean
function UCentralMarketplaceWidget:IsPlaceOrderTabButtonEnabled() end
---@return boolean
function UCentralMarketplaceWidget:IsBuySellTabButtonEnabled() end
---@return boolean
function UCentralMarketplaceWidget:IsActiveOrdersTabButtonEnabled() end
---@return ESlateVisibility
function UCentralMarketplaceWidget:GetSelectedOrderItemTotalPriceTextVisibility() end
---@return FText
function UCentralMarketplaceWidget:GetSelectedOrderItemTotalPriceText() end
---@return ESlateVisibility
function UCentralMarketplaceWidget:GetItemCategoryButtonPanelVisibility() end


---@class UCentralMarketplaceWindow : UStructureWindow
---@field CentralMarketplaceWidget UCentralMarketplaceWidget
UCentralMarketplaceWindow = {}



---@class UChatEntryWidget : UUserWidget
---@field ModeNameMap TMap<EAnvilChatType, FText>
---@field ModeSwitchKeywordMap TMap<FString, EAnvilChatType>
---@field ChatTextField URichTextBlock
UChatEntryWidget = {}



---@class UChatWidget : UUserWidget
---@field ChatWidth float
---@field ChatHeight float
---@field ChatMinimizedHeight float
---@field CurrentMode EAnvilChatType
---@field MinimizeButton UButton
---@field MaximizeButton UButton
---@field ChatEntryDropdown UComboBoxString
---@field SizeBox USizeBox
---@field ChatEntryTextField UEditableTextBox
---@field ChatHistoryListView UListView
---@field EntryTemplate UChatEntryWidget
---@field LastItem UObject
UChatWidget = {}

---@param Item FString
---@param Type ESelectInfo::Type
function UChatWidget:OnModeOptionSelected(Item, Type) end
function UChatWidget:OnMinimized() end
function UChatWidget:OnMaximized() end
---@param Text FText
---@param Method ETextCommit::Type
function UChatWidget:OnEntryCommitted(Text, Method) end
---@param Text FText
function UChatWidget:OnEntryChanged(Text) end


---@class UConnectScreen : UAnvilScreen
---@field BackButton UAnvilButtonWidget
---@field RefreshButton UAnvilButtonWidget
---@field ConnectButton UAnvilButtonWidget
---@field DownloadingThrobber UThrobber
---@field NameValidationMessageText UTextBlock
UConnectScreen = {}

function UConnectScreen:OnRefreshButtonClicked() end
function UConnectScreen:OnConnectButtonClicked() end
function UConnectScreen:OnBackButtonClicked() end
---@return boolean
function UConnectScreen:IsRefreshButtonEnabled() end
---@return boolean
function UConnectScreen:IsConnectButtonEnabled() end
---@return boolean
function UConnectScreen:IsBackButtonEnabled() end
---@return ESlateVisibility
function UConnectScreen:GetThrobberVisibility() end


---@class UCookingWindow : UStructureWindow
---@field RecipeInputItemGrid UInventoryWidget
---@field RecipeOutputItemGrid UInventoryWidget
---@field FuelInputItemGrid UInventoryWidget
---@field FuelOutputItemGrid UInventoryWidget
---@field WaterInputItemGrid UInventoryWidget
---@field CookingDurationText UTextBlock
---@field FuelDurationText UTextBlock
---@field CheatSheetCanvasPanel UCanvasPanel
---@field CheatSheetTextBlock URichTextBlock
UCookingWindow = {}

---@return ESlateVisibility
function UCookingWindow:GetFuelDurationTextVisibility() end
---@return FText
function UCookingWindow:GetFuelDurationText() end
---@return ESlateVisibility
function UCookingWindow:GetCookingDurationTextVisibility() end
---@return FText
function UCookingWindow:GetCookingDurationText() end


---@class UCraftingRecipeListWidget : UGridPanelWidget
UCraftingRecipeListWidget = {}


---@class UCraftingRecipeWidget : UGridItemWidget
UCraftingRecipeWidget = {}


---@class UCraftingWindow : UStructureWindow
---@field CraftingRecipeListWidget UCraftingRecipeListWidget
UCraftingWindow = {}



---@class UCrenellationFillerMeshComponent : UStaticMeshComponent
UCrenellationFillerMeshComponent = {}


---@class UDeathMarketMapIcon : UMapIcon
UDeathMarketMapIcon = {}

---@param OldVal FVector
---@param NewVal FVector
function UDeathMarketMapIcon:OnLastDeathLocationChanged(OldVal, NewVal) end


---@class UDeploymentMapWidget : UMapWidgetBase
UDeploymentMapWidget = {}


---@class UDeploymentPointMapIcon : UWorldEntityMapIcon
---@field MapItemButton UButton
UDeploymentPointMapIcon = {}

function UDeploymentPointMapIcon:OnDeploymentPointClicked() end
---@return boolean
function UDeploymentPointMapIcon:IsDeploymentPointEnabled() end
---@return ESlateVisibility
function UDeploymentPointMapIcon:GetDeploymentPointVisibility() end


---@class UDeploymentScreen : UAnvilScreen
---@field MapWidget UDeploymentMapWidget
---@field LogoutButton UAnvilButtonWidget
---@field DeploymentInstructionOrSpawnTimerText UTextBlock
UDeploymentScreen = {}

function UDeploymentScreen:OnLogoutButtonClicked() end
---@return FText
function UDeploymentScreen:GetDeploymentInstructionOrSpawnTimerText() end


---@class UDisclaimerWidget : UUserWidget
---@field DisclaimerCheckBox1 UCheckBox
---@field DisclaimerCheckBox2 UCheckBox
---@field DisclaimerCheckBox3 UCheckBox
---@field DisclaimerCheckBox4 UCheckBox
---@field AcceptTextBox UEditableTextBox
---@field CancelButton UAnvilButtonWidget
---@field ConfirmButton UAnvilButtonWidget
UDisclaimerWidget = {}

function UDisclaimerWidget:OnConfirmButtonClicked() end
function UDisclaimerWidget:OnCancelButtonClicked() end
---@return boolean
function UDisclaimerWidget:IsConfirmButtonEnabled() end
---@return boolean
function UDisclaimerWidget:IsAcceptTextBoxEnabled() end


---@class UDismantleButtonWidget : UUserWidget
---@field DismantleButton UButton
---@field StructureName UTextBlock
UDismantleButtonWidget = {}

function UDismantleButtonWidget:OnClicked() end


---@class UEntityActorRootComponent : USceneComponent
UEntityActorRootComponent = {}


---@class UFactionSelectScreen : UAnvilScreen
---@field FactionAranicButton UButton
---@field FactionMirrishButton UButton
---@field FactionNovanButton UButton
---@field DeleteProfileButton UAnvilButtonWidget
---@field DownloadingThrobber UThrobber
---@field ServerBrowserCheckBox UCheckBox
---@field ServerBrowserHorizontalBox UHorizontalBox
UFactionSelectScreen = {}

function UFactionSelectScreen:OnFactionNovanButtonClicked() end
function UFactionSelectScreen:OnFactionMirrishButtonClicked() end
function UFactionSelectScreen:OnFactionAranicButtonClicked() end
function UFactionSelectScreen:OnDeleteProfileButtonClicked() end
---@return boolean
function UFactionSelectScreen:IsFactionNovanButtonEnabled() end
---@return boolean
function UFactionSelectScreen:IsFactionMirrishButtonEnabled() end
---@return boolean
function UFactionSelectScreen:IsFactionAranicButtonEnabled() end
---@return boolean
function UFactionSelectScreen:IsDeleteProfileButtonEnabled() end
---@return ESlateVisibility
function UFactionSelectScreen:GetThrobberVisibility() end
---@return ESlateVisibility
function UFactionSelectScreen:GetServerBrowserCheckBoxVisibility() end
---@return ESlateVisibility
function UFactionSelectScreen:GetDeleteProfileButtonVisibility() end


---@class UFamilyAreaMarkerWindow : UStructureWindow
---@field FamilyMembersScrollBox UScrollBox
---@field AlliedFamiliesScrollBox UScrollBox
---@field UpkeepIcon UImage
---@field UpkeepTextBlock UTextBlock
---@field FamilyMemberListItemWidgetType TSubclassOf<UFamilyMemberListItemWidget>
---@field FamilyAreaRestrictedCheckBox UCheckBox
---@field FamilyAreaAllianceButton UButton
UFamilyAreaMarkerWindow = {}

---@param AlliedFamilyFounderOnlineId uint64
function UFamilyAreaMarkerWindow:OnRemoveAlliedFamilyClicked(AlliedFamilyFounderOnlineId) end
---@param PlayerId uint64
function UFamilyAreaMarkerWindow:OnKickMemberClicked(PlayerId) end
function UFamilyAreaMarkerWindow:OnFamilyAreaSetAllianceClicked() end
---@param bIsChecked boolean
function UFamilyAreaMarkerWindow:OnFamilyAreaRestrictedChecked(bIsChecked) end
---@return boolean
function UFamilyAreaMarkerWindow:IsFamilyAreaSetAllianceButtonEnabled() end
---@return boolean
function UFamilyAreaMarkerWindow:IsFamilyAreaRestrictedCheckBoxEnabled() end
---@return ESlateVisibility
function UFamilyAreaMarkerWindow:GetFamilyAreaSetAllianceVisibility() end
---@return ESlateVisibility
function UFamilyAreaMarkerWindow:GetFamilyAreaRestrictedVisibility() end
---@return ECheckBoxState
function UFamilyAreaMarkerWindow:GetFamilyAreaRestrictedCheckedState() end


---@class UFamilyHouseWindow : UStructureWindow
UFamilyHouseWindow = {}


---@class UFamilyMarkerMapIcon : UMapIcon
UFamilyMarkerMapIcon = {}


---@class UFamilyMemberListItemWidget : UUserWidget
---@field PlayerNameText UTextBlock
---@field RoleComboBoxSizeBox USizeBox
---@field RoleComboBox UComboBoxString
---@field RoleTextSizeBox USizeBox
---@field RoleTextBlock UTextBlock
---@field KickButton UButton
UFamilyMemberListItemWidget = {}

function UFamilyMemberListItemWidget:OnKickButtonClicked() end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UFamilyMemberListItemWidget:OnFamilyRoleSelectionChanged(SelectedItem, SelectionType) end
---@return ESlateVisibility
function UFamilyMemberListItemWidget:GetRoleTextVisibility() end
---@return FText
function UFamilyMemberListItemWidget:GetRoleText() end
---@return ESlateVisibility
function UFamilyMemberListItemWidget:GetRoleComboBoxVisibility() end
---@return FText
function UFamilyMemberListItemWidget:GetPlayerNameText() end
---@return ESlateVisibility
function UFamilyMemberListItemWidget:GetKickButtonVisibility() end


---@class UFoodCooldownIconWidget : UUserWidget
---@field FoodIconImage UImage
UFoodCooldownIconWidget = {}



---@class UFoodCooldownWidget : UUserWidget
---@field FoodTypeIconBrushList UTexture2D
---@field FoodCooldownIconWidgetClass TSubclassOf<UFoodCooldownIconWidget>
---@field FoodIconsHorizontalBox UHorizontalBox
UFoodCooldownWidget = {}



---@class UFooterContainer : UUserWidget
---@field FooterWidth float
---@field FooterHeight float
---@field FooterSizeBox USizeBox
---@field FooterSlot0 UNamedSlot
UFooterContainer = {}



---@class UGameplayOverlay : UUserWidget
---@field ChatWidget UChatWidget
---@field NotificationText UTextBlock
---@field SecondaryNotificationText UTextBlock
---@field PrimaryPromptText UTextBlock
---@field SecondaryPromptText UTextBlock
---@field AlertsContainerWidget UAlertsContainerWidget
UGameplayOverlay = {}

---@return ESlateVisibility
function UGameplayOverlay:GetHUDWidgetVisibility() end


---@class UGameplayScreen : UAnvilScreen
---@field GameplayOverlay UGameplayOverlay
---@field HUDWidget UHUDWidget
---@field MapWidget UMapWidget
---@field DeploymentScreen UDeploymentScreen
---@field ContentSwitcher UWidgetSwitcher
UGameplayScreen = {}



---@class UGrassRemovalVolumeComponent : USceneComponent
---@field Extents FVector
---@field bDeferGrassUpdate boolean
---@field SplineDataComponent USplineDataComponent
UGrassRemovalVolumeComponent = {}

function UGrassRemovalVolumeComponent:TryRemoveGrass() end
function UGrassRemovalVolumeComponent:RemoveGrassWithRetry() end
---@return boolean
function UGrassRemovalVolumeComponent:RemoveGrass() end


---@class UGridItemWidget : UUserWidget
---@field ItemWidth float
---@field ItemHeight float
---@field Button UButton
---@field SizeBox USizeBox
---@field ItemImage UImage
---@field SubItemImage UImage
---@field QualityIconImage UImage
---@field BackgroundImageTexture UTexture2D
---@field bIsActive boolean
UGridItemWidget = {}

function UGridItemWidget:OnClicked() end


---@class UGridPanelWidget : UUniformGridPanel
---@field PreferredDimension FIntPoint
---@field ItemSlotWidgetType TSubclassOf<UGridItemWidget>
---@field PreviewItemCount int32
UGridPanelWidget = {}



---@class UHUDHintWidget : UUserWidget
---@field PrimaryHintTextBlock URichTextBlock
---@field PrimaryHintCanvas UCanvasPanel
---@field SecondaryHintTextBlock URichTextBlock
---@field SecondaryHintCanvas UCanvasPanel
---@field HintVerticalBox UVerticalBox
---@field HintMaximizeButton UButton
---@field HintMinimizeButton UButton
UHUDHintWidget = {}

function UHUDHintWidget:OnHintMinimizeClicked() end
function UHUDHintWidget:OnHintMaximizeClicked() end


---@class UHUDNameWidget : UUserWidget
---@field TargetVisActor AVisActor
---@field NameText UTextBlock
---@field LocalChatText UTextBlock
---@field LocalChatTextLimit int32
---@field NameTypeColourList FSlateColor
UHUDNameWidget = {}

---@return ESlateVisibility
function UHUDNameWidget:GetWidgetVisibility() end
---@return ESlateVisibility
function UHUDNameWidget:GetPlayerNameVisibility() end
---@return FText
function UHUDNameWidget:GetPlayerNameText() end
---@return FSlateColor
function UHUDNameWidget:GetPlayerNameColour() end
---@return ESlateVisibility
function UHUDNameWidget:GetLocalChatTextVisibility() end


---@class UHUDStatsWidget : UUserWidget
---@field StatsText UTextBlock
UHUDStatsWidget = {}



---@class UHUDWidget : UUserWidget
---@field InteractionIcon UInteractionIconWidget
---@field HUDCanvas UCanvasPanel
---@field NameCanvas UCanvasPanel
---@field StatsCanvas UCanvasPanel
---@field DismantleButtonsCanvas UCanvasPanel
---@field TravelIndicatorCanvas UCanvasPanel
---@field HUDWindowWidgets TMap<EHUDWindowType, UHUDWindow>
---@field HUDNameWidgetClass TSubclassOf<UHUDNameWidget>
---@field HUDStatsWidgetClass TSubclassOf<UHUDStatsWidget>
---@field DismantleButtonWidgetClass TSubclassOf<UDismantleButtonWidget>
---@field OpenedHUDWindow UHUDWindow
---@field Compass UImage
---@field CompassPlayerArrow UImage
---@field PrimaryHeldItem UInventoryItemWidget
---@field SecondaryHeldItem UInventoryItemWidget
---@field PrimaryEquipmentItem UInventoryItemHUDWidget
---@field SecondaryEquipmentItem UInventoryItemHUDWidget
---@field GuardBar UProgressBar
---@field GuardStatusWidget UPanelWidget
---@field GuardStrengthLeftIcon UImage
---@field GuardStrengthCenterIcon UImage
---@field GuardStrengthRightIcon UImage
---@field EncumbranceIcon UImage
---@field EncumbranceText UTextBlock
---@field PlayerStatusText UTextBlock
---@field WinConditionCanvas UCanvasPanel
---@field WinConditionText UTextBlock
---@field WinConditionLogo UImage
---@field PlayerVitality UVitalityStatusWidget
---@field HorseVitality UVitalityStatusWidget
---@field InventoryHUD UInventoryHUDWidget
---@field DisclaimerCanvas UCanvasPanel
---@field DisclaimerText UTextBlock
---@field AranicLogo UTexture2D
---@field MirrishLogo UTexture2D
---@field NovanLogo UTexture2D
---@field GuardStrengthEmptyIcon FSlateBrush
---@field GuardStrengthFillIcon FSlateBrush
---@field LocalChatDisplayTime float
---@field InteractionProgressBar1 UProgressBar
---@field InteractionProgressBar2 UProgressBar
---@field WeatherStatsText UTextBlock
---@field BorderRegionIndicatorText UTextBlock
---@field NewLocalMessages TArray<UChatMessage>
UHUDWidget = {}

function UHUDWidget:PlayWinConditionAnimation() end
---@return ESlateVisibility
function UHUDWidget:GetWeatherStatsTextVisibility() end
---@return FText
function UHUDWidget:GetWeatherStatsText() end
---@return ESlateVisibility
function UHUDWidget:GetHUDWidgetVisibility() end


---@class UHUDWindow : UUserWidget
---@field WindowContext AActor
---@field StructureToPlayerTransfer boolean
---@field PlayerToStructureTransfer boolean
---@field StructureInventoryContainerWidget UInventoryContainerWidget
---@field StructureInventoryContainerWidget2 UInventoryContainerWidget
---@field PlayerInventoryPanel UPlayerInventoryWidget
---@field TargetHeader UHeaderContainer
UHUDWindow = {}



---@class UHeaderContainer : UUserWidget
---@field HeaderText FText
---@field HeaderTextFontSize int32
---@field bHeaderWidthOverride boolean
---@field HeaderWidth float
---@field HeaderHeight float
---@field UpperPadding float
---@field HeaderTextBox UTextBlock
---@field HeaderSizeBox USizeBox
---@field HeaderSpacer USpacer
---@field TooltipButton UWidget
---@field CloseButton UButton
UHeaderContainer = {}

function UHeaderContainer:OnCloseButtonClicked() end


---@class UHeatingWindow : UStructureWindow
---@field ItemsItemGrid UInventoryWidget
---@field FuelInputItemGrid UInventoryWidget
---@field FuelOutputItemGrid UInventoryWidget
---@field FuelDurationText UTextBlock
UHeatingWindow = {}

---@return ESlateVisibility
function UHeatingWindow:GetFuelDurationTextVisibility() end
---@return FText
function UHeatingWindow:GetFuelDurationText() end


---@class UHelpScreen : UAnvilScreen
---@field HelpImageButton UButton
UHelpScreen = {}

function UHelpScreen:OnHelpImageButtonClicked() end


---@class UHitConversionWindow : UStructureWindow
---@field CurrentSelectedOutputImage UImage
---@field OutputPreviousButton UButton
---@field OutputNextButton UButton
UHitConversionWindow = {}

function UHitConversionWindow:OutputPreviousButtonClicked() end
function UHitConversionWindow:OutputNextButtonClicked() end
---@param Old uint8
---@param New uint8
function UHitConversionWindow:OnCurrentSelectedOutputIndexChanged(Old, New) end


---@class UHousePlayerInventoryListItem : UUserWidget
---@field PlayerNameText UTextBlock
---@field InventoryWidget UInventoryWidget
UHousePlayerInventoryListItem = {}



---@class UHousePlayerInventoryWidgetBox : UScrollBox
---@field PlayerInventoryListItemType TSubclassOf<UHousePlayerInventoryListItem>
UHousePlayerInventoryWidgetBox = {}



---@class UHouseWindow : UStructureWindow
---@field PlayerInventoriesBox UHousePlayerInventoryWidgetBox
---@field HouseAreaRestrictedCheckBox UCheckBox
UHouseWindow = {}

---@param bIsChecked boolean
function UHouseWindow:OnHouseAreaRestrictedChecked(bIsChecked) end
---@return ESlateVisibility
function UHouseWindow:GetHouseAreaRestrictedVisibility() end
---@return ECheckBoxState
function UHouseWindow:GetHouseAreaRestrictedCheckedState() end


---@class UInteractionIconWidget : UUserWidget
---@field IconBox UImage
UInteractionIconWidget = {}



---@class UInventoryContainerWidget : UUserWidget
---@field UnderlyingInventoryWidget UInventoryWidget
---@field PreviewItemCount int32
---@field WidthOverride float
---@field HeightOverride float
---@field bOverride_WidthOverride boolean
---@field bOverride_HeightOverride boolean
---@field InventoryContainerSizeBox USizeBox
---@field PreferredDimension FIntPoint
UInventoryContainerWidget = {}



---@class UInventoryHUDWidget : UGridPanelWidget
UInventoryHUDWidget = {}


---@class UInventoryItemHUDWidget : UInventoryItemWidget
UInventoryItemHUDWidget = {}


---@class UInventoryItemWidget : UGridItemWidget
---@field ItemQuantityTextSize int32
---@field DisabledTint FSlateColor
---@field DedicatedImageOpacity float
---@field ItemSlotBackgroundMap TMap<EAnvilItemSlotBackgroundType, UTexture2D>
---@field ItemQuantityText UTextBlock
---@field DurabilityBar UProgressBar
---@field SubtypeIconRelic UImage
---@field OverEncumberedImage UImage
---@field PublicIconImage UImage
---@field HitConversionProgressBar UProgressBar
UInventoryItemWidget = {}



---@class UInventoryWidget : UGridPanelWidget
---@field bIsPlayerInventory boolean
UInventoryWidget = {}



---@class UItemCategoryButton : UUserWidget
---@field ItemCategoryButton UButton
---@field ItemImage UImage
---@field SelectedImage UImage
UItemCategoryButton = {}

function UItemCategoryButton:OnItemCategoryButtonClicked() end


---@class ULoreWindow : UHUDWindow
---@field Header UTextBlock
---@field TitleIcon UImage
---@field TitleText UTextBlock
---@field BodyText URichTextBlock
ULoreWindow = {}



---@class UMainAreaContainer : UUserWidget
---@field MainAreaSizeBox USizeBox
---@field MainAreaBorder UBorder
---@field MainAreaVerticalBox UVerticalBox
---@field MainAreaSlot0 UNamedSlot
---@field MainAreaSlot1 UNamedSlot
---@field MainAreaSlot2 UNamedSlot
---@field WidthOverride float
---@field HeightOverride float
---@field MinDesiredWidth float
---@field MinDesiredHeight float
---@field MaxDesiredWidth float
---@field MaxDesiredHeight float
---@field ContentPadding FMargin
---@field bOverride_WidthOverride boolean
---@field bOverride_HeightOverride boolean
---@field bOverride_MinDesiredWidth boolean
---@field bOverride_MinDesiredHeight boolean
---@field bOverride_MaxDesiredWidth boolean
---@field bOverride_MaxDesiredHeight boolean
---@field bOverride_ContentPadding boolean
UMainAreaContainer = {}



---@class UMapIcon : UMapIconBase
---@field Marker AActor
---@field LabelBox UTextBlock
---@field IconBox UImage
UMapIcon = {}

---@return boolean
function UMapIcon:IsIconEnabled() end
---@return ESlateVisibility
function UMapIcon:GetIconVisibility() end


---@class UMapIconBase : UUserWidget
---@field TypeProperty FMapIconTypeProperty
---@field InstanceProperty FMapIconInstanceProperty
---@field ParentSlot UCanvasPanelSlot
---@field Map UMapWidgetBase
UMapIconBase = {}



---@class UMapMarkerComponent : UActorComponent
---@field MapIconProperty FMapIconInstanceProperty
UMapMarkerComponent = {}



---@class UMapPostMapIcon : UMapIcon
UMapPostMapIcon = {}


---@class UMapWidget : UMapWidgetBase
---@field EnemyIconColour FSlateColor
---@field FogOfWarMask UTexture2D
---@field FogOfWarRadius int32
---@field ObjectiveBorder UBorder
---@field CentralMarketplaceWidgetBorder UBorder
---@field CentralMarketplaceWidget UCentralMarketplaceWidget
---@field DisplayedBeaconTowerPlayerInfos TArray<UMapIcon>
UMapWidget = {}

---@return ESlateVisibility
function UMapWidget:GetObjectiveBorderVisibility() end
---@param MapImageTexture UTexture2D
function UMapWidget:BP_OnMapImageSet(MapImageTexture) end


---@class UMapWidgetBase : UUserWidget
---@field MapSheet UCanvasPanel
---@field ZoomSpeed float
---@field ZoomMin float
---@field ZoomMax float
---@field ZoomAnimationTime float
---@field MapImage UImage
---@field MapImageSheet UCanvasPanel
---@field MapImageSheetSlot UCanvasPanelSlot
---@field TerritoryTexture UTexture2D
UMapWidgetBase = {}



---@class UMarketItemGridWidget : UGridPanelWidget
UMarketItemGridWidget = {}


---@class UMarketItemWidget : UGridItemWidget
---@field PriceUpButton UButton
---@field PriceDownButton UButton
---@field ItemQuantityText UTextBlock
---@field PriceText UTextBlock
---@field PriceEditableText UEditableTextBox
---@field PriceTextSizeBox USizeBox
---@field PriceEditableTextSizeBox USizeBox
---@field DurabilityBar UProgressBar
---@field BelowDefaultValueColour FColor
---@field AboveDefaultValueColour FColor
UMarketItemWidget = {}

function UMarketItemWidget:OnPriceUpClicked() end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UMarketItemWidget:OnPriceTextCommitted(Text, CommitMethod) end
function UMarketItemWidget:OnPriceDownClicked() end
---@return boolean
function UMarketItemWidget:IsPriceUpEnabled() end
---@return boolean
function UMarketItemWidget:IsPriceDownEnabled() end


---@class UMarketShopMapIcon : UMapIcon
UMarketShopMapIcon = {}


---@class UMarketShopMapTooltip : UUserWidget
---@field HeaderContainer UHeaderContainer
---@field MarketItemRowsVerticalBox UVerticalBox
---@field MarketTooltipRowType TSubclassOf<UMarketShopMapTooltipRow>
UMarketShopMapTooltip = {}



---@class UMarketShopMapTooltipRow : UUserWidget
---@field ItemWidget UGridItemWidget
---@field ItemCountText UTextBlock
---@field PriceText UTextBlock
UMarketShopMapTooltipRow = {}



---@class UMarketShopWindow : UStructureWindow
---@field MarketItemGrid UMarketItemGridWidget
---@field SilverStatus UStatusWidget
UMarketShopWindow = {}

---@return ESlateVisibility
function UMarketShopWindow:GetSilverAmountVisibility() end
---@return FText
function UMarketShopWindow:GetSilverAmountText() end


---@class UNextTestWidget : UUserWidget
---@field NextTestText UTextBlock
---@field CountdownText UTextBlock
---@field ReturnButton UAnvilButtonWidget
---@field DiscordButton UAnvilButtonWidget
UNextTestWidget = {}

function UNextTestWidget:UpdateText() end
function UNextTestWidget:OnReturnButtonClicked() end
function UNextTestWidget:OnDiscordButtonClicked() end


---@class UOpeningScreen : UAnvilScreen
---@field PlayButton UAnvilButtonWidget
---@field ExitButton UAnvilButtonWidget
---@field OptionsButton UAnvilButtonWidget
---@field VersionText UTextBlock
---@field CLText UTextBlock
---@field NextTestWidget UNextTestWidget
---@field DisclaimerWidget UDisclaimerWidget
---@field AnnouncementText UTextBlock
---@field DiscordRoleButton UButton
---@field DevModeButton UButton
---@field ShardDropdown UAnvilDropdownEntryWidget
UOpeningScreen = {}

function UOpeningScreen:UpdateVersionText() end
function UOpeningScreen:ReenableDiscordRoleButton() end
function UOpeningScreen:OnPlayButtonClicked() end
function UOpeningScreen:OnOptionsButtonClicked() end
function UOpeningScreen:OnExitButtonClicked() end
function UOpeningScreen:OnDiscordRoleButtonClicked() end
function UOpeningScreen:OnDevModeButtonClicked() end
---@return boolean
function UOpeningScreen:IsDiscordRoleButtonEnabled() end
---@return ESlateVisibility
function UOpeningScreen:GetShardDropDownVisibility() end
---@return FText
function UOpeningScreen:GetAnnouncementText() end


---@class UOptionsMenuAudioWidget : UUserWidget
---@field MasterVolumeSlider UAnvilSliderWidget
---@field SFXVolumeSlider UAnvilSliderWidget
---@field VoiceInputVolumeSlider UAnvilSliderWidget
---@field VoiceOutputVolumeSlider UAnvilSliderWidget
---@field VoiceInDropdown UAnvilDropdownEntryWidget
---@field VoiceOutDropdown UAnvilDropdownEntryWidget
---@field ReconnectButton UAnvilButtonWidget
UOptionsMenuAudioWidget = {}

function UOptionsMenuAudioWidget:OnReconnectToVoice() end
---@return boolean
function UOptionsMenuAudioWidget:IsReconnectButtonEnabled() end
---@return ESlateVisibility
function UOptionsMenuAudioWidget:GetReconnectButtonVisibility() end


---@class UOptionsMenuGameplayWidget : UUserWidget
---@field ShowPlayerNameDropDown UAnvilDropdownEntryWidget
---@field InteractCameraZoomDropDown UAnvilDropdownEntryWidget
UOptionsMenuGameplayWidget = {}



---@class UOptionsMenuKeybindWidget : UUserWidget
---@field KeybindWidgetContainer UPanelWidget
---@field ResetButton UAnvilButtonWidget
UOptionsMenuKeybindWidget = {}

function UOptionsMenuKeybindWidget:OnResetKeyBinds() end


---@class UOptionsMenuVideoWidget : UUserWidget
---@field FullscreenDropdown UAnvilDropdownEntryWidget
---@field ResolutionDropdown UAnvilDropdownEntryWidget
---@field QualityDropdown UAnvilDropdownEntryWidget
---@field ShadowQualityDropdown UAnvilDropdownEntryWidget
---@field VSyncDropdown UAnvilDropdownEntryWidget
UOptionsMenuVideoWidget = {}

---@param Input FString
function UOptionsMenuVideoWidget:SetFullscreen(Input) end


---@class UOptionsScreen : UAnvilScreen
---@field BackButton UAnvilButtonWidget
---@field ButtonsPanel UPanelWidget
---@field OptionsPanel UWidgetSwitcher
UOptionsScreen = {}

function UOptionsScreen:OnBackButtonClicked() end


---@class UPackingWindow : UStructureWindow
---@field PackButton UButton
UPackingWindow = {}

function UPackingWindow:OnPackButtonClicked() end


---@class UPauseScreen : UAnvilScreen
---@field ResumeButton UAnvilButtonWidget
---@field OptionsButton UAnvilButtonWidget
---@field HelpButton UAnvilButtonWidget
---@field CodeOfConductButton UAnvilButtonWidget
---@field LogOffButton UAnvilButtonWidget
---@field ExitButton UAnvilButtonWidget
UPauseScreen = {}

function UPauseScreen:OnOptionsButtonClicked() end
function UPauseScreen:OnLogOffButtonClicked() end
function UPauseScreen:OnHelpButtonClicked() end
function UPauseScreen:OnExitButtonConfirmed() end
function UPauseScreen:OnExitButtonClicked() end
function UPauseScreen:OnContinueButtonClicked() end
function UPauseScreen:OnCodeOfConductButtonClicked() end


---@class UPlayerInventoryWidget : UUserWidget
---@field PlayerInventory UInventoryWidget
---@field Header UHeaderContainer
UPlayerInventoryWidget = {}



---@class UPledgedPlayerBox : UScrollBox
---@field ListItemType TSubclassOf<UPledgedPlayerListItem>
UPledgedPlayerBox = {}

---@param bIsChecked boolean
---@param PlayerId uint64
function UPledgedPlayerBox:OnVoteChecked(bIsChecked, PlayerId) end


---@class UPledgedPlayerListItem : UUserWidget
---@field PlayerNameText UTextBlock
---@field PlayerStatusText UTextBlock
---@field PlayerSilverText UTextBlock
---@field VoteButton UCheckBox
---@field OnlineStatusIcon UImage
---@field OnlineStatusIconMap TMap<EAnvilPledgedOnlineStatus, UTexture2D>
---@field OnlineStatusColorMap TMap<EAnvilPledgedOnlineStatus, FSlateColor>
---@field OnlineStatusSilverColorMap TMap<EAnvilPledgedOnlineStatus, FSlateColor>
UPledgedPlayerListItem = {}

---@param bIsChecked boolean
function UPledgedPlayerListItem:OnVoteChecked(bIsChecked) end


---@class UQuenchingWindow : UStructureWindow
---@field QuenchButton UButton
UQuenchingWindow = {}

function UQuenchingWindow:OnQuenchButtonClicked() end


---@class URefineryProducibleItemWidget : UGridItemWidget
---@field OutputCount UTextBlock
---@field OutputCountContainer UPanelWidget
URefineryProducibleItemWidget = {}



---@class URefineryProducibleListWidget : UGridPanelWidget
URefineryProducibleListWidget = {}


---@class URefineryQueueWidget : UGridPanelWidget
URefineryQueueWidget = {}


---@class URefineryQueuedItemWidget : UGridItemWidget
---@field CancelButton UButton
---@field ItemBorder UBorder
---@field ItemBorderBrush FSlateBrush
URefineryQueuedItemWidget = {}

function URefineryQueuedItemWidget:OnCancelClicked() end


---@class URefineryWindow : UStructureWindow
---@field RefineryProducibleItemsList URefineryProducibleListWidget
---@field RefineryQueue URefineryQueueWidget
---@field QueueTotalTimeText UTextBlock
---@field QueueTimeText UTextBlock
---@field StatusText UTextBlock
URefineryWindow = {}

---@param Old boolean
---@param New boolean
function URefineryWindow:OnStatusChanged(Old, New) end


---@class URegionEntry : UObject
---@field WorldEntityMap TMap<uint64, UWorldEntityHandle>
URegionEntry = {}



---@class URelicTechCenterWindow : UStructureWindow
---@field TechProgressVerticalBox UVerticalBox
---@field RelicTechProgressWidgetClass TSubclassOf<URelicTechProgressWidget>
URelicTechCenterWindow = {}



---@class URelicTechProgressWidget : UUserWidget
---@field ItemImage UImage
---@field TechProgressBar UProgressBar
URelicTechProgressWidget = {}

---@return boolean
function URelicTechProgressWidget:IsImageEnabled() end
---@return float
function URelicTechProgressWidget:GetNormalizedProgress() end


---@class URepairStationWindow : UStructureWindow
---@field RepairButton UButton
URepairStationWindow = {}

function URepairStationWindow:OnRepairClicked() end


---@class UResourceWidget : UUserWidget
---@field ResourceIcon UImage
---@field ResourceText UTextBlock
UResourceWidget = {}



---@class URestedStatusWidget : UUserWidget
---@field IconTextureMap TMap<uint8, UTexture2D>
---@field IconImage UImage
URestedStatusWidget = {}

---@return ESlateVisibility
function URestedStatusWidget:GetIconVisibility() end


---@class UScorchEffectComponent : UNiagaraComponent
---@field ScorchThreshold float
UScorchEffectComponent = {}



---@class UServerListEntryView : UObject
---@field ServerListEntry FServerListEntry
UServerListEntryView = {}



---@class UServerListEntryWidget : UUserWidget
---@field ServerListEntryButton UButton
---@field ServerNameTextBlock UTextBlock
---@field PopulationOpenColour FSlateColor
---@field PopulationFullColour FSlateColor
---@field ServerDisplayNames TMap<FString, FString>
UServerListEntryWidget = {}

function UServerListEntryWidget:OnServerEntryClicked() end


---@class UServerPartitionComponent : UActorComponent
---@field bVisualizeCookedRegion boolean
---@field Extents FVector
---@field ServerRegionCountX int32
---@field ServerRegionCountY int32
---@field TransitionRegionSize float
UServerPartitionComponent = {}



---@class UServerSelectScreen : UAnvilScreen
---@field ServerList UListView
---@field RefreshButton UAnvilButtonWidget
---@field Throbber UThrobber
UServerSelectScreen = {}

function UServerSelectScreen:OnRefreshButtonClicked() end
---@return boolean
function UServerSelectScreen:IsRefreshButtonEnabled() end
---@return ESlateVisibility
function UServerSelectScreen:GetThrobberVisibility() end


---@class UStatusWidget : UUserWidget
---@field IconTexture UTexture2D
---@field SimpleTooltip ESimpleTooltip
---@field StatusIcon UImage
---@field StatusText UTextBlock
---@field HappyIconTexture UTexture2D
---@field UnhappyIconTexture UTexture2D
UStatusWidget = {}



---@class UStructureWindow : UHUDWindow
---@field HealthStatus UStatusWidget
---@field HeartStatus UStatusWidget
---@field HungerStatus UStatusWidget
---@field StaminaStatus UStatusWidget
---@field DecayStatus UStatusWidget
UStructureWindow = {}



---@class USubHeaderContainer : UUserWidget
---@field SubHeaderWidth float
---@field SubHeaderHeight float
---@field SubHeaderSizeBox USizeBox
---@field SubHeaderSlot0 UNamedSlot
USubHeaderContainer = {}



---@class UTooltipWidget : UUserWidget
---@field ResourceWidgetClass TSubclassOf<UResourceWidget>
---@field HeaderText UTextBlock
---@field BodyText UTextBlock
---@field BodyExtraText UTextBlock
---@field FooterText URichTextBlock
---@field ResourceBar UBorder
---@field ResourceWidgets TArray<UResourceWidget>
---@field ResourcesContainer UHorizontalBox
UTooltipWidget = {}



---@class UTownCenterMapIcon : UMapIcon
---@field TownCenter AVisTownCenter
---@field FlashingFrequency float
---@field FlashingMinOpacity float
---@field IconButton UButton
---@field TownName UTextBlock
---@field TownNameBorder UBorder
---@field TownStatusBorder UBorder
---@field NumPledgedStatus UStatusWidget
---@field NumTentsStatus UStatusWidget
---@field NumReinforcementSuppliesStatus UStatusWidget
UTownCenterMapIcon = {}

function UTownCenterMapIcon:UpdateName() end
---@return FText
function UTownCenterMapIcon:GetNumTentsText() end
---@return FText
function UTownCenterMapIcon:GetNumReinforcementSuppliesText() end
---@return FText
function UTownCenterMapIcon:GetNumPledgedText() end


---@class UTownCenterWindow : UStructureWindow
---@field PledgedPlayerList UPledgedPlayerBox
---@field LocalPlayerStatus UTextBlock
---@field CivicPledgePanel UUserWidget
---@field PledgedHeader UHeaderContainer
---@field RareResourceStatus UStatusWidget
---@field IncreaseTownStatusButton UButton
---@field UpkeepBox UHorizontalBox
---@field UpkeepIcon UImage
---@field UpkeepTextBlock UTextBlock
---@field TownNames1 TArray<FText>
---@field TownNames2 TArray<FText>
---@field TownNames3 TArray<FText>
UTownCenterWindow = {}

function UTownCenterWindow:OnIncreaseTownStatusButtonClicked() end


---@class UTownStatusWidget : UUserWidget
---@field PopulationStatus UStatusWidget
---@field MilitiaPopulationStatus UStatusWidget
---@field HappinessStatus UStatusWidget
---@field FoodStatus UStatusWidget
---@field TaxStatus UStatusWidget
---@field SilverStatus UStatusWidget
UTownStatusWidget = {}

function UTownStatusWidget:UpdateStatus() end


---@class UVisAnimalAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field NativeCurrentState EAnvilAnimalState
---@field IsReceivingIncomingAttack boolean
UVisAnimalAnimInstance = {}



---@class UVisBalljointComponent : USceneComponent
---@field bIsStart boolean
---@field PowerUnitDataComponent UPowerUnitDataComponent
---@field AdapterMesh UStaticMeshComponent
---@field BalljointMesh UStaticMeshComponent
---@field BalljointBaseMesh UStaticMeshComponent
---@field LeftTrimMesh UStaticMeshComponent
---@field RightTrimMesh UStaticMeshComponent
UVisBalljointComponent = {}



---@class UVisBuildGhostComponent : UActorComponent
---@field ValidPlacementColour FLinearColor
---@field InvalidPlacementColour FLinearColor
---@field BuildCollisionDecalComponent UDecalComponent
UVisBuildGhostComponent = {}



---@class UVisCanalWaterControllerComponent : USceneComponent
---@field ShiftDelta float
---@field ShiftMin float
---@field bIsWell boolean
---@field PowerUnitDataComponent UPowerUnitDataComponent
---@field SplineDataComponent USplineDataComponent
---@field WellDataComponent UWellDataComponent
---@field WaterMaterials TArray<UMaterialInstanceDynamic>
---@field SplineWaterMesh UStaticMeshComponent
---@field SplineWaterMaterial UMaterialInstanceDynamic
UVisCanalWaterControllerComponent = {}

function UVisCanalWaterControllerComponent:OnSplineUpdate() end
function UVisCanalWaterControllerComponent:OnCurrentUpdate() end


---@class UVisCartAnimInstance : UVisVehicleAnimInstance
UVisCartAnimInstance = {}


---@class UVisFamilyMeshComponent : UStaticMeshComponent
---@field FamilyVisualsMaterialIndex int32
---@field ColourTable TArray<FLinearColor>
UVisFamilyMeshComponent = {}



---@class UVisFoundationBottomMeshDecorComponent : USceneComponent
---@field BottomMesh UStaticMesh
---@field BottomMeshOffset FVector
---@field BottomMeshComp UStaticMeshComponent
UVisFoundationBottomMeshDecorComponent = {}



---@class UVisFoundationEdgeMeshDecorComponent : UArrowComponent
---@field InnerAngle float
---@field EdgeMesh UStaticMesh
---@field EdgeMeshOffset FVector
---@field EdgeMeshRotation FRotator
---@field EdgeMeshComp UStaticMeshComponent
UVisFoundationEdgeMeshDecorComponent = {}



---@class UVisGateAnimInstance : UAnimInstance
---@field bIsOpen boolean
UVisGateAnimInstance = {}



---@class UVisInstancedStockpileComponent : UInstancedStaticMeshComponent
---@field CurrentInstancedMesh UInstancedStaticMeshComponent
---@field ItemCodeNameInstancedMeshMap TMap<int32, UInstancedStaticMeshComponent>
UVisInstancedStockpileComponent = {}



---@class UVisItem : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field NameText FText
---@field DescriptionText FText
---@field DescriptionFooter FText
---@field Icon UTexture2D
---@field Category EVisItemCategory
---@field Mesh USkeletalMesh
---@field StockpileMesh UStaticMesh
---@field bAutoSetStockpileExtents boolean
---@field StockpileExtents FVector
---@field bStockpileCanFlip boolean
---@field StockpileRandomTranslation FVector
---@field StockpileRandomRotation FRotator
---@field StockpileRandomScale FVector2D
---@field StockpileOrder int8
---@field FactionMeshOverrides TMap<EAnvilFactionId, USkeletalMesh>
---@field GripType EEquippedItemGripType
---@field AnimClass TSubclassOf<UAnimInstance>
---@field MeshRotation FRotator
---@field UnarmedMeshLocation EUnarmedItemMeshLocation
---@field UnarmedMeshOffset FVector
---@field UnarmedMeshRotation FRotator
---@field UnarmedMeshScale float
---@field AnimationIndex int32
---@field ActivityStateMontageMap TMap<EAnvilSimActivityState, UAnimMontage>
---@field AttackChainMontages TArray<UAnimMontage>
---@field TransferSoundCue USoundCue
---@field ArmingSoundCue USoundCue
UVisItem = {}



---@class UVisLadderVehicleAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field bIsFrontSeatOccupied boolean
---@field bIsRearSeatOccupied boolean
UVisLadderVehicleAnimInstance = {}



---@class UVisLoreVolumeComponent : UBoxComponent
---@field LoreType FName
UVisLoreVolumeComponent = {}



---@class UVisMobileWeaponAnimInstance : UAnimInstance
---@field AimYaw float
---@field AimPitch float
---@field bPriming boolean
---@field bPrimed boolean
UVisMobileWeaponAnimInstance = {}



---@class UVisMultiItemStockpileComponent : USceneComponent
---@field StockpileExtents FVector
---@field DisplayedMeshes TArray<UStaticMeshComponent>
---@field BoxVisualizer UCollisionVisualizerComponent
UVisMultiItemStockpileComponent = {}



---@class UVisPlayerAnimInstance : UAnimInstance
---@field bNativeIsAttacking boolean
---@field NativeDir float
---@field NativeSpeed float
---@field GripType EEquippedItemGripType
---@field PrimaryGripType EEquippedItemGripType
---@field SecondaryGripType EEquippedItemGripType
---@field NativeStance EAnvilCharacterStance
---@field VehicleInputState EAnvilVehicleInputState
---@field IncomingAttackDirection EIncomingAttackDirection
---@field NativePoseIndex int32
---@field NativeIsAiming boolean
---@field NativeIsCrouching boolean
---@field bNativeIsGuarding boolean
---@field bNativeIsSecondaryEquipped boolean
---@field AimPitch float
---@field AimYaw float
---@field bPriming boolean
---@field bSecondaryMode boolean
UVisPlayerAnimInstance = {}



---@class UVisPlayerVisualsComponent : UActorComponent
UVisPlayerVisualsComponent = {}


---@class UVisPowerUnitAnimInstance : UAnimInstance
---@field InputValue float
---@field PercentageCurrent float
---@field CurrentMax float
---@field InFlowDirection float
---@field InFlowHeight float
---@field PowerUnitDataComponent UPowerUnitDataComponent
UVisPowerUnitAnimInstance = {}



---@class UVisRandomDecalDecorComponent : UDecalComponent
---@field VisibilityChance float
UVisRandomDecalDecorComponent = {}



---@class UVisRandomMeshDecorComponent : UStaticMeshComponent
---@field VisibilityChance float
UVisRandomMeshDecorComponent = {}



---@class UVisRopeComponent : USceneComponent
---@field LineComponent UCableComponent
---@field RopeDataComponent UAnimalRopeAttachableDataComponent
---@field RopeSlotDataComponent UAnimalRopeSlotDataComponent
UVisRopeComponent = {}



---@class UVisScaffoldingComponent : USceneComponent
---@field Scaffolding1 UStaticMesh
---@field Scaffolding2 UStaticMesh
---@field ScaffoldingCorner UStaticMesh
---@field GhostMaterial UMaterialInterface
UVisScaffoldingComponent = {}



---@class UVisSingleItemStockpileComponent : UStaticMeshComponent
---@field InventorySlotIndex int32
---@field DefaultItemMesh UStaticMesh
---@field ShowUnderlyingItem boolean
UVisSingleItemStockpileComponent = {}



---@class UVisSplineComponent : USceneComponent
---@field GroundDecalComponent UDecalComponent
---@field PreviewPieceLength float
---@field PreviewEndLocation FVector
---@field PreviewBridgeStartOffSet FVector
---@field DecalMaterial UMaterialInterface
---@field MaterialOverride UMaterial
---@field EndPieceMesh UStaticMesh
---@field MidPieceMeshes TArray<UStaticMesh>
---@field SplineDataComponent USplineDataComponent
---@field MidPieces TArray<UStaticMeshComponent>
---@field EndPieces TArray<UStaticMeshComponent>
UVisSplineComponent = {}



---@class UVisSpringArmComponent : USpringArmComponent
UVisSpringArmComponent = {}


---@class UVisStaticMeshComponent : UVisStaticMeshComponentBase
UVisStaticMeshComponent = {}


---@class UVisStockpileComponent : UInstancedStaticMeshComponent
---@field StockpileExtents FVector
---@field BoxVisualizer UCollisionVisualizerComponent
---@field CurrentItem UVisItem
UVisStockpileComponent = {}



---@class UVisTeamMeshComponent : UStaticMeshComponent
---@field TeamMeshAranic UStaticMesh
---@field TeamMeshMirrish UStaticMesh
---@field TeamMeshNovan UStaticMesh
UVisTeamMeshComponent = {}



---@class UVisTownAreaMarkerDecalComponent : UDecalComponent
---@field TeamDecalAranic UMaterialInterface
---@field TeamDecalMirrish UMaterialInterface
---@field TeamDecalNovan UMaterialInterface
UVisTownAreaMarkerDecalComponent = {}

---@param FactionId EAnvilFactionId
---@param Radius float
function UVisTownAreaMarkerDecalComponent:SetRangeParameters(FactionId, Radius) end


---@class UVisVehicleAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field NativeHorizontalMovement float
---@field NativeVerticalMovement float
---@field bIsOccupied boolean
UVisVehicleAnimInstance = {}



---@class UVisWeatherIndicatorAnimInstance : UAnimInstance
---@field Weather FWeatherData
UVisWeatherIndicatorAnimInstance = {}



---@class UVitalityStatusWidget : UUserWidget
---@field HungerBar UProgressBar
---@field HealthOverlay UOverlay
---@field HealthBar UProgressBar
---@field StaminaOverlay UOverlay
---@field StaminaBar UProgressBar
---@field TemperatureBar UProgressBar
---@field TemperatureWarmColour FLinearColor
---@field TemperatureColdColour FLinearColor
UVitalityStatusWidget = {}



---@class UWildSpawnPointMapIcon : UMapIcon
---@field IconButton UButton
UWildSpawnPointMapIcon = {}



---@class UWorldBeaconTowerMapIcon : UWorldEntityMapIcon
UWorldBeaconTowerMapIcon = {}


---@class UWorldEntityHandle : UObject
---@field RegionEntry URegionEntry
UWorldEntityHandle = {}



---@class UWorldEntityMapIcon : UMapIconBase
---@field EntityHandle UWorldEntityHandle
---@field IconSizeBox USizeBox
---@field MapItemImage UImage
---@field EntityTemplateCDO UEntityTemplate
---@field VisActorCDO AVisActor
UWorldEntityMapIcon = {}



---@class UWorldEntityPoolManager : UObject
---@field GameInstance UAnvilGameInstance
---@field RegionIndexMap TMap<int32, URegionEntry>
---@field RegionHashMap TMap<int32, URegionEntry>
UWorldEntityPoolManager = {}



---@class UWorldFamilySpawnMapIcon : UDeploymentPointMapIcon
UWorldFamilySpawnMapIcon = {}


---@class UWorldMarketShopMapIcon : UWorldEntityMapIcon
---@field CentralMarketplaceTooltipClass TSubclassOf<UCentralMarketplaceMapTooltip>
---@field MapItemButton UButton
---@field CachedCentralMarketplaceTooltip UCentralMarketplaceMapTooltip
UWorldMarketShopMapIcon = {}

function UWorldMarketShopMapIcon:OnIconClicked() end


---@class UWorldTownCenterMapIcon : UDeploymentPointMapIcon
---@field IconNudgeBox USizeBox
---@field MainElements UPanelWidget
---@field TownStatusVerticalBox UVerticalBox
---@field TownNameBorder UBorder
---@field TownNameText UTextBlock
---@field TownStatusBorder UBorder
---@field NumPledgedStatus UStatusWidget
---@field NumTentsStatus UStatusWidget
---@field NumReinforcementSuppliesStatus UStatusWidget
---@field TownWarningText UTextBlock
---@field DetectionRangeCircle UImage
---@field FlashingFrequency float
---@field FlashingMinOpacity float
UWorldTownCenterMapIcon = {}

---@return ESlateVisibility
function UWorldTownCenterMapIcon:GetTownWarningTextVisibility() end
---@return FText
function UWorldTownCenterMapIcon:GetTownWarningText() end
---@return ESlateVisibility
function UWorldTownCenterMapIcon:GetTownStatusBorderVisibility() end
---@return FText
function UWorldTownCenterMapIcon:GetTownNameText() end
---@return ESlateVisibility
function UWorldTownCenterMapIcon:GetTownNameBorderVisibility() end
---@return FText
function UWorldTownCenterMapIcon:GetNumTentsText() end
---@return FText
function UWorldTownCenterMapIcon:GetNumReinforcementSuppliesText() end
---@return ESlateVisibility
function UWorldTownCenterMapIcon:GetNumPledgedVisibility() end
---@return FText
function UWorldTownCenterMapIcon:GetNumPledgedText() end


