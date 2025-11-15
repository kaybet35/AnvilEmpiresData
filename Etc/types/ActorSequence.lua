---@meta

---@class FActorSequenceObjectReference
---@field Type EActorSequenceObjectReferenceType
---@field ActorId FGuid
---@field PathToComponent FString
local FActorSequenceObjectReference = {}



---@class FActorSequenceObjectReferenceMap
---@field BindingIds TArray<FGuid>
---@field References TArray<FActorSequenceObjectReferences>
local FActorSequenceObjectReferenceMap = {}



---@class FActorSequenceObjectReferences
---@field Array TArray<FActorSequenceObjectReference>
local FActorSequenceObjectReferences = {}



---@class UActorSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field ObjectReferences FActorSequenceObjectReferenceMap
local UActorSequence = {}



---@class UActorSequenceComponent : UActorComponent
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field Sequence UActorSequence
---@field SequencePlayer UActorSequencePlayer
local UActorSequenceComponent = {}

function UActorSequenceComponent:StopSequence() end
function UActorSequenceComponent:PlaySequence() end
function UActorSequenceComponent:PauseSequence() end


---@class UActorSequencePlayer : UMovieSceneSequencePlayer
local UActorSequencePlayer = {}


