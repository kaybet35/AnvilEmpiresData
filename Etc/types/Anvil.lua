---@meta

---@class AAnvilGameModeBase : AGameModeBase
AAnvilGameModeBase = {}


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
---@field VisActorPreview UChildActorComponent
---@field SceneComponent UEntityActorRootComponent
AEntityActor = {}



---@class AGameplayGameMode : AAnvilGameModeBase
AGameplayGameMode = {}


---@class AGameplayPlayerController : AAnvilPlayerController
AGameplayPlayerController = {}


---@class AMainMenuGameMode : AAnvilGameModeBase
AMainMenuGameMode = {}


---@class AMainMenuPlayerController : AAnvilPlayerController
AMainMenuPlayerController = {}


---@class AMapBorderActor : ACameraActor
---@field WorldSize FVector2D
---@field WorldOrigin FVector2D
---@field CapturePadding FVector2D
---@field MapImage UTexture2D
---@field MapTreeLayerImage UTexture2D
---@field bPreCapture boolean
---@field bCapture boolean
---@field BoxVisualizer UStaticMeshComponent
AMapBorderActor = {}



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
AServerPartition = {}



---@class AUIGlobals : AInfo
---@field TooltipClass TSubclassOf<UUserWidget>
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
---@field TemplateCDO UEntityTemplate
---@field PositionSmoothSpeed float
---@field RotationSmoothSpeed float
---@field ClientMovementSmoothingDistance float
---@field bHasLandscapeCollisions boolean
---@field bUseDepthStencilForInteractionHighlight boolean
AVisActor = {}



---@class AVisAnimal : AVisActor
---@field AnimalAIDataComponent UAnimalAIDataComponent
---@field HealthDataComponent UHealthDataComponent
---@field Capsule UCapsuleComponent
---@field Mesh USkeletalMeshComponent
---@field CurrentStateMontageMap TMap<EAnvilAnimalState, UAnimMontage>
---@field TelegraphSoundQueue USoundCue
AVisAnimal = {}



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
---@field SeatSocketName FName
---@field HorseMesh USkeletalMeshComponent
---@field SaddleMesh USkeletalMeshComponent
---@field CartMesh USkeletalMeshComponent
AVisCart = {}



---@class AVisController : AVisActor
---@field PlayerControllerDataComponent UPlayerControllerDataComponent
---@field DeathMarker UMapMarkerComponent
AVisController = {}



---@class AVisCookingStructure : AVisStructure
---@field CookingDataComponent UCookingDataComponent
AVisCookingStructure = {}



---@class AVisCraftingStructure : AVisStructure
---@field CraftingDataComponent UCraftingDataComponent
AVisCraftingStructure = {}



---@class AVisEffect : AVisActor
---@field ArrowComponent UArrowComponent
---@field AudioComponent UAudioComponent
---@field NiagaraComponent UNiagaraComponent
---@field Mesh USkeletalMeshComponent
---@field LifetimeDataComponent ULifetimeDataComponent
---@field bSeekAudioComponent boolean
AVisEffect = {}



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
AVisHitConverterStructure = {}



---@class AVisHouse : AVisStructure
---@field HousingDataComponent UHousingDataComponent
---@field PlayerSpawnerDataComponent UPlayerSpawnerDataComponent
AVisHouse = {}



---@class AVisImpactEffect : AVisActor
---@field HitEffectActors TSubclassOf<AActor>
---@field ArrowComponent UArrowComponent
---@field ImpactSurfaceDataComponent UImpactSurfaceDataComponent
AVisImpactEffect = {}



---@class AVisLivestockStructure : AVisStructure
---@field FoodItem TSubclassOf<UItemTemplate>
---@field ProducedItem TSubclassOf<UItemTemplate>
AVisLivestockStructure = {}



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
AVisPickupItem = {}



---@class AVisPlayer : AVisActor
---@field SpringArm UVisSpringArmComponent
---@field SimPlayerDataComponent USimPlayerDataComponent
---@field PlayerInputDataComponent UPlayerInputDataComponent
---@field HealthDataComponent UHealthDataComponent
---@field HungerDataComponent UHungerDataComponent
---@field StaminaDataComponent UStaminaDataComponent
---@field ItemMeshComponent USkeletalMeshComponent
---@field ItemSecondaryMeshComponent USkeletalMeshComponent
---@field UnarmedItemMeshComponent USkeletalMeshComponent
---@field UnarmedItemSecondaryMeshComponent USkeletalMeshComponent
---@field PostProcessComponent UPostProcessComponent
---@field RotationAmount float
---@field CameraRotationLerpSpeed float
---@field AimMeshLength float
---@field YawSpeed float
---@field MapMarker UMapMarkerComponent
---@field MinShroudRadius float
---@field MaxShroudRadius float
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
---@field ActivityStateMontageMap TMap<EAnvilSimActivityState, UAnimMontage>
---@field ArmourDataComponent UArmorDataComponent
---@field VoiceIndicator UBillboardComponent
---@field TorchVFXComponent UNiagaraComponent
---@field TorchAudioComponent UAudioComponent
---@field PostProcessMaterialParameterCollection UMaterialParameterCollection
---@field PositionPostProcessMaterialParameterCollection UMaterialParameterCollection
---@field CurrentUsableVisActor AVisActor
---@field CurrentMountableVisActor AVisActor
AVisPlayer = {}

---@return float
function AVisPlayer:GetVelocityHeadingDegrees() end
---@return FString
function AVisPlayer:GetPlayerName() end
---@param NightTimeNormalized float
---@return float
function AVisPlayer:GetNightVisibilityRadius(NightTimeNormalized) end
---@param Index int32
---@return FLinearColor
function AVisPlayer:GetNightShroudLightSourcePositionAndRadius(Index) end
---@return FVector
function AVisPlayer:GetCameraVelocity() end
---@param NightTimeNormalized float
function AVisPlayer:BP_UpdateNightShroudMaterials(NightTimeNormalized) end
function AVisPlayer:BP_OnHeldItemChanged() end
---@return FVector
function AVisPlayer:AnimGetVelocity() end


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
---@field MeshVisibilityDataComponent UMeshVisibilityDataComponent
---@field ToggleVisibilityComponents TArray<USceneComponent>
---@field ScorchEffectAssets TArray<UNiagaraSystem>
AVisStructure = {}



---@class AVisTownCenter : AVisStructure
---@field TownHallDataComponent UTownHallDataComponent
AVisTownCenter = {}

---@param OldVal boolean
---@param NewVal boolean
function AVisTownCenter:OnUnderAttackChanged(OldVal, NewVal) end


---@class AVisTownMarker : AVisStructure
AVisTownMarker = {}


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



---@class AvisLadder : AVisStructure
AvisLadder = {}


---@class FAnvilAssetManager
---@field EntityTemplateObjectLibrary UObjectLibrary
---@field ItemTemplateObjectLibrary UObjectLibrary
---@field VisItemObjectLibrary UObjectLibrary
---@field BuildSitesPerLocationMap TMap<EAnvilBuildLocationType, FBuildSiteList>
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


---@class FBuildSiteList
---@field List TArray<AVisBuildSite>
FBuildSiteList = {}



---@class FCameraRotateState
FCameraRotateState = {}


---@class FClientConfig
---@field Ip FString
---@field AnvilServiceHttpUrl FString
---@field Announcement FString
FClientConfig = {}



---@class FClientConfigManager
FClientConfigManager = {}


---@class FClientConnectionRequest
---@field OnlineId uint64
---@field ProtocolId uint64
---@field TargetServerName FString
---@field SelectedFactionId uint8
---@field QueueTypeToJoin uint8
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
---@field bDeletedProfile boolean
---@field LockedFactionId uint8
FDeleteProfileResponse = {}



---@class FFactionCapacities
---@field CapacityArray TArray<boolean>
FFactionCapacities = {}



---@class FFactionLockResponse
---@field LockedFactionId uint8
---@field bCanDeleteProfile boolean
FFactionLockResponse = {}



---@class FGraphData
FGraphData = {}


---@class FHealthData : FTableRowBase
---@field MaxHealth float
FHealthData = {}



---@class FItemData : FTableRowBase
---@field Damage uint8
FItemData = {}



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



---@class FQueueStatusResponse
---@field QueueStatus QueueStatusType
---@field QueuedServerName FString
---@field QueuePosition int32
FQueueStatusResponse = {}



---@class FServerListEntry
---@field ServerName FString
---@field ServerAddress FString
---@field FactionCapacityArray TArray<boolean>
FServerListEntry = {}



---@class FServerListResponse
---@field ServerList TArray<FServerListEntry>
FServerListResponse = {}



---@class FServerRegion
FServerRegion = {}


---@class FVoiceLoginInfo
---@field OnlineId FString
---@field LoginToken FString
---@field ChannelType EVoiceChannelType
---@field ChannelName FString
---@field LocalChannelJoinToken FString
---@field TextChannelJoinToken FString
---@field BroadcastChannelJoinToken FString
FVoiceLoginInfo = {}



---@class UActionButtonWidget : UUserWidget
---@field ActionButtonType EActionButtonType
---@field ActionButton UButton
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
---@field LeftButton UAnvilButtonWidget
---@field RightButton UAnvilButtonWidget
UAnvilDialogBox = {}

function UAnvilDialogBox:OnRightButtonClicked() end
function UAnvilDialogBox:OnLeftButtonClicked() end


---@class UAnvilDropdownEntryWidget : UUserWidget
---@field ComboBox UComboBoxString
---@field LabelText FText
---@field LabelFontSize int32
---@field DropdownProportion float
---@field DropdownWidth float
---@field DropdownHeight float
---@field ComboList TArray<FString>
---@field LabelTextBox UTextBlock
---@field SizeBox USizeBox
---@field ComboHorizontalBox UHorizontalBox
---@field LabelBorder UBorder
UAnvilDropdownEntryWidget = {}

---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UAnvilDropdownEntryWidget:OnOptionSelected(SelectedItem, SelectionType) end


---@class UAnvilGameInstance : UGameInstance
---@field MapWidget UMapWidget
---@field HUDWidget UHUDWidget
---@field TravelAddress FString
---@field ConnectTokenBuffer TArray<uint8>
---@field CharacterSave UAnvilCharacterSave
---@field AnvilClientVoiceClient UAnvilClientVoiceClient
---@field AssetManager FAnvilAssetManager
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
---@return float
function UAnvilGameInstance:GetNightTimeNormalized() end
---@return boolean
function UAnvilGameInstance:GetIsNight() end
---@param OutSeconds int32
function UAnvilGameInstance:GetDayCurrentSeconds(OutSeconds) end
---@param OutputFileName FString
---@param Type UClass
---@param PropertyNameFilter TArray<FString>
function UAnvilGameInstance:DumpProperties(OutputFileName, Type, PropertyNameFilter) end


---@class UAnvilKeyEntryWidget : UUserWidget
---@field LabelText FText
---@field LabelFontSize int32
---@field ActionLabel FName
---@field InputType EInputType
---@field EntryProportion float
---@field EntryWidth float
---@field EntryHeight float
---@field LabelTextBox UTextBlock
---@field SizeBox USizeBox
---@field EntryHorizontalBox UHorizontalBox
---@field EntryBorder UBorder
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
---@field AcceptedDisclaimerVersion int32
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
---@field ScreenStack TArray<UAnvilScreen>
UAnvilRootWidget = {}



---@class UAnvilScreen : UUserWidget
---@field bOverrideBackground boolean
---@field Background UTexture2D
UAnvilScreen = {}



---@class UAnvilSliderWidget : UUserWidget
---@field PropertyLabel FString
---@field SliderLabel FText
---@field SliderLabelFontSize int32
---@field SliderProportion float
---@field SliderWidth float
---@field SliderHeight float
---@field LabelTextBox UTextBlock
---@field SizeBox USizeBox
---@field Slider USlider
UAnvilSliderWidget = {}

---@param Value float
function UAnvilSliderWidget:NativeOnSliderChanged(Value) end


---@class UBeaconTowerMapIcon : UMapIcon
---@field IconSlot UCanvasPanelSlot
UBeaconTowerMapIcon = {}



---@class UBeaconTowerPlayerInfoMapIcon : UMapIcon
---@field FriendlyColour FSlateColor
---@field EnemyColour FSlateColor
UBeaconTowerPlayerInfoMapIcon = {}



---@class UBuildMenuStructureButton : UGridItemWidget
UBuildMenuStructureButton = {}

---@param ItemSlot UGridItemWidget
function UBuildMenuStructureButton:OnBuild(ItemSlot) end


---@class UBuildMenuTabButton : UGridItemWidget
UBuildMenuTabButton = {}


---@class UBuildMenuWindow : UHUDWindow
---@field TabButtonPanel UPanelWidget
---@field StructureButtonGrid UGridPanelWidget
---@field TabButtonClass TSubclassOf<UBuildMenuTabButton>
---@field TabButtonIcons TMap<EBuildSiteCategory, UTexture2D>
---@field BuildLocations TArray<EAnvilBuildLocationType>
---@field CurrentTabButton UBuildMenuTabButton
UBuildMenuWindow = {}



---@class UChatEntryWidget : UUserWidget
---@field ModeNameMap TMap<EChatType, FText>
---@field ModeSwitchKeywordMap TMap<FString, EChatType>
---@field ChatTextField URichTextBlock
UChatEntryWidget = {}



---@class UChatWidget : UUserWidget
---@field ChatWidth float
---@field ChatHeight float
---@field ChatMinimizedHeight float
---@field CurrentMode EChatType
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
---@field CookingDurationText UTextBlock
---@field FuelDurationText UTextBlock
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



---@class UDeathMarketMapIcon : UMapIcon
UDeathMarketMapIcon = {}

---@param OldVal FVector
---@param NewVal FVector
function UDeathMarketMapIcon:OnLastDeathLocationChanged(OldVal, NewVal) end


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


---@class UEntityActorRootComponent : USceneComponent
UEntityActorRootComponent = {}


---@class UFactionSelectScreen : UAnvilScreen
---@field FactionAranicButton UButton
---@field FactionMirrishButton UButton
---@field FactionNovanButton UButton
---@field DeleteProfileButton UAnvilButtonWidget
---@field FactionAranicAtCapacityText UTextBlock
---@field FactionMirrishAtCapacityText UTextBlock
---@field FactionNovanAtCapacityText UTextBlock
---@field DownloadingThrobber UThrobber
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
function UFactionSelectScreen:GetDeleteProfileButtonVisibility() end
---@return ESlateVisibility
function UFactionSelectScreen:FactionNovanAtCapacityVisibility() end
---@return ESlateVisibility
function UFactionSelectScreen:FactionMirrishAtCapacityVisibility() end
---@return ESlateVisibility
function UFactionSelectScreen:FactionAranicAtCapacityVisibility() end


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
UGameplayOverlay = {}

---@return ESlateVisibility
function UGameplayOverlay:GetHUDWidgetVisibility() end


---@class UGameplayScreen : UAnvilScreen
---@field GameplayOverlay UGameplayOverlay
---@field HUDWidget UHUDWidget
---@field MapWidget UMapWidget
---@field ContentSwitcher UWidgetSwitcher
UGameplayScreen = {}



---@class UGrassRemovalVolumeComponent : USceneComponent
---@field Extents FVector
---@field bDeferGrassUpdate boolean
---@field SplineDataComponent USplineDataComponent
UGrassRemovalVolumeComponent = {}

function UGrassRemovalVolumeComponent:TryRemoveGrass() end
---@return boolean
function UGrassRemovalVolumeComponent:RemoveGrass() end


---@class UGridItemWidget : UUserWidget
---@field ItemWidth float
---@field ItemHeight float
---@field Button UButton
---@field SizeBox USizeBox
---@field ItemImage UImage
---@field SubItemImage UImage
---@field EmptyImage UTexture2D
---@field bIsActive boolean
UGridItemWidget = {}

function UGridItemWidget:OnClicked() end


---@class UGridPanelWidget : UUniformGridPanel
---@field PreferredDimension FIntPoint
---@field ItemSlotWidgetType TSubclassOf<UGridItemWidget>
---@field PreviewItemCount int32
UGridPanelWidget = {}



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
---@field HUDWindowWidgets TMap<EHUDWindowType, UHUDWindow>
---@field HUDNameWidgetClass TSubclassOf<UHUDNameWidget>
---@field HUDStatsWidgetClass TSubclassOf<UHUDStatsWidget>
---@field OpenedHUDWindow UHUDWindow
---@field Compass UImage
---@field CompassPlayerArrow UImage
---@field PrimaryHeldItem UInventoryItemWidget
---@field SecondaryHeldItem UInventoryItemWidget
---@field GuardBar UProgressBar
---@field GuardStatusWidget UPanelWidget
---@field GuardStrengthLeftIcon UImage
---@field GuardStrengthCenterIcon UImage
---@field GuardStrengthRightIcon UImage
---@field EncumbranceIcon UImage
---@field EncumbranceText UTextBlock
---@field PlayerStatusText UTextBlock
---@field GameplayHintText UTextBlock
---@field GameplayHintCanvas UCanvasPanel
---@field WinConditionCanvas UCanvasPanel
---@field WinConditionText UTextBlock
---@field WinConditionLogo UImage
---@field TownStatusAlertCanvas UCanvasPanel
---@field TownStatusAlertText UTextBlock
---@field PlayerVitality UVitalityStatusWidget
---@field HorseVitality UVitalityStatusWidget
---@field DisclaimerCanvas UCanvasPanel
---@field DisclaimerText UTextBlock
---@field AranicLogo UTexture2D
---@field MirrishLogo UTexture2D
---@field NovanLogo UTexture2D
---@field GuardStrengthEmptyIcon FSlateBrush
---@field GuardStrengthFillIcon FSlateBrush
---@field LocalChatDisplayTime float
---@field NewLocalMessages TArray<UChatMessage>
UHUDWidget = {}

function UHUDWidget:PlayWinConditionAnimation() end
---@param AlertText FText
function UHUDWidget:PlayTownStatusAlert(AlertText) end
---@return ESlateVisibility
function UHUDWidget:GetHUDWidgetVisibility() end


---@class UHUDWindow : UUserWidget
---@field WindowContext AVisActor
---@field StructureToPlayerTransfer boolean
---@field PlayerToStructureTransfer boolean
---@field StructureInventoryContainerWidget UInventoryContainerWidget
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
UHeaderContainer = {}



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


---@class UHousePlayerInventoryListItem : UUserWidget
---@field PlayerNameText UTextBlock
---@field InventoryWidget UInventoryWidget
UHousePlayerInventoryListItem = {}



---@class UHousePlayerInventoryWidgetBox : UScrollBox
---@field PlayerInventoryListItemType TSubclassOf<UHousePlayerInventoryListItem>
UHousePlayerInventoryWidgetBox = {}



---@class UHouseWindow : UStructureWindow
---@field PlayerInventoriesBox UHousePlayerInventoryWidgetBox
UHouseWindow = {}



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



---@class UInventoryItemWidget : UGridItemWidget
---@field ItemQuantityTextSize int32
---@field DisabledTint FSlateColor
---@field DedicatedImageOpacity float
---@field EmptyImageMap TMap<EAnvilItemType, UTexture2D>
---@field ItemQuantityText UTextBlock
---@field DurabilityBar UProgressBar
---@field SubtypeIconRelic UImage
---@field OverEncumberedImage UImage
---@field HitConversionProgressBar UProgressBar
---@field QualityIconImage UImage
---@field QualityIconTextures TMap<EItemQualityType, UTexture2D>
UInventoryItemWidget = {}



---@class UInventoryWidget : UGridPanelWidget
---@field bIsPlayerInventory boolean
UInventoryWidget = {}



---@class UMainAreaContainer : UUserWidget
---@field MainAreaSizeBox USizeBox
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
---@field bOverride_WidthOverride boolean
---@field bOverride_HeightOverride boolean
---@field bOverride_MinDesiredWidth boolean
---@field bOverride_MinDesiredHeight boolean
---@field bOverride_MaxDesiredWidth boolean
---@field bOverride_MaxDesiredHeight boolean
UMainAreaContainer = {}



---@class UMapIcon : UUserWidget
---@field Marker AActor
---@field TypeProperty FMapIconTypeProperty
---@field InstanceProperty FMapIconInstanceProperty
---@field LabelBox UTextBlock
---@field IconBox UImage
UMapIcon = {}

---@return boolean
function UMapIcon:IsIconEnabled() end
---@return ESlateVisibility
function UMapIcon:GetIconVisibility() end


---@class UMapMarkerComponent : UActorComponent
---@field MapIconProperty FMapIconInstanceProperty
UMapMarkerComponent = {}



---@class UMapPostMapIcon : UMapIcon
UMapPostMapIcon = {}


---@class UMapWidget : UUserWidget
---@field MapSheet UCanvasPanel
---@field IconTemplates TMap<EMapIconType, FMapIconTypeProperty>
---@field EnemyIconColour FSlateColor
---@field ZoomSpeed float
---@field ZoomMax float
---@field ZoomAnimationTime float
---@field MapImageBox UImage
---@field FogOfWarMask UTexture2D
---@field FogOfWarRadius int32
---@field DeploymentInstructionOrSpawnTimerBorder UBorder
---@field DeploymentInstructionOrSpawnTimerText UTextBlock
---@field ObjectiveBorder UBorder
---@field DisplayedBeaconTowerPlayerInfos TArray<UMapIcon>
UMapWidget = {}

---@return ESlateVisibility
function UMapWidget:GetRespawnTimerVisibility() end
---@return FText
function UMapWidget:GetRespawnTimerText() end
---@return ESlateVisibility
function UMapWidget:GetObjectiveBorderVisibility() end
---@param MapImage UTexture2D
function UMapWidget:BP_OnMapImageSet(MapImage) end


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
---@field TooltipClass TSubclassOf<UMarketShopMapTooltip>
---@field CachedTooltip UMarketShopMapTooltip
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


---@class UOpeningScreen : UAnvilScreen
---@field PlayButton UAnvilButtonWidget
---@field ExitButton UAnvilButtonWidget
---@field OptionsButton UAnvilButtonWidget
---@field RoadmapButton UAnvilButtonWidget
---@field Version UTextBlock
---@field CL UTextBlock
---@field RoadmapPopupButton UButton
---@field DisclaimerWidget UDisclaimerWidget
---@field AnnouncementText UTextBlock
UOpeningScreen = {}

function UOpeningScreen:OnRoadmapClicked() end
function UOpeningScreen:OnRoadmapButtonClicked() end
function UOpeningScreen:OnPlayButtonClicked() end
function UOpeningScreen:OnOptionsButtonClicked() end
function UOpeningScreen:OnExitButtonClicked() end
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
---@field VSyncDropdown UAnvilDropdownEntryWidget
UOptionsMenuVideoWidget = {}

---@param Input FString
function UOptionsMenuVideoWidget:OnFullscreenModeChanged(Input) end


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
---@field DiscordSignUpButton UButton
UPauseScreen = {}

function UPauseScreen:OnOptionsButtonClicked() end
function UPauseScreen:OnLogOffButtonClicked() end
function UPauseScreen:OnHelpButtonClicked() end
function UPauseScreen:OnExitButtonConfirmed() end
function UPauseScreen:OnExitButtonClicked() end
function UPauseScreen:OnDiscordSignUpButtonClicked() end
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
---@field VoteButton UCheckBox
---@field OnlineStatusIcon UImage
---@field OnlineStatusIconMap TMap<EPledgedOnlineStatus, UTexture2D>
---@field OnlineStatusColorMap TMap<EPledgedOnlineStatus, FSlateColor>
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
---@field PrivateIcon UImage
---@field ItemBorder UBorder
---@field ItemBorderBrush FSlateBrush
---@field ItemBorderOtherPlayerBrush FSlateBrush
URefineryQueuedItemWidget = {}

function URefineryQueuedItemWidget:OnCancelClicked() end


---@class URefineryWindow : UStructureWindow
---@field RefineryProducibleItemsList URefineryProducibleListWidget
---@field RefineryQueue URefineryQueueWidget
---@field QueueTotalTimeText UTextBlock
---@field QueueTimeText UTextBlock
---@field StatusText UTextBlock
---@field PrivateButton UButton
---@field PrivateButtonStyleOn FButtonStyle
---@field PrivateButtonStyleOff FButtonStyle
URefineryWindow = {}

---@param Old boolean
---@param New boolean
function URefineryWindow:OnStatusChanged(Old, New) end
function URefineryWindow:OnPrivateButtonClicked() end


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



---@class UScorchEffectComponent : UNiagaraComponent
---@field ScorchThreshold float
UScorchEffectComponent = {}



---@class UServerListEntryView : UObject
---@field ServerListEntry FServerListEntry
UServerListEntryView = {}



---@class UServerListEntryWidget : UUserWidget
---@field ServerListEntryButton UButton
---@field ServerNameTextBlock UTextBlock
---@field AranicPopulationTextBlock UTextBlock
---@field MirrishPopulationTextBlock UTextBlock
---@field NovanPopulationTextBlock UTextBlock
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
---@field NumHousesStatus UStatusWidget
---@field NumTentsStatus UStatusWidget
---@field NumReinforcementSuppliesStatus UStatusWidget
UTownCenterMapIcon = {}

function UTownCenterMapIcon:UpdateName() end
function UTownCenterMapIcon:OnClicked() end
---@return FText
function UTownCenterMapIcon:GetNumTentsText() end
---@return FText
function UTownCenterMapIcon:GetNumReinforcementSuppliesText() end
---@return FText
function UTownCenterMapIcon:GetNumHousesText() end


---@class UTownCenterWindow : UStructureWindow
---@field PledgedPlayerList UPledgedPlayerBox
---@field LocalPlayerStatus UTextBlock
---@field LocalPlayerStatusProgress UProgressBar
---@field CivicPledgePanel UUserWidget
---@field TechHeaderContainer UHeaderContainer
---@field PledgedHeader UHeaderContainer
---@field TechFooterContainer UFooterContainer
---@field TechProgress UProgressBar
---@field RareResourceStatus UStatusWidget
---@field TownNames1 TArray<FText>
---@field TownNames2 TArray<FText>
---@field TownNames3 TArray<FText>
UTownCenterWindow = {}



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
---@field GroundDecalComponent UDecalComponent
---@field BalljointMesh UStaticMeshComponent
---@field BalljointBaseMesh UStaticMeshComponent
---@field LeftTrimMesh UVisStaticMeshComponent
---@field RightTrimMesh UVisStaticMeshComponent
---@field bIsStart boolean
---@field PowerUnitDataComponent UPowerUnitDataComponent
---@field BalljointMaterial UMaterialInstanceDynamic
---@field LeftTrimMaterial UMaterialInstanceDynamic
---@field RightTrimMaterial UMaterialInstanceDynamic
UVisBalljointComponent = {}



---@class UVisBatteringRamAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field RotationalSpeedYaw float
---@field bIsOccupied boolean
UVisBatteringRamAnimInstance = {}



---@class UVisBuildGhostComponent : UActorComponent
---@field ValidPlacementColour FLinearColor
---@field InvalidPlacementColour FLinearColor
---@field BuildCollisionDecalComponent UDecalComponent
UVisBuildGhostComponent = {}



---@class UVisCanalWaterControllerComponent : USceneComponent
---@field ShiftDelta float
---@field PowerUnitDataComponent UPowerUnitDataComponent
---@field SplineDataComponent USplineDataComponent
---@field WaterMaterials TArray<UMaterialInstanceDynamic>
---@field SplineWaterMesh UStaticMeshComponent
---@field SplineWaterMaterial UMaterialInstanceDynamic
UVisCanalWaterControllerComponent = {}

function UVisCanalWaterControllerComponent:OnSplineUpdate() end
function UVisCanalWaterControllerComponent:OnCurrentUpdate() end


---@class UVisFoundationDecorMesh : UStaticMeshComponent
UVisFoundationDecorMesh = {}


---@class UVisGateAnimInstance : UAnimInstance
---@field bIsOpen boolean
UVisGateAnimInstance = {}



---@class UVisHorseAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field NativeHorizontalMovement float
---@field NativeVerticalMovement float
UVisHorseAnimInstance = {}



---@class UVisItem : UObject
---@field CodeNameString FString
---@field CodeName int32
---@field NameText FText
---@field DescriptionText FText
---@field DescriptionFooter FText
---@field Icon UTexture2D
---@field Mesh USkeletalMesh
---@field StockpileMesh UStaticMesh
---@field bAutoSetStockpileExtents boolean
---@field StockpileExtents FVector
---@field StockpileOffset FVector
---@field StockpileRotation FRotator
---@field bStockpileDefaultRotate boolean
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
---@field TransferSoundCue USoundCue
---@field ArmingSoundCue USoundCue
UVisItem = {}



---@class UVisLadderVehicleAnimInstance : UAnimInstance
---@field NativeSpeed float
---@field bIsFrontSeatOccupied boolean
---@field bIsRearSeatOccupied boolean
UVisLadderVehicleAnimInstance = {}



---@class UVisMobileWeaponAnimInstance : UAnimInstance
---@field AimYaw float
---@field AimPitch float
---@field bPriming boolean
---@field bPrimed boolean
UVisMobileWeaponAnimInstance = {}



---@class UVisMultiItemStockpileComponent : USceneComponent
---@field TestItem TSubclassOf<UVisItem>
---@field StockpileExtents FVector
---@field LevelHeight float
---@field bDefaultRotate boolean
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
UVisPlayerAnimInstance = {}



---@class UVisPlayerVisualsComponent : UActorComponent
UVisPlayerVisualsComponent = {}


---@class UVisScaffoldingComponent : USceneComponent
---@field Scaffolding1 UStaticMesh
---@field Scaffolding2 UStaticMesh
---@field ScaffoldingCorner UStaticMesh
---@field GhostMaterial UMaterialInterface
UVisScaffoldingComponent = {}



---@class UVisSingleItemStockpileComponent : UStaticMeshComponent
---@field InventorySlotIndex int32
---@field DefaultItemMesh UStaticMesh
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


---@class UVisStaticMeshComponent : UStaticMeshComponent
---@field VisMeshProfile EVisMeshProfile
---@field bMeshVisibility boolean
UVisStaticMeshComponent = {}



---@class UVisStockpileComponent : UInstancedStaticMeshComponent
---@field CurrentInstancedMesh UInstancedStaticMeshComponent
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


---@class UVitalityStatusWidget : UUserWidget
---@field HungerBar UProgressBar
---@field HealthOverlay UOverlay
---@field HealthBar UProgressBar
---@field StaminaOverlay UOverlay
---@field StaminaBar UProgressBar
UVitalityStatusWidget = {}



---@class UWildSpawnPointMapIcon : UMapIcon
---@field IconButton UButton
UWildSpawnPointMapIcon = {}

function UWildSpawnPointMapIcon:OnClicked() end


