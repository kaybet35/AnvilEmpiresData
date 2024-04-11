---@meta

---@class ALevelSequenceActor : AActor
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field SequencePlayer ULevelSequencePlayer
---@field LevelSequenceAsset ULevelSequence
---@field CameraSettings FLevelSequenceCameraSettings
---@field BurnInOptions ULevelSequenceBurnInOptions
---@field BindingOverrides UMovieSceneBindingOverrides
---@field bAutoPlay boolean
---@field bOverrideInstanceData boolean
---@field bReplicatePlayback boolean
---@field DefaultInstanceData UObject
---@field BurnInInstance ULevelSequenceBurnIn
---@field bShowBurnin boolean
ALevelSequenceActor = {}

function ALevelSequenceActor:ShowBurnin() end
---@param InSequence ULevelSequence
function ALevelSequenceActor:SetSequence(InSequence) end
---@param ReplicatePlayback boolean
function ALevelSequenceActor:SetReplicatePlayback(ReplicatePlayback) end
---@param BindingTag FName
---@param Actors TArray<AActor>
---@param bAllowBindingsFromAsset boolean
function ALevelSequenceActor:SetBindingByTag(BindingTag, Actors, bAllowBindingsFromAsset) end
---@param Binding FMovieSceneObjectBindingID
---@param Actors TArray<AActor>
---@param bAllowBindingsFromAsset boolean
function ALevelSequenceActor:SetBinding(Binding, Actors, bAllowBindingsFromAsset) end
function ALevelSequenceActor:ResetBindings() end
---@param Binding FMovieSceneObjectBindingID
function ALevelSequenceActor:ResetBinding(Binding) end
---@param Tag FName
---@param Actor AActor
function ALevelSequenceActor:RemoveBindingByTag(Tag, Actor) end
---@param Binding FMovieSceneObjectBindingID
---@param Actor AActor
function ALevelSequenceActor:RemoveBinding(Binding, Actor) end
function ALevelSequenceActor:OnLevelSequenceLoaded__DelegateSignature() end
---@return ULevelSequence
function ALevelSequenceActor:LoadSequence() end
function ALevelSequenceActor:HideBurnin() end
---@return ULevelSequencePlayer
function ALevelSequenceActor:GetSequencePlayer() end
---@return ULevelSequence
function ALevelSequenceActor:GetSequence() end
---@param Tag FName
---@return TArray<FMovieSceneObjectBindingID>
function ALevelSequenceActor:FindNamedBindings(Tag) end
---@param Tag FName
---@return FMovieSceneObjectBindingID
function ALevelSequenceActor:FindNamedBinding(Tag) end
---@param BindingTag FName
---@param Actor AActor
---@param bAllowBindingsFromAsset boolean
function ALevelSequenceActor:AddBindingByTag(BindingTag, Actor, bAllowBindingsFromAsset) end
---@param Binding FMovieSceneObjectBindingID
---@param Actor AActor
---@param bAllowBindingsFromAsset boolean
function ALevelSequenceActor:AddBinding(Binding, Actor, bAllowBindingsFromAsset) end


---@class ALevelSequenceMediaController : AActor
---@field Sequence ALevelSequenceActor
---@field MediaComponent UMediaComponent
---@field ServerStartTimeSeconds float
ALevelSequenceMediaController = {}

---@param DesyncThresholdSeconds float
function ALevelSequenceMediaController:SynchronizeToServer(DesyncThresholdSeconds) end
function ALevelSequenceMediaController:Play() end
function ALevelSequenceMediaController:OnRep_ServerStartTimeSeconds() end
---@return ALevelSequenceActor
function ALevelSequenceMediaController:GetSequence() end
---@return UMediaComponent
function ALevelSequenceMediaController:GetMediaComponent() end


---@class AReplicatedLevelSequenceActor : ALevelSequenceActor
AReplicatedLevelSequenceActor = {}


---@class FBoundActorProxy
FBoundActorProxy = {}


---@class FLevelSequenceAnimSequenceLinkItem
---@field SkelTrackGuid FGuid
---@field PathToAnimSequence FSoftObjectPath
---@field bExportTransforms boolean
---@field bExportMorphTargets boolean
---@field bExportAttributeCurves boolean
---@field bExportMaterialCurves boolean
---@field Interpolation EAnimInterpolationType
---@field CurveInterpolation ERichCurveInterpMode
---@field bRecordInWorldSpace boolean
---@field bEvaluateAllSkeletalMeshComponents boolean
FLevelSequenceAnimSequenceLinkItem = {}



---@class FLevelSequenceBindingReference
---@field PackageName FString
---@field ExternalObjectPath FSoftObjectPath
---@field ObjectPath FString
FLevelSequenceBindingReference = {}



---@class FLevelSequenceBindingReferenceArray
---@field References TArray<FLevelSequenceBindingReference>
FLevelSequenceBindingReferenceArray = {}



---@class FLevelSequenceBindingReferences
---@field BindingIdToReferences TMap<FGuid, FLevelSequenceBindingReferenceArray>
---@field AnimSequenceInstances TSet<FGuid>
---@field PostProcessInstances TSet<FGuid>
FLevelSequenceBindingReferences = {}



---@class FLevelSequenceCameraSettings
---@field bOverrideAspectRatioAxisConstraint boolean
---@field AspectRatioAxisConstraint EAspectRatioAxisConstraint
FLevelSequenceCameraSettings = {}



---@class FLevelSequenceLegacyObjectReference
FLevelSequenceLegacyObjectReference = {}


---@class FLevelSequenceObject
---@field ObjectOrOwner TLazyObjectPtr<UObject>
---@field ComponentName FString
---@field CachedComponent TWeakObjectPtr<UObject>
FLevelSequenceObject = {}



---@class FLevelSequenceObjectReferenceMap
FLevelSequenceObjectReferenceMap = {}


---@class FLevelSequencePlayerSnapshot
---@field MasterName FString
---@field MasterTime FQualifiedFrameTime
---@field SourceTime FQualifiedFrameTime
---@field CurrentShotName FString
---@field CurrentShotLocalTime FQualifiedFrameTime
---@field CurrentShotSourceTime FQualifiedFrameTime
---@field SourceTimecode FString
---@field CameraComponent TSoftObjectPtr<UCameraComponent>
---@field ActiveShot ULevelSequence
---@field ShotID FMovieSceneSequenceID
FLevelSequencePlayerSnapshot = {}



---@class FLevelSequenceSnapshotSettings
FLevelSequenceSnapshotSettings = {}


---@class ILevelSequenceMetaData : IInterface
ILevelSequenceMetaData = {}


---@class UAnimSequenceLevelSequenceLink : UAssetUserData
---@field SkelTrackGuid FGuid
---@field PathToLevelSequence FSoftObjectPath
UAnimSequenceLevelSequenceLink = {}



---@class UDefaultLevelSequenceInstanceData : UObject
---@field TransformOriginActor AActor
---@field TransformOrigin FTransform
UDefaultLevelSequenceInstanceData = {}



---@class ULegacyLevelSequenceDirectorBlueprint : UBlueprint
ULegacyLevelSequenceDirectorBlueprint = {}


---@class ULevelSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field ObjectReferences FLevelSequenceObjectReferenceMap
---@field BindingReferences FLevelSequenceBindingReferences
---@field PossessedObjects TMap<FString, FLevelSequenceObject>
---@field DirectorClass TObjectPtr<UClass>
---@field AssetUserData TArray<UAssetUserData>
ULevelSequence = {}

---@param InClass UClass
function ULevelSequence:RemoveMetaDataByClass(InClass) end
---@param InClass UClass
---@return UObject
function ULevelSequence:FindOrAddMetaDataByClass(InClass) end
---@param InClass UClass
---@return UObject
function ULevelSequence:FindMetaDataByClass(InClass) end
---@param InMetaData UObject
---@return UObject
function ULevelSequence:CopyMetaData(InMetaData) end


---@class ULevelSequenceAnimSequenceLink : UAssetUserData
---@field AnimSequenceLinks TArray<FLevelSequenceAnimSequenceLinkItem>
ULevelSequenceAnimSequenceLink = {}



---@class ULevelSequenceBurnIn : UUserWidget
---@field FrameInformation FLevelSequencePlayerSnapshot
---@field LevelSequenceActor ALevelSequenceActor
ULevelSequenceBurnIn = {}

---@param InSettings UObject
function ULevelSequenceBurnIn:SetSettings(InSettings) end
---@return TSubclassOf<ULevelSequenceBurnInInitSettings>
function ULevelSequenceBurnIn:GetSettingsClass() end


---@class ULevelSequenceBurnInInitSettings : UObject
ULevelSequenceBurnInInitSettings = {}


---@class ULevelSequenceBurnInOptions : UObject
---@field bUseBurnIn boolean
---@field BurnInClass FSoftClassPath
---@field Settings ULevelSequenceBurnInInitSettings
ULevelSequenceBurnInOptions = {}

---@param InBurnInClass FSoftClassPath
function ULevelSequenceBurnInOptions:SetBurnIn(InBurnInClass) end


---@class ULevelSequenceDirector : UObject
---@field Player ULevelSequencePlayer
---@field SubSequenceID int32
---@field MovieScenePlayerIndex int32
ULevelSequenceDirector = {}

function ULevelSequenceDirector:OnCreated() end
---@return UMovieSceneSequence
function ULevelSequenceDirector:GetSequence() end
---@return FQualifiedFrameTime
function ULevelSequenceDirector:GetMasterSequenceTime() end
---@return FQualifiedFrameTime
function ULevelSequenceDirector:GetCurrentTime() end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray<UObject>
function ULevelSequenceDirector:GetBoundObjects(ObjectBinding) end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return UObject
function ULevelSequenceDirector:GetBoundObject(ObjectBinding) end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray<AActor>
function ULevelSequenceDirector:GetBoundActors(ObjectBinding) end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return AActor
function ULevelSequenceDirector:GetBoundActor(ObjectBinding) end


---@class ULevelSequencePlayer : UMovieSceneSequencePlayer
---@field OnCameraCut FLevelSequencePlayerOnCameraCut
ULevelSequencePlayer = {}

---@return UCameraComponent
function ULevelSequencePlayer:GetActiveCameraComponent() end
---@param WorldContextObject UObject
---@param LevelSequence ULevelSequence
---@param Settings FMovieSceneSequencePlaybackSettings
---@param OutActor ALevelSequenceActor
---@return ULevelSequencePlayer
function ULevelSequencePlayer:CreateLevelSequencePlayer(WorldContextObject, LevelSequence, Settings, OutActor) end


---@class ULevelSequenceProjectSettings : UDeveloperSettings
---@field bDefaultLockEngineToDisplayRate boolean
---@field DefaultDisplayRate FString
---@field DefaultTickResolution FString
---@field DefaultClockSource EUpdateClockSource
ULevelSequenceProjectSettings = {}



