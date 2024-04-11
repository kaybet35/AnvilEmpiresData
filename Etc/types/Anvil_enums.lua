---@enum EActionButtonType
EActionButtonType = {
    None = 0,
    Upgrade = 1,
    ClaimHouse = 2,
    ClaimBed = 3,
    GotoSleep = 4,
    DeployAsMilitia = 5,
    ReturnToPledgedTown = 6,
    DismantleByOfficial = 7,
    RestrictedModeOn = 8,
    RestrictedModeOff = 9,
    IncreaseRefineryPriority = 10,
    DecreaseRefineryPriority = 11,
    DeployCamp = 12,
    DeployLadder = 13,
    WithdrawSilver = 14,
    AttachToHorse = 15,
    DetachFromHorse = 16,
    RepairItem = 17,
    SetTownName = 18,
    PushLadder = 19,
    RetractLadder = 20,
    EActionButtonType_MAX = 21,
}

---@enum EAnvilScreenType
EAnvilScreenType = {
    None = 0,
    Opening = 1,
    Connect = 2,
    Gameplay = 3,
    Pause = 4,
    Options = 5,
    Count = 6,
    Admin = 7,
    Help = 8,
    FactionSelect = 9,
    ServerSelect = 10,
    EAnvilScreenType_MAX = 11,
}

---@enum EAnvilSpringArmMode
EAnvilSpringArmMode = {
    Normal = 0,
    ForceZoomingIn = 1,
    ForceZoomingOut = 2,
    EAnvilSpringArmMode_MAX = 3,
}

---@enum EBuildSiteCategory
EBuildSiteCategory = {
    Settlement = 0,
    Camp = 1,
    Defenses = 2,
    Foundations = 3,
    Industry = 4,
    NumTypes = 5,
    EBuildSiteCategory_MAX = 6,
}

---@enum EClientConnectToServerResponseType
EClientConnectToServerResponseType = {
    Error = 0,
    ServerNotConnected = 1,
    Queued = 2,
    AuthFailed = 3,
    AllowedToJoin = 4,
    PromptToJoinAdminQueue = 5,
    EClientConnectToServerResponseType_MAX = 6,
}

---@enum EConnectionFailedReason
EConnectionFailedReason = {
    AnvilServiceConnectionFailed = 0,
    AnvilServiceConnectTokenResponseError = 1,
    AnvilServiceNotQueued = 2,
    R2ServerConnectionError = 3,
    EConnectionFailedReason_MAX = 4,
}

---@enum EEquippedItemGripType
EEquippedItemGripType = {
    NoWeapon = 0,
    LargeItem = 1,
    Basket = 2,
    OneHandedItem = 3,
    Spear = 4,
    CrateBarrel = 5,
    Torch = 6,
    LargeBoulder = 7,
    Sword = 8,
    BowAndArrow = 9,
    Scythe = 10,
    Shield = 11,
    Axe = 12,
    LargeArrow = 13,
    EEquippedItemGripType_MAX = 14,
}

---@enum EFishingBobberState
EFishingBobberState = {
    None = 0,
    Casting = 1,
    Idling = 2,
    Hooked = 3,
    Retracting = 4,
    EFishingBobberState_MAX = 5,
}

---@enum EHUDPlayerNameColourType
EHUDPlayerNameColourType = {
    None = 0,
    Aranic = 1,
    Mirrish = 2,
    Novan = 3,
    Offline = 4,
    NumTypes = 5,
    EHUDPlayerNameColourType_MAX = 6,
}

---@enum EHUDWindowType
EHUDWindowType = {
    None = 0,
    BuildMenu = 1,
    PlayerInventory = 2,
    InventoryStructure = 3,
    InventoryStructureSplit = 4,
    GenericStructure = 5,
    TownCenter = 6,
    Refinery = 7,
    FoodStorage = 8,
    Stable = 9,
    ItemStash = 10,
    Treasury = 11,
    MarketShop = 12,
    RepairStation = 13,
    RelicTechCenter = 14,
    Cooking = 15,
    Heating = 16,
    HitConversion = 17,
    Quenching = 18,
    Housing = 19,
    Count = 20,
    EHUDWindowType_MAX = 21,
}

---@enum EIncomingAttackDirection
EIncomingAttackDirection = {
    None = 0,
    Front = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    EIncomingAttackDirection_MAX = 5,
}

---@enum EInputType
EInputType = {
    Action = 0,
    AxisPositive = 1,
    AxisNegative = 2,
    EInputType_MAX = 3,
}

---@enum EMapIconType
EMapIconType = {
    None = 0,
    Player = 1,
    DeathMarker = 2,
    Spawner = 3,
    MinorStructure = 4,
    MediumStructure = 5,
    MajorStructure = 6,
    TownCenter = 7,
    CampTownCenter = 8,
    WildSpawnPoint = 9,
    MinorLocation = 10,
    MajorLocation = 11,
    MarketShop = 12,
    Mine = 13,
    MapPost = 14,
    BeaconTower = 15,
    BeaconTowerPlayerInfo = 16,
    EMapIconType_MAX = 17,
}

---@enum EMapMode
EMapMode = {
    InGame = 0,
    Spawn = 1,
    MilitiaDeployment = 2,
    EMapMode_MAX = 3,
}

---@enum ENotificationDuration
ENotificationDuration = {
    OneTick = 0,
    Short = 1,
    Long = 2,
    ENotificationDuration_MAX = 3,
}

---@enum ENotificationSlot
ENotificationSlot = {
    Primary = 0,
    Secondary = 1,
    ENotificationSlot_MAX = 2,
}

---@enum EPlacementInfoFlag
EPlacementInfoFlag = {
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
    EPlacementInfoFlag_MAX = 14,
}

---@enum EPlacementStatus
EPlacementStatus = {
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
    TooLong = 12,
    TooShort = 13,
    TooHigh = 14,
    TooLow = 15,
    NotEnoughGold = 16,
    TooCloseToEnemy = 17,
    TooCloseToOtherWell = 18,
    TooFarFromPlayer = 19,
    NotAtCorrectBuildLocationType = 20,
    RequiresDeployable = 21,
    RequiresMarketplace = 22,
    TooCloseTogether = 23,
    RequiresMoreTownXp = 24,
    TooCloseToWildSpawn = 25,
    TooCloseToWater = 26,
    VehicleMustBeEmpty = 27,
    RequiresFoundationCeiling = 28,
    RequiresValidSupport = 29,
    RequiresFoundation = 30,
    RequiresLandscape = 31,
    NotAtFullHealth = 32,
    EPlacementStatus_MAX = 33,
}

---@enum EQueueType
EQueueType = {
    Unselected = 0,
    Regular = 1,
    Admin = 2,
    NumTypes = 3,
    EQueueType_MAX = 4,
}

---@enum ESimpleTooltip
ESimpleTooltip = {
    None = 0,
    Health = 1,
    Population = 2,
    StarvingPopulation = 3,
    Silver = 4,
    Hunger = 5,
    Militia = 6,
    Labourers = 7,
    Tax = 8,
    Happiness = 9,
    HappinessModifier = 10,
    TownLevel = 11,
    PledgedStatus = 12,
    MarketSilverStored = 13,
    Decay = 14,
    Stamina = 15,
    AnimalHealth = 16,
    ESimpleTooltip_MAX = 17,
}

---@enum EUnarmedItemMeshLocation
EUnarmedItemMeshLocation = {
    None = 0,
    MidLeft = 1,
    MidRight = 2,
    Back1 = 3,
    Back2 = 4,
    EUnarmedItemMeshLocation_MAX = 5,
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

---@enum EVoiceChannelType
EVoiceChannelType = {
    Local = 0,
    Global = 1,
    GlobalText = 2,
    FactionText = 3,
    EVoiceChannelType_MAX = 4,
}

---@enum QueueStatusType
QueueStatusType = {
    NotQueued = 0,
    Queued = 1,
    RequestServerConnection = 2,
    QueueStatusType_MAX = 3,
}

