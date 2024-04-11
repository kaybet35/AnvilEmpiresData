---@meta

---@class FActorSequenceObjectReference
---@field Type EActorSequenceObjectReferenceType
---@field ActorId FGuid
---@field PathToComponent FString
FActorSequenceObjectReference = {}



---@class FActorSequenceObjectReferenceMap
---@field BindingIds TArray<FGuid>
---@field References TArray<FActorSequenceObjectReferences>
FActorSequenceObjectReferenceMap = {}



---@class FActorSequenceObjectReferences
---@field Array TArray<FActorSequenceObjectReference>
FActorSequenceObjectReferences = {}



---@class UActorSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field ObjectReferences FActorSequenceObjectReferenceMap
UActorSequence = {}



---@class UActorSequenceComponent : UActorComponent
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field Sequence UActorSequence
---@field SequencePlayer UActorSequencePlayer
UActorSequenceComponent = {}

function UActorSequenceComponent:StopSequence() end
function UActorSequenceComponent:PlaySequence() end
function UActorSequenceComponent:PauseSequence() end


---@class UActorSequencePlayer : UMovieSceneSequencePlayer
UActorSequencePlayer = {}


