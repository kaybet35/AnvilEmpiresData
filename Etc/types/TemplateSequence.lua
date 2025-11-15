---@meta

---@class ATemplateSequenceActor : AActor
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field SequencePlayer UTemplateSequencePlayer
---@field TemplateSequence FSoftObjectPath
---@field BindingOverride FTemplateSequenceBindingOverrideData
local ATemplateSequenceActor = {}

---@param InSequence UTemplateSequence
function ATemplateSequenceActor:SetSequence(InSequence) end
---@param Actor AActor
---@param bOverridesDefault boolean
function ATemplateSequenceActor:SetBinding(Actor, bOverridesDefault) end
---@return UTemplateSequence
function ATemplateSequenceActor:LoadSequence() end
---@return UTemplateSequencePlayer
function ATemplateSequenceActor:GetSequencePlayer() end
---@return UTemplateSequence
function ATemplateSequenceActor:GetSequence() end


---@class FTemplateSectionPropertyScale
---@field ObjectBinding FGuid
---@field PropertyBinding FMovieScenePropertyBinding
---@field PropertyScaleType ETemplateSectionPropertyScaleType
---@field FloatChannel FMovieSceneFloatChannel
local FTemplateSectionPropertyScale = {}



---@class FTemplateSequenceBindingOverrideData
---@field Object TWeakObjectPtr<UObject>
---@field bOverridesDefault boolean
local FTemplateSequenceBindingOverrideData = {}



---@class UCameraAnimationBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem
local UCameraAnimationBoundObjectInstantiator = {}


---@class UCameraAnimationEntitySystemLinker : UMovieSceneEntitySystemLinker
local UCameraAnimationEntitySystemLinker = {}


---@class UCameraAnimationSequence : UTemplateSequence
local UCameraAnimationSequence = {}


---@class UCameraAnimationSequenceCameraStandIn : UObject
---@field FieldOfView float
---@field bConstrainAspectRatio boolean
---@field AspectRatio float
---@field PostProcessSettings FPostProcessSettings
---@field PostProcessBlendWeight float
---@field Filmback FCameraFilmbackSettings
---@field LensSettings FCameraLensSettings
---@field FocusSettings FCameraFocusSettings
---@field CurrentFocalLength float
---@field CurrentAperture float
---@field CurrentFocusDistance float
local UCameraAnimationSequenceCameraStandIn = {}



---@class UCameraAnimationSequencePlayer : UObject
---@field BoundObjectOverride UObject
---@field Sequence UMovieSceneSequence
---@field RootTemplateInstance FMovieSceneRootEvaluationTemplateInstance
local UCameraAnimationSequencePlayer = {}



---@class UCameraAnimationSequenceSubsystem : UWorldSubsystem
---@field Linker UMovieSceneEntitySystemLinker
local UCameraAnimationSequenceSubsystem = {}



---@class UCameraAnimationSpawnableSystem : UMovieSceneEntitySystem
local UCameraAnimationSpawnableSystem = {}


---@class USequenceCameraShakePattern : UCameraShakePattern
---@field Sequence UCameraAnimationSequence
---@field PlayRate float
---@field Scale float
---@field BlendInTime float
---@field BlendOutTime float
---@field RandomSegmentDuration float
---@field bRandomSegment boolean
---@field Player UCameraAnimationSequencePlayer
---@field CameraStandIn UCameraAnimationSequenceCameraStandIn
local USequenceCameraShakePattern = {}



---@class USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary
local USequenceCameraShakeTestUtil = {}

---@param PlayerController APlayerController
---@param PPIndex int32
---@param OutPPSettings FPostProcessSettings
---@param OutPPBlendWeight float
---@return boolean
function USequenceCameraShakeTestUtil:GetPostProcessBlendCache(PlayerController, PPIndex, OutPPSettings, OutPPBlendWeight) end
---@param PlayerController APlayerController
---@return FMinimalViewInfo
function USequenceCameraShakeTestUtil:GetLastFrameCameraCachePOV(PlayerController) end
---@param PlayerController APlayerController
---@return FMinimalViewInfo
function USequenceCameraShakeTestUtil:GetCameraCachePOV(PlayerController) end


---@class UTemplateSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field BoundActorClass TSoftClassPtr<AActor>
---@field BoundPreviewActor TSoftObjectPtr<AActor>
---@field BoundActorComponents TMap<FGuid, FName>
local UTemplateSequence = {}



---@class UTemplateSequencePlayer : UMovieSceneSequencePlayer
local UTemplateSequencePlayer = {}

---@param WorldContextObject UObject
---@param TemplateSequence UTemplateSequence
---@param Settings FMovieSceneSequencePlaybackSettings
---@param OutActor ATemplateSequenceActor
---@return UTemplateSequencePlayer
function UTemplateSequencePlayer:CreateTemplateSequencePlayer(WorldContextObject, TemplateSequence, Settings, OutActor) end


---@class UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem
local UTemplateSequencePropertyScalingEvaluatorSystem = {}


---@class UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem
local UTemplateSequencePropertyScalingInstantiatorSystem = {}


---@class UTemplateSequenceSection : UMovieSceneSubSection
---@field PropertyScales TArray<FTemplateSectionPropertyScale>
local UTemplateSequenceSection = {}



---@class UTemplateSequenceSystem : UMovieSceneEntitySystem
local UTemplateSequenceSystem = {}


---@class UTemplateSequenceTrack : UMovieSceneSubTrack
local UTemplateSequenceTrack = {}


