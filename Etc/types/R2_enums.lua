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
    Posturing = 4,
    ChasingTarget = 5,
    Attacking = 6,
    Trapped = 7,
    EAnvilAnimalState_MAX = 8,
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
    OutsideInitialTownArea = 16,
    TownArea = 17,
    TownAreaOnly = 18,
    NumTypes = 19,
    EAnvilBuildLocationType_MAX = 20,
}

---@enum EAnvilBuildStructureType
EAnvilBuildStructureType = {
    Monolithic = 0,
    Foundations = 1,
    Modular = 2,
    FoundationCeiling = 3,
    FoundationWall = 4,
    FoundationModular = 5,
    MonolithicModular = 6,
    EAnvilBuildStructureType_MAX = 7,
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
    OnHandcart = 11,
    EAnvilCharacterStance_MAX = 12,
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
    NumTypes = 8,
    EAnvilChatType_MAX = 9,
}

---@enum EAnvilColliderTags
EAnvilColliderTags = {
    MeshVisibilityGroup2 = 0,
    Tree = 1,
    NumTypes = 2,
    EAnvilColliderTags_MAX = 3,
}

---@enum EAnvilCollisionChannel
EAnvilCollisionChannel = {
    Static = 0,
    Dynamic = 1,
    Player = 2,
    UseVolume = 3,
    Resource = 4,
    Pickup = 5,
    Action = 6,
    RoadVolume = 7,
    BuildVolume = 8,
    GateVolume = 9,
    SpecialBuildVolume = 10,
    WorldBorder = 11,
    Landscape = 12,
    Projectile = 13,
    Vehicle = 14,
    MeshVisibility = 15,
    Shield = 16,
    LargeRock = 17,
    Water = 18,
    Animal = 19,
    MarketArea = 20,
    Foundation = 21,
    Snapping = 22,
    Fire = 23,
    MouseInteraction = 24,
    Industry = 25,
    BorderRegion = 26,
    FamilyArea = 27,
    House = 28,
    AnvilCollisionFoliage = 29,
    LatticeMine = 30,
    EAnvilCollisionChannel_MAX = 31,
}

---@enum EAnvilConvertedActionType
EAnvilConvertedActionType = {
    HitAction = 0,
    AnvilAction = 1,
    HeatBoost = 2,
    NumTypes = 3,
    EAnvilConvertedActionType_MAX = 4,
}

---@enum EAnvilCookingInventoryType
EAnvilCookingInventoryType = {
    RecipeInputs = 0,
    RecipeOutputs = 1,
    FuelInputs = 2,
    FuelOutputs = 3,
    WaterInput = 4,
    NumTypes = 5,
    EAnvilCookingInventoryType_MAX = 6,
}

---@enum EAnvilCookingType
EAnvilCookingType = {
    DirectHeat = 0,
    Boiled = 1,
    EAnvilCookingType_MAX = 2,
}

---@enum EAnvilDamageTargetType
EAnvilDamageTargetType = {
    Default = 0,
    Infantry = 1,
    Horse = 2,
    Structure = 3,
    Fire = 4,
    Vehicle = 5,
    NumTypes = 6,
    EAnvilDamageTargetType_MAX = 7,
}

---@enum EAnvilDamageType
EAnvilDamageType = {
    Default = 0,
    Slashing = 1,
    Piercing = 2,
    Missile = 3,
    Siege = 4,
    Water = 5,
    Hands = 6,
    Unmitigated = 7,
    Bleed = 8,
    Decay = 9,
    Admin = 10,
    NumTypes = 11,
    EAnvilDamageType_MAX = 12,
}

---@enum EAnvilDismantleStatus
EAnvilDismantleStatus = {
    Success = 0,
    CannotBeDismantled = 1,
    NoPermission = 2,
    OverTimeLimit = 3,
    EnemiesNearby = 4,
    MustBeRepaired = 5,
    MustBeEmpty = 6,
    FamilyAreaMustBeEmpty = 7,
    EAnvilDismantleStatus_MAX = 8,
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
    ReturnFromReinforcement = 17,
    CallForReinforcements = 18,
    DismantleByOfficial = 19,
    RestrictedModeOn = 20,
    RestrictedModeOff = 21,
    MouseRotationMovement = 22,
    MouseWheelMovement = 23,
    Mount = 24,
    WithdrawSilver = 25,
    RepairStationRepairRequest = 26,
    AttachVehicle = 27,
    DetachVehicle = 28,
    MouseSelect = 29,
    DisableSnapping = 30,
    SetTownName = 31,
    Reload = 32,
    RetractLadder = 33,
    Climb = 34,
    QuenchItems = 35,
    HitConverterNextOutput = 36,
    HitConverterPreviousOutput = 37,
    AnvilNextOutput = 38,
    AnvilPreviousOutput = 39,
    PackItems = 40,
    ToggleFamilyAreaPledgeRestriction = 41,
    StartPowerMill = 42,
    StopPowerMill = 43,
    IncreaseTownStatus = 44,
    RequestFamilySync = 45,
    RequestFamilyListSync = 46,
    PledgeToTown = 47,
    AltAttack = 48,
    AltShield = 49,
    ReinforceStructure = 50,
    SwitchSeat = 51,
    EAnvilInputEventType_MAX = 52,
}

---@enum EAnvilInputResponseType
EAnvilInputResponseType = {
    None = 0,
    ToggleStructureUI = 1,
    TogglePlayerInventory = 2,
    CancelUI = 3,
    StructureUpgradeFailed = 4,
    ToggleBuildMenu = 5,
    UnHandledInteract = 6,
    EAnvilInputResponseType_MAX = 7,
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
    HeavyTool = 9,
    EAnvilItemSlotBackgroundType_MAX = 10,
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
    Tool = 12,
    Quenchable = 13,
    Resource = 14,
    IngredientsStorage = 15,
    MeatIngredientsStorage = 16,
    StorableFoodT1 = 17,
    WeaponStorage = 18,
    LiquidStorage = 19,
    AnimalEquipment = 20,
    AnimalFeed = 21,
    Seed = 22,
    Supplies = 23,
    Ammunition = 24,
    DryingRackStorage = 25,
    NotAllowedInMarket = 26,
    MountedWeapon = 27,
    HeavyTool = 28,
    NumTypes = 29,
    EAnvilItemTag_MAX = 30,
}

---@enum EAnvilMapId
EAnvilMapId = {
    Invalid = 0,
    Sandbox = 1,
    Calligo01 = 2,
    SandboxUnderworld = 3,
    CalligoUnderworld01 = 4,
    CalligoUnderworld02 = 5,
    CalligoUnderworld03 = 6,
    CalligoUnderworld04 = 7,
    CalligoUnderworld05 = 8,
    SandboxUnderworld02 = 9,
    Trailer = 10,
    NumTypes = 11,
    EAnvilMapId_MAX = 12,
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
    NumTypes = 7,
    EAnvilMapPostType_MAX = 8,
}

---@enum EAnvilMovementMode
EAnvilMovementMode = {
    Walking = 0,
    Flying = 1,
    Swimming = 2,
    EAnvilMovementMode_MAX = 3,
}

---@enum EAnvilPhysicalSurfaceType
EAnvilPhysicalSurfaceType = {
    Default = 0,
    Flesh = 1,
    Grass = 2,
    Wood = 3,
    Stone = 4,
    Leather = 5,
    Iron = 6,
    Shield = 7,
    ShieldBreak = 8,
    Dirt = 9,
    Forest = 10,
    Rock = 11,
    Lake = 12,
    Gravel = 13,
    Rare = 14,
    Road = 15,
    Sand = 16,
    NumTypes = 17,
    EAnvilPhysicalSurfaceType_MAX = 18,
}

---@enum EAnvilPlacementArea
EAnvilPlacementArea = {
    Anywhere = 0,
    TownArea = 1,
    CampArea = 2,
    HomesteadArea = 3,
    NumTypes = 4,
    EAnvilPlacementArea_MAX = 5,
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
    BeaconDetectionRangeNormal = 14,
    BeaconDetectionRangeHigh = 15,
    BeaconDetectionRangeVeryHigh = 16,
    BeaconDetectionRangeHighest = 17,
    NumTypes = 18,
    EAnvilPlacementInfoFlag_MAX = 19,
}

---@enum EAnvilPlacementStatus
EAnvilPlacementStatus = {
    Valid = 0,
    UnknownError = 1,
    Obstructed = 2,
    InvalidFoundation = 3,
    InvalidSurface = 4,
    TooCloseToTownHall = 5,
    TooCloseToFamilyCenter = 6,
    TooCloseToCamp = 7,
    TooFarFromTownHallOrCamp = 8,
    TooFarFromTownHall = 9,
    TooFarFromCamp = 10,
    RequiredHigherTierTH = 11,
    RequiredHigherTierFamilyArea = 12,
    TooLong = 13,
    TooShort = 14,
    TooHigh = 15,
    TooLow = 16,
    TooCloseToEnemy = 17,
    TooCloseToOtherWell = 18,
    TooCloseToCave = 19,
    TooCloseToWorldRoad = 20,
    TooFarFromPlayer = 21,
    NotAtCorrectBuildLocationType = 22,
    RequiresDeployable = 23,
    RequiresMarketplace = 24,
    RequiresIndustry = 25,
    RequiresHouse = 26,
    RequiresFamilyArea = 27,
    RequiresFamily = 28,
    RequiresClaimedFamilyHouse = 29,
    OnlyOneFamilyCenterPerTown = 30,
    TooCloseTogether = 31,
    TooCloseToWildSpawn = 32,
    TooCloseToWater = 33,
    VehicleMustBeEmpty = 34,
    RequiresEnclosure = 35,
    RequiresValidSupport = 36,
    RequiresFoundation = 37,
    RequiresLandscape = 38,
    RequiresWater = 39,
    RequiresSnappping = 40,
    YouMustBelongToFamily = 41,
    NotAtFullHealth = 42,
    CantBuildBorderRegion = 43,
    TooCloseToBorder = 44,
    MustBePledgedToTown = 45,
    RequiresNearbyPlayers = 46,
    RequiresMorePopulation = 47,
    RequiresMoreMarketplaceAreas = 48,
    RequiresMoreTents = 49,
    AreaMustBeEmpty = 50,
    YouMustBeOfficial = 51,
    MustBeUniquePerTown = 52,
    RequiresTerritoryOwnership = 53,
    CantBeBuiltUnderground = 54,
    MustBeBuiltUnderground = 55,
    EAnvilPlacementStatus_MAX = 56,
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

---@enum EAnvilPlayerOnlineStatus
EAnvilPlayerOnlineStatus = {
    Online = 0,
    Offline = 1,
    Deployed = 2,
    Num = 3,
    EAnvilPlayerOnlineStatus_MAX = 4,
}

---@enum EAnvilPlayerVisEventType
EAnvilPlayerVisEventType = {
    OnDeath = 0,
    StatusMessage = 1,
    PlacementStatus = 2,
    ForceActivityState = 3,
    ConfirmFamilyPledgeDialog = 4,
    ConfirmHousePledgeDialog = 5,
    EAnvilPlayerVisEventType_MAX = 6,
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
    Guest = 0,
    Member = 1,
    Manager = 2,
    Founder = 3,
    NumTypes = 4,
    EAnvilR2FamilyRoleType_MAX = 5,
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
    LatticeChunk = 2,
    EAnvilResourceType_MAX = 3,
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
    EnteringAltAttackMode = 27,
    ExitingAltAttackMode = 28,
    EnteringAltShieldMode = 29,
    ExitingAltShieldMode = 30,
    Drowning = 31,
    NumStates = 32,
    EAnvilSimActivityState_MAX = 33,
}

---@enum EAnvilSnappingChannelType
EAnvilSnappingChannelType = {
    General = 0,
    Wall = 1,
    Road = 2,
    RoadSide = 3,
    Platform = 4,
    Foundation = 5,
    RampSpiralTop = 6,
    RampSpiralBottom = 7,
    WaterStart = 8,
    WaterEnd = 9,
    CanalStart = 10,
    CanalEnd = 11,
    CanalSideStart = 12,
    PowerStart = 13,
    PowerEnd = 14,
    PowerRopeStart = 15,
    PowerRopeEnd = 16,
    PowerConvertedAnvilStart = 17,
    PowerConvertedAnvilEnd = 18,
    PowerConvertedHeatStart = 19,
    PowerConvertedHeatEnd = 20,
    DebugPowerSource = 21,
    NaturalWaterRequired = 22,
    NaturalWaterOptional = 23,
    PowerConvertedWoodChoppingStationStart = 24,
    PowerConvertedWoodChoppingStationEnd = 25,
    EAnvilSnappingChannelType_MAX = 26,
}

---@enum EAnvilSpawnType
EAnvilSpawnType = {
    Starter = 0,
    FamilyArea = 1,
    House = 2,
    Tent = 3,
    Bed = 4,
    Town = 5,
    None = 6,
    EAnvilSpawnType_MAX = 7,
}

---@enum EAnvilStatusMessageType
EAnvilStatusMessageType = {
    None = 0,
    Success = 1,
    RequiresTool = 2,
    HouseClaimed = 3,
    TentClaimed = 4,
    TownTentClaimed = 5,
    HouseAlreadyClaimed = 6,
    CannotReinforceAtPledgedTown = 7,
    NoRoomToDeployAtBed = 8,
    TownPledgeLimitReached = 9,
    SleepSuccess = 10,
    TooSoonToSleep = 11,
    PlunderFailTooPoor = 12,
    PlunderFailTooSoon = 13,
    PlunderFailObstructed = 14,
    Plundering = 15,
    OnlyCitizensAllowedToVote = 16,
    CanOnlyVoteForNobles = 17,
    MustBeOfficialToDoThat = 18,
    MustBeOfficialToTransferItem = 19,
    MustBePledged = 20,
    ItemTransfer_StaminaNotEnough = 21,
    ItemTransfer_CannotAccept = 22,
    ItemTransfer_InventoryFull = 23,
    ItemTransfer_NotAtMaxDurability = 24,
    ItemTransfer_HouseNotYours = 25,
    ItemTransfer_WithdrawalRestricted = 26,
    ItemTransfer_NotPublic = 27,
    ItemTransfer_HeavyToolFull = 28,
    Blocked = 29,
    Vehicle_ExitBlocked = 30,
    InvalidDetachLocation = 31,
    GatheringResource = 32,
    NoRepairNeeded = 33,
    RepairOtherTeam = 34,
    RepairMaterialsRequired = 35,
    RepairOnFire = 36,
    Repairing = 37,
    NotEnoughStamina = 38,
    WrongStance = 39,
    MissingResource = 40,
    MissingHorse = 41,
    VehicleMustBeEmpty = 42,
    QueueIsFull = 43,
    NotEnoughPayment = 44,
    TownNotInRareResourceArea = 45,
    WeaponIneffective = 46,
    MarketNotOwner = 47,
    MarketInvalidItem = 48,
    MarketPublicItemNotAllowed = 49,
    MarketNumMaxListingsReached = 50,
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
    AccessDeniedBelongsToEnemyTorchToAccess = 64,
    AccessDeniedBelongsToEnemy = 65,
    AccessDeniedMustBePledged = 66,
    AccessDeniedRequireHigherFamilyStatus = 67,
    AccessDeniedAlliedFamilyNotAllowed = 68,
    AccessDeniedStructureCollapsed = 69,
    AccessDeniedTooFarToInteract = 70,
    AccessDeniedFamilyDestroyed = 71,
    AccessDeniedTownDestroyed = 72,
    AccessDeniedCannotUseInVehicle = 73,
    AccessDeniedReinforcings = 74,
    DismantleNoPermission = 75,
    DismantleMustBeEmpty = 76,
    FamilyAreaMustBeEmpty = 77,
    GateIsBreached = 78,
    EnemiesNearby = 79,
    UnstuckStarting = 80,
    UnstuckTimeRemaining = 81,
    UnstuckCancelledMovement = 82,
    UnstuckCancelledEnemyNearby = 83,
    UnstuckCancelledTooSoon = 84,
    UnstuckCancelledVehiclePassenger = 85,
    UnstuckAttemptFailed = 86,
    LadderTooManyPlayers = 87,
    LadderNoSpaceToRetract = 88,
    DrowningNotification = 89,
    BedClaimed = 90,
    BedAlreadyClaimed = 91,
    BedMustHaveHouseAtTown = 92,
    BedClaimCleared = 93,
    BedNotEnclosed = 94,
    HorseNotHungry = 95,
    PvpIsNerfed = 96,
    NoItemsForPacking = 97,
    TooManyOrFewItemsForPacking = 98,
    NoContainerForPacking = 99,
    NotAllowedInBorderZone = 100,
    SlotOccupied = 101,
    CannotTravelWithPassengers = 102,
    NotEnoughSilver = 103,
    TravelDestinationUnavailable = 104,
    UnableToIncreaseStatusUsingSilver = 105,
    TaxesAreOverdue = 106,
    FamilyAllianceSet = 107,
    RemovedFromFamily = 108,
    MustBeFamilyLeader = 109,
    TargetInUse = 110,
    ItemInUse = 111,
    MissingEquipment = 112,
    TooSoonToUse = 113,
    HitConverterOutputNotSupported = 114,
    OnlyOnePerFamily = 115,
    TargetImmuneFriendlyFire = 116,
    TargetImmuneEveryone = 117,
    ToolTierTooLow = 118,
    ToolBroke = 119,
    StructureIsBurnt = 120,
    InventoryMustBeEmpty = 121,
    PlayerDeploying = 122,
    BedNotInYourFamilyHouse = 123,
    PledgedToTown = 124,
    VehicleCannotWorldEntranceTravel = 125,
    MustBeResetBeforeFiring = 126,
    NoProjectileLoaded = 127,
    CantArmDueToHeavyTool = 128,
    ItemDisarmedDueToHeavyTool = 129,
    CantArmDueToHeavyArmour = 130,
    ItemDisarmedDueToHeavyArmour = 131,
    TemperatureTooLowToGather = 132,
    TemperatureTooLowToPlant = 133,
    TooSoonToTravel = 134,
    OutOfAmmunition = 135,
    NotValidSupportToReinforce = 136,
    OccupantMustbeMounted = 137,
    NumTypes = 138,
    EAnvilStatusMessageType_MAX = 139,
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
    PickaxeT2 = 9,
    FishingPole = 10,
    WeakAxe = 11,
    WeakPickAxe = 12,
    Knife = 13,
    KnifeT2 = 14,
    KnifeT3 = 15,
    NumTypes = 16,
    EAnvilToolType_MAX = 17,
}

---@enum EAnvilTravelType
EAnvilTravelType = {
    None = 0,
    BorderTravel = 1,
    Reinforce = 2,
    ReturnFromReinforcement = 3,
    Respawn = 4,
    Teleport = 5,
    WorldEntrance = 6,
    BorderTravelOrWorldEntrance = 7,
    EAnvilTravelType_MAX = 8,
}

---@enum EAnvilUnderworldModuleEdgeType
EAnvilUnderworldModuleEdgeType = {
    NegativeY = 0,
    PositiveX = 1,
    PositiveY = 2,
    NegativeX = 3,
    NumTypes = 4,
    EAnvilUnderworldModuleEdgeType_MAX = 5,
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
    SwitchSeat = 9,
    NumTypes = 10,
    EAnvilUsePromptType_MAX = 11,
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

---@enum EAnvilWorldEntityType
EAnvilWorldEntityType = {
    None = 0,
    WildSpawn = 1,
    TownHall = 2,
    LargeCamp = 3,
    SmallCamp = 4,
    MarketShop = 5,
    BeaconTower = 6,
    FamilyCenter = 7,
    NumTypes = 8,
    EAnvilWorldEntityType_MAX = 9,
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

---@enum EVisMeshProfile
EVisMeshProfile = {
    Undefined = 0,
    Structure = 1,
    StructureLandscape = 2,
    StructureLandscapeRotate = 3,
    StructureCollision = 4,
    StructureCollisionLandscape = 5,
    StructureCollisionLandscapeRotate = 6,
    EVisMeshProfile_MAX = 7,
}

