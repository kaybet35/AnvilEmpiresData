---@enum EAnvilAccessibilityType
local EAnvilAccessibilityType = {
    FriendlyOnly = 0,
    ResidentsOnly = 1,
    EnemyCanPlunder = 2,
    AllCanUse = 3,
    NumTypes = 4,
    EAnvilAccessibilityType_MAX = 5,
}

---@enum EAnvilAgePhase
local EAnvilAgePhase = {
    Init = 0,
    PrimaryGame = 1,
    PrimaryGameEnd = 2,
    SecondaryGame = 3,
    SecondaryGameEnd = 4,
    Shutdown = 5,
    NumTypes = 6,
    EAnvilAgePhase_MAX = 7,
}

---@enum EAnvilAnimalState
local EAnvilAnimalState = {
    Idle = 0,
    Walking = 1,
    Running = 2,
    Scavenging = 3,
    Posturing = 4,
    ChasingTarget = 5,
    Attacking = 6,
    Trapped = 7,
    NumTypes = 8,
    EAnvilAnimalState_MAX = 9,
}

---@enum EAnvilAnvilGameplayType
local EAnvilAnvilGameplayType = {
    Normal = 0,
    HeatBased = 1,
    NumTypes = 2,
    EAnvilAnvilGameplayType_MAX = 3,
}

---@enum EAnvilArmourType
local EAnvilArmourType = {
    None = 0,
    Leather = 1,
    Iron = 2,
    NumTypes = 3,
    EAnvilArmourType_MAX = 4,
}

---@enum EAnvilAvatarAttributeType
local EAnvilAvatarAttributeType = {
    Fitness = 0,
    Combat = 1,
    Smithing = 2,
    Lumberjacking = 3,
    Mining = 4,
    Cooking = 5,
    Farming = 6,
    NumTypes = 7,
    None = 8,
    EAnvilAvatarAttributeType_MAX = 9,
}

---@enum EAnvilAvatarOwnerType
local EAnvilAvatarOwnerType = {
    Personal = 0,
    Family = 1,
    Public = 2,
    NumTypes = 3,
    EAnvilAvatarOwnerType_MAX = 4,
}

---@enum EAnvilAvatarType
local EAnvilAvatarType = {
    Default = 0,
    Soldier = 1,
    SupportSwordsman = 2,
    SupportBowman = 3,
    SupportSpearman = 4,
    Custom = 5,
    NumTypes = 6,
    EAnvilAvatarType_MAX = 7,
}

---@enum EAnvilAvatarXPType
local EAnvilAvatarXPType = {
    Attack = 0,
    Gather = 1,
    GatherFish = 2,
    Work = 3,
    Build = 4,
    Repair = 5,
    NumTypes = 6,
    EAnvilAvatarXPType_MAX = 7,
}

---@enum EAnvilBeaconInfoType
local EAnvilBeaconInfoType = {
    None = 0,
    Player = 1,
    FamilyCenter = 2,
    BeaconTower = 3,
    NumTypes = 4,
    EAnvilBeaconInfoType_MAX = 5,
}

---@enum EAnvilBuildAreaType
local EAnvilBuildAreaType = {
    TownArea = 0,
    FortressArea = 1,
    SmallCampArea = 2,
    LargeCampArea = 3,
    HomesteadArea = 4,
    UndergroundArea = 5,
    WildernessArea = 6,
    NumTypes = 7,
    EAnvilBuildAreaType_MAX = 8,
}

---@enum EAnvilBuildLocationType
local EAnvilBuildLocationType = {
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
local EAnvilBuildStructureType = {
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
local EAnvilCharacterStance = {
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
    OnBoatHelm = 14,
    OnOneOarRight = 15,
    OnOneOarLeft = 16,
    OnTwoOars = 17,
    OnBoatSpotter = 18,
    NumTypes = 19,
    EAnvilCharacterStance_MAX = 20,
}

---@enum EAnvilChatType
local EAnvilChatType = {
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
local EAnvilColliderTags = {
    MeshVisibilityGroup2 = 0,
    Tree = 1,
    SiegeTowerRamp = 2,
    MeshFootprint = 3,
    NoBlockAttackLOS = 4,
    Collapsed = 5,
    UnCollapsed = 6,
    FoundationSolidBox = 7,
    FoundationDisallowCeiling = 8,
    StructureCheckOnlyVolume = 9,
    GangplankLeft = 10,
    GangplankRight = 11,
    NumTypes = 12,
    EAnvilColliderTags_MAX = 13,
}

---@enum EAnvilCollisionChannel
local EAnvilCollisionChannel = {
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
    RangedAimBlocking = 10,
    WorldBorder = 11,
    Landscape = 12,
    Projectile = 13,
    Vehicle = 14,
    MeshVisibility = 15,
    Shield = 16,
    LargeRock = 17,
    Water = 18,
    Animal = 19,
    PassiveDamage = 20,
    Foundation = 21,
    Snapping = 22,
    Fire = 23,
    MouseInteraction = 24,
    Industry = 25,
    BorderRegion = 26,
    VehicleBlocking = 27,
    House = 28,
    AnvilCollisionFoliage = 29,
    NumTypes = 30,
    EAnvilCollisionChannel_MAX = 31,
}

---@enum EAnvilConvertedActionType
local EAnvilConvertedActionType = {
    HitAction = 0,
    AnvilAction = 1,
    HeatBoost = 2,
    NumTypes = 3,
    EAnvilConvertedActionType_MAX = 4,
}

---@enum EAnvilCookingType
local EAnvilCookingType = {
    DirectHeat = 0,
    Boiled = 1,
    EAnvilCookingType_MAX = 2,
}

---@enum EAnvilDamageTargetType
local EAnvilDamageTargetType = {
    Default = 0,
    Infantry = 1,
    Horse = 2,
    Structure = 3,
    Fire = 4,
    Vehicle = 5,
    LightStructure = 6,
    Animal = 7,
    NumTypes = 8,
    EAnvilDamageTargetType_MAX = 9,
}

---@enum EAnvilDamageType
local EAnvilDamageType = {
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
    Falling = 12,
    Bleed = 13,
    Decay = 14,
    Admin = 15,
    NumTypes = 16,
    EAnvilDamageType_MAX = 17,
}

---@enum EAnvilDismantleStatus
local EAnvilDismantleStatus = {
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
local EAnvilEntityActionType = {
    None = 0,
    Upvote = 1,
    Upvoted = 2,
    Downvote = 3,
    Downvoted = 4,
    RentStorehouse = 5,
    ReleaseStorehouse = 6,
    ExtendStorehouse = 7,
    FamilyLock = 8,
    FamilyUnlock = 9,
    AttachVehicle = 10,
    DetachVehicle = 11,
    PushLadder = 12,
    RetractLadder = 13,
    StartPowerMill = 14,
    StopPowerMill = 15,
    PledgeToTown = 16,
    ReinforceStructure = 17,
    RestrictedModeOn = 18,
    RestrictedModeOff = 19,
    OpenSiegeTowerRamp = 20,
    CloseSiegeTowerRamp = 21,
    OpenSail = 22,
    CloseSail = 23,
    OpenGangplankLeft = 24,
    CloseGangplankLeft = 25,
    OpenGangplankRight = 26,
    CloseGangplankRight = 27,
    Upgrade = 28,
    ClaimHouse = 29,
    ClaimBed = 30,
    GotoSleep = 31,
    DeployAsMilitia = 32,
    ReturnToPledgedTown = 33,
    CallForReinforcements = 34,
    DismantleByOfficial = 35,
    DeployCamp = 36,
    DeployLadder = 37,
    RepairItem = 38,
    SetTownName = 39,
    ClaimFamilyArea = 40,
    FamilyRequestToJoin = 41,
    FamilyInviteToJoin = 42,
    EditSignPost = 43,
    NumTypes = 44,
    EAnvilEntityActionType_MAX = 45,
}

---@enum EAnvilFactionId
local EAnvilFactionId = {
    None = 0,
    Aranic = 1,
    Mirrish = 2,
    Novan = 3,
    NumTypes = 4,
    EAnvilFactionId_MAX = 5,
}

---@enum EAnvilFoodType
local EAnvilFoodType = {
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
local EAnvilGateState = {
    Closed = 0,
    Opening = 1,
    Open = 2,
    Closing = 3,
    NumTypes = 4,
    EAnvilGateState_MAX = 5,
}

---@enum EAnvilInputEventType
local EAnvilInputEventType = {
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
    ReturnFromReinforcement = 14,
    CallForReinforcements = 15,
    DismantleByOfficial = 16,
    MouseRotationMovement = 17,
    MouseWheelMovement = 18,
    Mount = 19,
    RepairStationRepairRequest = 20,
    MouseSelect = 21,
    MouseSelectCeiling = 22,
    DisableSnapping = 23,
    SetTownName = 24,
    Reload = 25,
    QuenchItems = 26,
    AnvilNextOutput = 27,
    AnvilPreviousOutput = 28,
    PackItems = 29,
    ToggleFamilyAreaPledgeRestriction = 30,
    IncreaseTownStatus = 31,
    RequestFamilySync = 32,
    RequestFamilyListSync = 33,
    RequestToJoinFamily = 34,
    InviteToJoinFamily = 35,
    AltAttack = 36,
    AltShield = 37,
    SwitchSeat = 38,
    StartCooking = 39,
    SubmitAvatar = 40,
    RequestUnderworldMap = 41,
    ToggleMarchMode = 42,
    SetAutoArmEquippedItems = 43,
    EAnvilInputEventType_MAX = 44,
}

---@enum EAnvilInputResponseType
local EAnvilInputResponseType = {
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
local EAnvilInventoryStackRule = {
    Default = 0,
    ForceStackNonLargeItems = 1,
    ForceStackAllItems = 2,
    EAnvilInventoryStackRule_MAX = 3,
}

---@enum EAnvilItemDurabilityType
local EAnvilItemDurabilityType = {
    Default = 0,
    Heat = 1,
    Avatar = 2,
    EAnvilItemDurabilityType_MAX = 3,
}

---@enum EAnvilItemFlag
local EAnvilItemFlag = {
    Relic = 0,
    Public = 1,
    NumTypes = 2,
    EAnvilItemFlag_MAX = 3,
}

---@enum EAnvilItemPayloadType
local EAnvilItemPayloadType = {
    None = 0,
    Quality = 1,
    ConversionProgress = 2,
    TownHash = 3,
    EAnvilItemPayloadType_MAX = 4,
}

---@enum EAnvilItemQualityType
local EAnvilItemQualityType = {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    NumTypes = 4,
    EAnvilItemQualityType_MAX = 5,
}

---@enum EAnvilItemSlotBackgroundType
local EAnvilItemSlotBackgroundType = {
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
    Resource = 12,
    EAnvilItemSlotBackgroundType_MAX = 13,
}

---@enum EAnvilItemTag
local EAnvilItemTag = {
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
local EAnvilMapId = {
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
local EAnvilMapPostType = {
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
local EAnvilMovementMode = {
    Walking = 0,
    Flying = 1,
    Swimming = 2,
    NumTypes = 3,
    EAnvilMovementMode_MAX = 4,
}

---@enum EAnvilPhysicalSurfaceType
local EAnvilPhysicalSurfaceType = {
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
    PlayerFlesh = 17,
    NumTypes = 18,
    EAnvilPhysicalSurfaceType_MAX = 19,
}

---@enum EAnvilPlacementStatus
local EAnvilPlacementStatus = {
    Valid = 0,
    UnknownError = 1,
    Obstructed = 2,
    InvalidFoundation = 3,
    InvalidSurface = 4,
    TooCloseToTownHall = 5,
    TooCloseToFortress = 6,
    TooCloseToFamilyCenter = 7,
    TooCloseToCamp = 8,
    TooCloseToRelicSite = 9,
    TooFarFromTownHall = 10,
    RequiredHigherTierTH = 11,
    RequiredHigherTierFamilyArea = 12,
    TooLong = 13,
    TooShort = 14,
    TooHigh = 15,
    TooLow = 16,
    TooSteep = 17,
    TooCloseToEnemy = 18,
    TooCloseToCave = 19,
    TooCloseToWorldRoad = 20,
    TooFarFromPlayer = 21,
    NotAtCorrectBuildLocationType = 22,
    RequiresDeployable = 23,
    RequiresFamily = 24,
    OnlyOneFamilyCenterPerTown = 25,
    TooCloseTogether = 26,
    TooCloseToWildSpawn = 27,
    TooCloseToWater = 28,
    VehicleMustBeEmpty = 29,
    RequiresEnclosure = 30,
    RequiresValidSupport = 31,
    RequiresFoundation = 32,
    RequiresLandscape = 33,
    RequiresWater = 34,
    RequiresSnappping = 35,
    RequiresSnapppingToShipyard = 36,
    YouMustBelongToFamily = 37,
    NotAtFullHealth = 38,
    CantBuildBorderRegion = 39,
    TooCloseToBorder = 40,
    MustBePledgedToTown = 41,
    RequiresNearbyPlayers = 42,
    RequiresMorePopulation = 43,
    RequiresMoreTents = 44,
    AreaMustBeEmpty = 45,
    MustBeUniquePerTown = 46,
    RequiresTerritoryOwnership = 47,
    RequiresPledgeToBuildInWilderness = 48,
    LimitTouchingGroupCountReached = 49,
    RequiresAgeTime = 50,
    AqueductNotConnectedToWaterSource = 51,
    EAnvilPlacementStatus_MAX = 52,
}

---@enum EAnvilPlayerAimMeshType
local EAnvilPlayerAimMeshType = {
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
local EAnvilPlayerInputMode = {
    Default = 0,
    Building = 1,
    RotatingStructure = 2,
    Aiming = 3,
    MouseSelect = 4,
    NumTypes = 5,
    EAnvilPlayerInputMode_MAX = 6,
}

---@enum EAnvilPlayerOnlineStatus
local EAnvilPlayerOnlineStatus = {
    Online = 0,
    Offline = 1,
    Deployed = 2,
    NumTypes = 3,
    EAnvilPlayerOnlineStatus_MAX = 4,
}

---@enum EAnvilPlayerVisEventType
local EAnvilPlayerVisEventType = {
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
    AgeEndingMessage = 10,
    UnderworldDebugInfoTargetSequence = 11,
    EAnvilPlayerVisEventType_MAX = 12,
}

---@enum EAnvilPledgedPlayerStatus
local EAnvilPledgedPlayerStatus = {
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
local EAnvilPowerUnitType = {
    Pipe = 0,
    Source = 1,
    Sink = 2,
    EAnvilPowerUnitType_MAX = 3,
}

---@enum EAnvilProfileNameCheckType
local EAnvilProfileNameCheckType = {
    Valid = 0,
    TooShort = 1,
    TooLong = 2,
    InvalidChar = 3,
    AlreadyTaken = 4,
    EAnvilProfileNameCheckType_MAX = 5,
}

---@enum EAnvilR2FamilyRoleType
local EAnvilR2FamilyRoleType = {
    Guest = 0,
    Member = 1,
    Manager = 2,
    Founder = 3,
    NumTypes = 4,
    EAnvilR2FamilyRoleType_MAX = 5,
}

---@enum EAnvilR2WeatherEventType
local EAnvilR2WeatherEventType = {
    Rain = 0,
    Snow = 1,
    NumTypes = 2,
    EAnvilR2WeatherEventType_MAX = 3,
}

---@enum EAnvilRareResourceAreaType
local EAnvilRareResourceAreaType = {
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
local EAnvilReservationTimeoutType = {
    Login = 0,
    BorderTravelReturn = 1,
    UnderworldTravelReturn = 2,
    EAnvilReservationTimeoutType_MAX = 3,
}

---@enum EAnvilResourceType
local EAnvilResourceType = {
    Default = 0,
    ChoppedTree = 1,
    LatticeChunk = 2,
    EAnvilResourceType_MAX = 3,
}

---@enum EAnvilScorchState
local EAnvilScorchState = {
    None = 0,
    OnFire = 1,
    OnFireGrowing = 2,
    Cooling = 3,
    NumTypes = 4,
    EAnvilScorchState_MAX = 5,
}

---@enum EAnvilSiegeTowerState
local EAnvilSiegeTowerState = {
    Close = 0,
    Opening = 1,
    Open = 2,
    Closing = 3,
    NumTypes = 4,
    EAnvilSiegeTowerState_MAX = 5,
}

---@enum EAnvilSignPostVisualType
local EAnvilSignPostVisualType = {
    Directional = 0,
    Board = 1,
    Post = 2,
    NumTypes = 3,
    EAnvilSignPostVisualType_MAX = 4,
}

---@enum EAnvilSimActivityState
local EAnvilSimActivityState = {
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
    Crafting = 34,
    NumTypes = 35,
    EAnvilSimActivityState_MAX = 36,
}

---@enum EAnvilSnappingChannelType
local EAnvilSnappingChannelType = {
    General = 0,
    Wall = 1,
    Road = 2,
    RoadSide = 3,
    Platform = 4,
    Foundation = 5,
    RampSpiralTop = 6,
    RampSpiralBottom = 7,
    Shipyard = 8,
    ShipyardBoat = 9,
    WaterStart = 10,
    WaterEnd = 11,
    CanalStart = 12,
    CanalEnd = 13,
    CanalSideStart = 14,
    PowerStart = 15,
    PowerEnd = 16,
    PowerRopeStart = 17,
    PowerRopeEnd = 18,
    PowerRopeIgnore = 19,
    PowerConvertedAnvilStart = 20,
    PowerConvertedAnvilEnd = 21,
    PowerConvertedHeatStart = 22,
    PowerConvertedHeatEnd = 23,
    DebugPowerSource = 24,
    NaturalWaterRequired = 25,
    NaturalWaterOptional = 26,
    PowerConvertedWoodChoppingStationStart = 27,
    PowerConvertedWoodChoppingStationEnd = 28,
    PowerConvertedSmashingPlateStart = 29,
    PowerConvertedSmashingPlateEnd = 30,
    PowerConvertedHandCrankStart = 31,
    PowerConvertedHandCrankEnd = 32,
    EAnvilSnappingChannelType_MAX = 33,
}

---@enum EAnvilSpawnType
local EAnvilSpawnType = {
    Starter = 0,
    FamilyArea = 1,
    House = 2,
    Tent = 3,
    Bed = 4,
    Town = 5,
    Bot = 6,
    None = 7,
    NumTypes = 8,
    EAnvilSpawnType_MAX = 9,
}

---@enum EAnvilStatusMessageType
local EAnvilStatusMessageType = {
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
    ItemTransfer_CannotChangeFromSupportAvatar = 25,
    ItemTransfer_CannotChangeToSupportAvatar = 26,
    ItemTransfer_CannotSubmitSupportAvatar = 27,
    Blocked = 28,
    Vehicle_ExitBlocked = 29,
    InvalidDetachLocation = 30,
    GatheringResource = 31,
    NoRepairNeeded = 32,
    RepairOtherTeam = 33,
    RepairMaterialsRequired = 34,
    RepairOnFire = 35,
    CanRepair = 36,
    NotEnoughStamina = 37,
    WrongStance = 38,
    MissingResource = 39,
    MissingStructure = 40,
    Crafting = 41,
    VehicleMustBeEmpty = 42,
    QueueIsFull = 43,
    NotEnoughPayment = 44,
    NotEnoughPaymentSilver = 45,
    WeaponIneffective = 46,
    MarketInvalidItem = 47,
    MarketPublicItemNotAllowed = 48,
    MarketNumMaxListingsReached = 49,
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
    AccessDeniedBelongsToEnemyTorchToAccess = 63,
    AccessDeniedBelongsToEnemy = 64,
    AccessDeniedMustBePledged = 65,
    AccessDeniedRequireHigherFamilyStatus = 66,
    AccessDeniedClaimedByFamily = 67,
    AccessDeniedAlliedFamilyNotAllowed = 68,
    AccessDeniedStructureCollapsed = 69,
    AccessDeniedStructureFamilyCollapsed = 70,
    AccessDeniedTooFarToInteract = 71,
    AccessDeniedFamilyDestroyed = 72,
    AccessDeniedTownDestroyed = 73,
    AccessDeniedCannotUseInVehicle = 74,
    AccessDeniedReinforcings = 75,
    DismantleNoPermission = 76,
    DismantleMustBeEmpty = 77,
    FamilyAreaMustBeEmpty = 78,
    GateIsBreached = 79,
    EnemiesNearby = 80,
    UnstuckStarting = 81,
    UnstuckTimeRemaining = 82,
    UnstuckCancelledMovement = 83,
    UnstuckCancelledEnemyNearby = 84,
    UnstuckCancelledTooSoon = 85,
    UnstuckCancelledVehiclePassenger = 86,
    UnstuckAttemptFailed = 87,
    LadderTooManyPlayers = 88,
    LadderNoSpaceToRetract = 89,
    DrowningNotification = 90,
    BedClaimed = 91,
    BedAlreadyClaimed = 92,
    BedMustHaveHouseAtTown = 93,
    BedClaimCleared = 94,
    HorseNotHungry = 95,
    NoItemsForPacking = 96,
    TooManyOrFewItemsForPacking = 97,
    ItemCannotBePacked = 98,
    NoContainerForPacking = 99,
    NotAllowedInBorderZone = 100,
    SlotOccupied = 101,
    NotEnoughSilver = 102,
    TravelDestinationUnavailable = 103,
    UnableToIncreaseStatusUsingSilver = 104,
    NoSilverFound = 105,
    RemovedFromFamily = 106,
    MustBeFamilyLeader = 107,
    FamilyLockExpiry = 108,
    TargetInUse = 109,
    ItemInUse = 110,
    MissingEquipment = 111,
    TooSoonToUse = 112,
    HitConverterOutputNotSupported = 113,
    OnlyOnePerFamily = 114,
    TargetImmuneFriendlyFire = 115,
    TargetImmuneEveryone = 116,
    ToolTierTooLow = 117,
    ToolBroke = 118,
    StructureIsBurnt = 119,
    InventoryMustBeEmpty = 120,
    PlayerDeploying = 121,
    BedNotInYourFamily = 122,
    PledgedToTown = 123,
    VehicleCannotWorldEntranceTravel = 124,
    MustBeResetBeforeFiring = 125,
    MustBeResetBeforeLoading = 126,
    NoProjectileLoaded = 127,
    CantArmDueToHeavyTool = 128,
    ItemDisarmedDueToHeavyTool = 129,
    CantArmDueToHeavyArmour = 130,
    TemperatureTooLowToGather = 131,
    TemperatureTooLowToPlant = 132,
    TooSoonToTravel = 133,
    OutOfAmmunition = 134,
    NotValidSupportToReinforce = 135,
    OccupantMustbeMounted = 136,
    RopeDetachFailed_HandsFull = 137,
    AvatarSubmitted = 138,
    CantDeployWhileMoving = 139,
    CannotUseWhileSwimming = 140,
    TargetTooClose = 141,
    ReducedDamageFromLowStamina = 142,
    CaravanRequiredToCapture = 143,
    NotEnoughPlayersToCapture = 144,
    CannotOpenBothSailAndPlank = 145,
    RelicSiteClaimed = 146,
    StorehouseAtCapacity = 147,
    NumTypes = 148,
    EAnvilStatusMessageType_MAX = 149,
}

---@enum EAnvilStimulusType
local EAnvilStimulusType = {
    None = 0,
    VisualThreat = 1,
    AuditoryThreat = 2,
    DestroyableObstacle = 3,
    FeedingLocation = 4,
    SettlementLocation = 5,
    NumTypes = 6,
    EAnvilStimulusType_MAX = 7,
}

---@enum EAnvilTargetAreaType
local EAnvilTargetAreaType = {
    None = 0,
    Main = 1,
    Sail = 2,
    ShipFrontLeft = 3,
    ShipFrontRight = 4,
    ShipBackLeft = 5,
    ShipBackRight = 6,
    NumTypes = 7,
    EAnvilTargetAreaType_MAX = 8,
}

---@enum EAnvilToolType
local EAnvilToolType = {
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

---@enum EAnvilTownSubType
local EAnvilTownSubType = {
    None = 0,
    Town = 1,
    Fortress = 2,
    EAnvilTownSubType_MAX = 3,
}

---@enum EAnvilTravelType
local EAnvilTravelType = {
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
local EAnvilTrinaryRequirement = {
    Allowed = 0,
    Disallowed = 1,
    Required = 2,
    NumTypes = 3,
    EAnvilTrinaryRequirement_MAX = 4,
}

---@enum EAnvilUnderworldModuleEdgeType
local EAnvilUnderworldModuleEdgeType = {
    NegativeY = 0,
    PositiveX = 1,
    PositiveY = 2,
    NegativeX = 3,
    NumTypes = 4,
    EAnvilUnderworldModuleEdgeType_MAX = 5,
}

---@enum EAnvilUsePromptType
local EAnvilUsePromptType = {
    PickupItem = 0,
    Plunder = 1,
    UseEntity = 2,
    DropLargeItem = 3,
    Mount = 4,
    Gate = 5,
    Feed = 6,
    Gathering = 7,
    SwitchSeat = 8,
    SiegeTowerRamp = 9,
    NumTypes = 10,
    EAnvilUsePromptType_MAX = 11,
}

---@enum EAnvilVehicleMovementPlayerInteractionType
local EAnvilVehicleMovementPlayerInteractionType = {
    Ignore = 0,
    Block = 1,
    BlockIfMaxGuard = 2,
    NumTypes = 3,
    EAnvilVehicleMovementPlayerInteractionType_MAX = 4,
}

---@enum EAnvilVictoryType
local EAnvilVictoryType = {
    Military = 0,
    Culture = 1,
    Religious = 2,
    NumTypes = 3,
    EAnvilVictoryType_MAX = 4,
}

---@enum EAnvilVoteType
local EAnvilVoteType = {
    None = 0,
    Up = 1,
    Down = 2,
    NumTypes = 3,
    EAnvilVoteType_MAX = 4,
}

---@enum EAnvilWorldEntityType
local EAnvilWorldEntityType = {
    None = 0,
    WildSpawn = 1,
    TownHall = 2,
    LargeCamp = 3,
    SmallCamp = 4,
    MarketShop = 5,
    BeaconTower = 6,
    FamilyCenter = 7,
    Temple = 8,
    Fortress = 9,
    RelicSite = 10,
    NumTypes = 11,
    EAnvilWorldEntityType_MAX = 12,
}

---@enum EEntityRelevancyPolicy
local EEntityRelevancyPolicy = {
    DistanceBased = 0,
    AlwaysRelevant = 1,
    AlwaysRelevantToFriendlyOnly = 2,
    AlwaysRelevantToFriendlyOrDistanceBased = 3,
    OwnerOnly = 4,
    EEntityRelevancyPolicy_MAX = 5,
}

---@enum EEntitySerializationType
local EEntitySerializationType = {
    SerializationTypeDefault = 0,
    SerializationTypePlayer = 1,
    SerializationTypeController = 2,
    EEntitySerializationType_MAX = 3,
}

---@enum EVisMeshProfile
local EVisMeshProfile = {
    Undefined = 0,
    Structure = 1,
    StructureLandscape = 2,
    StructureLandscapeRotate = 3,
    StructureCollision = 4,
    StructureCollisionLandscape = 5,
    StructureCollisionLandscapeRotate = 6,
    EVisMeshProfile_MAX = 7,
}

