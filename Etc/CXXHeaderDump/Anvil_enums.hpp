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
    AttachVehicle = 14,
    DetachVehicle = 15,
    RepairItem = 16,
    SetTownName = 17,
    PushLadder = 18,
    RetractLadder = 19,
    ClaimFamilyArea = 20,
    StartPowerMill = 21,
    StopPowerMill = 22,
    PledgeToTown = 23,
    ReinforceStructure = 24,
    FamilyRequestToJoin = 25,
    FamilyInviteToJoin = 26,
    FamilyLock = 27,
    FamilyUnlock = 28,
    Upvote = 29,
    Upvoted = 30,
    Downvote = 31,
    Downvoted = 32,
    EditSignPost = 33,
    RentStorehouse = 34,
    ReleaseStorehouse = 35,
    ExtendStorehouse = 36,
    EActionButtonType_MAX = 37,
};

enum class EAlertType {
    General = 0,
    QueueStatus = 1,
    Reinforcement = 2,
    ClearReinforcement = 3,
    TimeUntilAgeEndAlert = 4,
    EAlertType_MAX = 5,
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
    General = 0,
    Housing = 1,
    Cooking = 2,
    Defenses = 3,
    Vehicles = 4,
    Lumber = 5,
    Smithing = 6,
    Stone = 7,
    Farming = 8,
    Water = 9,
    Industry = 10,
    Settlement = 11,
    Foundations = 12,
    Camp = 13,
    NumTypes = 14,
    EBuildSiteCategory_MAX = 15,
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
    InvalidParams = 7,
    InvalidAgePhaseToConnect = 8,
    EClientConnectToServerResponseType_MAX = 9,
};

enum class EConnectionFailedReason {
    AnvilServiceConnectionFailed = 0,
    AnvilServiceConnectTokenResponseError = 1,
    AnvilServiceNotQueued = 2,
    R2ServerConnectionError = 3,
    R2ServerNotConnected = 4,
    AnvilServiceVersionMismatch = 5,
    AnvilServiceLoginInvalidParams = 6,
    AnvilServiceInvalidAgePhaseToConnect = 7,
    EConnectionFailedReason_MAX = 8,
};

enum class EDeploymentPointTooltipType {
    None = 0,
    Wild = 1,
    TownCenterMilitia = 2,
    CampMilitia = 3,
    SmallCampMilitia = 4,
    TownCenter = 5,
    FamilyCenter = 6,
    Camp = 7,
    SmallCamp = 8,
    EDeploymentPointTooltipType_MAX = 9,
};

enum class EEquippedItemGripType {
    NoWeapon = 0,
    LargeItem = 1,
    Basket = 2,
    OneHandedItem = 3,
    TwoHandedItem = 4,
    Spear = 5,
    Spear2Handed = 6,
    CrateBarrel = 7,
    Torch = 8,
    LargeBoulder = 9,
    Sword = 10,
    BowAndArrow = 11,
    Scythe = 12,
    Shield = 13,
    Axe = 14,
    LargeArrow = 15,
    Pike = 16,
    EEquippedItemGripType_MAX = 17,
};

enum class EFishingBobberState {
    None = 0,
    Casting = 1,
    Idling = 2,
    Hooked = 3,
    Retracting = 4,
    EFishingBobberState_MAX = 5,
};

enum class EGameplayHint {
    Homestead1 = 0,
    Homestead2 = 1,
    Homestead3 = 2,
    Homestead4 = 3,
    HomesteadComplete = 4,
    HomesteadUpgrade1 = 5,
    HomesteadUpgrade2 = 6,
    HomesteadUpgrade3 = 7,
    HomesteadUpgradeComplete = 8,
    Town1 = 9,
    Town2 = 10,
    Town3 = 11,
    Town4 = 12,
    TownComplete = 13,
    Part2 = 14,
    NumGameplayHintTypes = 15,
    EGameplayHint_MAX = 16,
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
    RepairStation = 12,
    RelicTechCenter = 13,
    Cooking = 14,
    Heating = 15,
    HitConversion = 16,
    Quenching = 17,
    Housing = 18,
    Crafting = 19,
    Packing = 20,
    Anvil = 21,
    FamilyAreaMarker = 22,
    Lore = 23,
    CentralMarket = 24,
    Combustion = 25,
    SignPost = 26,
    GrainMill = 27,
    Storehouse = 28,
    Count = 29,
    EHUDWindowType_MAX = 30,
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
    FamilyCenter = 18,
    WorldEntrance = 19,
    EMapIconType_MAX = 20,
};

enum class EMapMode {
    InGame = 0,
    Spawn = 1,
    MilitiaDeployment = 2,
    BugScreenshot = 3,
    EMapMode_MAX = 4,
};

enum class EMapPostCreationResponse {
    Success = 0,
    AlreadyExists = 1,
    TooSoon = 2,
    Error = 3,
    EMapPostCreationResponse_MAX = 4,
};

enum class EMapPostVoteType {
    None = 0,
    Up = 1,
    Down = 2,
    EMapPostVoteType_MAX = 3,
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
    Silver = 2,
    Hunger = 3,
    Militia = 4,
    Labourers = 5,
    Tax = 6,
    PledgedStatus = 7,
    Decay = 8,
    Stamina = 9,
    AnimalHealth = 10,
    DeploymentFood = 11,
    Reinforced = 12,
    Avatars = 13,
    SubmitAvatar = 14,
    StorehousePublicButton = 15,
    StorehousePrivateButton = 16,
    ESimpleTooltip_MAX = 17,
};

enum class ETemperatureChangeType {
    NoChange = 0,
    Increasing = 1,
    Decreasing = 2,
    ETemperatureChangeType_MAX = 3,
};

enum class EUnarmedItemMeshLocation {
    None = 0,
    MidLeft = 1,
    MidRight = 2,
    Back1 = 3,
    Back2 = 4,
    EUnarmedItemMeshLocation_MAX = 5,
};

enum class EVisItemCategory {
    None = 0,
    WeaponShield = 1,
    Armour = 2,
    Tools = 3,
    Food = 4,
    ResourceRaw = 5,
    ResourceProcessed = 6,
    NumTypes = 7,
    EVisItemCategory_MAX = 8,
};

enum class EVisualComponentFlags {
    Populated = 0,
    Refining = 1,
    Active1 = 2,
    Active2 = 4,
    Collapsed = 8,
    EVisualComponentFlags_MAX = 9,
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

