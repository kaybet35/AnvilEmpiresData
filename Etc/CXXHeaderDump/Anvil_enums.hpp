enum class EActionButtonType {
    None = 0,
    Upgrade = 1,
    ClaimHouse = 2,
    ClaimBed = 3,
    GotoSleep = 4,
    DeployAsMilitia = 5,
    ReturnToPledgedTown = 6,
    CallForReinforcements = 7,
    DismantleByOfficial = 8,
    RestrictedModeOn = 9,
    RestrictedModeOff = 10,
    DeployCamp = 11,
    DeployLadder = 12,
    WithdrawSilver = 13,
    AttachAnimal = 14,
    DetachAnimal = 15,
    RepairItem = 16,
    SetTownName = 17,
    PushLadder = 18,
    RetractLadder = 19,
    ClaimFamilyArea = 20,
    StartPowerMill = 21,
    StopPowerMill = 22,
    ClaimFamilyInventory = 23,
    EActionButtonType_MAX = 24,
};

enum class EAlertType {
    General = 0,
    QueueStatus = 1,
    Reinforcement = 2,
    EAlertType_MAX = 3,
};

enum class EAnvilScreenType {
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
    DeploymentMap = 11,
    EAnvilScreenType_MAX = 12,
};

enum class EAnvilSpringArmMode {
    Normal = 0,
    ForceZoomingIn = 1,
    ForceZoomingOut = 2,
    EAnvilSpringArmMode_MAX = 3,
};

enum class EBuildSiteCategory {
    Settlement = 0,
    Housing = 1,
    Camp = 2,
    Defenses = 3,
    Foundations = 4,
    Industry = 5,
    Water = 6,
    Smithing = 7,
    Cooking = 8,
    Vehicles = 9,
    Farming = 10,
    Lumber = 11,
    Stone = 12,
    NumTypes = 13,
    EBuildSiteCategory_MAX = 14,
};

enum class EBuildSiteVisibility {
    AlwaysVisible = 0,
    PlayInEditorOnly = 1,
    Never = 2,
    NumTypes = 3,
    EBuildSiteVisibility_MAX = 4,
};

enum class EClientConfigDownloadTaskState {
    NotStarted = 0,
    Completed = 1,
    InProgress = 2,
    EClientConfigDownloadTaskState_MAX = 3,
};

enum class EClientConfigURLType {
    Live = 0,
    Internal = 1,
    DevBranch = 2,
    Local = 3,
    Iteration = 4,
    EClientConfigURLType_MAX = 5,
};

enum class EClientConnectToServerResponseType {
    Error = 0,
    ServerNotConnected = 1,
    Queued = 2,
    AuthFailed = 3,
    AllowedToJoin = 4,
    PromptToJoinAdminQueue = 5,
    VersionMismatch = 6,
    EClientConnectToServerResponseType_MAX = 7,
};

enum class EConnectionFailedReason {
    AnvilServiceConnectionFailed = 0,
    AnvilServiceConnectTokenResponseError = 1,
    AnvilServiceNotQueued = 2,
    R2ServerConnectionError = 3,
    AnvilServiceVersionMismatch = 4,
    EConnectionFailedReason_MAX = 5,
};

enum class EDeploymentPointType {
    WildSpawn = 0,
    TownHall = 1,
    LargeCamp = 2,
    SmallCamp = 3,
    MarketShop = 4,
    EDeploymentPointType_MAX = 5,
};

enum class EEquippedItemGripType {
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
};

enum class EFishingBobberState {
    None = 0,
    Casting = 1,
    Idling = 2,
    Hooked = 3,
    Retracting = 4,
    EFishingBobberState_MAX = 5,
};

enum class EHUDPlayerNameColourType {
    None = 0,
    Aranic = 1,
    Mirrish = 2,
    Novan = 3,
    Offline = 4,
    NumTypes = 5,
    EHUDPlayerNameColourType_MAX = 6,
};

enum class EHUDWindowType {
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
    Crafting = 20,
    Packing = 21,
    Anvil = 22,
    FamilyAreaMarker = 23,
    FamilyHouse = 24,
    Count = 25,
    EHUDWindowType_MAX = 26,
};

enum class EIncomingAttackDirection {
    None = 0,
    Front = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    EIncomingAttackDirection_MAX = 5,
};

enum class EInputType {
    Action = 0,
    AxisPositive = 1,
    AxisNegative = 2,
    EInputType_MAX = 3,
};

enum class EMapIconType {
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
    FamilyMarker = 17,
    EMapIconType_MAX = 18,
};

enum class EMapMode {
    InGame = 0,
    Spawn = 1,
    MilitiaDeployment = 2,
    BugScreenshot = 3,
    EMapMode_MAX = 4,
};

enum class ENotificationDuration {
    OneTick = 0,
    Short = 1,
    Long = 2,
    ENotificationDuration_MAX = 3,
};

enum class ENotificationSlot {
    Primary = 0,
    Secondary = 1,
    ENotificationSlot_MAX = 2,
};

enum class EQueueType {
    Unselected = 0,
    Regular = 1,
    Travel = 2,
    Admin = 3,
    NumTypes = 4,
    EQueueType_MAX = 5,
};

enum class ESimpleTooltip {
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
};

enum class EUnarmedItemMeshLocation {
    None = 0,
    MidLeft = 1,
    MidRight = 2,
    Back1 = 3,
    Back2 = 4,
    EUnarmedItemMeshLocation_MAX = 5,
};

enum class EVisMeshProfile {
    Undefined = 0,
    Structure = 1,
    StructureLandscape = 2,
    StructureLandscapeRotate = 3,
    StructureCollision = 4,
    StructureCollisionLandscape = 5,
    StructureCollisionLandscapeRotate = 6,
    EVisMeshProfile_MAX = 7,
};

enum class EVoiceChannelType {
    Local = 0,
    Global = 1,
    GlobalText = 2,
    FactionText = 3,
    EVoiceChannelType_MAX = 4,
};

enum class QueueStatusType {
    NotQueued = 0,
    Queued = 1,
    RequestServerConnection = 2,
    QueueStatusType_MAX = 3,
};

