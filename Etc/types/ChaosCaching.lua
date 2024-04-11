---@meta

---@class AChaosCacheManager : AActor
---@field CacheCollection UChaosCacheCollection
---@field CacheMode ECacheMode
---@field StartMode EStartMode
---@field StartTime float
---@field ObservedComponents TArray<FObservedComponent>
AChaosCacheManager = {}

---@param InCacheName FName
function AChaosCacheManager:TriggerComponentByCache(InCacheName) end
---@param InComponent UPrimitiveComponent
function AChaosCacheManager:TriggerComponent(InComponent) end
function AChaosCacheManager:TriggerAll() end
---@param InStartTime float
function AChaosCacheManager:SetStartTime(InStartTime) end
---@param InIndex int32
function AChaosCacheManager:ResetSingleTransform(InIndex) end
function AChaosCacheManager:ResetAllComponentTransforms() end


---@class AChaosCachePlayer : AChaosCacheManager
AChaosCachePlayer = {}


---@class FBreakingEvent : FCacheEventBase
---@field Index int32
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field BoundingBoxMin FVector
---@field BoundingBoxMax FVector
FBreakingEvent = {}



---@class FCacheEventBase
FCacheEventBase = {}


---@class FCacheEventTrack
---@field Name FName
---@field Struct UScriptStruct
---@field TimeStamps TArray<float>
FCacheEventTrack = {}



---@class FCacheSpawnableTemplate
---@field DuplicatedTemplate UObject
---@field InitialTransform FTransform
---@field ComponentTransform FTransform
FCacheSpawnableTemplate = {}



---@class FCollisionEvent : FCacheEventBase
---@field Location FVector
---@field AccumulatedImpulse FVector
---@field Normal FVector
---@field Velocity1 FVector
---@field Velocity2 FVector
---@field DeltaVelocity1 FVector
---@field DeltaVelocity2 FVector
---@field AngularVelocity1 FVector
---@field AngularVelocity2 FVector
---@field Mass1 float
---@field Mass2 float
---@field PenetrationDepth float
FCollisionEvent = {}



---@class FEnableStateEvent : FCacheEventBase
---@field Index int32
---@field bEnable boolean
FEnableStateEvent = {}



---@class FMovieSceneChaosCacheParams : FMovieSceneBaseCacheParams
---@field CacheCollection UChaosCacheCollection
FMovieSceneChaosCacheParams = {}



---@class FMovieSceneChaosCacheSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneChaosCacheSectionTemplateParameters
FMovieSceneChaosCacheSectionTemplate = {}



---@class FMovieSceneChaosCacheSectionTemplateParameters : FMovieSceneBaseCacheSectionTemplateParameters
---@field ChaosCacheParams FMovieSceneChaosCacheParams
FMovieSceneChaosCacheSectionTemplateParameters = {}



---@class FObservedComponent
---@field CacheName FName
---@field ComponentRef FComponentReference
---@field SoftComponentRef FSoftComponentReference
---@field bIsSimulating boolean
FObservedComponent = {}



---@class FParticleTransformTrack
---@field RawTransformTrack FRawAnimSequenceTrack
---@field BeginOffset float
---@field bDeactivateOnEnd boolean
---@field KeyTimestamps TArray<float>
FParticleTransformTrack = {}



---@class FPerParticleCacheData
---@field TransformData FParticleTransformTrack
---@field CurveData TMap<FName, FRichCurve>
FPerParticleCacheData = {}



---@class FRichCurves
---@field RichCurves TArray<FRichCurve>
FRichCurves = {}



---@class FTrailingEvent : FCacheEventBase
---@field Index int32
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field BoundingBoxMin FVector
---@field BoundingBoxMax FVector
FTrailingEvent = {}



---@class UChaosCache : UObject
---@field RecordedDuration float
---@field NumRecordedFrames uint32
---@field TrackToParticle TArray<int32>
---@field ParticleTracks TArray<FPerParticleCacheData>
---@field ChannelsTracks TMap<FName, FRichCurves>
---@field CurveData TMap<FName, FRichCurve>
---@field EventTracks TMap<FName, FCacheEventTrack>
---@field Spawnable FCacheSpawnableTemplate
---@field AdapterGuid FGuid
---@field Version int32
UChaosCache = {}



---@class UChaosCacheCollection : UObject
---@field Caches TArray<UChaosCache>
UChaosCacheCollection = {}



---@class UMovieSceneChaosCacheSection : UMovieSceneBaseCacheSection
---@field Params FMovieSceneChaosCacheParams
UMovieSceneChaosCacheSection = {}



---@class UMovieSceneChaosCacheTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
UMovieSceneChaosCacheTrack = {}



