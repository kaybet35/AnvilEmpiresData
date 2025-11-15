---@meta

---@class FMovieSceneGeometryCollectionParams
---@field GeometryCollectionCache FSoftObjectPath
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
local FMovieSceneGeometryCollectionParams = {}



---@class FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneGeometryCollectionSectionTemplateParameters
local FMovieSceneGeometryCollectionSectionTemplate = {}



---@class FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
local FMovieSceneGeometryCollectionSectionTemplateParameters = {}



---@class UMovieSceneGeometryCollectionSection : UMovieSceneSection
---@field Params FMovieSceneGeometryCollectionParams
local UMovieSceneGeometryCollectionSection = {}



---@class UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
local UMovieSceneGeometryCollectionTrack = {}



