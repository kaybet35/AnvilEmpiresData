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

---@enum EAnvilAvatarType
EAnvilAvatarType = {
    Default = 0,
    Soldier = 1,
    NumTypes = 2,
    EAnvilAvatarType_MAX = 3,
}

---@enum EAnvilBuildAreaType
EAnvilBuildAreaType = {
    TownArea = 0,
    SmallCampArea = 1,
    LargeCampArea = 2,
    HomesteadArea = 3,
    UndergroundArea = 4,
    WildernessArea = 5,
    NumTypes = 6,
    EAnvilBuildAreaType_MAX = 7,
}

---@enum EAnvilBuildLocationType
EAnvilBuildLocationType = {
    Foundation = 0,
    Landscape = 1,
    LargeRock = 2,
    Water = 3,
    _Unused = 4,
    _Unused_1 = 5,
    Static = 6,
    Shore = 7,
    Deployed = 8,
    AdditionalCollisionAllowWater = 9,
    RequiresEnclosure = 10,
    NumTypes = 11,
    EAnvilBuildLocationType_MAX = 12,
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
    OnHandCrank = 12,
    OnCoarsenessKnob = 13,
    NumTypes = 14,
    EAnvilCharacterStance_MAX = 15,
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
    UNUSED = 20,
    Foundation = 21,
    Snapping = 22,
    Fire = 23,
    MouseInteraction = 24,
    Industry = 25,
    BorderRegion = 26,
    FamilyArea = 27,
    House = 28,
    AnvilCollisionFoliage = 29,
    EAnvilCollisionChannel_MAX = 30,
}

---@enum EAnvilConvertedActionType
EAnvilConvertedActionType = {
    HitAction = 0,
    AnvilAction = 1,
    HeatBoost = 2,
    NumTypes = 3,
    EAnvilConvertedActionType_MAX = 4,
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
    LightStructure = 6,
    NumTypes = 7,
    EAnvilDamageTargetType_MAX = 8,
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
    Animal = 8,
    Cleaving = 9,
    Crushing = 10,
    Burning = 11,
    Bleed = 12,
    Decay = 13,
    Admin = 14,
    NumTypes = 15,
    EAnvilDamageType_MAX = 16,
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

---@enum EAnvilEntityActionType
EAnvilEntityActionType = {
    None = 0,
    UpvoteSignPost = 1,
    DownvoteSignPost = 2,
    CancelVoteSignPost = 3,
    NumTypes = 4,
    EAnvilEntityActionType_MAX = 5,
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
    LockToFamily = 15,
    UnlockFamilyLock = 16,
    GotoSleep = 17,
    PledgeAsMilitia = 18,
    ReturnFromReinforcement = 19,
    CallForReinforcements = 20,
    DismantleByOfficial = 21,
    RestrictedModeOn = 22,
    RestrictedModeOff = 23,
    MouseRotationMovement = 24,
    MouseWheelMovement = 25,
    Mount = 26,
    WithdrawSilver = 27,
    RepairStationRepairRequest = 28,
    AttachVehicle = 29,
    DetachVehicle = 30,
    MouseSelect = 31,
    MouseSelectCeiling = 32,
    DisableSnapping = 33,
    SetTownName = 34,
    Reload = 35,
    RetractLadder = 36,
    Climb = 37,
    QuenchItems = 38,
    HitConverterNextOutput = 39,
    HitConverterPreviousOutput = 40,
    AnvilNextOutput = 41,
    AnvilPreviousOutput = 42,
    PackItems = 43,
    ToggleFamilyAreaPledgeRestriction = 44,
    StartPowerMill = 45,
    StopPowerMill = 46,
    IncreaseTownStatus = 47,
    RequestFamilySync = 48,
    RequestFamilyListSync = 49,
    RequestToJoinFamily = 50,
    InviteToJoinFamily = 51,
    PledgeToTown = 52,
    AltAttack = 53,
    AltShield = 54,
    ReinforceStructure = 55,
    SwitchSeat = 56,
    StartCooking = 57,
    SubmitAvatar = 58,
    RequestUnderworldMap = 59,
    EAnvilInputEventType_MAX = 60,
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
    Default = 0,
    Heat = 1,
    Avatar = 2,
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
    Shield = 10,
    Avatar = 11,
    EAnvilItemSlotBackgroundType_MAX = 12,
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
    ShieldStorage = 29,
    Avatar = 30,
    NumTypes = 31,
    EAnvilItemTag_MAX = 32,
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
    TooFarFromTownHall = 8,
    RequiredHigherTierTH = 9,
    RequiredHigherTierFamilyArea = 10,
    TooLong = 11,
    TooShort = 12,
    TooHigh = 13,
    TooLow = 14,
    TooSteep = 15,
    TooCloseToEnemy = 16,
    TooCloseToCave = 17,
    TooCloseToWorldRoad = 18,
    TooFarFromPlayer = 19,
    NotAtCorrectBuildLocationType = 20,
    RequiresDeployable = 21,
    RequiresFamily = 22,
    OnlyOneFamilyCenterPerTown = 23,
    TooCloseTogether = 24,
    TooCloseToWildSpawn = 25,
    TooCloseToWater = 26,
    VehicleMustBeEmpty = 27,
    RequiresEnclosure = 28,
    RequiresValidSupport = 29,
    RequiresFoundation = 30,
    RequiresLandscape = 31,
    RequiresWater = 32,
    RequiresSnappping = 33,
    YouMustBelongToFamily = 34,
    NotAtFullHealth = 35,
    CantBuildBorderRegion = 36,
    TooCloseToBorder = 37,
    MustBePledgedToTown = 38,
    RequiresNearbyPlayers = 39,
    RequiresMorePopulation = 40,
    RequiresMoreTents = 41,
    AreaMustBeEmpty = 42,
    MustBeUniquePerTown = 43,
    RequiresTerritoryOwnership = 44,
    RequiresPledgeToBuildInWilderness = 45,
    LimitTouchingGroupCountReached = 46,
    RequiresAgeTime = 47,
    EAnvilPlacementStatus_MAX = 48,
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
    RequestToJoinFamily = 6,
    InviteToJoinFamily = 7,
    CreateDebugMapPost = 8,
    VictoryInfoUpdate = 9,
    UnderworldDebugInfoTargetSequence = 10,
    EAnvilPlayerVisEventType_MAX = 11,
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
    EAnvilPowerUnitType_MAX = 3,
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

---@enum EAnvilReservationTimeoutType
EAnvilReservationTimeoutType = {
    Login = 0,
    BorderTravelReturn = 1,
    UnderworldTravelReturn = 2,
    EAnvilReservationTimeoutType_MAX = 3,
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
    NumTypes = 4,
    EAnvilScorchState_MAX = 5,
}

---@enum EAnvilSignPostVisualType
EAnvilSignPostVisualType = {
    Directional = 0,
    Board = 1,
    Post = 2,
    NumTypes = 3,
    EAnvilSignPostVisualType_MAX = 4,
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
    Winding = 15,
    Plundering = 16,
    HorseRiding = 17,
    Eating = 18,
    Feeding = 19,
    Farming = 20,
    AttachRope = 21,
    FishingWaiting = 22,
    FishingHooked = 23,
    FishingSuccess = 24,
    FishingFailed = 25,
    StunnedOnGround = 26,
    StunnedGettingUp = 27,
    EnteringAltAttackMode = 28,
    ExitingAltAttackMode = 29,
    EnteringAltShieldMode = 30,
    ExitingAltShieldMode = 31,
    Drowning = 32,
    ChainedAttackRecovery = 33,
    NumStates = 34,
    EAnvilSimActivityState_MAX = 35,
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
    PowerRopeIgnore = 17,
    PowerConvertedAnvilStart = 18,
    PowerConvertedAnvilEnd = 19,
    PowerConvertedHeatStart = 20,
    PowerConvertedHeatEnd = 21,
    DebugPowerSource = 22,
    NaturalWaterRequired = 23,
    NaturalWaterOptional = 24,
    PowerConvertedWoodChoppingStationStart = 25,
    PowerConvertedWoodChoppingStationEnd = 26,
    PowerConvertedSmashingPlateStart = 27,
    PowerConvertedSmashingPlateEnd = 28,
    PowerConvertedHandCrankStart = 29,
    PowerConvertedHandCrankEnd = 30,
    EAnvilSnappingChannelType_MAX = 31,
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
    TownPledgeLimitReached = 8,
    SleepSuccess = 9,
    TooSoonToSleep = 10,
    OnlyCitizensAllowedToVote = 11,
    CanOnlyVoteForNobles = 12,
    MustBeOfficialToDoThat = 13,
    MustBeOfficialToTransferItem = 14,
    MustBePledged = 15,
    ItemTransfer_StaminaNotEnough = 16,
    ItemTransfer_CannotAccept = 17,
    ItemTransfer_InventoryFull = 18,
    ItemTransfer_NotAtMaxDurability = 19,
    ItemTransfer_HouseNotYours = 20,
    ItemTransfer_WithdrawalRestricted = 21,
    ItemTransfer_NotPublic = 22,
    ItemTransfer_HeavyToolFull = 23,
    ItemTransfer_CannotRemoveAvatarDefault = 24,
    Blocked = 25,
    Vehicle_ExitBlocked = 26,
    InvalidDetachLocation = 27,
    GatheringResource = 28,
    NoRepairNeeded = 29,
    RepairOtherTeam = 30,
    RepairMaterialsRequired = 31,
    RepairOnFire = 32,
    Repairing = 33,
    NotEnoughStamina = 34,
    WrongStance = 35,
    MissingResource = 36,
    VehicleMustBeEmpty = 37,
    QueueIsFull = 38,
    NotEnoughPayment = 39,
    WeaponIneffective = 40,
    MarketInvalidItem = 41,
    MarketPublicItemNotAllowed = 42,
    MarketNumMaxListingsReached = 43,
    TooSoonToEat = 44,
    FishingStart = 45,
    FishingHooked = 46,
    FishingCancel = 47,
    FishingSuccess = 48,
    FishingFail = 49,
    ItemNotRepairable = 50,
    ItemRepairComplete = 51,
    CannotRepairRelicItem = 52,
    RelicTechItemNotRelic = 53,
    RelicTechSubmitted = 54,
    RelicTechResearchComplete = 55,
    RelicTechResearchIncomplete = 56,
    AccessDeniedBelongsToEnemyTorchToAccess = 57,
    AccessDeniedBelongsToEnemy = 58,
    AccessDeniedMustBePledged = 59,
    AccessDeniedRequireHigherFamilyStatus = 60,
    AccessDeniedClaimedByFamily = 61,
    AccessDeniedAlliedFamilyNotAllowed = 62,
    AccessDeniedStructureCollapsed = 63,
    AccessDeniedTooFarToInteract = 64,
    AccessDeniedFamilyDestroyed = 65,
    AccessDeniedTownDestroyed = 66,
    AccessDeniedCannotUseInVehicle = 67,
    AccessDeniedReinforcings = 68,
    DismantleNoPermission = 69,
    DismantleMustBeEmpty = 70,
    FamilyAreaMustBeEmpty = 71,
    GateIsBreached = 72,
    EnemiesNearby = 73,
    UnstuckStarting = 74,
    UnstuckTimeRemaining = 75,
    UnstuckCancelledMovement = 76,
    UnstuckCancelledEnemyNearby = 77,
    UnstuckCancelledTooSoon = 78,
    UnstuckCancelledVehiclePassenger = 79,
    UnstuckAttemptFailed = 80,
    LadderTooManyPlayers = 81,
    LadderNoSpaceToRetract = 82,
    BedClaimed = 83,
    BedAlreadyClaimed = 84,
    BedMustHaveHouseAtTown = 85,
    BedClaimCleared = 86,
    HorseNotHungry = 87,
    NoItemsForPacking = 88,
    TooManyOrFewItemsForPacking = 89,
    NoContainerForPacking = 90,
    NotAllowedInBorderZone = 91,
    SlotOccupied = 92,
    NotEnoughSilver = 93,
    TravelDestinationUnavailable = 94,
    UnableToIncreaseStatusUsingSilver = 95,
    RemovedFromFamily = 96,
    MustBeFamilyLeader = 97,
    FamilyLockExpiry = 98,
    TargetInUse = 99,
    ItemInUse = 100,
    MissingEquipment = 101,
    TooSoonToUse = 102,
    HitConverterOutputNotSupported = 103,
    OnlyOnePerFamily = 104,
    TargetImmuneFriendlyFire = 105,
    TargetImmuneEveryone = 106,
    ToolTierTooLow = 107,
    ToolBroke = 108,
    StructureIsBurnt = 109,
    InventoryMustBeEmpty = 110,
    PlayerDeploying = 111,
    BedNotInYourFamilyHouse = 112,
    PledgedToTown = 113,
    VehicleCannotWorldEntranceTravel = 114,
    MustBeResetBeforeFiring = 115,
    NoProjectileLoaded = 116,
    CantArmDueToHeavyTool = 117,
    ItemDisarmedDueToHeavyTool = 118,
    CantArmDueToHeavyArmour = 119,
    TemperatureTooLowToGather = 120,
    TemperatureTooLowToPlant = 121,
    TooSoonToTravel = 122,
    OutOfAmmunition = 123,
    NotValidSupportToReinforce = 124,
    OccupantMustbeMounted = 125,
    RopeDetachFailed_HandsFull = 126,
    AvatarSubmitted = 127,
    NumTypes = 128,
    EAnvilStatusMessageType_MAX = 129,
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

---@enum EAnvilTrinaryRequirement
EAnvilTrinaryRequirement = {
    Allowed = 0,
    Disallowed = 1,
    Required = 2,
    NumTypes = 3,
    EAnvilTrinaryRequirement_MAX = 4,
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

---@enum EAnvilVictoryType
EAnvilVictoryType = {
    Military = 0,
    Culture = 1,
    NumTypes = 2,
    EAnvilVictoryType_MAX = 3,
}

---@enum EAnvilVoteType
EAnvilVoteType = {
    None = 0,
    Up = 1,
    Down = 2,
    NumTypes = 3,
    EAnvilVoteType_MAX = 4,
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
    EEntitySerializationType_MAX = 3,
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

