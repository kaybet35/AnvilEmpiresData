---@meta

---@class FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field MediaSource UMediaSource
---@field SectionStartFrame FFrameNumber
---@field bLoop boolean
FMovieSceneMediaPlayerPropertySectionTemplate = {}



---@class FMovieSceneMediaSectionParams
---@field MediaSoundComponent UMediaSoundComponent
---@field MediaSource UMediaSource
---@field MediaTexture UMediaTexture
---@field MediaPlayer UMediaPlayer
---@field SectionStartFrame FFrameNumber
---@field SectionEndFrame FFrameNumber
---@field bLooping boolean
---@field StartFrameOffset FFrameNumber
FMovieSceneMediaSectionParams = {}



---@class FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneMediaSectionParams
FMovieSceneMediaSectionTemplate = {}



---@class UMovieSceneMediaPlayerPropertySection : UMovieSceneSection
---@field MediaSource UMediaSource
---@field bLoop boolean
UMovieSceneMediaPlayerPropertySection = {}



---@class UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack
UMovieSceneMediaPlayerPropertyTrack = {}


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
UMovieSceneMediaSection = {}



---@class UMovieSceneMediaTrack : UMovieSceneNameableTrack
---@field MediaSections TArray<UMovieSceneSection>
UMovieSceneMediaTrack = {}



