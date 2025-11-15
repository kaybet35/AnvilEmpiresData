---@meta

---@class AMediaPlate : AActor
---@field MediaPlateComponent UMediaPlateComponent
---@field StaticMeshComponent UStaticMeshComponent
local AMediaPlate = {}



---@class UMediaPlateAssetUserData : UAssetUserData
local UMediaPlateAssetUserData = {}


---@class UMediaPlateComponent : UActorComponent
---@field bPlayOnOpen boolean
---@field bAutoPlay boolean
---@field bEnableAudio boolean
---@field StartTime float
---@field bIsAspectRatioAuto boolean
---@field SoundComponent UMediaSoundComponent
---@field StaticMeshComponent UStaticMeshComponent
---@field Letterboxes TArray<UStaticMeshComponent>
---@field MediaPlaylist UMediaPlaylist
---@field PlaylistIndex int32
---@field CacheSettings FMediaSourceCacheSettings
---@field bIsMediaPlatePlaying boolean
---@field bPlayOnlyWhenVisible boolean
---@field bLoop boolean
---@field VisibleMipsTilesCalculations EMediaTextureVisibleMipsTiles
---@field MipMapBias float
---@field LetterboxAspectRatio float
---@field MeshRange FVector2D
---@field MediaTexture UMediaTexture
---@field MediaPlayer UMediaPlayer
local UMediaPlateComponent = {}

---@param bInPlayOnlyWhenVisible boolean
function UMediaPlateComponent:SetPlayOnlyWhenVisible(bInPlayOnlyWhenVisible) end
---@param InMeshRange FVector2D
function UMediaPlateComponent:SetMeshRange(InMeshRange) end
---@param bInLoop boolean
function UMediaPlateComponent:SetLoop(bInLoop) end
---@param AspectRatio float
function UMediaPlateComponent:SetLetterboxAspectRatio(AspectRatio) end
---@param Time FTimespan
---@return boolean
function UMediaPlateComponent:Seek(Time) end
---@return boolean
function UMediaPlateComponent:Rewind() end
function UMediaPlateComponent:Play() end
function UMediaPlateComponent:Pause() end
function UMediaPlateComponent:Open() end
---@param DeviceUrl FString
function UMediaPlateComponent:OnMediaOpened(DeviceUrl) end
function UMediaPlateComponent:OnMediaEnd() end
---@return boolean
function UMediaPlateComponent:IsMediaPlatePlaying() end
---@return FVector2D
function UMediaPlateComponent:GetMeshRange() end
---@return UMediaTexture
function UMediaPlateComponent:GetMediaTexture() end
---@return UMediaPlayer
function UMediaPlateComponent:GetMediaPlayer() end
---@return boolean
function UMediaPlateComponent:GetLoop() end
---@return float
function UMediaPlateComponent:GetLetterboxAspectRatio() end
function UMediaPlateComponent:Close() end


