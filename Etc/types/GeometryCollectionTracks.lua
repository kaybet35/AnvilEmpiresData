---@meta

---@class FMovieSceneGeometryCollectionParams
---@field GeometryCollectionCache FSoftObjectPath
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
FMovieSceneGeometryCollectionParams = {}



---@class FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneGeometryCollectionSectionTemplateParameters
FMovieSceneGeometryCollectionSectionTemplate = {}



---@class FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
FMovieSceneGeometryCollectionSectionTemplateParameters = {}



---@class UMovieSceneGeometryCollectionSection : UMovieSceneSection
---@field Params FMovieSceneGeometryCollectionParams
UMovieSceneGeometryCollectionSection = {}



---@class UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
UMovieSceneGeometryCollectionTrack = {}



