---@meta

---@class FMovieSceneGeometryCacheParams
---@field GeometryCacheAsset UGeometryCache
---@field FirstLoopStartFrameOffset FFrameNumber
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
---@field bReverse boolean
---@field StartOffset float
---@field EndOffset float
---@field GeometryCache FSoftObjectPath
FMovieSceneGeometryCacheParams = {}



---@class FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneGeometryCacheSectionTemplateParameters
FMovieSceneGeometryCacheSectionTemplate = {}



---@class FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
FMovieSceneGeometryCacheSectionTemplateParameters = {}



---@class UMovieSceneGeometryCacheSection : UMovieSceneSection
---@field Params FMovieSceneGeometryCacheParams
UMovieSceneGeometryCacheSection = {}



---@class UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
UMovieSceneGeometryCacheTrack = {}



