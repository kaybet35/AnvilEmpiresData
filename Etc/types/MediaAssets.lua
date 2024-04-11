---@meta

---@class FMediaCaptureDevice
---@field DisplayName FText
---@field URL FString
FMediaCaptureDevice = {}



---@class FMediaSoundComponentSpectralData
---@field FrequencyHz float
---@field Magnitude float
FMediaSoundComponentSpectralData = {}



---@class FMediaSourceCacheSettings
---@field bOverride boolean
---@field TimeToLookAhead float
FMediaSourceCacheSettings = {}



---@class IMediaPlayerProxyInterface : IInterface
IMediaPlayerProxyInterface = {}


---@class UBaseMediaSource : UMediaSource
---@field PlayerName FName
UBaseMediaSource = {}



---@class UFileMediaSource : UBaseMediaSource
---@field FilePath FString
---@field PrecacheFile boolean
UFileMediaSource = {}

---@param Path FString
function UFileMediaSource:SetFilePath(Path) end


---@class UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
UMediaBlueprintFunctionLibrary = {}

---@param OutDevices TArray<FMediaCaptureDevice>
---@param Filter int32
function UMediaBlueprintFunctionLibrary:EnumerateWebcamCaptureDevices(OutDevices, Filter) end
---@param OutDevices TArray<FMediaCaptureDevice>
---@param Filter int32
function UMediaBlueprintFunctionLibrary:EnumerateVideoCaptureDevices(OutDevices, Filter) end
---@param OutDevices TArray<FMediaCaptureDevice>
---@param Filter int32
function UMediaBlueprintFunctionLibrary:EnumerateAudioCaptureDevices(OutDevices, Filter) end


---@class UMediaComponent : UActorComponent
---@field MediaTexture UMediaTexture
---@field MediaPlayer UMediaPlayer
UMediaComponent = {}

---@return UMediaTexture
function UMediaComponent:GetMediaTexture() end
---@return UMediaPlayer
function UMediaComponent:GetMediaPlayer() end


---@class UMediaPlayer : UObject
---@field OnEndReached FMediaPlayerOnEndReached
---@field OnMediaClosed FMediaPlayerOnMediaClosed
---@field OnMediaOpened FMediaPlayerOnMediaOpened
---@field OnMediaOpenFailed FMediaPlayerOnMediaOpenFailed
---@field OnPlaybackResumed FMediaPlayerOnPlaybackResumed
---@field OnPlaybackSuspended FMediaPlayerOnPlaybackSuspended
---@field OnSeekCompleted FMediaPlayerOnSeekCompleted
---@field OnTracksChanged FMediaPlayerOnTracksChanged
---@field CacheAhead FTimespan
---@field CacheBehind FTimespan
---@field CacheBehindGame FTimespan
---@field NativeAudioOut boolean
---@field PlayOnOpen boolean
---@field Shuffle boolean
---@field Loop boolean
---@field Playlist UMediaPlaylist
---@field PlaylistIndex int32
---@field TimeDelay FTimespan
---@field HorizontalFieldOfView float
---@field VerticalFieldOfView float
---@field ViewRotation FRotator
---@field PlayerGuid FGuid
UMediaPlayer = {}

---@return boolean
function UMediaPlayer:SupportsSeeking() end
---@return boolean
function UMediaPlayer:SupportsScrubbing() end
---@param Rate float
---@param Unthinned boolean
---@return boolean
function UMediaPlayer:SupportsRate(Rate, Unthinned) end
---@param Rotation FRotator
---@param Absolute boolean
---@return boolean
function UMediaPlayer:SetViewRotation(Rotation, Absolute) end
---@param Horizontal float
---@param Vertical float
---@param Absolute boolean
---@return boolean
function UMediaPlayer:SetViewField(Horizontal, Vertical, Absolute) end
---@param TrackIndex int32
---@param FormatIndex int32
---@param FrameRate float
---@return boolean
function UMediaPlayer:SetVideoTrackFrameRate(TrackIndex, FormatIndex, FrameRate) end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@param FormatIndex int32
---@return boolean
function UMediaPlayer:SetTrackFormat(TrackType, TrackIndex, FormatIndex) end
---@param TimeDelay FTimespan
function UMediaPlayer:SetTimeDelay(TimeDelay) end
---@param Rate float
---@return boolean
function UMediaPlayer:SetRate(Rate) end
---@param Volume float
---@return boolean
function UMediaPlayer:SetNativeVolume(Volume) end
---@param Options UMediaSource
function UMediaPlayer:SetMediaOptions(Options) end
---@param Looping boolean
---@return boolean
function UMediaPlayer:SetLooping(Looping) end
---@param PlayerName FName
function UMediaPlayer:SetDesiredPlayerName(PlayerName) end
---@param Time FTimespan
function UMediaPlayer:SetBlockOnTime(Time) end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@return boolean
function UMediaPlayer:SelectTrack(TrackType, TrackIndex) end
---@param Time FTimespan
---@return boolean
function UMediaPlayer:Seek(Time) end
---@return boolean
function UMediaPlayer:Rewind() end
---@return boolean
function UMediaPlayer:Reopen() end
---@return boolean
function UMediaPlayer:Previous() end
function UMediaPlayer:PlayAndSeek() end
---@return boolean
function UMediaPlayer:Play() end
---@return boolean
function UMediaPlayer:Pause() end
---@param URL FString
---@return boolean
function UMediaPlayer:OpenUrl(URL) end
---@param MediaSource UMediaSource
---@param Options FMediaPlayerOptions
---@return boolean
function UMediaPlayer:OpenSourceWithOptions(MediaSource, Options) end
---@param WorldContextObject UObject
---@param LatentInfo FLatentActionInfo
---@param MediaSource UMediaSource
---@param Options FMediaPlayerOptions
---@param bSuccess boolean
function UMediaPlayer:OpenSourceLatent(WorldContextObject, LatentInfo, MediaSource, Options, bSuccess) end
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlayer:OpenSource(MediaSource) end
---@param InPlaylist UMediaPlaylist
---@param Index int32
---@return boolean
function UMediaPlayer:OpenPlaylistIndex(InPlaylist, Index) end
---@param InPlaylist UMediaPlaylist
---@return boolean
function UMediaPlayer:OpenPlaylist(InPlaylist) end
---@param FilePath FString
---@return boolean
function UMediaPlayer:OpenFile(FilePath) end
---@return boolean
function UMediaPlayer:Next() end
---@return boolean
function UMediaPlayer:IsReady() end
---@return boolean
function UMediaPlayer:IsPreparing() end
---@return boolean
function UMediaPlayer:IsPlaying() end
---@return boolean
function UMediaPlayer:IsPaused() end
---@return boolean
function UMediaPlayer:IsLooping() end
---@return boolean
function UMediaPlayer:IsConnecting() end
---@return boolean
function UMediaPlayer:IsClosed() end
---@return boolean
function UMediaPlayer:IsBuffering() end
---@return boolean
function UMediaPlayer:HasError() end
---@return FRotator
function UMediaPlayer:GetViewRotation() end
---@param TrackIndex int32
---@param FormatIndex int32
---@return FString
function UMediaPlayer:GetVideoTrackType(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return FFloatRange
function UMediaPlayer:GetVideoTrackFrameRates(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return float
function UMediaPlayer:GetVideoTrackFrameRate(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return FIntPoint
function UMediaPlayer:GetVideoTrackDimensions(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return float
function UMediaPlayer:GetVideoTrackAspectRatio(TrackIndex, FormatIndex) end
---@return float
function UMediaPlayer:GetVerticalFieldOfView() end
---@return FString
function UMediaPlayer:GetUrl() end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@return FString
function UMediaPlayer:GetTrackLanguage(TrackType, TrackIndex) end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@return int32
function UMediaPlayer:GetTrackFormat(TrackType, TrackIndex) end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@return FText
function UMediaPlayer:GetTrackDisplayName(TrackType, TrackIndex) end
---@return UMediaTimeStampInfo
function UMediaPlayer:GetTimeStamp() end
---@return FTimespan
function UMediaPlayer:GetTimeDelay() end
---@return FTimespan
function UMediaPlayer:GetTime() end
---@param OutRates TArray<FFloatRange>
---@param Unthinned boolean
function UMediaPlayer:GetSupportedRates(OutRates, Unthinned) end
---@param TrackType EMediaPlayerTrack
---@return int32
function UMediaPlayer:GetSelectedTrack(TrackType) end
---@return float
function UMediaPlayer:GetRate() end
---@return int32
function UMediaPlayer:GetPlaylistIndex() end
---@return UMediaPlaylist
function UMediaPlayer:GetPlaylist() end
---@return FName
function UMediaPlayer:GetPlayerName() end
---@param TrackType EMediaPlayerTrack
---@return int32
function UMediaPlayer:GetNumTracks(TrackType) end
---@param TrackType EMediaPlayerTrack
---@param TrackIndex int32
---@return int32
function UMediaPlayer:GetNumTrackFormats(TrackType, TrackIndex) end
---@return FText
function UMediaPlayer:GetMediaName() end
---@return float
function UMediaPlayer:GetHorizontalFieldOfView() end
---@return FTimespan
function UMediaPlayer:GetDuration() end
---@return FName
function UMediaPlayer:GetDesiredPlayerName() end
---@param TrackIndex int32
---@param FormatIndex int32
---@return FString
function UMediaPlayer:GetAudioTrackType(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return int32
function UMediaPlayer:GetAudioTrackSampleRate(TrackIndex, FormatIndex) end
---@param TrackIndex int32
---@param FormatIndex int32
---@return int32
function UMediaPlayer:GetAudioTrackChannels(TrackIndex, FormatIndex) end
function UMediaPlayer:Close() end
---@param URL FString
---@return boolean
function UMediaPlayer:CanPlayUrl(URL) end
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlayer:CanPlaySource(MediaSource) end
---@return boolean
function UMediaPlayer:CanPause() end


---@class UMediaPlaylist : UObject
---@field Items TArray<UMediaSource>
UMediaPlaylist = {}

---@param Index int32
---@param Replacement UMediaSource
---@return boolean
function UMediaPlaylist:Replace(Index, Replacement) end
---@param Index int32
---@return boolean
function UMediaPlaylist:RemoveAt(Index) end
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlaylist:Remove(MediaSource) end
---@return int32
function UMediaPlaylist:Num() end
---@param MediaSource UMediaSource
---@param Index int32
function UMediaPlaylist:Insert(MediaSource, Index) end
---@param OutIndex int32
---@return UMediaSource
function UMediaPlaylist:GetRandom(OutIndex) end
---@param InOutIndex int32
---@return UMediaSource
function UMediaPlaylist:GetPrevious(InOutIndex) end
---@param InOutIndex int32
---@return UMediaSource
function UMediaPlaylist:GetNext(InOutIndex) end
---@param Index int32
---@return UMediaSource
function UMediaPlaylist:Get(Index) end
---@param URL FString
---@return boolean
function UMediaPlaylist:AddUrl(URL) end
---@param FilePath FString
---@return boolean
function UMediaPlaylist:AddFile(FilePath) end
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlaylist:Add(MediaSource) end


---@class UMediaSoundComponent : USynthComponent
---@field Channels EMediaSoundChannels
---@field DynamicRateAdjustment boolean
---@field RateAdjustmentFactor float
---@field RateAdjustmentRange FFloatRange
---@field MediaPlayer UMediaPlayer
UMediaSoundComponent = {}

---@param InFrequenciesToAnalyze TArray<float>
---@param InFFTSize EMediaSoundComponentFFTSize
function UMediaSoundComponent:SetSpectralAnalysisSettings(InFrequenciesToAnalyze, InFFTSize) end
---@param NewMediaPlayer UMediaPlayer
function UMediaSoundComponent:SetMediaPlayer(NewMediaPlayer) end
---@param AttackTimeMsec int32
---@param ReleaseTimeMsec int32
function UMediaSoundComponent:SetEnvelopeFollowingsettings(AttackTimeMsec, ReleaseTimeMsec) end
---@param bInSpectralAnalysisEnabled boolean
function UMediaSoundComponent:SetEnableSpectralAnalysis(bInSpectralAnalysisEnabled) end
---@param bInEnvelopeFollowing boolean
function UMediaSoundComponent:SetEnableEnvelopeFollowing(bInEnvelopeFollowing) end
---@return TArray<FMediaSoundComponentSpectralData>
function UMediaSoundComponent:GetSpectralData() end
---@return TArray<FMediaSoundComponentSpectralData>
function UMediaSoundComponent:GetNormalizedSpectralData() end
---@return UMediaPlayer
function UMediaSoundComponent:GetMediaPlayer() end
---@return float
function UMediaSoundComponent:GetEnvelopeValue() end
---@param OutAttenuationSettings FSoundAttenuationSettings
---@return boolean
function UMediaSoundComponent:BP_GetAttenuationSettingsToApply(OutAttenuationSettings) end


---@class UMediaSource : UObject
UMediaSource = {}

---@return boolean
function UMediaSource:Validate() end
---@param Key FName
---@param Value FString
function UMediaSource:SetMediaOptionString(Key, Value) end
---@param Key FName
---@param Value int64
function UMediaSource:SetMediaOptionInt64(Key, Value) end
---@param Key FName
---@param Value float
function UMediaSource:SetMediaOptionFloat(Key, Value) end
---@param Key FName
---@param Value boolean
function UMediaSource:SetMediaOptionBool(Key, Value) end
---@return FString
function UMediaSource:GetUrl() end


---@class UMediaTexture : UTexture
---@field AddressX TextureAddress
---@field AddressY TextureAddress
---@field AutoClear boolean
---@field ClearColor FLinearColor
---@field EnableGenMips boolean
---@field NumMips uint8
---@field NewStyleOutput boolean
---@field OutputFormat MediaTextureOutputFormat
---@field CurrentAspectRatio float
---@field CurrentOrientation MediaTextureOrientation
---@field MediaPlayer UMediaPlayer
UMediaTexture = {}

function UMediaTexture:UpdateResource() end
---@param NewMediaPlayer UMediaPlayer
function UMediaTexture:SetMediaPlayer(NewMediaPlayer) end
---@return int32
function UMediaTexture:GetWidth() end
---@return int32
function UMediaTexture:GetTextureNumMips() end
---@return UMediaPlayer
function UMediaTexture:GetMediaPlayer() end
---@return int32
function UMediaTexture:GetHeight() end
---@return float
function UMediaTexture:GetAspectRatio() end


---@class UMediaTimeStampInfo : UObject
---@field Time FTimespan
---@field SequenceIndex int64
UMediaTimeStampInfo = {}



---@class UPlatformMediaSource : UMediaSource
---@field MediaSource UMediaSource
UPlatformMediaSource = {}



---@class UStreamMediaSource : UBaseMediaSource
---@field StreamUrl FString
UStreamMediaSource = {}



---@class UTimeSynchronizableMediaSource : UBaseMediaSource
---@field bUseTimeSynchronization boolean
---@field FrameDelay int32
---@field TimeDelay double
---@field bAutoDetectInput boolean
UTimeSynchronizableMediaSource = {}



