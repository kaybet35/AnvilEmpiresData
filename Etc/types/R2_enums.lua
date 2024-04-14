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

---@enum EAnvilAnvilGameplayType
EAnvilAnvilGameplayType = {
    Normal = 0,
    HeatBased = 1,
    NumTypes = 2,
    EAnvilAnvilGameplayType_MAX = 3,
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
    OutsideTownArea = 16,
    TownArea = 17,
    EAnvilBuildLocationType_MAX = 18,
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
    OnWindMill = 7,
    InHoarding = 8,
    HoldingLadderFront = 9,
    HoldingLadderRear = 10,
    EAnvilCharacterStance_MAX = 11,
}

---@enum EAnvilChatType
EAnvilChatType = {
    DataCommandList = 0,
    DataPlayerList = 1,
    Admin = 2,
    Alert = 3,
    WorldTeam = 4,
    WorldTown = 5,
    WorldFamily = 6,
    Local = 7,
    Team = 8,
    NumTypes = 9,
    EAnvilChatType_MAX = 10,
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
    VoteRegistered = 1,
    TooSoonToVoteAgain = 2,
    CannotBeDismantled = 3,
    NoPermission = 4,
    OverTimeLimit = 5,
    EnemiesNearby = 6,
    MustBeRepaired = 7,
    MustBeEmpty = 8,
    FamilyAreaMustBeEmpty = 9,
    EAnvilDismantleStatus_MAX = 10,
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
    ClaimFamilyInventory = 14,
    GotoSleep = 15,
    PledgeAsMilitia = 16,
    ReturnToPledgedTown = 17,
    CallForReinforcements = 18,
    DismantleByOfficial = 19,
    RestrictedModeOn = 20,
    RestrictedModeOff = 21,
    MouseRotationMovement = 22,
    MouseWheelMovement = 23,
    Mount = 24,
    WithdrawSilver = 25,
    RepairStationRepairRequest = 26,
    AttachAnimal = 27,
    DetachAnimal = 28,
    MouseSelect = 29,
    DisableSnapping = 30,
    Unstuck = 31,
    SetTownName = 32,
    Reload = 33,
    RetractLadder = 34,
    Climb = 35,
    QuenchItems = 36,
    HitConverterNextOutput = 37,
    HitConverterPreviousOutput = 38,
    AnvilNextOutput = 39,
    AnvilPreviousOutput = 40,
    PackItems = 41,
    ToggleFamilyAreaPledgeRestriction = 42,
    StartPowerMill = 43,
    StopPowerMill = 44,
    IncreaseTownStatus = 45,
    RequestFamilySync = 46,
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

---@enum EAnvilInventoryStackRule
EAnvilInventoryStackRule = {
    Default = 0,
    ForceStackNonLargeItems = 1,
    ForceStackAllItems = 2,
    EAnvilInventoryStackRule_MAX = 3,
}

---@enum EAnvilItemDurabilityType
EAnvilItemDurabilityType = {
    None = 0,
    Default = 1,
    Heat = 2,
    DryingProgress = 3,
    EAnvilItemDurabilityType_MAX = 4,
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

---@enum EAnvilItemQualityType
EAnvilItemQualityType = {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    NumTypes = 4,
    EAnvilItemQualityType_MAX = 5,
}

---@enum EAnvilItemSlotBackgroundType
EAnvilItemSlotBackgroundType = {
    None = 0,
    LeftHand = 1,
    RightHand = 2,
    PrimaryTool = 3,
    SecondaryTool = 4,
    Head = 5,
    Body = 6,
    Belt = 7,
    AnimalEquipment = 8,
    EAnvilItemSlotBackgroundType_MAX = 9,
}

---@enum EAnvilItemTag
EAnvilItemTag = {
    None = 0,
    Crate = 1,
    Stackable = 2,
    TwoHanded = 3,
    Large = 4,
    PrimaryTool = 5,
    SecondaryTool = 6,
    Head = 7,
    Body = 8,
    Silver = 9,
    LeftHand = 10,
    RightHand = 11,
    Quenchable = 12,
    Resource = 13,
    IngredientsStorage = 14,
    MeatIngredientsStorage = 15,
    StorableFoodT1 = 16,
    WeaponStorage = 17,
    LiquidStorage = 18,
    AnimalEquipment = 19,
    AnimalFeed = 20,
    Seed = 21,
    MaxTag = 63,
    EAnvilItemTag_MAX = 64,
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
    InFamilyArea = 4,
    RareFoodArea_Begin = 5,
    InRareFoodArea_Deer = 6,
    InRareFoodArea_Boar = 7,
    InRareFoodArea_Wheat = 8,
    InRareFoodArea_Cabbage = 9,
    InRareFoodArea_Coal = 10,
    InRareFoodArea_Clay = 11,
    InRareFoodArea_None = 12,
    RareFoodArea_End = 13,
    ContextEnd = 14,
    EAnvilPlacementInfoFlag_MAX = 15,
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
    TooFarFromTownHallOrCamp = 7,
    TooFarFromTownHall = 8,
    TooFarFromCamp = 9,
    RequiredHigherTierTH = 10,
    RequiredHigherTierFamilyArea = 11,
    TooLong = 12,
    TooShort = 13,
    TooHigh = 14,
    TooLow = 15,
    TooCloseToTownCenter = 16,
    TooCloseToEnemy = 17,
    TooCloseToOtherWell = 18,
    TooFarFromPlayer = 19,
    NotAtCorrectBuildLocationType = 20,
    RequiresDeployable = 21,
    RequiresMarketplace = 22,
    RequiresIndustry = 23,
    RequiresHouse = 24,
    RequiresFamilyArea = 25,
    RequiresFamily = 26,
    OnlyOneFamilyCenterPerTown = 27,
    TooCloseTogether = 28,
    TooCloseToWildSpawn = 29,
    TooCloseToWater = 30,
    VehicleMustBeEmpty = 31,
    RequiresEnclosure = 32,
    RequiresValidSupport = 33,
    RequiresFoundation = 34,
    RequiresLandscape = 35,
    RequiresWater = 36,
    RequiresSnappping = 37,
    YouMustBelongToFamily = 38,
    NotAtFullHealth = 39,
    CantBuildBorderRegion = 40,
    MustBePledgedToTown = 41,
    RequiresNearbyPlayers = 42,
    RequiresMorePopulation = 43,
    RequiresMoreFamilyHouses = 44,
    YouMustBeOfficial = 45,
    EAnvilPlacementStatus_MAX = 46,
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

---@enum EAnvilPlayerVisEventType
EAnvilPlayerVisEventType = {
    OnDeath = 0,
    StatusMessage = 1,
    ForceActivityState = 2,
    ConfirmFamilyPledgeDialog = 3,
    ConfirmHousePledgeDialog = 4,
    EAnvilPlayerVisEventType_MAX = 5,
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

---@enum EAnvilR2FamilyErrorType
EAnvilR2FamilyErrorType = {
    Error = 0,
    FamilyAlreadyExists = 1,
    EAnvilR2FamilyErrorType_MAX = 2,
}

---@enum EAnvilR2FamilyRoleType
EAnvilR2FamilyRoleType = {
    Founder = 0,
    Member = 1,
    EAnvilR2FamilyRoleType_MAX = 2,
}

---@enum EAnvilR2WeatherEventType
EAnvilR2WeatherEventType = {
    Rain = 0,
    Snow = 1,
    EAnvilR2WeatherEventType_MAX = 2,
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
    AttachRope = 20,
    FishingWaiting = 21,
    FishingHooked = 22,
    FishingSuccess = 23,
    FishingFailed = 24,
    StunnedOnGround = 25,
    StunnedGettingUp = 26,
    NumStates = 27,
    EAnvilSimActivityState_MAX = 28,
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
    PowerRopeStart = 13,
    PowerRopeEnd = 14,
    PowerConvertedAnvilStart = 15,
    PowerConvertedAnvilEnd = 16,
    PowerConvertedHeatStart = 17,
    PowerConvertedHeatEnd = 18,
    DebugPowerSource = 19,
    NaturalWaterRequired = 20,
    NaturalWaterOptional = 21,
    PowerConvertedWoodChoppingStationStart = 22,
    PowerConvertedWoodChoppingStationEnd = 23,
    PropertyArea = 24,
    EAnvilSnappingChannelType_MAX = 25,
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
    ItemTransfer_StaminaNotEnough = 19,
    ItemTransfer_CannotAccept = 20,
    ItemTransfer_InventoryFull = 21,
    ItemTransfer_NotAtMaxDurability = 22,
    ItemTransfer_HouseNotYours = 23,
    ItemTransfer_WithdrawalRestricted = 24,
    ItemTransfer_NotPublic = 25,
    Vehicle_MountBlocked = 26,
    Vehicle_ExitBlocked = 27,
    BuildSiteObstructed = 28,
    GatheringResource = 29,
    NoRepairNeeded = 30,
    RepairOtherTeam = 31,
    RepairMaterialsRequired = 32,
    RepairOnFire = 33,
    Repairing = 34,
    TooEncumberedForActivity = 35,
    TooEncumberedToArm = 36,
    TooEncumberedItemDisarmed = 37,
    NotEnoughStamina = 38,
    WrongStance = 39,
    MissingResource = 40,
    MissingHorse = 41,
    VehicleMustBeEmpty = 42,
    QueueIsFull = 43,
    NotEnoughPayment = 44,
    TownNotInRareResourceArea = 45,
    TownTooClose = 46,
    WeaponIneffective = 47,
    MarketNotOwner = 48,
    MarketInvalidItem = 49,
    TooSoonToEat = 50,
    FishingStart = 51,
    FishingHooked = 52,
    FishingCancel = 53,
    FishingSuccess = 54,
    FishingFail = 55,
    ItemNotRepairable = 56,
    ItemRepairComplete = 57,
    CannotRepairRelicItem = 58,
    RelicTechItemNotRelic = 59,
    RelicTechSubmitted = 60,
    RelicTechResearchComplete = 61,
    RelicTechResearchIncomplete = 62,
    AccessDeniedBelongsToEnemy = 63,
    AccessDeniedMustBePledged = 64,
    AccessDeniedMustBeInFamily = 65,
    AccessDeniedTooFarToInteract = 66,
    DismantleNoPermission = 67,
    DismantleMustBeEmpty = 68,
    FamilyAreaMustBeEmpty = 69,
    GateIsBreached = 70,
    EnemiesNearby = 71,
    UnstuckStarting = 72,
    UnstuckTimeRemaining = 73,
    UnstuckCancelledMovement = 74,
    UnstuckCancelledEnemyNearby = 75,
    UnstuckCancelledTooSoon = 76,
    UnstuckCancelledVehiclePassenger = 77,
    UnstuckAttemptFailed = 78,
    LadderTooManyPlayers = 79,
    LadderNoSpaceToRetract = 80,
    DrowningNotification = 81,
    BedClaimed = 82,
    BedAlreadyClaimed = 83,
    BedMustHaveHouseOrTentAtTown = 84,
    BedClaimCleared = 85,
    BedNotEnclosed = 86,
    HorseNotHungry = 87,
    PvpIsNerfed = 88,
    NoItemsForPacking = 89,
    TooManyOrFewItemsForPacking = 90,
    NoContainerForPacking = 91,
    NotAllowedInBorderZone = 92,
    SlotOccupied = 93,
    CannotTravelWithPassengers = 94,
    NotEnoughSilver = 95,
    TravelDestinationUnavailable = 96,
    UnableToIncreaseStatusUsingSilver = 97,
    TaxesAreOverdue = 98,
    FamilyAllianceSet = 99,
    RequiresFamily = 100,
    RemovedFromFamily = 101,
    TargetInUse = 102,
    ItemInUse = 103,
    MissingEquipment = 104,
    TooSoonToUse = 105,
    DismantleVoteRegistered = 106,
    DismantleVoteTooSoon = 107,
    HitConverterOutputNotSupported = 108,
    OnlyOneFamilyCenterPerFamily = 109,
    TooCloseToExistingStructure = 110,
    TargetImmuneFriendlyFire = 111,
    TargetImmuneEveryone = 112,
    ToolTierTooLow = 113,
    NumTypes = 114,
    EAnvilStatusMessageType_MAX = 115,
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
    AxeT2 = 4,
    AxeT3 = 5,
    Hoe = 6,
    Scythe = 7,
    Pickaxe = 8,
    FishingPole = 9,
    WeakAxe = 10,
    WeakPickAxe = 11,
    Knife = 12,
    KnifeT2 = 13,
    KnifeT3 = 14,
    NumTypes = 15,
    EAnvilToolType_MAX = 16,
}

---@enum EAnvilTravelType
EAnvilTravelType = {
    None = 0,
    BorderTravel = 1,
    Reinforce = 2,
    ReturnToPledgedTown = 3,
    Respawn = 4,
    Teleport = 5,
    EAnvilTravelType_MAX = 6,
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
    SerializationTypeMarketplace = 4,
    EEntitySerializationType_MAX = 5,
}

