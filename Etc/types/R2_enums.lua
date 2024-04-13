---@enum EAnvilAccessibilityTestResult
EAnvilAccessibilityTestResult = {
    CanUse = 0,
    AccessDeniedBelongsToEnemy = 1,
    AccessDeniedMustBePledged = 2,
    AccessDeniedMustBeInFamily = 3,
    Error = 4,
    EAnvilAccessibilityTestResult_MAX = 5,
}

---@enum EAnvilAccessibilityType
EAnvilAccessibilityType = {
    FriendlyOnly = 0,
    ResidentsOnly = 1,
    EnemyCanPlunder = 2,
    AllCanUse = 3,
    NumTypes = 4,
    EAnvilAccessibilityType_MAX = 5,
}

---@enum EAnvilAnimalState
EAnvilAnimalState = {
    Idle = 0,
    Walking = 1,
    Running = 2,
    Scavenging = 3,
    ChasingTarget = 4,
    Attacking = 5,
    Trapped = 6,
    EAnvilAnimalState_MAX = 7,
}

---@enum EAnvilArmourType
EAnvilArmourType = {
    None = 0,
    Leather = 1,
    Iron = 2,
    NumTypes = 3,
    EAnvilArmourType_MAX = 4,
}

---@enum EAnvilBuildLocationType
EAnvilBuildLocationType = {
    Foundation = 0,
    Landscape = 1,
    LargeRock = 2,
    Water = 3,
    _Unused = 4,
    Marketplace = 5,
    Industry = 6,
    Shore = 7,
    RequresCeiling = 8,
    AdditionalCollisionAllowWater = 9,
    Deployed = 10,
    Stable = 11,
    FamilyArea = 12,
    Static = 13,
    House = 14,
    RequiresEnclosure = 15,
    EAnvilBuildLocationType_MAX = 16,
}

---@enum EAnvilBuildStructureType
EAnvilBuildStructureType = {
    Monolithic = 0,
    Foundations = 1,
    Modular = 2,
    FoundationModular = 3,
    MonolithicModular = 4,
    EAnvilBuildStructureType_MAX = 5,
}

---@enum EAnvilCharacterStance
EAnvilCharacterStance = {
    Standing = 0,
    Sitting = 1,
    OnBatteringRam = 2,
    OnHorse = 3,
    OnScorpion = 4,
    OnLadder = 5,
    OnPowerMill = 6,
    InHoarding = 7,
    HoldingLadderFront = 8,
    HoldingLadderRear = 9,
    EAnvilCharacterStance_MAX = 10,
}

---@enum EAnvilCollisionChannel
EAnvilCollisionChannel = {
    AnvilCollisionChannelStatic = 0,
    AnvilCollisionChannelDynamic = 1,
    AnvilCollisionChannelPlayer = 2,
    AnvilCollisionChannelUseVolume = 3,
    AnvilCollisionChannelResource = 4,
    AnvilCollisionChannelPickup = 5,
    AnvilCollisionChannelAction = 6,
    AnvilCollisionChannelRoadVolume = 7,
    AnvilCollisionChannelBuildVolume = 8,
    AnvilCollisionChannelGateVolume = 9,
    AnvilCollisionChannelWallProtection = 10,
    AnvilCollisionChannelWorldBorder = 11,
    AnvilCollisionChannelLandscape = 12,
    AnvilCollisionChannelProjectile = 13,
    AnvilCollisionChannelVehicle = 14,
    AnvilCollisionChannelMeshVisibility = 15,
    AnvilCollisionChannelShield = 16,
    AnvilCollisionChannelLargeRock = 17,
    AnvilCollisionChannelWater = 18,
    AnvilCollisionChannelAnimal = 19,
    AnvilCollisionChannelMarketArea = 20,
    AnvilCollisionChannelFoundation = 21,
    AnvilCollisionChannelSnapping = 22,
    AnvilCollisionChannelFire = 23,
    AnvilCollisionChannelMouseInteraction = 24,
    AnvilCollisionChannelIndustry = 25,
    AnvilCollisionChannelBorderRegion = 26,
    AnvilCollisionChannelFamilyArea = 27,
    AnvilCollisionChannelHouse = 28,
    EAnvilCollisionChannel_MAX = 29,
}

---@enum EAnvilConvertedActionType
EAnvilConvertedActionType = {
    HitAction = 0,
    AnvilAction = 1,
    HeatBoost = 2,
    NumTypes = 3,
    EAnvilConvertedActionType_MAX = 4,
}

---@enum EAnvilDamageTargetType
EAnvilDamageTargetType = {
    Default = 0,
    Infantry = 1,
    Horse = 2,
    Structure = 3,
    Fire = 4,
    NumTypes = 5,
    EAnvilDamageTargetType_MAX = 6,
}

---@enum EAnvilDamageType
EAnvilDamageType = {
    Default = 0,
    Slashing = 1,
    Piercing = 2,
    Missile = 3,
    Siege = 4,
    Water = 5,
    Bleed = 6,
    Decay = 7,
    Admin = 8,
    NumTypes = 9,
    EAnvilDamageType_MAX = 10,
}

---@enum EAnvilDismantleStatus
EAnvilDismantleStatus = {
    Success = 0,
    CannotBeDismantled = 1,
    NoPermission = 2,
    OverTimeLimit = 3,
    EnemiesNearby = 4,
    EAnvilDismantleStatus_MAX = 5,
}

---@enum EAnvilFactionId
EAnvilFactionId = {
    None = 0,
    Aranic = 1,
    Mirrish = 2,
    Novan = 3,
    NumTypes = 4,
    EAnvilFactionId_MAX = 5,
}

---@enum EAnvilFoodType
EAnvilFoodType = {
    None = 0,
    Berries = 1,
    Fish = 2,
    Produce = 3,
    Wheat = 4,
    MeatDeer = 5,
    MeatBoar = 6,
    MeatCommon = 7,
    NumTypes = 8,
    EAnvilFoodType_MAX = 9,
}

---@enum EAnvilGateState
EAnvilGateState = {
    Closed = 0,
    Opening = 1,
    Open = 2,
    Closing = 3,
    EAnvilGateState_MAX = 4,
}

---@enum EAnvilInputEventType
EAnvilInputEventType = {
    None = 0,
    PawnInteract = 1,
    PawnInventory = 2,
    PawnAction = 3,
    PawnCancel = 4,
    RotateStructureStart = 5,
    AimStart = 6,
    ResetMouseMode = 7,
    EquipPrimary = 8,
    EquipSecondary = 9,
    Upgrade = 10,
    ToggleBuildMenu = 11,
    SecondaryInteract = 12,
    ClaimHouse = 13,
    GotoSleep = 14,
    PledgeAsMilitia = 15,
    ReturnToPledgedTown = 16,
    DismantleByOfficial = 17,
    RestrictedModeOn = 18,
    RestrictedModeOff = 19,
    IncreaseRefineryPriority = 20,
    DecreaseRefineryPriority = 21,
    MouseRotationMovement = 22,
    MouseWheelMovement = 23,
    Mount = 24,
    WithdrawSilver = 25,
    MarketShopDataRequest = 26,
    RepairStationRepairRequest = 27,
    AttachAnimal = 28,
    DetachAnimal = 29,
    MouseSelect = 30,
    DisableSnapping = 31,
    Unstuck = 32,
    SetTownName = 33,
    Reload = 34,
    RetractLadder = 35,
    Climb = 36,
    QuenchItems = 37,
    HitConverterNextOutput = 38,
    HitConverterPreviousOutput = 39,
    AnvilNextOutput = 40,
    AnvilPreviousOutput = 41,
    PackItems = 42,
    ToggleFamilyAreaPledgeRestriction = 43,
    StartPowerMill = 44,
    StopPowerMill = 45,
    IncreaseTownStatus = 46,
    EAnvilInputEventType_MAX = 47,
}

---@enum EAnvilInputResponseType
EAnvilInputResponseType = {
    None = 0,
    ToggleStructureUI = 1,
    TogglePlayerInventory = 2,
    CancelUI = 3,
    StructureUpgradeFailed = 4,
    ToggleBuildMenu = 5,
    EAnvilInputResponseType_MAX = 6,
}

---@enum EAnvilItemDurabilityType
EAnvilItemDurabilityType = {
    None = 0,
    Default = 1,
    Heat = 2,
    EAnvilItemDurabilityType_MAX = 3,
}

---@enum EAnvilItemFlag
EAnvilItemFlag = {
    Relic = 0,
    Public = 1,
    EAnvilItemFlag_MAX = 2,
}

---@enum EAnvilItemFlags
EAnvilItemFlags = {
    Relic = 0,
    Public = 1,
    EAnvilItemFlags_MAX = 2,
}

---@enum EAnvilItemPayloadType
EAnvilItemPayloadType = {
    None = 0,
    Quality = 1,
    ConversionProgress = 2,
    TownHash = 3,
    EAnvilItemPayloadType_MAX = 4,
}

---@enum EAnvilItemType
EAnvilItemType = {
    None = 0,
    Normal = 1,
    Head = 2,
    Body = 3,
    PrimaryTool = 4,
    SecondaryTool = 5,
    Crate = 6,
    Resource = 7,
    StorableFoodT1 = 8,
    StorableFoodT2 = 9,
    StorableFoodT3 = 10,
    TownCurrency = 11,
    All = 12,
    Tool = 13,
    Armor = 14,
    LargeResource = 15,
    NotResource = 16,
    FoodStorageT1 = 17,
    FoodStorageT2 = 18,
    FoodStorageT3 = 19,
    MeatIngredientsStorage = 20,
    IngredientsStorage = 21,
    LiquidStorage = 22,
    WeaponStorage = 23,
    BaseStockpile = 24,
    Quenchable = 25,
    NumTypes = 26,
    LeftHand = 27,
    RightHand = 28,
    EAnvilItemType_MAX = 29,
}

---@enum EAnvilMapPostType
EAnvilMapPostType = {
    DefendLocation = 0,
    AttackLocation = 1,
    EnemiesLocation = 2,
    FortifyLocation = 3,
    NeedHelp = 4,
    NeedSupplies = 5,
    LookHere = 6,
    Count = 7,
    EAnvilMapPostType_MAX = 8,
}

---@enum EAnvilPhysicalSurfaceType
EAnvilPhysicalSurfaceType = {
    SurfaceTypeDefault = 0,
    SurfaceTypeFlesh = 1,
    SurfaceTypeGrass = 2,
    SurfaceTypeWood = 3,
    SurfaceTypeStone = 4,
    SurfaceTypeLeather = 5,
    SurfaceTypeIron = 6,
    SurfaceTypeShield = 7,
    SurfaceTypeShieldBreak = 8,
    SurfaceTypeDirt = 9,
    SurfaceTypeForest = 10,
    SurfaceTypeRock = 11,
    SurfaceTypeLake = 12,
    SurfaceTypeGravel = 13,
    SurfaceTypeRare = 14,
    SurfaceTypeRoad = 15,
    SurfaceTypeSand = 16,
    SurfaceTypeNumTypes = 17,
    EAnvilPhysicalSurfaceType_MAX = 18,
}

---@enum EAnvilPlacementInfoFlag
EAnvilPlacementInfoFlag = {
    ContextNone = 0,
    InRichSoil = 1,
    BeaconTowerLink = 2,
    BeaconTowerTownHallLink = 3,
    RareFoodArea_Begin = 4,
    InRareFoodArea_Deer = 5,
    InRareFoodArea_Boar = 6,
    InRareFoodArea_Wheat = 7,
    InRareFoodArea_Cabbage = 8,
    InRareFoodArea_Coal = 9,
    InRareFoodArea_Clay = 10,
    InRareFoodArea_None = 11,
    RareFoodArea_End = 12,
    ContextEnd = 13,
    EAnvilPlacementInfoFlag_MAX = 14,
}

---@enum EAnvilPlacementStatus
EAnvilPlacementStatus = {
    Valid = 0,
    UnknownError = 1,
    Obstructed = 2,
    InvalidFoundation = 3,
    InvalidSurface = 4,
    TooCloseToTownHall = 5,
    TooCloseToCamp = 6,
    TooCloseToTownMarker = 7,
    TooFarFromTownHallOrCamp = 8,
    TooFarFromTownHall = 9,
    TooFarFromCamp = 10,
    RequiredHigherTierTH = 11,
    RequiredHigherTierFamilyArea = 12,
    TooLong = 13,
    TooShort = 14,
    TooHigh = 15,
    TooLow = 16,
    NotEnoughGold = 17,
    TooCloseToEnemy = 18,
    TooCloseToOtherWell = 19,
    TooFarFromPlayer = 20,
    NotAtCorrectBuildLocationType = 21,
    RequiresDeployable = 22,
    RequiresMarketplace = 23,
    RequiresIndustry = 24,
    RequiresHouse = 25,
    RequiresFamilyArea = 26,
    TooCloseTogether = 27,
    TooCloseToWildSpawn = 28,
    TooCloseToWater = 29,
    VehicleMustBeEmpty = 30,
    RequiresEnclosure = 31,
    RequiresValidSupport = 32,
    RequiresFoundation = 33,
    RequiresLandscape = 34,
    RequiresWater = 35,
    RequiresSnappping = 36,
    YouMustBelongToFamily = 37,
    NotAtFullHealth = 38,
    CantBuildBorderRegion = 39,
    MustBePledgedToTown = 40,
    EAnvilPlacementStatus_MAX = 41,
}

---@enum EAnvilPlayerAimMeshType
EAnvilPlayerAimMeshType = {
    None = 0,
    Ranged = 1,
    Melee = 2,
    FishingInvalid = 3,
    FishingValid = 4,
    FishingReady = 5,
    NumTypes = 6,
    EAnvilPlayerAimMeshType_MAX = 7,
}

---@enum EAnvilPlayerInputMode
EAnvilPlayerInputMode = {
    Default = 0,
    Building = 1,
    RotatingStructure = 2,
    Aiming = 3,
    MouseSelect = 4,
    NumTypes = 5,
    EAnvilPlayerInputMode_MAX = 6,
}

---@enum EAnvilPledgedOnlineStatus
EAnvilPledgedOnlineStatus = {
    Online = 0,
    Offline = 1,
    Deployed = 2,
    Num = 3,
    EAnvilPledgedOnlineStatus_MAX = 4,
}

---@enum EAnvilPledgedPlayerStatus
EAnvilPledgedPlayerStatus = {
    None = 0,
    Commoner = 1,
    Citizen = 2,
    Noble = 3,
    Official = 4,
    Founder = 5,
    Lord = 6,
    Num = 7,
    EAnvilPledgedPlayerStatus_MAX = 8,
}

---@enum EAnvilPowerUnitType
EAnvilPowerUnitType = {
    Pipe = 0,
    Source = 1,
    Sink = 2,
    Extern = 3,
    EAnvilPowerUnitType_MAX = 4,
}

---@enum EAnvilProfileNameCheckType
EAnvilProfileNameCheckType = {
    Valid = 0,
    TooShort = 1,
    TooLong = 2,
    InvalidChar = 3,
    AlreadyTaken = 4,
    EAnvilProfileNameCheckType_MAX = 5,
}

---@enum EAnvilRareResourceAreaType
EAnvilRareResourceAreaType = {
    None = 0,
    FoodArea_Deer = 1,
    FoodArea_Boar = 2,
    FoodArea_Wheat = 3,
    FoodArea_Cabbage = 4,
    FoodArea_Coal = 5,
    FoodArea_Clay = 6,
    Num = 7,
    EAnvilRareResourceAreaType_MAX = 8,
}

---@enum EAnvilResourceType
EAnvilResourceType = {
    Default = 0,
    ChoppedTree = 1,
    EAnvilResourceType_MAX = 2,
}

---@enum EAnvilScorchState
EAnvilScorchState = {
    None = 0,
    OnFire = 1,
    OnFireGrowing = 2,
    Cooling = 3,
    EAnvilScorchState_MAX = 4,
}

---@enum EAnvilSimActivityState
EAnvilSimActivityState = {
    None = 0,
    Idle = 1,
    Attacking = 2,
    BayonetAttack = 3,
    LaunchingProjectile = 4,
    Equipping = 5,
    Carrying = 6,
    Vaulting = 7,
    ClimbingLow = 8,
    ClimbingMedium = 9,
    ClimbingHigh = 10,
    Reloading = 11,
    FiringCannon = 12,
    UsingHandTool = 13,
    BuildingWithHandTool = 14,
    Plundering = 15,
    HorseRiding = 16,
    Eating = 17,
    Feeding = 18,
    Farming = 19,
    FishingWaiting = 20,
    FishingHooked = 21,
    FishingSuccess = 22,
    FishingFailed = 23,
    StunnedOnGround = 24,
    StunnedGettingUp = 25,
    NumStates = 26,
    EAnvilSimActivityState_MAX = 27,
}

---@enum EAnvilSnappingChannelType
EAnvilSnappingChannelType = {
    General = 0,
    Wall = 1,
    Road = 2,
    RoadSide = 3,
    Platform = 4,
    Foundation = 5,
    WaterStart = 6,
    WaterEnd = 7,
    CanalStart = 8,
    CanalEnd = 9,
    CanalSideStart = 10,
    PowerStart = 11,
    PowerEnd = 12,
    PowerConvertedAnvilStart = 13,
    PowerConvertedAnvilEnd = 14,
    PowerConvertedHeatStart = 15,
    PowerConvertedHeatEnd = 16,
    DebugPowerSource = 17,
    NaturalWaterRequired = 18,
    NaturalWaterOptional = 19,
    PowerConvertedWoodChoppingStationStart = 20,
    PowerConvertedWoodChoppingStationEnd = 21,
    PropertyArea = 22,
    EAnvilSnappingChannelType_MAX = 23,
}

---@enum EAnvilSpawnType
EAnvilSpawnType = {
    Starter = 0,
    House = 1,
    Tent = 2,
    Bed = 3,
    EAnvilSpawnType_MAX = 4,
}

---@enum EAnvilStatusMessageType
EAnvilStatusMessageType = {
    None = 0,
    Success = 1,
    WrongTool = 2,
    HouseClaimed = 3,
    TentClaimed = 4,
    HouseAlreadyClaimed = 5,
    CannotReinforceAtPledgedTown = 6,
    NoRoomToDeployAtBed = 7,
    TownPledgeLimitReached = 8,
    SleepSuccess = 9,
    TooSoonToSleep = 10,
    PlunderFailTooPoor = 11,
    PlunderFailTooSoon = 12,
    PlunderFailObstructed = 13,
    Plundering = 14,
    OnlyCitizensAllowedToVote = 15,
    CanOnlyVoteForNobles = 16,
    MustBeOfficialToDoThat = 17,
    MustBePledged = 18,
    ItemTransfer_Error = 19,
    ItemTransfer_StaminaNotEnough = 20,
    ItemTransfer_CannotAccept = 21,
    ItemTransfer_InventoryFull = 22,
    ItemTransfer_NotAtMaxDurability = 23,
    ItemTransfer_HouseNotYours = 24,
    ItemTransfer_WithdrawalRestricted = 25,
    ItemTransfer_NotPublic = 26,
    Vehicle_MountBlocked = 27,
    Vehicle_ExitBlocked = 28,
    BuildSiteObstructed = 29,
    GatheringResource = 30,
    NoRepairNeeded = 31,
    RepairOtherTeam = 32,
    RepairMaterialsRequired = 33,
    RepairOnFire = 34,
    Repairing = 35,
    TooEncumberedForActivity = 36,
    TooEncumberedToArm = 37,
    TooEncumberedItemDisarmed = 38,
    NotEnoughStamina = 39,
    WrongStance = 40,
    MissingResource = 41,
    MissingHorse = 42,
    VehicleMustBeEmpty = 43,
    QueueIsFull = 44,
    NotEnoughPayment = 45,
    TownNotInRareResourceArea = 46,
    TownTooClose = 47,
    WeaponIneffective = 48,
    MarketNotOwner = 49,
    MarketInvalidItem = 50,
    TooSoonToEat = 51,
    FishingStart = 52,
    FishingHooked = 53,
    FishingCancel = 54,
    FishingSuccess = 55,
    FishingFail = 56,
    ItemNotRepairable = 57,
    ItemRepairComplete = 58,
    CannotRepairRelicItem = 59,
    RelicTechItemNotRelic = 60,
    RelicTechSubmitted = 61,
    RelicTechResearchComplete = 62,
    RelicTechResearchIncomplete = 63,
    AccessDeniedBelongsToEnemy = 64,
    AccessDeniedMustBePledged = 65,
    AccessDeniedMustBeInFamily = 66,
    AccessDeniedTooFarToInteract = 67,
    DismantleNoPermission = 68,
    GateIsBreached = 69,
    EnemiesNearby = 70,
    UnstuckStarting = 71,
    UnstuckTimeRemaining = 72,
    UnstuckCancelledMovement = 73,
    UnstuckCancelledEnemyNearby = 74,
    UnstuckCancelledTooSoon = 75,
    UnstuckCancelledVehiclePassenger = 76,
    UnstuckAttemptFailed = 77,
    LadderTooManyPlayers = 78,
    LadderNoSpaceToRetract = 79,
    DrowningNotification = 80,
    BedClaimed = 81,
    BedAlreadyClaimed = 82,
    BedMustHaveHouseOrTentAtTown = 83,
    BedClaimCleared = 84,
    BedNotEnclosed = 85,
    HorseNotHungry = 86,
    PvpIsNerfed = 87,
    NoItemsForPacking = 88,
    TooManyOrFewItemsForPacking = 89,
    NoContainerForPacking = 90,
    NotAllowedInBorderZone = 91,
    SlotOccupied = 92,
    CannotTravelWithPassengers = 93,
    InvalidTownCurrency = 94,
    NotEnoughTownCurrency = 95,
    TravelDestinationAtCapacity = 96,
    UnableToIncreaseStatusUsingLocalCoin = 97,
    TaxesAreOverdue = 98,
    FamilyAreaClaimed = 99,
    NumTypes = 100,
    EAnvilStatusMessageType_MAX = 101,
}

---@enum EAnvilStimulusType
EAnvilStimulusType = {
    None = 0,
    VisualThreat = 1,
    AuditoryThreat = 2,
    DestroyableObstacle = 3,
    FeedingLocation = 4,
    SettlementLocation = 5,
    NumTypes = 6,
    EAnvilStimulusType_MAX = 7,
}

---@enum EAnvilToolType
EAnvilToolType = {
    None = 0,
    Hands = 1,
    Hammer = 2,
    Axe = 3,
    Hoe = 4,
    Scythe = 5,
    Pickaxe = 6,
    FishingPole = 7,
    WeakAxe = 8,
    WeakPickAxe = 9,
    NumTypes = 10,
    EAnvilToolType_MAX = 11,
}

---@enum EAnvilTravelType
EAnvilTravelType = {
    None = 0,
    BorderTravel = 1,
    Reinforce = 2,
    ReturnToPledgedTown = 3,
    EAnvilTravelType_MAX = 4,
}

---@enum EAnvilUsePromptType
EAnvilUsePromptType = {
    PickupItem = 0,
    Plunder = 1,
    UseEntity = 2,
    DropLargeItem = 3,
    Mount = 4,
    Repair = 5,
    Gate = 6,
    Feed = 7,
    Gathering = 8,
    EAnvilUsePromptType_MAX = 9,
}

---@enum EAnvilVehicleInputState
EAnvilVehicleInputState = {
    Idle = 0,
    Push = 1,
    Pull = 2,
    Charge = 3,
    StrafeLeft = 4,
    StrafeRight = 5,
    EAnvilVehicleInputState_MAX = 6,
}

---@enum EChatType
EChatType = {
    WORLD = 0,
    WORLD_TEAM = 1,
    LOCAL = 2,
    TEAM = 3,
    TOWN = 4,
    ADMIN = 5,
    ALERT = 6,
    COMMAND_LIST = 7,
    PLAYER_LIST = 8,
    EChatType_MAX = 9,
}

---@enum EEntityRelevancyPolicy
EEntityRelevancyPolicy = {
    DistanceBased = 0,
    AlwaysRelevant = 1,
    AlwaysRelevantToFriendlyOnly = 2,
    AlwaysRelevantToFriendlyOrDistanceBased = 3,
    OwnerOnly = 4,
    EEntityRelevancyPolicy_MAX = 5,
}

---@enum EEntitySerializationType
EEntitySerializationType = {
    SerializationTypeDefault = 0,
    SerializationTypePlayer = 1,
    SerializationTypeController = 2,
    SerializationTypeRefinery = 3,
    SerializationTypeFamilyArea = 4,
    EEntitySerializationType_MAX = 5,
}

---@enum EItemQualityType
EItemQualityType = {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    NumTypes = 4,
    EItemQualityType_MAX = 5,
}

