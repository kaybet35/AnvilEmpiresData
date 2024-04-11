---@meta

---@class AAIController : AController
---@field bStartAILogicOnPossess boolean
---@field bStopAILogicOnUnposses boolean
---@field bLOSflag boolean
---@field bSkipExtraLOSChecks boolean
---@field bAllowStrafe boolean
---@field bWantsPlayerState boolean
---@field bSetControlRotationFromPawnOrientation boolean
---@field PathFollowingComponent UPathFollowingComponent
---@field BrainComponent UBrainComponent
---@field PerceptionComponent UAIPerceptionComponent
---@field ActionsComp UPawnActionsComponent
---@field Blackboard UBlackboardComponent
---@field CachedGameplayTasksComponent UGameplayTasksComponent
---@field DefaultNavigationFilterClass TSubclassOf<UNavigationQueryFilter>
---@field ReceiveMoveCompleted FAIControllerReceiveMoveCompleted
AAIController = {}

---@param BlackboardAsset UBlackboardData
---@param BlackboardComponent UBlackboardComponent
---@return boolean
function AAIController:UseBlackboard(BlackboardAsset, BlackboardComponent) end
---@param ResourceClass TSubclassOf<UGameplayTaskResource>
function AAIController:UnclaimTaskResource(ResourceClass) end
---@param NewPFComponent UPathFollowingComponent
function AAIController:SetPathFollowingComponent(NewPFComponent) end
---@param bEnable boolean
function AAIController:SetMoveBlockDetection(bEnable) end
---@param BTAsset UBehaviorTree
---@return boolean
function AAIController:RunBehaviorTree(BTAsset) end
---@param BlackboardComp UBlackboardComponent
---@param BlackboardAsset UBlackboardData
function AAIController:OnUsingBlackBoard(BlackboardComp, BlackboardAsset) end
---@param NewlyClaimed FGameplayResourceSet
---@param FreshlyReleased FGameplayResourceSet
function AAIController:OnGameplayTaskResourcesClaimed(NewlyClaimed, FreshlyReleased) end
---@param Dest FVector
---@param AcceptanceRadius float
---@param bStopOnOverlap boolean
---@param bUsePathfinding boolean
---@param bProjectDestinationToNavigation boolean
---@param bCanStrafe boolean
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@param bAllowPartialPath boolean
---@return EPathFollowingRequestResult::Type
function AAIController:MoveToLocation(Dest, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bProjectDestinationToNavigation, bCanStrafe, FilterClass, bAllowPartialPath) end
---@param Goal AActor
---@param AcceptanceRadius float
---@param bStopOnOverlap boolean
---@param bUsePathfinding boolean
---@param bCanStrafe boolean
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@param bAllowPartialPath boolean
---@return EPathFollowingRequestResult::Type
function AAIController:MoveToActor(Goal, AcceptanceRadius, bStopOnOverlap, bUsePathfinding, bCanStrafe, FilterClass, bAllowPartialPath) end
---@param NewFocus AActor
function AAIController:K2_SetFocus(NewFocus) end
---@param FP FVector
function AAIController:K2_SetFocalPoint(FP) end
function AAIController:K2_ClearFocus() end
---@return boolean
function AAIController:HasPartialPath() end
---@return UPathFollowingComponent
function AAIController:GetPathFollowingComponent() end
---@return EPathFollowingStatus::Type
function AAIController:GetMoveStatus() end
---@return FVector
function AAIController:GetImmediateMoveDestination() end
---@return AActor
function AAIController:GetFocusActor() end
---@param Actor AActor
---@return FVector
function AAIController:GetFocalPointOnActor(Actor) end
---@return FVector
function AAIController:GetFocalPoint() end
---@return UAIPerceptionComponent
function AAIController:GetAIPerceptionComponent() end
---@param ResourceClass TSubclassOf<UGameplayTaskResource>
function AAIController:ClaimTaskResource(ResourceClass) end


---@class ADetourCrowdAIController : AAIController
ADetourCrowdAIController = {}


---@class AEQSTestingPawn : ACharacter
---@field QueryTemplate UEnvQuery
---@field QueryParams TArray<FEnvNamedValue>
---@field QueryConfig TArray<FAIDynamicParam>
---@field TimeLimitPerStep float
---@field StepToDebugDraw int32
---@field HighlightMode EEnvQueryHightlightMode
---@field bDrawLabels boolean
---@field bDrawFailedItems boolean
---@field bReRunQueryOnlyOnFinishedMove boolean
---@field bShouldBeVisibleInGame boolean
---@field bTickDuringGame boolean
---@field QueryingMode EEnvQueryRunMode::Type
---@field NavAgentProperties FNavAgentProperties
AEQSTestingPawn = {}



---@class AGridPathAIController : AAIController
AGridPathAIController = {}


---@class ANavLinkProxy : AActor
---@field PointLinks TArray<FNavigationLink>
---@field SegmentLinks TArray<FNavigationSegmentLink>
---@field SmartLinkComp UNavLinkCustomComponent
---@field bSmartLinkIsRelevant boolean
---@field OnSmartLinkReached FNavLinkProxyOnSmartLinkReached
ANavLinkProxy = {}

---@param bEnabled boolean
function ANavLinkProxy:SetSmartLinkEnabled(bEnabled) end
---@param Agent AActor
function ANavLinkProxy:ResumePathFollowing(Agent) end
---@param Agent AActor
---@param Destination FVector
function ANavLinkProxy:ReceiveSmartLinkReached(Agent, Destination) end
---@return boolean
function ANavLinkProxy:IsSmartLinkEnabled() end
---@return boolean
function ANavLinkProxy:HasMovingAgents() end


---@class FAIDamageEvent
---@field Amount float
---@field Location FVector
---@field HitLocation FVector
---@field DamagedActor AActor
---@field Instigator AActor
---@field Tag FName
FAIDamageEvent = {}



---@class FAIDataProviderBoolValue : FAIDataProviderTypedValue
---@field DefaultValue boolean
FAIDataProviderBoolValue = {}



---@class FAIDataProviderFloatValue : FAIDataProviderTypedValue
---@field DefaultValue float
FAIDataProviderFloatValue = {}



---@class FAIDataProviderIntValue : FAIDataProviderTypedValue
---@field DefaultValue int32
FAIDataProviderIntValue = {}



---@class FAIDataProviderStructValue : FAIDataProviderValue
FAIDataProviderStructValue = {}


---@class FAIDataProviderTypedValue : FAIDataProviderValue
---@field PropertyType TObjectPtr<UClass>
FAIDataProviderTypedValue = {}



---@class FAIDataProviderValue
---@field DataBinding UAIDataProvider
---@field DataField FName
FAIDataProviderValue = {}



---@class FAIDynamicParam
---@field ParamName FName
---@field ParamType EAIParamType
---@field Value float
---@field BBKey FBlackboardKeySelector
FAIDynamicParam = {}



---@class FAIMoveRequest
---@field GoalActor TWeakObjectPtr<AActor>
FAIMoveRequest = {}



---@class FAINoiseEvent
---@field NoiseLocation FVector
---@field Loudness float
---@field MaxRange float
---@field Instigator AActor
---@field Tag FName
FAINoiseEvent = {}



---@class FAIPredictionEvent
---@field Requestor AActor
---@field PredictedActor AActor
FAIPredictionEvent = {}



---@class FAIRequestID
---@field RequestID uint32
FAIRequestID = {}



---@class FAISenseAffiliationFilter
---@field bDetectEnemies boolean
---@field bDetectNeutrals boolean
---@field bDetectFriendlies boolean
FAISenseAffiliationFilter = {}



---@class FAISightEvent
---@field SeenActor AActor
---@field Observer AActor
FAISightEvent = {}



---@class FAIStimulus
---@field Age float
---@field ExpirationAge float
---@field Strength float
---@field StimulusLocation FVector
---@field ReceiverLocation FVector
---@field Tag FName
---@field bSuccessfullySensed boolean
FAIStimulus = {}



---@class FAITeamStimulusEvent
---@field Broadcaster AActor
---@field Enemy AActor
FAITeamStimulusEvent = {}



---@class FAITouchEvent
---@field TouchReceiver AActor
---@field OtherActor AActor
FAITouchEvent = {}



---@class FActorPerceptionBlueprintInfo
---@field Target AActor
---@field LastSensedStimuli TArray<FAIStimulus>
---@field bIsHostile boolean
FActorPerceptionBlueprintInfo = {}



---@class FActorPerceptionUpdateInfo
---@field TargetId int32
---@field Target TWeakObjectPtr<AActor>
---@field Stimulus FAIStimulus
FActorPerceptionUpdateInfo = {}



---@class FBTCompositeChild
---@field ChildComposite UBTCompositeNode
---@field ChildTask UBTTaskNode
---@field Decorators TArray<UBTDecorator>
---@field DecoratorOps TArray<FBTDecoratorLogic>
FBTCompositeChild = {}



---@class FBTDecoratorLogic
---@field Operation EBTDecoratorLogic::Type
---@field Number uint16
FBTDecoratorLogic = {}



---@class FBehaviorTreeTemplateInfo
---@field Asset UBehaviorTree
---@field Template UBTCompositeNode
FBehaviorTreeTemplateInfo = {}



---@class FBlackboardEntry
---@field EntryName FName
---@field KeyType UBlackboardKeyType
---@field bInstanceSynced boolean
FBlackboardEntry = {}



---@class FBlackboardKeySelector
---@field AllowedTypes TArray<UBlackboardKeyType>
---@field SelectedKeyName FName
---@field SelectedKeyType TSubclassOf<UBlackboardKeyType>
---@field SelectedKeyID uint8
---@field bNoneIsAllowedValue boolean
FBlackboardKeySelector = {}



---@class FCompactIndexedHandleBase
FCompactIndexedHandleBase = {}


---@class FCrowdAvoidanceConfig
---@field VelocityBias float
---@field DesiredVelocityWeight float
---@field CurrentVelocityWeight float
---@field SideBiasWeight float
---@field ImpactTimeWeight float
---@field ImpactTimeRange float
---@field CustomPatternIdx uint8
---@field AdaptiveDivisions uint8
---@field AdaptiveRings uint8
---@field AdaptiveDepth uint8
FCrowdAvoidanceConfig = {}



---@class FCrowdAvoidanceSamplingPattern
---@field Angles TArray<float>
---@field Radii TArray<float>
FCrowdAvoidanceSamplingPattern = {}



---@class FDefault__AISenseBlueprintListener
FDefault__AISenseBlueprintListener = {}


---@class FEQSParametrizedQueryExecutionRequest
---@field QueryTemplate UEnvQuery
---@field QueryConfig TArray<FAIDynamicParam>
---@field EQSQueryBlackboardKey FBlackboardKeySelector
---@field RunMode EEnvQueryRunMode::Type
---@field bUseBBKeyForQueryTemplate boolean
FEQSParametrizedQueryExecutionRequest = {}



---@class FEnvDirection
---@field LineFrom TSubclassOf<UEnvQueryContext>
---@field LineTo TSubclassOf<UEnvQueryContext>
---@field Rotation TSubclassOf<UEnvQueryContext>
---@field DirMode EEnvDirection::Type
FEnvDirection = {}



---@class FEnvNamedValue
---@field ParamName FName
---@field ParamType EAIParamType
---@field Value float
FEnvNamedValue = {}



---@class FEnvOverlapData
---@field ExtentX float
---@field ExtentY float
---@field ExtentZ float
---@field ShapeOffset FVector
---@field OverlapChannel ECollisionChannel
---@field OverlapShape EEnvOverlapShape::Type
---@field bOnlyBlockingHits boolean
---@field bOverlapComplex boolean
---@field bSkipOverlapQuerier boolean
FEnvOverlapData = {}



---@class FEnvQueryInstanceCache
---@field Template UEnvQuery
FEnvQueryInstanceCache = {}



---@class FEnvQueryManagerConfig
---@field MaxAllowedTestingTime float
---@field bTestQueriesUsingBreadth boolean
---@field QueryCountWarningThreshold int32
---@field QueryCountWarningInterval double
---@field ExecutionTimeWarningSeconds double
---@field HandlingResultTimeWarningSeconds double
---@field GenerationTimeWarningSeconds double
FEnvQueryManagerConfig = {}



---@class FEnvQueryRequest
---@field QueryTemplate UEnvQuery
---@field Owner UObject
---@field World UWorld
FEnvQueryRequest = {}



---@class FEnvQueryResult
---@field ItemType TSubclassOf<UEnvQueryItemType>
---@field OptionIndex int32
---@field QueryID int32
FEnvQueryResult = {}



---@class FEnvTraceData
---@field VersionNum int32
---@field NavigationFilter TSubclassOf<UNavigationQueryFilter>
---@field ProjectDown float
---@field ProjectUp float
---@field ExtentX float
---@field ExtentY float
---@field ExtentZ float
---@field PostProjectionVerticalOffset float
---@field TraceChannel ETraceTypeQuery
---@field SerializedChannel ECollisionChannel
---@field TraceProfileName FName
---@field TraceShape EEnvTraceShape::Type
---@field TraceMode EEnvQueryTrace::Type
---@field bTraceComplex boolean
---@field bOnlyBlockingHits boolean
---@field bCanTraceOnNavMesh boolean
---@field bCanTraceOnGeometry boolean
---@field bCanDisableTrace boolean
---@field bCanProjectDown boolean
FEnvTraceData = {}



---@class FGenericTeamId
---@field TeamID uint8
FGenericTeamId = {}



---@class FIndexedHandleBase : FSimpleIndexedHandleBase
FIndexedHandleBase = {}


---@class FIntervalCountdown
---@field Interval float
FIntervalCountdown = {}



---@class FPawnActionEvent
---@field Action UPawnAction
FPawnActionEvent = {}



---@class FPawnActionStack
---@field TopAction UPawnAction
FPawnActionStack = {}



---@class FRecastGraphWrapper
---@field RecastNavMeshActor ARecastNavMesh
FRecastGraphWrapper = {}



---@class FSequentialIDBase
---@field Value uint32
FSequentialIDBase = {}



---@class FSimpleIndexedHandleBase
FSimpleIndexedHandleBase = {}


---@class IAIPerceptionListenerInterface : IInterface
IAIPerceptionListenerInterface = {}


---@class IAIResourceInterface : IInterface
IAIResourceInterface = {}


---@class IAISightTargetInterface : IInterface
IAISightTargetInterface = {}


---@class IBlackboardAssetProvider : IInterface
IBlackboardAssetProvider = {}

---@return UBlackboardData
function IBlackboardAssetProvider:GetBlackboardAsset() end


---@class ICrowdAgentInterface : IInterface
ICrowdAgentInterface = {}


---@class IEQSQueryResultSourceInterface : IInterface
IEQSQueryResultSourceInterface = {}


---@class IGenericTeamAgentInterface : IInterface
IGenericTeamAgentInterface = {}


---@class UAIAsyncTaskBlueprintProxy : UObject
---@field OnSuccess FAIAsyncTaskBlueprintProxyOnSuccess
---@field OnFail FAIAsyncTaskBlueprintProxyOnFail
UAIAsyncTaskBlueprintProxy = {}

---@param RequestID FAIRequestID
---@param MovementResult EPathFollowingResult::Type
function UAIAsyncTaskBlueprintProxy:OnMoveCompleted(RequestID, MovementResult) end


---@class UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
UAIBlueprintHelperLibrary = {}

---@param AnimInstance UAnimInstance
---@param bUnlockMovement boolean
---@param UnlockAILogic boolean
function UAIBlueprintHelperLibrary:UnlockAIResourcesWithAnimation(AnimInstance, bUnlockMovement, UnlockAILogic) end
---@param WorldContextObject UObject
---@param PawnClass TSubclassOf<APawn>
---@param BehaviorTree UBehaviorTree
---@param Location FVector
---@param Rotation FRotator
---@param bNoCollisionFail boolean
---@param Owner AActor
---@return APawn
function UAIBlueprintHelperLibrary:SpawnAIFromClass(WorldContextObject, PawnClass, BehaviorTree, Location, Rotation, bNoCollisionFail, Owner) end
---@param Controller AController
---@param Goal FVector
function UAIBlueprintHelperLibrary:SimpleMoveToLocation(Controller, Goal) end
---@param Controller AController
---@param Goal AActor
function UAIBlueprintHelperLibrary:SimpleMoveToActor(Controller, Goal) end
---@param Target APawn
---@param Message FName
---@param MessageSource UObject
---@param bSuccess boolean
function UAIBlueprintHelperLibrary:SendAIMessage(Target, Message, MessageSource, bSuccess) end
---@param AnimInstance UAnimInstance
---@param bLockMovement boolean
---@param LockAILogic boolean
function UAIBlueprintHelperLibrary:LockAIResourcesWithAnimation(AnimInstance, bLockMovement, LockAILogic) end
---@param Rotation FRotator
---@return boolean
function UAIBlueprintHelperLibrary:IsValidAIRotation(Rotation) end
---@param Location FVector
---@return boolean
function UAIBlueprintHelperLibrary:IsValidAILocation(Location) end
---@param DirectionVector FVector
---@return boolean
function UAIBlueprintHelperLibrary:IsValidAIDirection(DirectionVector) end
---@param Controller AController
---@return int32
function UAIBlueprintHelperLibrary:GetNextNavLinkIndex(Controller) end
---@param Controller AController
---@return TArray<FVector>
function UAIBlueprintHelperLibrary:GetCurrentPathPoints(Controller) end
---@param Controller AController
---@return int32
function UAIBlueprintHelperLibrary:GetCurrentPathIndex(Controller) end
---@param Controller AController
---@return UNavigationPath
function UAIBlueprintHelperLibrary:GetCurrentPath(Controller) end
---@param Target AActor
---@return UBlackboardComponent
function UAIBlueprintHelperLibrary:GetBlackboard(Target) end
---@param ControlledActor AActor
---@return AAIController
function UAIBlueprintHelperLibrary:GetAIController(ControlledActor) end
---@param WorldContextObject UObject
---@param Pawn APawn
---@param Destination FVector
---@param TargetActor AActor
---@param AcceptanceRadius float
---@param bStopOnOverlap boolean
---@return UAIAsyncTaskBlueprintProxy
function UAIBlueprintHelperLibrary:CreateMoveToProxyObject(WorldContextObject, Pawn, Destination, TargetActor, AcceptanceRadius, bStopOnOverlap) end


---@class UAIDataProvider : UObject
UAIDataProvider = {}


---@class UAIDataProvider_QueryParams : UAIDataProvider
---@field ParamName FName
---@field FloatValue float
---@field IntValue int32
---@field BoolValue boolean
UAIDataProvider_QueryParams = {}



---@class UAIDataProvider_Random : UAIDataProvider_QueryParams
---@field Min float
---@field Max float
---@field bInteger boolean
UAIDataProvider_Random = {}



---@class UAIHotSpotManager : UObject
UAIHotSpotManager = {}


---@class UAIPerceptionComponent : UActorComponent
---@field SensesConfig TArray<UAISenseConfig>
---@field DominantSense TSubclassOf<UAISense>
---@field AIOwner AAIController
---@field OnPerceptionUpdated FAIPerceptionComponentOnPerceptionUpdated
---@field OnTargetPerceptionUpdated FAIPerceptionComponentOnTargetPerceptionUpdated
---@field OnTargetPerceptionInfoUpdated FAIPerceptionComponentOnTargetPerceptionInfoUpdated
UAIPerceptionComponent = {}

---@param SenseClass TSubclassOf<UAISense>
---@param bEnable boolean
function UAIPerceptionComponent:SetSenseEnabled(SenseClass, bEnable) end
function UAIPerceptionComponent:RequestStimuliListenerUpdate() end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UAIPerceptionComponent:OnOwnerEndPlay(Actor, EndPlayReason) end
---@param SenseToUse TSubclassOf<UAISense>
---@param OutActors TArray<AActor>
function UAIPerceptionComponent:GetPerceivedHostileActorsBySense(SenseToUse, OutActors) end
---@param OutActors TArray<AActor>
function UAIPerceptionComponent:GetPerceivedHostileActors(OutActors) end
---@param SenseToUse TSubclassOf<UAISense>
---@param OutActors TArray<AActor>
function UAIPerceptionComponent:GetPerceivedActors(SenseToUse, OutActors) end
---@param SenseToUse TSubclassOf<UAISense>
---@param OutActors TArray<AActor>
function UAIPerceptionComponent:GetKnownPerceivedActors(SenseToUse, OutActors) end
---@param SenseToUse TSubclassOf<UAISense>
---@param OutActors TArray<AActor>
function UAIPerceptionComponent:GetCurrentlyPerceivedActors(SenseToUse, OutActors) end
---@param Actor AActor
---@param Info FActorPerceptionBlueprintInfo
---@return boolean
function UAIPerceptionComponent:GetActorsPerception(Actor, Info) end
function UAIPerceptionComponent:ForgetAll() end


---@class UAIPerceptionStimuliSourceComponent : UActorComponent
---@field bAutoRegisterAsSource boolean
---@field RegisterAsSourceForSenses TArray<TSubclassOf<UAISense>>
UAIPerceptionStimuliSourceComponent = {}

---@param SenseClass TSubclassOf<UAISense>
function UAIPerceptionStimuliSourceComponent:UnregisterFromSense(SenseClass) end
function UAIPerceptionStimuliSourceComponent:UnregisterFromPerceptionSystem() end
function UAIPerceptionStimuliSourceComponent:RegisterWithPerceptionSystem() end
---@param SenseClass TSubclassOf<UAISense>
function UAIPerceptionStimuliSourceComponent:RegisterForSense(SenseClass) end


---@class UAIPerceptionSystem : UAISubsystem
---@field Senses TArray<UAISense>
---@field PerceptionAgingRate float
UAIPerceptionSystem = {}

---@param WorldContextObject UObject
---@param PerceptionEvent UAISenseEvent
function UAIPerceptionSystem:ReportPerceptionEvent(WorldContextObject, PerceptionEvent) end
---@param PerceptionEvent UAISenseEvent
function UAIPerceptionSystem:ReportEvent(PerceptionEvent) end
---@param WorldContextObject UObject
---@param Sense TSubclassOf<UAISense>
---@param Target AActor
---@return boolean
function UAIPerceptionSystem:RegisterPerceptionStimuliSource(WorldContextObject, Sense, Target) end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UAIPerceptionSystem:OnPerceptionStimuliSourceEndPlay(Actor, EndPlayReason) end
---@param WorldContextObject UObject
---@param Stimulus FAIStimulus
---@return TSubclassOf<UAISense>
function UAIPerceptionSystem:GetSenseClassForStimulus(WorldContextObject, Stimulus) end


---@class UAIResource_Logic : UGameplayTaskResource
UAIResource_Logic = {}


---@class UAIResource_Movement : UGameplayTaskResource
UAIResource_Movement = {}


---@class UAISense : UObject
---@field DefaultExpirationAge float
---@field NotifyType EAISenseNotifyType
---@field bWantsNewPawnNotification boolean
---@field bAutoRegisterAllPawnsAsSources boolean
---@field PerceptionSystemInstance UAIPerceptionSystem
UAISense = {}



---@class UAISenseBlueprintListener : UUserDefinedStruct
UAISenseBlueprintListener = {}


---@class UAISenseConfig : UObject
---@field DebugColor FColor
---@field MaxAge float
---@field bStartsEnabled boolean
UAISenseConfig = {}



---@class UAISenseConfig_Blueprint : UAISenseConfig
---@field Implementation TSubclassOf<UAISense_Blueprint>
UAISenseConfig_Blueprint = {}



---@class UAISenseConfig_Damage : UAISenseConfig
---@field Implementation TSubclassOf<UAISense_Damage>
UAISenseConfig_Damage = {}



---@class UAISenseConfig_Hearing : UAISenseConfig
---@field Implementation TSubclassOf<UAISense_Hearing>
---@field HearingRange float
---@field LoSHearingRange float
---@field bUseLoSHearing boolean
---@field DetectionByAffiliation FAISenseAffiliationFilter
UAISenseConfig_Hearing = {}



---@class UAISenseConfig_Prediction : UAISenseConfig
UAISenseConfig_Prediction = {}


---@class UAISenseConfig_Sight : UAISenseConfig
---@field Implementation TSubclassOf<UAISense_Sight>
---@field SightRadius float
---@field LoseSightRadius float
---@field PeripheralVisionAngleDegrees float
---@field DetectionByAffiliation FAISenseAffiliationFilter
---@field AutoSuccessRangeFromLastSeenLocation float
---@field PointOfViewBackwardOffset float
---@field NearClippingRadius float
UAISenseConfig_Sight = {}



---@class UAISenseConfig_Team : UAISenseConfig
UAISenseConfig_Team = {}


---@class UAISenseConfig_Touch : UAISenseConfig
UAISenseConfig_Touch = {}


---@class UAISenseEvent : UObject
UAISenseEvent = {}


---@class UAISenseEvent_Damage : UAISenseEvent
---@field Event FAIDamageEvent
UAISenseEvent_Damage = {}



---@class UAISenseEvent_Hearing : UAISenseEvent
---@field Event FAINoiseEvent
UAISenseEvent_Hearing = {}



---@class UAISense_Blueprint : UAISense
---@field ListenerDataType TSubclassOf<UUserDefinedStruct>
---@field ListenerContainer TArray<UAIPerceptionComponent>
---@field UnprocessedEvents TArray<UAISenseEvent>
UAISense_Blueprint = {}

---@param EventsToProcess TArray<UAISenseEvent>
---@return float
function UAISense_Blueprint:OnUpdate(EventsToProcess) end
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerUpdated(ActorListener, PerceptionComponent) end
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerUnregistered(ActorListener, PerceptionComponent) end
---@param ActorListener AActor
---@param PerceptionComponent UAIPerceptionComponent
function UAISense_Blueprint:OnListenerRegistered(ActorListener, PerceptionComponent) end
---@param NewPawn APawn
function UAISense_Blueprint:K2_OnNewPawn(NewPawn) end
---@param ListenerComponents TArray<UAIPerceptionComponent>
function UAISense_Blueprint:GetAllListenerComponents(ListenerComponents) end
---@param ListenerActors TArray<AActor>
function UAISense_Blueprint:GetAllListenerActors(ListenerActors) end


---@class UAISense_Damage : UAISense
---@field RegisteredEvents TArray<FAIDamageEvent>
UAISense_Damage = {}

---@param WorldContextObject UObject
---@param DamagedActor AActor
---@param Instigator AActor
---@param DamageAmount float
---@param EventLocation FVector
---@param HitLocation FVector
---@param Tag FName
function UAISense_Damage:ReportDamageEvent(WorldContextObject, DamagedActor, Instigator, DamageAmount, EventLocation, HitLocation, Tag) end


---@class UAISense_Hearing : UAISense
---@field NoiseEvents TArray<FAINoiseEvent>
---@field SpeedOfSoundSq float
UAISense_Hearing = {}

---@param WorldContextObject UObject
---@param NoiseLocation FVector
---@param Loudness float
---@param Instigator AActor
---@param MaxRange float
---@param Tag FName
function UAISense_Hearing:ReportNoiseEvent(WorldContextObject, NoiseLocation, Loudness, Instigator, MaxRange, Tag) end


---@class UAISense_Prediction : UAISense
---@field RegisteredEvents TArray<FAIPredictionEvent>
UAISense_Prediction = {}

---@param Requestor APawn
---@param PredictedActor AActor
---@param PredictionTime float
function UAISense_Prediction:RequestPawnPredictionEvent(Requestor, PredictedActor, PredictionTime) end
---@param Requestor AAIController
---@param PredictedActor AActor
---@param PredictionTime float
function UAISense_Prediction:RequestControllerPredictionEvent(Requestor, PredictedActor, PredictionTime) end


---@class UAISense_Sight : UAISense
---@field MaxTracesPerTick int32
---@field MinQueriesPerTimeSliceCheck int32
---@field MaxTimeSlicePerTick double
---@field HighImportanceQueryDistanceThreshold float
---@field MaxQueryImportance float
---@field SightLimitQueryImportance float
UAISense_Sight = {}



---@class UAISense_Team : UAISense
---@field RegisteredEvents TArray<FAITeamStimulusEvent>
UAISense_Team = {}



---@class UAISense_Touch : UAISense
---@field RegisteredEvents TArray<FAITouchEvent>
UAISense_Touch = {}

---@param WorldContextObject UObject
---@param TouchReceiver AActor
---@param OtherActor AActor
---@param Location FVector
function UAISense_Touch:ReportTouchEvent(WorldContextObject, TouchReceiver, OtherActor, Location) end


---@class UAISubsystem : UObject
---@field AISystem UAISystem
UAISubsystem = {}



---@class UAISystem : UAISystemBase
---@field PerceptionSystemClassName FSoftClassPath
---@field HotSpotManagerClassName FSoftClassPath
---@field EnvQueryManagerClassName FSoftClassPath
---@field AcceptanceRadius float
---@field PathfollowingRegularPathPointAcceptanceRadius float
---@field PathfollowingNavLinkAcceptanceRadius float
---@field bFinishMoveOnGoalOverlap boolean
---@field bAcceptPartialPaths boolean
---@field bAllowStrafing boolean
---@field bEnableBTAITasks boolean
---@field bAllowControllersAsEQSQuerier boolean
---@field bEnableDebuggerPlugin boolean
---@field bForgetStaleActors boolean
---@field bAddBlackboardSelfKey boolean
---@field bClearBBEntryOnBTEQSFail boolean
---@field DefaultSightCollisionChannel ECollisionChannel
---@field BehaviorTreeManager UBehaviorTreeManager
---@field EnvironmentQueryManager UEnvQueryManager
---@field PerceptionSystem UAIPerceptionSystem
---@field AllProxyObjects TArray<UAIAsyncTaskBlueprintProxy>
---@field HotSpotManager UAIHotSpotManager
---@field NavLocalGrids UNavLocalGridManager
UAISystem = {}

function UAISystem:AILoggingVerbose() end
function UAISystem:AIIgnorePlayers() end


---@class UAITask : UGameplayTask
---@field OwnerController AAIController
UAITask = {}



---@class UAITask_LockLogic : UAITask
UAITask_LockLogic = {}


---@class UAITask_MoveTo : UAITask
---@field OnRequestFailed FAITask_MoveToOnRequestFailed
---@field OnMoveFinished FAITask_MoveToOnMoveFinished
---@field MoveRequest FAIMoveRequest
UAITask_MoveTo = {}

---@param Controller AAIController
---@param GoalLocation FVector
---@param GoalActor AActor
---@param AcceptanceRadius float
---@param StopOnOverlap EAIOptionFlag::Type
---@param AcceptPartialPath EAIOptionFlag::Type
---@param bUsePathfinding boolean
---@param bLockAILogic boolean
---@param bUseContinuousGoalTracking boolean
---@param ProjectGoalOnNavigation EAIOptionFlag::Type
---@return UAITask_MoveTo
function UAITask_MoveTo:AIMoveTo(Controller, GoalLocation, GoalActor, AcceptanceRadius, StopOnOverlap, AcceptPartialPath, bUsePathfinding, bLockAILogic, bUseContinuousGoalTracking, ProjectGoalOnNavigation) end


---@class UAITask_RunEQS : UAITask
UAITask_RunEQS = {}

---@param Controller AAIController
---@param QueryTemplate UEnvQuery
---@return UAITask_RunEQS
function UAITask_RunEQS:RunEQS(Controller, QueryTemplate) end


---@class UBTAuxiliaryNode : UBTNode
UBTAuxiliaryNode = {}


---@class UBTCompositeNode : UBTNode
---@field Children TArray<FBTCompositeChild>
---@field Services TArray<UBTService>
---@field bApplyDecoratorScope boolean
UBTCompositeNode = {}



---@class UBTComposite_Selector : UBTCompositeNode
UBTComposite_Selector = {}


---@class UBTComposite_Sequence : UBTCompositeNode
UBTComposite_Sequence = {}


---@class UBTComposite_SimpleParallel : UBTCompositeNode
---@field FinishMode EBTParallelMode::Type
UBTComposite_SimpleParallel = {}



---@class UBTDecorator : UBTAuxiliaryNode
---@field bInverseCondition boolean
---@field FlowAbortMode EBTFlowAbortMode::Type
UBTDecorator = {}



---@class UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
---@field IntValue int32
---@field FloatValue float
---@field StringValue FString
---@field CachedDescription FString
---@field OperationType uint8
---@field NotifyObserver EBTBlackboardRestart::Type
UBTDecorator_Blackboard = {}



---@class UBTDecorator_BlackboardBase : UBTDecorator
---@field BlackboardKey FBlackboardKeySelector
UBTDecorator_BlackboardBase = {}



---@class UBTDecorator_BlueprintBase : UBTDecorator
---@field AIOwner AAIController
---@field ActorOwner AActor
---@field ObservedKeyNames TArray<FName>
---@field bShowPropertyDetails boolean
---@field bCheckConditionOnlyBlackBoardChanges boolean
---@field bIsObservingBB boolean
UBTDecorator_BlueprintBase = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTDecorator_BlueprintBase:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
---@param OwnerActor AActor
---@param DeltaSeconds float
function UBTDecorator_BlueprintBase:ReceiveTick(OwnerActor, DeltaSeconds) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveObserverDeactivatedAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveObserverDeactivated(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveObserverActivatedAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveObserverActivated(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTDecorator_BlueprintBase:ReceiveExecutionStartAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTDecorator_BlueprintBase:ReceiveExecutionStart(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param NodeResult EBTNodeResult::Type
function UBTDecorator_BlueprintBase:ReceiveExecutionFinishAI(OwnerController, ControlledPawn, NodeResult) end
---@param OwnerActor AActor
---@param NodeResult EBTNodeResult::Type
function UBTDecorator_BlueprintBase:ReceiveExecutionFinish(OwnerActor, NodeResult) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@return boolean
function UBTDecorator_BlueprintBase:PerformConditionCheckAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
---@return boolean
function UBTDecorator_BlueprintBase:PerformConditionCheck(OwnerActor) end
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorObserverActive() end
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorExecutionActive() end


---@class UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
---@field ActorToCheck FBlackboardKeySelector
---@field TagsToMatch EGameplayContainerMatchType
---@field GameplayTags FGameplayTagContainer
---@field CachedDescription FString
UBTDecorator_CheckGameplayTagsOnActor = {}



---@class UBTDecorator_CompareBBEntries : UBTDecorator
---@field Operator EBlackBoardEntryComparison::Type
---@field BlackboardKeyA FBlackboardKeySelector
---@field BlackboardKeyB FBlackboardKeySelector
UBTDecorator_CompareBBEntries = {}



---@class UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
UBTDecorator_ConditionalLoop = {}


---@class UBTDecorator_ConeCheck : UBTDecorator
---@field ConeHalfAngle float
---@field ConeOrigin FBlackboardKeySelector
---@field ConeDirection FBlackboardKeySelector
---@field Observed FBlackboardKeySelector
UBTDecorator_ConeCheck = {}



---@class UBTDecorator_Cooldown : UBTDecorator
---@field CoolDownTime float
UBTDecorator_Cooldown = {}



---@class UBTDecorator_DoesPathExist : UBTDecorator
---@field BlackboardKeyA FBlackboardKeySelector
---@field BlackboardKeyB FBlackboardKeySelector
---@field bUseSelf boolean
---@field PathQueryType EPathExistanceQueryType::Type
---@field FilterClass TSubclassOf<UNavigationQueryFilter>
UBTDecorator_DoesPathExist = {}



---@class UBTDecorator_ForceSuccess : UBTDecorator
UBTDecorator_ForceSuccess = {}


---@class UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
---@field AcceptableRadius float
---@field ParametrizedAcceptableRadius FAIDataProviderFloatValue
---@field GeometricDistanceType FAIDistanceType
---@field bUseParametrizedRadius boolean
---@field bUseNavAgentGoalLocation boolean
---@field bPathFindingBasedTest boolean
UBTDecorator_IsAtLocation = {}



---@class UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
---@field TestClass UClass
UBTDecorator_IsBBEntryOfClass = {}



---@class UBTDecorator_KeepInCone : UBTDecorator
---@field ConeHalfAngle float
---@field ConeOrigin FBlackboardKeySelector
---@field Observed FBlackboardKeySelector
---@field bUseSelfAsOrigin boolean
---@field bUseSelfAsObserved boolean
UBTDecorator_KeepInCone = {}



---@class UBTDecorator_Loop : UBTDecorator
---@field NumLoops int32
---@field bInfiniteLoop boolean
---@field InfiniteLoopTimeoutTime float
UBTDecorator_Loop = {}



---@class UBTDecorator_ReachedMoveGoal : UBTDecorator
UBTDecorator_ReachedMoveGoal = {}


---@class UBTDecorator_SetTagCooldown : UBTDecorator
---@field CooldownTag FGameplayTag
---@field CooldownDuration float
---@field bAddToExistingDuration boolean
UBTDecorator_SetTagCooldown = {}



---@class UBTDecorator_TagCooldown : UBTDecorator
---@field CooldownTag FGameplayTag
---@field CooldownDuration float
---@field bAddToExistingDuration boolean
---@field bActivatesCooldown boolean
UBTDecorator_TagCooldown = {}



---@class UBTDecorator_TimeLimit : UBTDecorator
---@field TimeLimit float
UBTDecorator_TimeLimit = {}



---@class UBTFunctionLibrary : UBlueprintFunctionLibrary
UBTFunctionLibrary = {}

---@param NodeOwner UBTNode
function UBTFunctionLibrary:StopUsingExternalEvent(NodeOwner) end
---@param NodeOwner UBTNode
---@param OwningActor AActor
function UBTFunctionLibrary:StartUsingExternalEvent(NodeOwner, OwningActor) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FVector
function UBTFunctionLibrary:SetBlackboardValueAsVector(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FString
function UBTFunctionLibrary:SetBlackboardValueAsString(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FRotator
function UBTFunctionLibrary:SetBlackboardValueAsRotator(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value UObject
function UBTFunctionLibrary:SetBlackboardValueAsObject(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value FName
function UBTFunctionLibrary:SetBlackboardValueAsName(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value int32
function UBTFunctionLibrary:SetBlackboardValueAsInt(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value float
function UBTFunctionLibrary:SetBlackboardValueAsFloat(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value uint8
function UBTFunctionLibrary:SetBlackboardValueAsEnum(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value UClass
function UBTFunctionLibrary:SetBlackboardValueAsClass(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@param Value boolean
function UBTFunctionLibrary:SetBlackboardValueAsBool(NodeOwner, Key, Value) end
---@param NodeOwner UBTNode
---@return UBlackboardComponent
function UBTFunctionLibrary:GetOwnersBlackboard(NodeOwner) end
---@param NodeOwner UBTNode
---@return UBehaviorTreeComponent
function UBTFunctionLibrary:GetOwnerComponent(NodeOwner) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FVector
function UBTFunctionLibrary:GetBlackboardValueAsVector(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FString
function UBTFunctionLibrary:GetBlackboardValueAsString(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FRotator
function UBTFunctionLibrary:GetBlackboardValueAsRotator(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return UObject
function UBTFunctionLibrary:GetBlackboardValueAsObject(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return FName
function UBTFunctionLibrary:GetBlackboardValueAsName(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return int32
function UBTFunctionLibrary:GetBlackboardValueAsInt(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return float
function UBTFunctionLibrary:GetBlackboardValueAsFloat(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return uint8
function UBTFunctionLibrary:GetBlackboardValueAsEnum(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return UClass
function UBTFunctionLibrary:GetBlackboardValueAsClass(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return boolean
function UBTFunctionLibrary:GetBlackboardValueAsBool(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
---@return AActor
function UBTFunctionLibrary:GetBlackboardValueAsActor(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
function UBTFunctionLibrary:ClearBlackboardValueAsVector(NodeOwner, Key) end
---@param NodeOwner UBTNode
---@param Key FBlackboardKeySelector
function UBTFunctionLibrary:ClearBlackboardValue(NodeOwner, Key) end


---@class UBTNode : UObject
---@field NodeName FString
---@field TreeAsset UBehaviorTree
---@field ParentNode UBTCompositeNode
UBTNode = {}



---@class UBTService : UBTAuxiliaryNode
---@field Interval float
---@field RandomDeviation float
---@field bCallTickOnSearchStart boolean
---@field bRestartTimerOnEachActivation boolean
UBTService = {}



---@class UBTService_BlackboardBase : UBTService
---@field BlackboardKey FBlackboardKeySelector
UBTService_BlackboardBase = {}



---@class UBTService_BlueprintBase : UBTService
---@field AIOwner AAIController
---@field ActorOwner AActor
---@field bShowPropertyDetails boolean
---@field bShowEventDetails boolean
UBTService_BlueprintBase = {}

---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTService_BlueprintBase:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
---@param OwnerActor AActor
---@param DeltaSeconds float
function UBTService_BlueprintBase:ReceiveTick(OwnerActor, DeltaSeconds) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveSearchStartAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveSearchStart(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveDeactivationAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveDeactivation(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTService_BlueprintBase:ReceiveActivationAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTService_BlueprintBase:ReceiveActivation(OwnerActor) end
---@return boolean
function UBTService_BlueprintBase:IsServiceActive() end


---@class UBTService_DefaultFocus : UBTService_BlackboardBase
---@field FocusPriority uint8
UBTService_DefaultFocus = {}



---@class UBTService_RunEQS : UBTService_BlackboardBase
---@field EQSRequest FEQSParametrizedQueryExecutionRequest
---@field bUpdateBBOnFail boolean
UBTService_RunEQS = {}



---@class UBTTaskNode : UBTNode
---@field Services TArray<UBTService>
---@field bIgnoreRestartSelf boolean
UBTTaskNode = {}



---@class UBTTask_BlackboardBase : UBTTaskNode
---@field BlackboardKey FBlackboardKeySelector
UBTTask_BlackboardBase = {}



---@class UBTTask_BlueprintBase : UBTTaskNode
---@field AIOwner AAIController
---@field ActorOwner AActor
---@field TickInterval FIntervalCountdown
---@field bShowPropertyDetails boolean
UBTTask_BlueprintBase = {}

---@param MessageName FName
---@param RequestID int32
function UBTTask_BlueprintBase:SetFinishOnMessageWithId(MessageName, RequestID) end
---@param MessageName FName
function UBTTask_BlueprintBase:SetFinishOnMessage(MessageName) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTTask_BlueprintBase:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
---@param OwnerActor AActor
---@param DeltaSeconds float
function UBTTask_BlueprintBase:ReceiveTick(OwnerActor, DeltaSeconds) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTTask_BlueprintBase:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTTask_BlueprintBase:ReceiveExecute(OwnerActor) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTTask_BlueprintBase:ReceiveAbortAI(OwnerController, ControlledPawn) end
---@param OwnerActor AActor
function UBTTask_BlueprintBase:ReceiveAbort(OwnerActor) end
---@return boolean
function UBTTask_BlueprintBase:IsTaskExecuting() end
---@return boolean
function UBTTask_BlueprintBase:IsTaskAborting() end
---@param bSuccess boolean
function UBTTask_BlueprintBase:FinishExecute(bSuccess) end
function UBTTask_BlueprintBase:FinishAbort() end


---@class UBTTask_FinishWithResult : UBTTaskNode
---@field Result EBTNodeResult::Type
UBTTask_FinishWithResult = {}



---@class UBTTask_GameplayTaskBase : UBTTaskNode
---@field bWaitForGameplayTask boolean
UBTTask_GameplayTaskBase = {}



---@class UBTTask_MakeNoise : UBTTaskNode
---@field Loudnes float
UBTTask_MakeNoise = {}



---@class UBTTask_MoveDirectlyToward : UBTTask_MoveTo
---@field bDisablePathUpdateOnGoalLocationChange boolean
---@field bProjectVectorGoalToNavigation boolean
---@field bUpdatedDeprecatedProperties boolean
UBTTask_MoveDirectlyToward = {}



---@class UBTTask_MoveTo : UBTTask_BlackboardBase
---@field AcceptableRadius float
---@field FilterClass TSubclassOf<UNavigationQueryFilter>
---@field ObservedBlackboardValueTolerance float
---@field bObserveBlackboardValue boolean
---@field bAllowStrafe boolean
---@field bAllowPartialPath boolean
---@field bTrackMovingGoal boolean
---@field bProjectGoalLocation boolean
---@field bReachTestIncludesAgentRadius boolean
---@field bReachTestIncludesGoalRadius boolean
---@field bStopOnOverlap boolean
---@field bStopOnOverlapNeedsUpdate boolean
UBTTask_MoveTo = {}



---@class UBTTask_PawnActionBase : UBTTaskNode
UBTTask_PawnActionBase = {}


---@class UBTTask_PlayAnimation : UBTTaskNode
---@field AnimationToPlay UAnimationAsset
---@field bLooping boolean
---@field bNonBlocking boolean
---@field MyOwnerComp UBehaviorTreeComponent
---@field CachedSkelMesh USkeletalMeshComponent
UBTTask_PlayAnimation = {}



---@class UBTTask_PlaySound : UBTTaskNode
---@field SoundToPlay USoundCue
UBTTask_PlaySound = {}



---@class UBTTask_PushPawnAction : UBTTask_PawnActionBase
---@field Action UPawnAction
UBTTask_PushPawnAction = {}



---@class UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
---@field Precision float
UBTTask_RotateToFaceBBEntry = {}



---@class UBTTask_RunBehavior : UBTTaskNode
---@field BehaviorAsset UBehaviorTree
UBTTask_RunBehavior = {}



---@class UBTTask_RunBehaviorDynamic : UBTTaskNode
---@field InjectionTag FGameplayTag
---@field DefaultBehaviorAsset UBehaviorTree
---@field BehaviorAsset UBehaviorTree
UBTTask_RunBehaviorDynamic = {}



---@class UBTTask_RunEQSQuery : UBTTask_BlackboardBase
---@field QueryTemplate UEnvQuery
---@field QueryParams TArray<FEnvNamedValue>
---@field QueryConfig TArray<FAIDynamicParam>
---@field RunMode EEnvQueryRunMode::Type
---@field EQSQueryBlackboardKey FBlackboardKeySelector
---@field bUseBBKey boolean
---@field EQSRequest FEQSParametrizedQueryExecutionRequest
---@field bUpdateBBOnFail boolean
UBTTask_RunEQSQuery = {}



---@class UBTTask_SetTagCooldown : UBTTaskNode
---@field CooldownTag FGameplayTag
---@field bAddToExistingDuration boolean
---@field CooldownDuration float
UBTTask_SetTagCooldown = {}



---@class UBTTask_Wait : UBTTaskNode
---@field WaitTime float
---@field RandomDeviation float
UBTTask_Wait = {}



---@class UBTTask_WaitBlackboardTime : UBTTask_Wait
---@field BlackboardKey FBlackboardKeySelector
UBTTask_WaitBlackboardTime = {}



---@class UBehaviorTree : UObject
---@field RootNode UBTCompositeNode
---@field BlackboardAsset UBlackboardData
---@field RootDecorators TArray<UBTDecorator>
---@field RootDecoratorOps TArray<FBTDecoratorLogic>
UBehaviorTree = {}



---@class UBehaviorTreeComponent : UBrainComponent
---@field NodeInstances TArray<UBTNode>
---@field DefaultBehaviorTreeAsset UBehaviorTree
UBehaviorTreeComponent = {}

---@param InjectTag FGameplayTag
---@param BehaviorAsset UBehaviorTree
function UBehaviorTreeComponent:SetDynamicSubtree(InjectTag, BehaviorAsset) end
---@param CooldownTag FGameplayTag
---@return float
function UBehaviorTreeComponent:GetTagCooldownEndTime(CooldownTag) end
---@param CooldownTag FGameplayTag
---@param CooldownDuration float
---@param bAddToExistingDuration boolean
function UBehaviorTreeComponent:AddCooldownTagDuration(CooldownTag, CooldownDuration, bAddToExistingDuration) end


---@class UBehaviorTreeManager : UObject
---@field MaxDebuggerSteps int32
---@field LoadedTemplates TArray<FBehaviorTreeTemplateInfo>
---@field ActiveComponents TArray<UBehaviorTreeComponent>
UBehaviorTreeManager = {}



---@class UBehaviorTreeTypes : UObject
UBehaviorTreeTypes = {}


---@class UBlackboardComponent : UActorComponent
---@field BrainComp UBrainComponent
---@field DefaultBlackboardAsset UBlackboardData
---@field BlackboardAsset UBlackboardData
---@field KeyInstances TArray<UBlackboardKeyType>
UBlackboardComponent = {}

---@param KeyName FName
---@param VectorValue FVector
function UBlackboardComponent:SetValueAsVector(KeyName, VectorValue) end
---@param KeyName FName
---@param StringValue FString
function UBlackboardComponent:SetValueAsString(KeyName, StringValue) end
---@param KeyName FName
---@param VectorValue FRotator
function UBlackboardComponent:SetValueAsRotator(KeyName, VectorValue) end
---@param KeyName FName
---@param ObjectValue UObject
function UBlackboardComponent:SetValueAsObject(KeyName, ObjectValue) end
---@param KeyName FName
---@param NameValue FName
function UBlackboardComponent:SetValueAsName(KeyName, NameValue) end
---@param KeyName FName
---@param IntValue int32
function UBlackboardComponent:SetValueAsInt(KeyName, IntValue) end
---@param KeyName FName
---@param FloatValue float
function UBlackboardComponent:SetValueAsFloat(KeyName, FloatValue) end
---@param KeyName FName
---@param EnumValue uint8
function UBlackboardComponent:SetValueAsEnum(KeyName, EnumValue) end
---@param KeyName FName
---@param ClassValue UClass
function UBlackboardComponent:SetValueAsClass(KeyName, ClassValue) end
---@param KeyName FName
---@param BoolValue boolean
function UBlackboardComponent:SetValueAsBool(KeyName, BoolValue) end
---@param KeyName FName
---@return boolean
function UBlackboardComponent:IsVectorValueSet(KeyName) end
---@param KeyName FName
---@return FVector
function UBlackboardComponent:GetValueAsVector(KeyName) end
---@param KeyName FName
---@return FString
function UBlackboardComponent:GetValueAsString(KeyName) end
---@param KeyName FName
---@return FRotator
function UBlackboardComponent:GetValueAsRotator(KeyName) end
---@param KeyName FName
---@return UObject
function UBlackboardComponent:GetValueAsObject(KeyName) end
---@param KeyName FName
---@return FName
function UBlackboardComponent:GetValueAsName(KeyName) end
---@param KeyName FName
---@return int32
function UBlackboardComponent:GetValueAsInt(KeyName) end
---@param KeyName FName
---@return float
function UBlackboardComponent:GetValueAsFloat(KeyName) end
---@param KeyName FName
---@return uint8
function UBlackboardComponent:GetValueAsEnum(KeyName) end
---@param KeyName FName
---@return UClass
function UBlackboardComponent:GetValueAsClass(KeyName) end
---@param KeyName FName
---@return boolean
function UBlackboardComponent:GetValueAsBool(KeyName) end
---@param KeyName FName
---@param ResultRotation FRotator
---@return boolean
function UBlackboardComponent:GetRotationFromEntry(KeyName, ResultRotation) end
---@param KeyName FName
---@param ResultLocation FVector
---@return boolean
function UBlackboardComponent:GetLocationFromEntry(KeyName, ResultLocation) end
---@param KeyName FName
function UBlackboardComponent:ClearValue(KeyName) end


---@class UBlackboardData : UDataAsset
---@field Parent UBlackboardData
---@field Keys TArray<FBlackboardEntry>
---@field bHasSynchronizedKeys boolean
UBlackboardData = {}



---@class UBlackboardKeyType : UObject
UBlackboardKeyType = {}


---@class UBlackboardKeyType_Bool : UBlackboardKeyType
UBlackboardKeyType_Bool = {}


---@class UBlackboardKeyType_Class : UBlackboardKeyType
---@field BaseClass TObjectPtr<UClass>
UBlackboardKeyType_Class = {}



---@class UBlackboardKeyType_Enum : UBlackboardKeyType
---@field EnumType UEnum
---@field EnumName FString
---@field bIsEnumNameValid boolean
UBlackboardKeyType_Enum = {}



---@class UBlackboardKeyType_Float : UBlackboardKeyType
UBlackboardKeyType_Float = {}


---@class UBlackboardKeyType_Int : UBlackboardKeyType
UBlackboardKeyType_Int = {}


---@class UBlackboardKeyType_Name : UBlackboardKeyType
UBlackboardKeyType_Name = {}


---@class UBlackboardKeyType_NativeEnum : UBlackboardKeyType
---@field EnumName FString
---@field EnumType UEnum
UBlackboardKeyType_NativeEnum = {}



---@class UBlackboardKeyType_Object : UBlackboardKeyType
---@field BaseClass TObjectPtr<UClass>
UBlackboardKeyType_Object = {}



---@class UBlackboardKeyType_Rotator : UBlackboardKeyType
UBlackboardKeyType_Rotator = {}


---@class UBlackboardKeyType_String : UBlackboardKeyType
---@field StringValue FString
UBlackboardKeyType_String = {}



---@class UBlackboardKeyType_Vector : UBlackboardKeyType
UBlackboardKeyType_Vector = {}


---@class UBrainComponent : UActorComponent
---@field BlackboardComp UBlackboardComponent
---@field AIOwner AAIController
UBrainComponent = {}

---@param Reason FString
function UBrainComponent:StopLogic(Reason) end
function UBrainComponent:StartLogic() end
function UBrainComponent:RestartLogic() end
---@return boolean
function UBrainComponent:IsRunning() end
---@return boolean
function UBrainComponent:IsPaused() end


---@class UCrowdFollowingComponent : UPathFollowingComponent
---@field CrowdAgentMoveDirection FVector
UCrowdFollowingComponent = {}

---@param bSuspend boolean
function UCrowdFollowingComponent:SuspendCrowdSteering(bSuspend) end


---@class UCrowdManager : UCrowdManagerBase
---@field MyNavData ANavigationData
---@field AvoidanceConfig TArray<FCrowdAvoidanceConfig>
---@field SamplingPatterns TArray<FCrowdAvoidanceSamplingPattern>
---@field MaxAgents int32
---@field MaxAgentRadius float
---@field MaxAvoidedAgents int32
---@field MaxAvoidedWalls int32
---@field NavmeshCheckInterval float
---@field PathOptimizationInterval float
---@field SeparationDirClamp float
---@field PathOffsetRadiusMultiplier float
---@field bResolveCollisions boolean
UCrowdManager = {}



---@class UEQSRenderingComponent : UDebugDrawComponent
UEQSRenderingComponent = {}


---@class UEnvQuery : UDataAsset
---@field QueryName FName
---@field Options TArray<UEnvQueryOption>
UEnvQuery = {}



---@class UEnvQueryContext : UObject
UEnvQueryContext = {}


---@class UEnvQueryContext_BlueprintBase : UEnvQueryContext
UEnvQueryContext_BlueprintBase = {}

---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingLocation FVector
function UEnvQueryContext_BlueprintBase:ProvideSingleLocation(QuerierObject, QuerierActor, ResultingLocation) end
---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingActor AActor
function UEnvQueryContext_BlueprintBase:ProvideSingleActor(QuerierObject, QuerierActor, ResultingActor) end
---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingLocationSet TArray<FVector>
function UEnvQueryContext_BlueprintBase:ProvideLocationsSet(QuerierObject, QuerierActor, ResultingLocationSet) end
---@param QuerierObject UObject
---@param QuerierActor AActor
---@param ResultingActorsSet TArray<AActor>
function UEnvQueryContext_BlueprintBase:ProvideActorsSet(QuerierObject, QuerierActor, ResultingActorsSet) end


---@class UEnvQueryContext_Item : UEnvQueryContext
UEnvQueryContext_Item = {}


---@class UEnvQueryContext_Querier : UEnvQueryContext
UEnvQueryContext_Querier = {}


---@class UEnvQueryDebugHelpers : UObject
UEnvQueryDebugHelpers = {}


---@class UEnvQueryGenerator : UEnvQueryNode
---@field OptionName FString
---@field ItemType TSubclassOf<UEnvQueryItemType>
---@field bAutoSortTests boolean
UEnvQueryGenerator = {}



---@class UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
---@field SearchedActorClass TSubclassOf<AActor>
---@field GenerateOnlyActorsInRadius FAIDataProviderBoolValue
---@field SearchRadius FAIDataProviderFloatValue
---@field SearchCenter TSubclassOf<UEnvQueryContext>
UEnvQueryGenerator_ActorsOfClass = {}



---@class UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
---@field GeneratorsActionDescription FText
---@field Context TSubclassOf<UEnvQueryContext>
---@field GeneratedItemType TSubclassOf<UEnvQueryItemType>
UEnvQueryGenerator_BlueprintBase = {}

---@return UObject
function UEnvQueryGenerator_BlueprintBase:GetQuerier() end
---@param ContextActors TArray<AActor>
function UEnvQueryGenerator_BlueprintBase:DoItemGenerationFromActors(ContextActors) end
---@param ContextLocations TArray<FVector>
function UEnvQueryGenerator_BlueprintBase:DoItemGeneration(ContextLocations) end
---@param GeneratedVector FVector
function UEnvQueryGenerator_BlueprintBase:AddGeneratedVector(GeneratedVector) end
---@param GeneratedActor AActor
function UEnvQueryGenerator_BlueprintBase:AddGeneratedActor(GeneratedActor) end


---@class UEnvQueryGenerator_Composite : UEnvQueryGenerator
---@field Generators TArray<UEnvQueryGenerator>
---@field bAllowDifferentItemTypes boolean
---@field bHasMatchingItemType boolean
---@field ForcedItemType TSubclassOf<UEnvQueryItemType>
UEnvQueryGenerator_Composite = {}



---@class UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
---@field AlignedPointsDistance FAIDataProviderFloatValue
---@field ConeDegrees FAIDataProviderFloatValue
---@field AngleStep FAIDataProviderFloatValue
---@field Range FAIDataProviderFloatValue
---@field CenterActor TSubclassOf<UEnvQueryContext>
---@field bIncludeContextLocation boolean
UEnvQueryGenerator_Cone = {}



---@class UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
---@field QueryContext TSubclassOf<UEnvQueryContext>
UEnvQueryGenerator_CurrentLocation = {}



---@class UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
---@field InnerRadius FAIDataProviderFloatValue
---@field OuterRadius FAIDataProviderFloatValue
---@field NumberOfRings FAIDataProviderIntValue
---@field PointsPerRing FAIDataProviderIntValue
---@field ArcDirection FEnvDirection
---@field ArcAngle FAIDataProviderFloatValue
---@field bUseSpiralPattern boolean
---@field Center TSubclassOf<UEnvQueryContext>
---@field bDefineArc boolean
UEnvQueryGenerator_Donut = {}



---@class UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
---@field CircleRadius FAIDataProviderFloatValue
---@field SpaceBetween FAIDataProviderFloatValue
---@field NumberOfPoints FAIDataProviderIntValue
---@field PointOnCircleSpacingMethod EPointOnCircleSpacingMethod
---@field ArcDirection FEnvDirection
---@field ArcAngle FAIDataProviderFloatValue
---@field AngleRadians float
---@field CircleCenter TSubclassOf<UEnvQueryContext>
---@field bIgnoreAnyContextActorsWhenGeneratingCircle boolean
---@field CircleCenterZOffset FAIDataProviderFloatValue
---@field TraceData FEnvTraceData
---@field bDefineArc boolean
UEnvQueryGenerator_OnCircle = {}



---@class UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
---@field PathToItem FAIDataProviderBoolValue
---@field NavigationFilter TSubclassOf<UNavigationQueryFilter>
---@field ScanRangeMultiplier FAIDataProviderFloatValue
UEnvQueryGenerator_PathingGrid = {}



---@class UEnvQueryGenerator_PerceivedActors : UEnvQueryGenerator
---@field AllowedActorClass TSubclassOf<AActor>
---@field SearchRadius FAIDataProviderFloatValue
---@field ListenerContext TSubclassOf<UEnvQueryContext>
---@field SenseToUse TSubclassOf<UAISense>
---@field bIncludeKnownActors boolean
UEnvQueryGenerator_PerceivedActors = {}



---@class UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
---@field ProjectionData FEnvTraceData
UEnvQueryGenerator_ProjectedPoints = {}



---@class UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
---@field GridSize FAIDataProviderFloatValue
---@field SpaceBetween FAIDataProviderFloatValue
---@field GenerateAround TSubclassOf<UEnvQueryContext>
UEnvQueryGenerator_SimpleGrid = {}



---@class UEnvQueryInstanceBlueprintWrapper : UObject
---@field QueryID int32
---@field ItemType TSubclassOf<UEnvQueryItemType>
---@field OptionIndex int32
---@field OnQueryFinishedEvent FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent
UEnvQueryInstanceBlueprintWrapper = {}

---@param ParamName FName
---@param Value float
function UEnvQueryInstanceBlueprintWrapper:SetNamedParam(ParamName, Value) end
---@return TArray<FVector>
function UEnvQueryInstanceBlueprintWrapper:GetResultsAsLocations() end
---@return TArray<AActor>
function UEnvQueryInstanceBlueprintWrapper:GetResultsAsActors() end
---@param ResultLocations TArray<FVector>
---@return boolean
function UEnvQueryInstanceBlueprintWrapper:GetQueryResultsAsLocations(ResultLocations) end
---@param ResultActors TArray<AActor>
---@return boolean
function UEnvQueryInstanceBlueprintWrapper:GetQueryResultsAsActors(ResultActors) end
---@param ItemIndex int32
---@return float
function UEnvQueryInstanceBlueprintWrapper:GetItemScore(ItemIndex) end
---@param QueryInstance UEnvQueryInstanceBlueprintWrapper
---@param QueryStatus EEnvQueryStatus::Type
function UEnvQueryInstanceBlueprintWrapper:EQSQueryDoneSignature__DelegateSignature(QueryInstance, QueryStatus) end


---@class UEnvQueryItemType : UObject
UEnvQueryItemType = {}


---@class UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
UEnvQueryItemType_Actor = {}


---@class UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
UEnvQueryItemType_ActorBase = {}


---@class UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
UEnvQueryItemType_Direction = {}


---@class UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
UEnvQueryItemType_Point = {}


---@class UEnvQueryItemType_VectorBase : UEnvQueryItemType
UEnvQueryItemType_VectorBase = {}


---@class UEnvQueryManager : UAISubsystem
---@field InstanceCache TArray<FEnvQueryInstanceCache>
---@field LocalContexts TArray<UEnvQueryContext>
---@field GCShieldedWrappers TArray<UEnvQueryInstanceBlueprintWrapper>
---@field MaxAllowedTestingTime float
---@field bTestQueriesUsingBreadth boolean
---@field QueryCountWarningThreshold int32
---@field QueryCountWarningInterval double
---@field ExecutionTimeWarningSeconds double
---@field HandlingResultTimeWarningSeconds double
---@field GenerationTimeWarningSeconds double
UEnvQueryManager = {}

---@param WorldContextObject UObject
---@param QueryTemplate UEnvQuery
---@param Querier UObject
---@param RunMode EEnvQueryRunMode::Type
---@param WrapperClass TSubclassOf<UEnvQueryInstanceBlueprintWrapper>
---@return UEnvQueryInstanceBlueprintWrapper
function UEnvQueryManager:RunEQSQuery(WorldContextObject, QueryTemplate, Querier, RunMode, WrapperClass) end


---@class UEnvQueryNode : UObject
---@field VerNum int32
UEnvQueryNode = {}



---@class UEnvQueryOption : UObject
---@field Generator UEnvQueryGenerator
---@field Tests TArray<UEnvQueryTest>
UEnvQueryOption = {}



---@class UEnvQueryTest : UEnvQueryNode
---@field TestOrder int32
---@field TestPurpose EEnvTestPurpose::Type
---@field TestComment FString
---@field MultipleContextFilterOp EEnvTestFilterOperator::Type
---@field MultipleContextScoreOp EEnvTestScoreOperator::Type
---@field FilterType EEnvTestFilterType::Type
---@field BoolValue FAIDataProviderBoolValue
---@field FloatValueMin FAIDataProviderFloatValue
---@field FloatValueMax FAIDataProviderFloatValue
---@field ScoringEquation EEnvTestScoreEquation::Type
---@field ClampMinType EEnvQueryTestClamping::Type
---@field ClampMaxType EEnvQueryTestClamping::Type
---@field NormalizationType EEQSNormalizationType
---@field ScoreClampMin FAIDataProviderFloatValue
---@field ScoreClampMax FAIDataProviderFloatValue
---@field ScoringFactor FAIDataProviderFloatValue
---@field ReferenceValue FAIDataProviderFloatValue
---@field bDefineReferenceValue boolean
---@field bWorkOnFloatValues boolean
UEnvQueryTest = {}



---@class UEnvQueryTest_Distance : UEnvQueryTest
---@field TestMode EEnvTestDistance::Type
---@field DistanceTo TSubclassOf<UEnvQueryContext>
UEnvQueryTest_Distance = {}



---@class UEnvQueryTest_Dot : UEnvQueryTest
---@field LineA FEnvDirection
---@field LineB FEnvDirection
---@field TestMode EEnvTestDot
---@field bAbsoluteValue boolean
UEnvQueryTest_Dot = {}



---@class UEnvQueryTest_GameplayTags : UEnvQueryTest
---@field TagQueryToMatch FGameplayTagQuery
---@field bRejectIncompatibleItems boolean
---@field bUpdatedToUseQuery boolean
---@field TagsToMatch EGameplayContainerMatchType
---@field GameplayTags FGameplayTagContainer
UEnvQueryTest_GameplayTags = {}



---@class UEnvQueryTest_Overlap : UEnvQueryTest
---@field OverlapData FEnvOverlapData
UEnvQueryTest_Overlap = {}



---@class UEnvQueryTest_Pathfinding : UEnvQueryTest
---@field TestMode EEnvTestPathfinding::Type
---@field Context TSubclassOf<UEnvQueryContext>
---@field PathFromContext FAIDataProviderBoolValue
---@field SkipUnreachable FAIDataProviderBoolValue
---@field FilterClass TSubclassOf<UNavigationQueryFilter>
UEnvQueryTest_Pathfinding = {}



---@class UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
---@field ScanRangeMultiplier FAIDataProviderFloatValue
UEnvQueryTest_PathfindingBatch = {}



---@class UEnvQueryTest_Project : UEnvQueryTest
---@field ProjectionData FEnvTraceData
UEnvQueryTest_Project = {}



---@class UEnvQueryTest_Random : UEnvQueryTest
UEnvQueryTest_Random = {}


---@class UEnvQueryTest_Trace : UEnvQueryTest
---@field TraceData FEnvTraceData
---@field TraceFromContext FAIDataProviderBoolValue
---@field ItemHeightOffset FAIDataProviderFloatValue
---@field ContextHeightOffset FAIDataProviderFloatValue
---@field Context TSubclassOf<UEnvQueryContext>
UEnvQueryTest_Trace = {}



---@class UEnvQueryTest_Volume : UEnvQueryTest
---@field VolumeContext TSubclassOf<UEnvQueryContext>
---@field VolumeClass TSubclassOf<AVolume>
---@field bDoComplexVolumeTest boolean
UEnvQueryTest_Volume = {}



---@class UEnvQueryTypes : UObject
UEnvQueryTypes = {}


---@class UGridPathFollowingComponent : UPathFollowingComponent
---@field GridManager UNavLocalGridManager
UGridPathFollowingComponent = {}



---@class UNavFilter_AIControllerDefault : UNavigationQueryFilter
UNavFilter_AIControllerDefault = {}


---@class UNavLocalGridManager : UObject
UNavLocalGridManager = {}

---@param WorldContextObject UObject
---@param CellSize float
---@return boolean
function UNavLocalGridManager:SetLocalNavigationGridDensity(WorldContextObject, CellSize) end
---@param WorldContextObject UObject
---@param GridId int32
---@param bRebuildGrids boolean
function UNavLocalGridManager:RemoveLocalNavigationGrid(WorldContextObject, GridId, bRebuildGrids) end
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param PathPoints TArray<FVector>
---@return boolean
function UNavLocalGridManager:FindLocalNavigationGridPath(WorldContextObject, Start, End, PathPoints) end
---@param WorldContextObject UObject
---@param Locations TArray<FVector>
---@param Radius2D int32
---@param Height float
---@param bRebuildGrids boolean
---@return int32
function UNavLocalGridManager:AddLocalNavigationGridForPoints(WorldContextObject, Locations, Radius2D, Height, bRebuildGrids) end
---@param WorldContextObject UObject
---@param Location FVector
---@param Radius2D int32
---@param Height float
---@param bRebuildGrids boolean
---@return int32
function UNavLocalGridManager:AddLocalNavigationGridForPoint(WorldContextObject, Location, Radius2D, Height, bRebuildGrids) end
---@param WorldContextObject UObject
---@param Location FVector
---@param CapsuleRadius float
---@param CapsuleHalfHeight float
---@param Radius2D int32
---@param Height float
---@param bRebuildGrids boolean
---@return int32
function UNavLocalGridManager:AddLocalNavigationGridForCapsule(WorldContextObject, Location, CapsuleRadius, CapsuleHalfHeight, Radius2D, Height, bRebuildGrids) end
---@param WorldContextObject UObject
---@param Location FVector
---@param Extent FVector
---@param Rotation FRotator
---@param Radius2D int32
---@param Height float
---@param bRebuildGrids boolean
---@return int32
function UNavLocalGridManager:AddLocalNavigationGridForBox(WorldContextObject, Location, Extent, Rotation, Radius2D, Height, bRebuildGrids) end


---@class UPathFollowingComponent : UActorComponent
---@field MovementComp UNavMovementComponent
---@field MyNavData ANavigationData
UPathFollowingComponent = {}

---@param NavData ANavigationData
function UPathFollowingComponent:OnNavDataRegistered(NavData) end
---@param SelfActor AActor
---@param OtherActor AActor
---@param NormalImpulse FVector
---@param Hit FHitResult
function UPathFollowingComponent:OnActorBump(SelfActor, OtherActor, NormalImpulse, Hit) end
---@return FVector
function UPathFollowingComponent:GetPathDestination() end
---@return EPathFollowingAction::Type
function UPathFollowingComponent:GetPathActionType() end


---@class UPathFollowingManager : UObject
UPathFollowingManager = {}


---@class UPawnAction : UObject
---@field ChildAction UPawnAction
---@field ParentAction UPawnAction
---@field OwnerComponent UPawnActionsComponent
---@field Instigator UObject
---@field BrainComp UBrainComponent
---@field bAllowNewSameClassInstance boolean
---@field bReplaceActiveSameClassInstance boolean
---@field bShouldPauseMovement boolean
---@field bAlwaysNotifyOnFinished boolean
UPawnAction = {}

---@return EAIRequestPriority::Type
function UPawnAction:GetActionPriority() end
---@param WithResult EPawnActionResult::Type
function UPawnAction:Finish(WithResult) end
---@param WorldContextObject UObject
---@param ActionClass TSubclassOf<UPawnAction>
---@return UPawnAction
function UPawnAction:CreateActionInstance(WorldContextObject, ActionClass) end


---@class UPawnAction_BlueprintBase : UPawnAction
UPawnAction_BlueprintBase = {}

---@param ControlledPawn APawn
---@param DeltaSeconds float
function UPawnAction_BlueprintBase:ActionTick(ControlledPawn, DeltaSeconds) end
---@param ControlledPawn APawn
function UPawnAction_BlueprintBase:ActionStart(ControlledPawn) end
---@param ControlledPawn APawn
function UPawnAction_BlueprintBase:ActionResume(ControlledPawn) end
---@param ControlledPawn APawn
function UPawnAction_BlueprintBase:ActionPause(ControlledPawn) end
---@param ControlledPawn APawn
---@param WithResult EPawnActionResult::Type
function UPawnAction_BlueprintBase:ActionFinished(ControlledPawn, WithResult) end


---@class UPawnAction_Move : UPawnAction
---@field GoalActor AActor
---@field GoalLocation FVector
---@field AcceptableRadius float
---@field FilterClass TSubclassOf<UNavigationQueryFilter>
---@field bAllowStrafe boolean
---@field bFinishOnOverlap boolean
---@field bUsePathfinding boolean
---@field bAllowPartialPath boolean
---@field bProjectGoalToNavigation boolean
---@field bUpdatePathToGoal boolean
---@field bAbortSubActionOnPathChange boolean
UPawnAction_Move = {}



---@class UPawnAction_Repeat : UPawnAction
---@field ActionToRepeat UPawnAction
---@field RecentActionCopy UPawnAction
---@field ChildFailureHandlingMode EPawnActionFailHandling::Type
UPawnAction_Repeat = {}



---@class UPawnAction_Sequence : UPawnAction
---@field ActionSequence TArray<UPawnAction>
---@field ChildFailureHandlingMode EPawnActionFailHandling::Type
---@field RecentActionCopy UPawnAction
UPawnAction_Sequence = {}



---@class UPawnAction_Wait : UPawnAction
---@field TimeToWait float
UPawnAction_Wait = {}



---@class UPawnActionsComponent : UActorComponent
---@field ControlledPawn APawn
---@field ActionStacks TArray<FPawnActionStack>
---@field ActionEvents TArray<FPawnActionEvent>
---@field CurrentAction UPawnAction
UPawnActionsComponent = {}

---@param NewAction UPawnAction
---@param Priority EAIRequestPriority::Type
---@param Instigator UObject
---@return boolean
function UPawnActionsComponent:K2_PushAction(NewAction, Priority, Instigator) end
---@param Pawn APawn
---@param Action UPawnAction
---@param Priority EAIRequestPriority::Type
---@return boolean
function UPawnActionsComponent:K2_PerformAction(Pawn, Action, Priority) end
---@param ActionToAbort UPawnAction
---@return EPawnActionAbortState::Type
function UPawnActionsComponent:K2_ForceAbortAction(ActionToAbort) end
---@param ActionToAbort UPawnAction
---@return EPawnActionAbortState::Type
function UPawnActionsComponent:K2_AbortAction(ActionToAbort) end


---@class UPawnSensingComponent : UActorComponent
---@field HearingThreshold float
---@field LOSHearingThreshold float
---@field SightRadius float
---@field SensingInterval float
---@field HearingMaxSoundAge float
---@field bEnableSensingUpdates boolean
---@field bOnlySensePlayers boolean
---@field bSeePawns boolean
---@field bHearNoises boolean
---@field OnSeePawn FPawnSensingComponentOnSeePawn
---@field OnHearNoise FPawnSensingComponentOnHearNoise
---@field PeripheralVisionAngle float
---@field PeripheralVisionCosine float
UPawnSensingComponent = {}

---@param bEnabled boolean
function UPawnSensingComponent:SetSensingUpdatesEnabled(bEnabled) end
---@param NewSensingInterval float
function UPawnSensingComponent:SetSensingInterval(NewSensingInterval) end
---@param NewPeripheralVisionAngle float
function UPawnSensingComponent:SetPeripheralVisionAngle(NewPeripheralVisionAngle) end
---@param Pawn APawn
function UPawnSensingComponent:SeePawnDelegate__DelegateSignature(Pawn) end
---@param Instigator APawn
---@param Location FVector
---@param Volume float
function UPawnSensingComponent:HearNoiseDelegate__DelegateSignature(Instigator, Location, Volume) end
---@return float
function UPawnSensingComponent:GetPeripheralVisionCosine() end
---@return float
function UPawnSensingComponent:GetPeripheralVisionAngle() end


---@class UVisualLoggerExtension : UObject
UVisualLoggerExtension = {}


