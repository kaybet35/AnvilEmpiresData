---@meta

---@class AGeometryCacheActor : AActor
---@field GeometryCacheComponent UGeometryCacheComponent
local AGeometryCacheActor = {}

---@return UGeometryCacheComponent
function AGeometryCacheActor:GetGeometryCacheComponent() end


---@class FGeometryCacheMeshBatchInfo
local FGeometryCacheMeshBatchInfo = {}


---@class FGeometryCacheMeshData
local FGeometryCacheMeshData = {}


---@class FGeometryCacheVertexInfo
local FGeometryCacheVertexInfo = {}


---@class FNiagaraGeometryCacheReference
---@field GeometryCache UGeometryCache
---@field GeometryCacheUserParamBinding FNiagaraUserParameterBinding
---@field OverrideMaterials TArray<UMaterialInterface>
local FNiagaraGeometryCacheReference = {}



---@class FTrackRenderData
local FTrackRenderData = {}


---@class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
---@field NumMeshSamples uint32
local UDEPRECATED_GeometryCacheTrack_FlipbookAnimation = {}

---@param MeshData FGeometryCacheMeshData
---@param SampleTime float
function UDEPRECATED_GeometryCacheTrack_FlipbookAnimation:AddMeshSample(MeshData, SampleTime) end


---@class UDEPRECATED_GeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
local UDEPRECATED_GeometryCacheTrack_TransformAnimation = {}

---@param NewMeshData FGeometryCacheMeshData
function UDEPRECATED_GeometryCacheTrack_TransformAnimation:SetMesh(NewMeshData) end


---@class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
local UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation = {}

---@param NewMeshData FGeometryCacheMeshData
function UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation:SetMesh(NewMeshData) end


---@class UGeometryCache : UObject
---@field Materials TArray<UMaterialInterface>
---@field Tracks TArray<UGeometryCacheTrack>
---@field StartFrame int32
---@field EndFrame int32
---@field Hash uint64
local UGeometryCache = {}



---@class UGeometryCacheCodecBase : UObject
---@field TopologyRanges TArray<int32>
local UGeometryCacheCodecBase = {}



---@class UGeometryCacheCodecRaw : UGeometryCacheCodecBase
---@field DummyProperty int32
local UGeometryCacheCodecRaw = {}



---@class UGeometryCacheCodecV1 : UGeometryCacheCodecBase
local UGeometryCacheCodecV1 = {}


---@class UGeometryCacheComponent : UMeshComponent
---@field GeometryCache UGeometryCache
---@field bRunning boolean
---@field bLooping boolean
---@field bExtrapolateFrames boolean
---@field StartTimeOffset float
---@field PlaybackSpeed float
---@field MotionVectorScale float
---@field NumTracks int32
---@field ElapsedTime float
---@field Duration float
---@field bManualTick boolean
---@field bOverrideWireframeColor boolean
---@field WireframeOverrideColor FLinearColor
local UGeometryCacheComponent = {}

---@param Time float
---@param bInIsRunning boolean
---@param bInBackwards boolean
---@param bInIsLooping boolean
function UGeometryCacheComponent:TickAtThisTime(Time, bInIsRunning, bInBackwards, bInIsLooping) end
function UGeometryCacheComponent:Stop() end
---@param Color FLinearColor
function UGeometryCacheComponent:SetWireframeOverrideColor(Color) end
---@param NewStartTimeOffset float
function UGeometryCacheComponent:SetStartTimeOffset(NewStartTimeOffset) end
---@param NewPlaybackSpeed float
function UGeometryCacheComponent:SetPlaybackSpeed(NewPlaybackSpeed) end
---@param bOverride boolean
function UGeometryCacheComponent:SetOverrideWireframeColor(bOverride) end
---@param NewMotionVectorScale float
function UGeometryCacheComponent:SetMotionVectorScale(NewMotionVectorScale) end
---@param bNewLooping boolean
function UGeometryCacheComponent:SetLooping(bNewLooping) end
---@param NewGeomCache UGeometryCache
---@return boolean
function UGeometryCacheComponent:SetGeometryCache(NewGeomCache) end
---@param bNewExtrapolating boolean
function UGeometryCacheComponent:SetExtrapolateFrames(bNewExtrapolating) end
function UGeometryCacheComponent:PlayReversedFromEnd() end
function UGeometryCacheComponent:PlayReversed() end
function UGeometryCacheComponent:PlayFromStart() end
function UGeometryCacheComponent:Play() end
function UGeometryCacheComponent:Pause() end
---@return boolean
function UGeometryCacheComponent:IsPlayingReversed() end
---@return boolean
function UGeometryCacheComponent:IsPlaying() end
---@return boolean
function UGeometryCacheComponent:IsLooping() end
---@return boolean
function UGeometryCacheComponent:IsExtrapolatingFrames() end
---@return FLinearColor
function UGeometryCacheComponent:GetWireframeOverrideColor() end
---@return float
function UGeometryCacheComponent:GetStartTimeOffset() end
---@return float
function UGeometryCacheComponent:GetPlaybackSpeed() end
---@return float
function UGeometryCacheComponent:GetPlaybackDirection() end
---@return boolean
function UGeometryCacheComponent:GetOverrideWireframeColor() end
---@return int32
function UGeometryCacheComponent:GetNumberOfFrames() end
---@return float
function UGeometryCacheComponent:GetMotionVectorScale() end
---@return float
function UGeometryCacheComponent:GetDuration() end
---@return float
function UGeometryCacheComponent:GetAnimationTime() end


---@class UGeometryCacheTrack : UObject
---@field Duration float
local UGeometryCacheTrack = {}



---@class UGeometryCacheTrackStreamable : UGeometryCacheTrack
---@field Codec UGeometryCacheCodecBase
---@field StartSampleTime float
local UGeometryCacheTrackStreamable = {}



---@class UNiagaraGeometryCacheRendererProperties : UNiagaraRendererProperties
---@field GeometryCaches TArray<FNiagaraGeometryCacheReference>
---@field bIsLooping boolean
---@field ComponentCountLimit uint32
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field RotationBinding FNiagaraVariableAttributeBinding
---@field ScaleBinding FNiagaraVariableAttributeBinding
---@field ElapsedTimeBinding FNiagaraVariableAttributeBinding
---@field EnabledBinding FNiagaraVariableAttributeBinding
---@field ArrayIndexBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
---@field RendererVisibility int32
---@field bAssignComponentsOnParticleID boolean
local UNiagaraGeometryCacheRendererProperties = {}



