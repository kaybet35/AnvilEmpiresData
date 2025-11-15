---@meta

---@class FActorForWorldTransforms
---@field Actor TWeakObjectPtr<AActor>
---@field Component TWeakObjectPtr<USceneComponent>
---@field SocketName FName
local FActorForWorldTransforms = {}



---@class FEasingComponentData
---@field Section UMovieSceneSection
local FEasingComponentData = {}



---@class FGeneratedMovieSceneKeyStruct
local FGeneratedMovieSceneKeyStruct = {}


---@class FMovieSceneAudioTriggerChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field Values TArray<boolean>
local FMovieSceneAudioTriggerChannel = {}



---@class FMovieSceneBinding
---@field ObjectGuid FGuid
---@field BindingName FString
---@field Tracks TArray<UMovieSceneTrack>
local FMovieSceneBinding = {}



---@class FMovieSceneBindingOverrideData
---@field ObjectBindingID FMovieSceneObjectBindingID
---@field Object TSoftObjectPtr<UObject>
---@field bOverridesDefault boolean
local FMovieSceneBindingOverrideData = {}



---@class FMovieSceneBindingProxy
---@field BindingId FGuid
---@field Sequence UMovieSceneSequence
local FMovieSceneBindingProxy = {}



---@class FMovieSceneBoolChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue boolean
---@field bHasDefaultValue boolean
---@field Values TArray<boolean>
local FMovieSceneBoolChannel = {}



---@class FMovieSceneByteChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue uint8
---@field bHasDefaultValue boolean
---@field Values TArray<uint8>
---@field Enum UEnum
local FMovieSceneByteChannel = {}



---@class FMovieSceneChannel
local FMovieSceneChannel = {}


---@class FMovieSceneCompiledSequenceFlagStruct
---@field bParentSequenceRequiresLowerFence boolean
---@field bParentSequenceRequiresUpperFence boolean
local FMovieSceneCompiledSequenceFlagStruct = {}



---@class FMovieSceneDeterminismData
---@field Fences TArray<FFrameTime>
---@field bParentSequenceRequiresLowerFence boolean
---@field bParentSequenceRequiresUpperFence boolean
local FMovieSceneDeterminismData = {}



---@class FMovieSceneDoubleChannel : FMovieSceneChannel
---@field PreInfinityExtrap ERichCurveExtrapolation
---@field PostInfinityExtrap ERichCurveExtrapolation
---@field Times TArray<FFrameNumber>
---@field Values TArray<FMovieSceneDoubleValue>
---@field DefaultValue double
---@field bHasDefaultValue boolean
---@field KeyHandles FMovieSceneKeyHandleMap
---@field TickResolution FFrameRate
local FMovieSceneDoubleChannel = {}



---@class FMovieSceneDoubleValue
---@field Value double
---@field Tangent FMovieSceneTangentData
---@field InterpMode ERichCurveInterpMode
---@field TangentMode ERichCurveTangentMode
---@field PaddingByte uint8
local FMovieSceneDoubleValue = {}



---@class FMovieSceneEasingSettings
---@field AutoEaseInDuration int32
---@field AutoEaseOutDuration int32
---@field EaseIn TScriptInterface<IMovieSceneEasingFunction>
---@field bManualEaseIn boolean
---@field ManualEaseInDuration int32
---@field EaseOut TScriptInterface<IMovieSceneEasingFunction>
---@field bManualEaseOut boolean
---@field ManualEaseOutDuration int32
local FMovieSceneEasingSettings = {}



---@class FMovieSceneEditorData
---@field ExpansionStates TMap<FString, FMovieSceneExpansionState>
---@field PinnedNodes TArray<FString>
---@field ViewStart double
---@field ViewEnd double
---@field WorkStart double
---@field WorkEnd double
---@field MarkedFrames TSet<FFrameNumber>
---@field WorkingRange FFloatRange
---@field ViewRange FFloatRange
local FMovieSceneEditorData = {}



---@class FMovieSceneEmptyStruct
local FMovieSceneEmptyStruct = {}


---@class FMovieSceneEntityComponentField
---@field PersistentEntityTree FMovieSceneEvaluationFieldEntityTree
---@field OneShotEntityTree FMovieSceneEvaluationFieldEntityTree
---@field Entities TArray<FMovieSceneEvaluationFieldEntity>
---@field EntityMetaData TArray<FMovieSceneEvaluationFieldEntityMetaData>
---@field SharedMetaData TArray<FMovieSceneEvaluationFieldSharedEntityMetaData>
local FMovieSceneEntityComponentField = {}



---@class FMovieSceneEntitySystemGraph
---@field Nodes FMovieSceneEntitySystemGraphNodes
local FMovieSceneEntitySystemGraph = {}



---@class FMovieSceneEntitySystemGraphNode
---@field System UMovieSceneEntitySystem
local FMovieSceneEntitySystemGraphNode = {}



---@class FMovieSceneEntitySystemGraphNodes
local FMovieSceneEntitySystemGraphNodes = {}


---@class FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
---@field CompletionMode EMovieSceneCompletionMode
---@field SourceSectionPtr TWeakObjectPtr<UMovieSceneSection>
local FMovieSceneEvalTemplate = {}



---@class FMovieSceneEvalTemplateBase
local FMovieSceneEvalTemplateBase = {}


---@class FMovieSceneEvalTemplatePtr
local FMovieSceneEvalTemplatePtr = {}


---@class FMovieSceneEvaluationField
---@field Ranges TArray<FMovieSceneFrameRange>
---@field Groups TArray<FMovieSceneEvaluationGroup>
---@field MetaData TArray<FMovieSceneEvaluationMetaData>
local FMovieSceneEvaluationField = {}



---@class FMovieSceneEvaluationFieldEntity
---@field Key FMovieSceneEvaluationFieldEntityKey
---@field SharedMetaDataIndex int32
local FMovieSceneEvaluationFieldEntity = {}



---@class FMovieSceneEvaluationFieldEntityKey
---@field EntityOwner TWeakObjectPtr<UObject>
---@field EntityId uint32
local FMovieSceneEvaluationFieldEntityKey = {}



---@class FMovieSceneEvaluationFieldEntityMetaData
---@field OverrideBoundPropertyPath FString
---@field ForcedTime FFrameNumber
---@field Flags ESectionEvaluationFlags
---@field bEvaluateInSequencePreRoll boolean
---@field bEvaluateInSequencePostRoll boolean
local FMovieSceneEvaluationFieldEntityMetaData = {}



---@class FMovieSceneEvaluationFieldEntityTree
local FMovieSceneEvaluationFieldEntityTree = {}


---@class FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
---@field SegmentID FMovieSceneSegmentIdentifier
local FMovieSceneEvaluationFieldSegmentPtr = {}



---@class FMovieSceneEvaluationFieldSharedEntityMetaData
---@field ObjectBindingID FGuid
local FMovieSceneEvaluationFieldSharedEntityMetaData = {}



---@class FMovieSceneEvaluationFieldTrackPtr
---@field SequenceID FMovieSceneSequenceID
---@field TrackIdentifier FMovieSceneTrackIdentifier
local FMovieSceneEvaluationFieldTrackPtr = {}



---@class FMovieSceneEvaluationGroup
---@field LUTIndices TArray<FMovieSceneEvaluationGroupLUTIndex>
---@field TrackLUT TArray<FMovieSceneFieldEntry_EvaluationTrack>
---@field SectionLUT TArray<FMovieSceneFieldEntry_ChildTemplate>
local FMovieSceneEvaluationGroup = {}



---@class FMovieSceneEvaluationGroupLUTIndex
---@field NumInitPtrs int32
---@field NumEvalPtrs int32
local FMovieSceneEvaluationGroupLUTIndex = {}



---@class FMovieSceneEvaluationHookComponent
---@field Interface TScriptInterface<IMovieSceneEvaluationHook>
local FMovieSceneEvaluationHookComponent = {}



---@class FMovieSceneEvaluationHookEvent
---@field Hook FMovieSceneEvaluationHookComponent
local FMovieSceneEvaluationHookEvent = {}



---@class FMovieSceneEvaluationHookEventContainer
---@field Events TArray<FMovieSceneEvaluationHookEvent>
local FMovieSceneEvaluationHookEventContainer = {}



---@class FMovieSceneEvaluationInstanceKey
local FMovieSceneEvaluationInstanceKey = {}


---@class FMovieSceneEvaluationKey
---@field SequenceID FMovieSceneSequenceID
---@field TrackIdentifier FMovieSceneTrackIdentifier
---@field SectionIndex uint32
local FMovieSceneEvaluationKey = {}



---@class FMovieSceneEvaluationMetaData
---@field ActiveSequences TArray<FMovieSceneSequenceID>
---@field ActiveEntities TArray<FMovieSceneOrderedEvaluationKey>
local FMovieSceneEvaluationMetaData = {}



---@class FMovieSceneEvaluationOperand
---@field ObjectBindingID FGuid
---@field SequenceID FMovieSceneSequenceID
local FMovieSceneEvaluationOperand = {}



---@class FMovieSceneEvaluationTemplate
---@field Tracks TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack>
---@field SequenceSignature FGuid
---@field TemplateSerialNumber FMovieSceneEvaluationTemplateSerialNumber
---@field TemplateLedger FMovieSceneTemplateGenerationLedger
local FMovieSceneEvaluationTemplate = {}



---@class FMovieSceneEvaluationTemplateSerialNumber
---@field Value uint32
local FMovieSceneEvaluationTemplateSerialNumber = {}



---@class FMovieSceneEvaluationTrack
---@field ObjectBindingID FGuid
---@field EvaluationPriority uint16
---@field EvaluationMethod EEvaluationMethod
---@field SourceTrack TWeakObjectPtr<UMovieSceneTrack>
---@field ChildTemplates TArray<FMovieSceneEvalTemplatePtr>
---@field TrackTemplate FMovieSceneTrackImplementationPtr
---@field EvaluationGroup FName
---@field bEvaluateInPreroll boolean
---@field bEvaluateInPostroll boolean
---@field bTearDownPriority boolean
local FMovieSceneEvaluationTrack = {}



---@class FMovieSceneExpansionState
---@field bExpanded boolean
local FMovieSceneExpansionState = {}



---@class FMovieSceneFieldEntry_ChildTemplate
---@field ChildIndex uint16
---@field Flags ESectionEvaluationFlags
---@field ForcedTime FFrameNumber
local FMovieSceneFieldEntry_ChildTemplate = {}



---@class FMovieSceneFieldEntry_EvaluationTrack
---@field TrackPtr FMovieSceneEvaluationFieldTrackPtr
---@field NumChildren uint16
local FMovieSceneFieldEntry_EvaluationTrack = {}



---@class FMovieSceneFloatChannel : FMovieSceneChannel
---@field PreInfinityExtrap ERichCurveExtrapolation
---@field PostInfinityExtrap ERichCurveExtrapolation
---@field Times TArray<FFrameNumber>
---@field Values TArray<FMovieSceneFloatValue>
---@field DefaultValue float
---@field bHasDefaultValue boolean
---@field KeyHandles FMovieSceneKeyHandleMap
---@field TickResolution FFrameRate
local FMovieSceneFloatChannel = {}



---@class FMovieSceneFloatValue
---@field Value float
---@field Tangent FMovieSceneTangentData
---@field InterpMode ERichCurveInterpMode
---@field TangentMode ERichCurveTangentMode
---@field PaddingByte uint8
local FMovieSceneFloatValue = {}



---@class FMovieSceneFrameRange
local FMovieSceneFrameRange = {}


---@class FMovieSceneIntegerChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue int32
---@field bHasDefaultValue boolean
---@field Values TArray<int32>
local FMovieSceneIntegerChannel = {}



---@class FMovieSceneKeyHandleMap : FKeyHandleLookupTable
local FMovieSceneKeyHandleMap = {}


---@class FMovieSceneKeyStruct
local FMovieSceneKeyStruct = {}


---@class FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
---@field Time FFrameNumber
local FMovieSceneKeyTimeStruct = {}



---@class FMovieSceneMarkedFrame
---@field FrameNumber FFrameNumber
---@field Label FString
---@field bIsDeterminismFence boolean
local FMovieSceneMarkedFrame = {}



---@class FMovieSceneNestedSequenceTransform
---@field LinearTransform FMovieSceneTimeTransform
---@field Warping FMovieSceneTimeWarping
local FMovieSceneNestedSequenceTransform = {}



---@class FMovieSceneObjectBindingID
---@field Guid FGuid
---@field SequenceID int32
---@field ResolveParentIndex int32
local FMovieSceneObjectBindingID = {}



---@class FMovieSceneObjectBindingIDs
---@field IDs TArray<FMovieSceneObjectBindingID>
local FMovieSceneObjectBindingIDs = {}



---@class FMovieSceneObjectPathChannel : FMovieSceneChannel
---@field PropertyClass TObjectPtr<UClass>
---@field Times TArray<FFrameNumber>
---@field Values TArray<FMovieSceneObjectPathChannelKeyValue>
---@field DefaultValue FMovieSceneObjectPathChannelKeyValue
local FMovieSceneObjectPathChannel = {}



---@class FMovieSceneObjectPathChannelKeyValue
---@field SoftPtr TSoftObjectPtr<UObject>
---@field HardPtr UObject
local FMovieSceneObjectPathChannelKeyValue = {}



---@class FMovieSceneOrderedEvaluationKey
---@field Key FMovieSceneEvaluationKey
---@field SetupIndex uint16
---@field TearDownIndex uint16
local FMovieSceneOrderedEvaluationKey = {}



---@class FMovieScenePossessable
---@field Tags TArray<FName>
---@field Guid FGuid
---@field Name FString
---@field ParentGuid FGuid
---@field SpawnableObjectBindingID FMovieSceneObjectBindingID
local FMovieScenePossessable = {}



---@class FMovieScenePropertyBinding
---@field PropertyName FName
---@field PropertyPath FName
---@field bCanUseClassLookup boolean
local FMovieScenePropertyBinding = {}



---@class FMovieScenePropertySectionData
---@field PropertyName FName
---@field PropertyPath FString
local FMovieScenePropertySectionData = {}



---@class FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
---@field PropertyData FMovieScenePropertySectionData
local FMovieScenePropertySectionTemplate = {}



---@class FMovieSceneRootEvaluationTemplateInstance
---@field WeakRootSequence TWeakObjectPtr<UMovieSceneSequence>
---@field CompiledDataManager UMovieSceneCompiledDataManager
---@field EntitySystemLinker UMovieSceneEntitySystemLinker
---@field DirectorInstances TMap<FMovieSceneSequenceID, UObject>
local FMovieSceneRootEvaluationTemplateInstance = {}



---@class FMovieSceneSectionEvalOptions
---@field bCanEditCompletionMode boolean
---@field CompletionMode EMovieSceneCompletionMode
local FMovieSceneSectionEvalOptions = {}



---@class FMovieSceneSectionGroup
---@field Sections TArray<TWeakObjectPtr<UMovieSceneSection>>
local FMovieSceneSectionGroup = {}



---@class FMovieSceneSectionParameters
---@field StartFrameOffset FFrameNumber
---@field bCanLoop boolean
---@field EndFrameOffset FFrameNumber
---@field FirstLoopStartFrameOffset FFrameNumber
---@field TimeScale float
---@field HierarchicalBias int32
---@field StartOffset float
---@field PrerollTime float
---@field PostrollTime float
local FMovieSceneSectionParameters = {}



---@class FMovieSceneSegment
local FMovieSceneSegment = {}


---@class FMovieSceneSegmentIdentifier
---@field IdentifierIndex int32
local FMovieSceneSegmentIdentifier = {}



---@class FMovieSceneSequenceCompilerMaskStruct
---@field bHierarchy boolean
---@field bEvaluationTemplate boolean
---@field bEvaluationTemplateField boolean
---@field bEntityComponentField boolean
local FMovieSceneSequenceCompilerMaskStruct = {}



---@class FMovieSceneSequenceHierarchy
---@field RootNode FMovieSceneSequenceHierarchyNode
---@field Tree FMovieSceneSubSequenceTree
---@field SubSequences TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData>
---@field Hierarchy TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode>
local FMovieSceneSequenceHierarchy = {}



---@class FMovieSceneSequenceHierarchyNode
---@field ParentID FMovieSceneSequenceID
---@field Children TArray<FMovieSceneSequenceID>
local FMovieSceneSequenceHierarchyNode = {}



---@class FMovieSceneSequenceID
---@field Value uint32
local FMovieSceneSequenceID = {}



---@class FMovieSceneSequenceInstanceData
local FMovieSceneSequenceInstanceData = {}


---@class FMovieSceneSequenceInstanceDataPtr
local FMovieSceneSequenceInstanceDataPtr = {}


---@class FMovieSceneSequenceLoopCount
---@field Value int32
local FMovieSceneSequenceLoopCount = {}



---@class FMovieSceneSequencePlayToParams
---@field bExclusive boolean
local FMovieSceneSequencePlayToParams = {}



---@class FMovieSceneSequencePlaybackParams
---@field Frame FFrameTime
---@field Time float
---@field MarkedFrame FString
---@field PositionType EMovieScenePositionType
---@field UpdateMethod EUpdatePositionMethod
---@field bHasJumped boolean
local FMovieSceneSequencePlaybackParams = {}



---@class FMovieSceneSequencePlaybackSettings
---@field bAutoPlay boolean
---@field LoopCount FMovieSceneSequenceLoopCount
---@field TickInterval FMovieSceneSequenceTickInterval
---@field PlayRate float
---@field StartTime float
---@field bRandomStartTime boolean
---@field bRestoreState boolean
---@field bDisableMovementInput boolean
---@field bDisableLookAtInput boolean
---@field bHidePlayer boolean
---@field bHideHud boolean
---@field bDisableCameraCuts boolean
---@field bPauseAtEnd boolean
---@field bInheritTickIntervalFromOwner boolean
local FMovieSceneSequencePlaybackSettings = {}



---@class FMovieSceneSequenceReplProperties
---@field LastKnownPosition FFrameTime
---@field LastKnownStatus EMovieScenePlayerStatus::Type
---@field LastKnownNumLoops int32
local FMovieSceneSequenceReplProperties = {}



---@class FMovieSceneSequenceTickInterval
---@field TickIntervalSeconds float
---@field EvaluationBudgetMicroseconds float
---@field bTickWhenPaused boolean
---@field bAllowRounding boolean
local FMovieSceneSequenceTickInterval = {}



---@class FMovieSceneSequenceTransform
---@field LinearTransform FMovieSceneTimeTransform
---@field NestedTransforms TArray<FMovieSceneNestedSequenceTransform>
local FMovieSceneSequenceTransform = {}



---@class FMovieSceneSpawnable
---@field SpawnTransform FTransform
---@field Tags TArray<FName>
---@field bContinuouslyRespawn boolean
---@field bNetAddressableName boolean
---@field bEvaluateTracksWhenNotSpawned boolean
---@field Guid FGuid
---@field Name FString
---@field ObjectTemplate UObject
---@field ChildPossessables TArray<FGuid>
---@field Ownership ESpawnOwnership
---@field LevelName FName
local FMovieSceneSpawnable = {}



---@class FMovieSceneSubSectionData
---@field Section TWeakObjectPtr<UMovieSceneSubSection>
---@field ObjectBindingID FGuid
---@field Flags ESectionEvaluationFlags
local FMovieSceneSubSectionData = {}



---@class FMovieSceneSubSequenceData
---@field Sequence FSoftObjectPath
---@field OuterToInnerTransform FMovieSceneSequenceTransform
---@field RootToSequenceTransform FMovieSceneSequenceTransform
---@field TickResolution FFrameRate
---@field DeterministicSequenceID FMovieSceneSequenceID
---@field ParentPlayRange FMovieSceneFrameRange
---@field ParentStartFrameOffset FFrameNumber
---@field ParentEndFrameOffset FFrameNumber
---@field ParentFirstLoopStartFrameOffset FFrameNumber
---@field bCanLoop boolean
---@field PlayRange FMovieSceneFrameRange
---@field FullPlayRange FMovieSceneFrameRange
---@field UnwarpedPlayRange FMovieSceneFrameRange
---@field PreRollRange FMovieSceneFrameRange
---@field PostRollRange FMovieSceneFrameRange
---@field HierarchicalBias int16
---@field bHasHierarchicalEasing boolean
---@field InstanceData FMovieSceneSequenceInstanceDataPtr
---@field SubSectionSignature FGuid
local FMovieSceneSubSequenceData = {}



---@class FMovieSceneSubSequenceTree
local FMovieSceneSubSequenceTree = {}


---@class FMovieSceneSubSequenceTreeEntry
local FMovieSceneSubSequenceTreeEntry = {}


---@class FMovieSceneTangentData
---@field ArriveTangent float
---@field LeaveTangent float
---@field ArriveTangentWeight float
---@field LeaveTangentWeight float
---@field TangentWeightMode ERichCurveTangentWeightMode
local FMovieSceneTangentData = {}



---@class FMovieSceneTemplateGenerationLedger
---@field LastTrackIdentifier FMovieSceneTrackIdentifier
---@field TrackSignatureToTrackIdentifier TMap<FGuid, FMovieSceneTrackIdentifier>
---@field SubSectionRanges TMap<FGuid, FMovieSceneFrameRange>
local FMovieSceneTemplateGenerationLedger = {}



---@class FMovieSceneTimeTransform
---@field TimeScale float
---@field Offset FFrameTime
local FMovieSceneTimeTransform = {}



---@class FMovieSceneTimeWarping
---@field Start FFrameNumber
---@field End FFrameNumber
local FMovieSceneTimeWarping = {}



---@class FMovieSceneTimecodeSource
---@field Timecode FTimecode
local FMovieSceneTimecodeSource = {}



---@class FMovieSceneTrackDisplayOptions
---@field bShowVerticalFrames boolean
local FMovieSceneTrackDisplayOptions = {}



---@class FMovieSceneTrackEvalOptions
---@field bCanEvaluateNearestSection boolean
---@field bEvalNearestSection boolean
---@field bEvaluateInPreroll boolean
---@field bEvaluateInPostroll boolean
---@field bEvaluateNearestSection boolean
local FMovieSceneTrackEvalOptions = {}



---@class FMovieSceneTrackEvaluationField
---@field Entries TArray<FMovieSceneTrackEvaluationFieldEntry>
local FMovieSceneTrackEvaluationField = {}



---@class FMovieSceneTrackEvaluationFieldEntry
---@field Section UMovieSceneSection
---@field Range FFrameNumberRange
---@field ForcedTime FFrameNumber
---@field Flags ESectionEvaluationFlags
---@field LegacySortOrder int16
local FMovieSceneTrackEvaluationFieldEntry = {}



---@class FMovieSceneTrackIdentifier
---@field Value uint32
local FMovieSceneTrackIdentifier = {}



---@class FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
local FMovieSceneTrackImplementation = {}


---@class FMovieSceneTrackImplementationPtr
local FMovieSceneTrackImplementationPtr = {}


---@class FMovieSceneTrackInstanceComponent
---@field Owner UMovieSceneSection
---@field TrackInstanceClass TSubclassOf<UMovieSceneTrackInstance>
local FMovieSceneTrackInstanceComponent = {}



---@class FMovieSceneTrackInstanceEntry
---@field BoundObject UObject
---@field TrackInstance UMovieSceneTrackInstance
local FMovieSceneTrackInstanceEntry = {}



---@class FMovieSceneTrackInstanceInput
---@field Section UMovieSceneSection
local FMovieSceneTrackInstanceInput = {}



---@class FMovieSceneTrackLabels
---@field Strings TArray<FString>
local FMovieSceneTrackLabels = {}



---@class FMovieSceneWarpCounter
---@field WarpCounts TArray<uint32>
local FMovieSceneWarpCounter = {}



---@class FOptionalMovieSceneBlendType
---@field BlendType EMovieSceneBlendType
---@field bIsValid boolean
local FOptionalMovieSceneBlendType = {}



---@class FSectionEvaluationData
---@field ImplIndex int32
---@field ForcedTime FFrameNumber
---@field Flags ESectionEvaluationFlags
local FSectionEvaluationData = {}



---@class FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
local FTestMovieSceneEvalTemplate = {}


---@class FTrackInstanceInputComponent
---@field Section UMovieSceneSection
---@field OutputIndex int32
local FTrackInstanceInputComponent = {}



---@class IMovieSceneBindingOwnerInterface : IInterface
local IMovieSceneBindingOwnerInterface = {}


---@class IMovieSceneChannelOverrideProvider : IInterface
local IMovieSceneChannelOverrideProvider = {}


---@class IMovieSceneCustomClockSource : IInterface
local IMovieSceneCustomClockSource = {}

---@param DeltaSeconds float
---@param InPlayRate float
function IMovieSceneCustomClockSource:OnTick(DeltaSeconds, InPlayRate) end
---@param InStopTime FQualifiedFrameTime
function IMovieSceneCustomClockSource:OnStopPlaying(InStopTime) end
---@param InStartTime FQualifiedFrameTime
function IMovieSceneCustomClockSource:OnStartPlaying(InStartTime) end
---@param InCurrentTime FQualifiedFrameTime
---@param InPlayRate float
---@return FFrameTime
function IMovieSceneCustomClockSource:OnRequestCurrentTime(InCurrentTime, InPlayRate) end


---@class IMovieSceneDeterminismSource : IInterface
local IMovieSceneDeterminismSource = {}


---@class IMovieSceneEasingFunction : IInterface
local IMovieSceneEasingFunction = {}

---@param Interp float
---@return float
function IMovieSceneEasingFunction:OnEvaluate(Interp) end


---@class IMovieSceneEntityProvider : IInterface
local IMovieSceneEntityProvider = {}


---@class IMovieSceneEvaluationHook : IInterface
local IMovieSceneEvaluationHook = {}


---@class IMovieSceneKeyProxy : IInterface
local IMovieSceneKeyProxy = {}


---@class IMovieScenePlaybackClient : IInterface
local IMovieScenePlaybackClient = {}


---@class IMovieScenePreAnimatedStateSystemInterface : IInterface
local IMovieScenePreAnimatedStateSystemInterface = {}


---@class IMovieSceneSequencePlayerObserver : IInterface
local IMovieSceneSequencePlayerObserver = {}


---@class IMovieSceneSequenceTickManagerClient : IInterface
local IMovieSceneSequenceTickManagerClient = {}


---@class IMovieSceneTrackTemplateProducer : IInterface
local IMovieSceneTrackTemplateProducer = {}


---@class IMovieSceneValueDecomposer : IInterface
local IMovieSceneValueDecomposer = {}


---@class INodeAndChannelMappings : IInterface
local INodeAndChannelMappings = {}


---@class UMovieScene : UMovieSceneSignedObject
---@field Spawnables TArray<FMovieSceneSpawnable>
---@field Possessables TArray<FMovieScenePossessable>
---@field ObjectBindings TArray<FMovieSceneBinding>
---@field BindingGroups TMap<FName, FMovieSceneObjectBindingIDs>
---@field MasterTracks TArray<UMovieSceneTrack>
---@field CameraCutTrack UMovieSceneTrack
---@field SelectionRange FMovieSceneFrameRange
---@field PlaybackRange FMovieSceneFrameRange
---@field TickResolution FFrameRate
---@field DisplayRate FFrameRate
---@field EvaluationType EMovieSceneEvaluationType
---@field ClockSource EUpdateClockSource
---@field CustomClockSourcePath FSoftObjectPath
---@field MarkedFrames TArray<FMovieSceneMarkedFrame>
local UMovieScene = {}



---@class UMovieSceneBindingOverrides : UObject
---@field BindingData TArray<FMovieSceneBindingOverrideData>
local UMovieSceneBindingOverrides = {}



---@class UMovieSceneBlenderSystem : UMovieSceneEntitySystem
local UMovieSceneBlenderSystem = {}


---@class UMovieSceneBoolSection : UMovieSceneSection
---@field DefaultValue boolean
---@field BoolCurve FMovieSceneBoolChannel
local UMovieSceneBoolSection = {}



---@class UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem
local UMovieSceneBoundSceneComponentInstantiator = {}


---@class UMovieSceneBuiltInEasingFunction : UObject
---@field Type EMovieSceneBuiltInEasing
local UMovieSceneBuiltInEasingFunction = {}



---@class UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
local UMovieSceneCachePreAnimatedStateSystem = {}


---@class UMovieSceneChannelOverrideContainer : UMovieSceneSignedObject
local UMovieSceneChannelOverrideContainer = {}


---@class UMovieSceneCompiledData : UObject
---@field EvaluationTemplate FMovieSceneEvaluationTemplate
---@field Hierarchy FMovieSceneSequenceHierarchy
---@field EntityComponentField FMovieSceneEntityComponentField
---@field TrackTemplateField FMovieSceneEvaluationField
---@field DeterminismFences TArray<FFrameTime>
---@field CompiledSignature FGuid
---@field CompilerVersion FGuid
---@field AccumulatedMask FMovieSceneSequenceCompilerMaskStruct
---@field AllocatedMask FMovieSceneSequenceCompilerMaskStruct
---@field AccumulatedFlags EMovieSceneSequenceFlags
local UMovieSceneCompiledData = {}



---@class UMovieSceneCompiledDataManager : UObject
---@field Hierarchies TMap<int32, FMovieSceneSequenceHierarchy>
---@field TrackTemplates TMap<int32, FMovieSceneEvaluationTemplate>
---@field TrackTemplateFields TMap<int32, FMovieSceneEvaluationField>
---@field EntityComponentFields TMap<int32, FMovieSceneEntityComponentField>
local UMovieSceneCompiledDataManager = {}



---@class UMovieSceneEasingExternalCurve : UObject
---@field Curve UCurveFloat
local UMovieSceneEasingExternalCurve = {}



---@class UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem
local UMovieSceneEntityInstantiatorSystem = {}


---@class UMovieSceneEntitySystem : UObject
---@field Linker UMovieSceneEntitySystemLinker
local UMovieSceneEntitySystem = {}



---@class UMovieSceneEntitySystemLinker : UObject
---@field SystemGraph FMovieSceneEntitySystemGraph
local UMovieSceneEntitySystemLinker = {}



---@class UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem
local UMovieSceneEvalTimeSystem = {}


---@class UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem
---@field PendingEventsByRootInstance TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer>
local UMovieSceneEvaluationHookSystem = {}



---@class UMovieSceneFolder : UObject
---@field FolderName FName
---@field ChildFolders TArray<UMovieSceneFolder>
---@field ChildMasterTracks TArray<UMovieSceneTrack>
---@field ChildObjectBindingStrings TArray<FString>
local UMovieSceneFolder = {}



---@class UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem
local UMovieSceneGenericBoundObjectInstantiator = {}


---@class UMovieSceneHookSection : UMovieSceneSection
---@field bRequiresRangedHook boolean
---@field bRequiresTriggerHooks boolean
local UMovieSceneHookSection = {}



---@class UMovieSceneMasterInstantiatorSystem : UMovieSceneEntityInstantiatorSystem
local UMovieSceneMasterInstantiatorSystem = {}


---@class UMovieSceneNameableTrack : UMovieSceneTrack
local UMovieSceneNameableTrack = {}


---@class UMovieSceneNodeGroup : UObject
local UMovieSceneNodeGroup = {}


---@class UMovieSceneNodeGroupCollection : UObject
local UMovieSceneNodeGroupCollection = {}


---@class UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
local UMovieSceneRestorePreAnimatedStateSystem = {}


---@class UMovieSceneSection : UMovieSceneSignedObject
---@field EvalOptions FMovieSceneSectionEvalOptions
---@field Easing FMovieSceneEasingSettings
---@field SectionRange FMovieSceneFrameRange
---@field PreRollFrames FFrameNumber
---@field PostRollFrames FFrameNumber
---@field RowIndex int32
---@field OverlapPriority int32
---@field bIsActive boolean
---@field bIsLocked boolean
---@field StartTime float
---@field EndTime float
---@field PrerollTime float
---@field PostrollTime float
---@field bIsInfinite boolean
---@field bSupportsInfiniteRange boolean
---@field BlendType FOptionalMovieSceneBlendType
local UMovieSceneSection = {}

---@param NewRowIndex int32
function UMovieSceneSection:SetRowIndex(NewRowIndex) end
---@param InPreRollFrames int32
function UMovieSceneSection:SetPreRollFrames(InPreRollFrames) end
---@param InPostRollFrames int32
function UMovieSceneSection:SetPostRollFrames(InPostRollFrames) end
---@param NewPriority int32
function UMovieSceneSection:SetOverlapPriority(NewPriority) end
---@param bInIsLocked boolean
function UMovieSceneSection:SetIsLocked(bInIsLocked) end
---@param bInIsActive boolean
function UMovieSceneSection:SetIsActive(bInIsActive) end
---@param InCompletionMode EMovieSceneCompletionMode
function UMovieSceneSection:SetCompletionMode(InCompletionMode) end
---@param InBlendType EMovieSceneBlendType
function UMovieSceneSection:SetBlendType(InBlendType) end
---@return boolean
function UMovieSceneSection:IsLocked() end
---@return boolean
function UMovieSceneSection:IsActive() end
---@return int32
function UMovieSceneSection:GetRowIndex() end
---@return int32
function UMovieSceneSection:GetPreRollFrames() end
---@return int32
function UMovieSceneSection:GetPostRollFrames() end
---@return int32
function UMovieSceneSection:GetOverlapPriority() end
---@return EMovieSceneCompletionMode
function UMovieSceneSection:GetCompletionMode() end
---@return FOptionalMovieSceneBlendType
function UMovieSceneSection:GetBlendType() end


---@class UMovieSceneSectionChannelOverrideRegistry : UObject
---@field Overrides TMap<FName, UMovieSceneChannelOverrideContainer>
local UMovieSceneSectionChannelOverrideRegistry = {}



---@class UMovieSceneSequence : UMovieSceneSignedObject
---@field CompiledData UMovieSceneCompiledData
---@field DefaultCompletionMode EMovieSceneCompletionMode
---@field bParentContextsAreSignificant boolean
---@field bPlayableDirectly boolean
---@field SequenceFlags EMovieSceneSequenceFlags
local UMovieSceneSequence = {}

---@return FMovieSceneTimecodeSource
function UMovieSceneSequence:GetEarliestTimecodeSource() end
---@param InBindingName FName
---@return TArray<FMovieSceneObjectBindingID>
function UMovieSceneSequence:FindBindingsByTag(InBindingName) end
---@param InBindingName FName
---@return FMovieSceneObjectBindingID
function UMovieSceneSequence:FindBindingByTag(InBindingName) end


---@class UMovieSceneSequencePlayer : UObject
---@field Observer TScriptInterface<IMovieSceneSequencePlayerObserver>
---@field OnPlay FMovieSceneSequencePlayerOnPlay
---@field OnPlayReverse FMovieSceneSequencePlayerOnPlayReverse
---@field OnStop FMovieSceneSequencePlayerOnStop
---@field OnPause FMovieSceneSequencePlayerOnPause
---@field OnFinished FMovieSceneSequencePlayerOnFinished
---@field Status EMovieScenePlayerStatus::Type
---@field bReversePlayback boolean
---@field Sequence UMovieSceneSequence
---@field StartTime FFrameNumber
---@field DurationFrames int32
---@field DurationSubFrames float
---@field CurrentNumLoops int32
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field RootTemplateInstance FMovieSceneRootEvaluationTemplateInstance
---@field NetSyncProps FMovieSceneSequenceReplProperties
---@field PlaybackClient TScriptInterface<IMovieScenePlaybackClient>
---@field TickManager UMovieSceneSequenceTickManager
local UMovieSceneSequencePlayer = {}

function UMovieSceneSequencePlayer:StopAtCurrentTime() end
function UMovieSceneSequencePlayer:Stop() end
---@param StartTime float
---@param Duration float
function UMovieSceneSequencePlayer:SetTimeRange(StartTime, Duration) end
---@param PlayRate float
function UMovieSceneSequencePlayer:SetPlayRate(PlayRate) end
---@param PlaybackParams FMovieSceneSequencePlaybackParams
function UMovieSceneSequencePlayer:SetPlaybackPosition(PlaybackParams) end
---@param FrameRate FFrameRate
function UMovieSceneSequencePlayer:SetFrameRate(FrameRate) end
---@param StartFrame int32
---@param Duration int32
---@param SubFrames float
function UMovieSceneSequencePlayer:SetFrameRange(StartFrame, Duration, SubFrames) end
---@param bInDisableCameraCuts boolean
function UMovieSceneSequencePlayer:SetDisableCameraCuts(bInDisableCameraCuts) end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:ScrubToSeconds(TimeInSeconds) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:ScrubToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:ScrubToFrame(NewPosition) end
function UMovieSceneSequencePlayer:Scrub() end
---@param StoppedTime FFrameTime
function UMovieSceneSequencePlayer:RPC_OnStopEvent(StoppedTime) end
---@param StoppedTime FFrameTime
function UMovieSceneSequencePlayer:RPC_OnFinishPlaybackEvent(StoppedTime) end
---@param Method EUpdatePositionMethod
---@param RelevantTime FFrameTime
function UMovieSceneSequencePlayer:RPC_ExplicitServerUpdateEvent(Method, RelevantTime) end
function UMovieSceneSequencePlayer:RestoreState() end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:PlayToSeconds(TimeInSeconds) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:PlayToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:PlayToFrame(NewPosition) end
---@param PlaybackParams FMovieSceneSequencePlaybackParams
---@param PlayToParams FMovieSceneSequencePlayToParams
function UMovieSceneSequencePlayer:PlayTo(PlaybackParams, PlayToParams) end
function UMovieSceneSequencePlayer:PlayReverse() end
---@param NumLoops int32
function UMovieSceneSequencePlayer:PlayLooping(NumLoops) end
function UMovieSceneSequencePlayer:Play() end
function UMovieSceneSequencePlayer:Pause() end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:JumpToSeconds(TimeInSeconds) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:JumpToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:JumpToFrame(NewPosition) end
---@return boolean
function UMovieSceneSequencePlayer:IsReversed() end
---@return boolean
function UMovieSceneSequencePlayer:IsPlaying() end
---@return boolean
function UMovieSceneSequencePlayer:IsPaused() end
function UMovieSceneSequencePlayer:GoToEndAndStop() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetStartTime() end
---@param bAddClientInfo boolean
---@return FString
function UMovieSceneSequencePlayer:GetSequenceName(bAddClientInfo) end
---@return UMovieSceneSequence
function UMovieSceneSequencePlayer:GetSequence() end
---@return float
function UMovieSceneSequencePlayer:GetPlayRate() end
---@param InObject UObject
---@return TArray<FMovieSceneObjectBindingID>
function UMovieSceneSequencePlayer:GetObjectBindings(InObject) end
---@return FFrameRate
function UMovieSceneSequencePlayer:GetFrameRate() end
---@return int32
function UMovieSceneSequencePlayer:GetFrameDuration() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetEndTime() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetDuration() end
---@return boolean
function UMovieSceneSequencePlayer:GetDisableCameraCuts() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetCurrentTime() end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray<UObject>
function UMovieSceneSequencePlayer:GetBoundObjects(ObjectBinding) end
function UMovieSceneSequencePlayer:ChangePlaybackDirection() end


---@class UMovieSceneSequenceTickManager : UObject
local UMovieSceneSequenceTickManager = {}


---@class UMovieSceneSignedObject : UObject
---@field Signature FGuid
local UMovieSceneSignedObject = {}



---@class UMovieSceneSpawnSection : UMovieSceneBoolSection
local UMovieSceneSpawnSection = {}


---@class UMovieSceneSpawnTrack : UMovieSceneTrack
---@field Sections TArray<UMovieSceneSection>
---@field ObjectGuid FGuid
local UMovieSceneSpawnTrack = {}



---@class UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem
local UMovieSceneSpawnablesSystem = {}


---@class UMovieSceneSubSection : UMovieSceneSection
---@field Parameters FMovieSceneSectionParameters
---@field StartOffset float
---@field TimeScale float
---@field PrerollTime float
---@field NetworkMask uint8
---@field SubSequence UMovieSceneSequence
local UMovieSceneSubSection = {}

---@param Sequence UMovieSceneSequence
function UMovieSceneSubSection:SetSequence(Sequence) end
---@return UMovieSceneSequence
function UMovieSceneSubSection:GetSequence() end


---@class UMovieSceneSubTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneSubTrack = {}



---@class UMovieSceneTrack : UMovieSceneSignedObject
---@field EvalOptions FMovieSceneTrackEvalOptions
---@field bIsEvalDisabled boolean
---@field RowsDisabled TArray<int32>
---@field EvaluationFieldGuid FGuid
---@field EvaluationField FMovieSceneTrackEvaluationField
local UMovieSceneTrack = {}



---@class UMovieSceneTrackInstance : UObject
---@field AnimatedObject UObject
---@field bIsMasterTrackInstance boolean
---@field PrivateLinker UMovieSceneEntitySystemLinker
---@field Inputs TArray<FMovieSceneTrackInstanceInput>
local UMovieSceneTrackInstance = {}



---@class UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem
local UMovieSceneTrackInstanceInstantiator = {}


---@class UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem
---@field Instantiator UMovieSceneTrackInstanceInstantiator
local UMovieSceneTrackInstanceSystem = {}



---@class UTestMovieSceneEvalHookSection : UMovieSceneHookSection
local UTestMovieSceneEvalHookSection = {}


---@class UTestMovieSceneEvalHookTrack : UMovieSceneTrack
---@field SectionArray TArray<UMovieSceneSection>
local UTestMovieSceneEvalHookTrack = {}



---@class UTestMovieSceneSection : UMovieSceneSection
local UTestMovieSceneSection = {}


---@class UTestMovieSceneSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
local UTestMovieSceneSequence = {}



---@class UTestMovieSceneSubSection : UMovieSceneSubSection
local UTestMovieSceneSubSection = {}


---@class UTestMovieSceneSubTrack : UMovieSceneSubTrack
---@field SectionArray TArray<UMovieSceneSection>
local UTestMovieSceneSubTrack = {}



---@class UTestMovieSceneTrack : UMovieSceneTrack
---@field bHighPassFilter boolean
---@field SectionArray TArray<UMovieSceneSection>
local UTestMovieSceneTrack = {}



