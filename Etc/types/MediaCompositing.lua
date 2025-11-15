---@meta

---@class FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field MediaSource UMediaSource
---@field SectionStartFrame FFrameNumber
---@field bLoop boolean
local FMovieSceneMediaPlayerPropertySectionTemplate = {}



---@class FMovieSceneMediaSectionParams
---@field MediaSoundComponent UMediaSoundComponent
---@field MediaSource UMediaSource
---@field MediaTexture UMediaTexture
---@field MediaPlayer UMediaPlayer
---@field SectionStartFrame FFrameNumber
---@field SectionEndFrame FFrameNumber
---@field bLooping boolean
---@field StartFrameOffset FFrameNumber
local FMovieSceneMediaSectionParams = {}



---@class FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneMediaSectionParams
local FMovieSceneMediaSectionTemplate = {}



---@class UMovieSceneMediaPlayerPropertySection : UMovieSceneSection
---@field MediaSource UMediaSource
---@field bLoop boolean
local UMovieSceneMediaPlayerPropertySection = {}



---@class UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack
local UMovieSceneMediaPlayerPropertyTrack = {}


---@class UMovieSceneMediaSection : UMovieSceneSection
---@field MediaSource UMediaSource
---@field bLooping boolean
---@field StartFrameOffset FFrameNumber
---@field MediaTexture UMediaTexture
---@field MediaSoundComponent UMediaSoundComponent
---@field bUseExternalMediaPlayer boolean
---@field ExternalMediaPlayer UMediaPlayer
---@field CacheSettings FMediaSourceCacheSettings
---@field bHasMediaPlayerProxy boolean
local UMovieSceneMediaSection = {}



---@class UMovieSceneMediaTrack : UMovieSceneNameableTrack
---@field MediaSections TArray<UMovieSceneSection>
local UMovieSceneMediaTrack = {}



