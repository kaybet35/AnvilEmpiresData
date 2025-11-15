---@meta

---@class FBrushEffectBlurring
---@field bBlurShape boolean
---@field Radius int32
local FBrushEffectBlurring = {}



---@class FBrushEffectCurlNoise
---@field Curl1Amount float
---@field Curl2Amount float
---@field Curl1Tiling float
---@field Curl2Tiling float
local FBrushEffectCurlNoise = {}



---@class FBrushEffectCurves
---@field bUseCurveChannel boolean
---@field ElevationCurveAsset UCurveFloat
---@field ChannelEdgeOffset float
---@field ChannelDepth float
---@field CurveRampWidth float
local FBrushEffectCurves = {}



---@class FBrushEffectDisplacement
---@field DisplacementHeight float
---@field DisplacementTiling float
---@field Texture UTexture2D
---@field Midpoint float
---@field Channel FLinearColor
---@field WeightmapInfluence float
local FBrushEffectDisplacement = {}



---@class FBrushEffectSmoothBlending
---@field InnerSmoothDistance float
---@field OuterSmoothDistance float
local FBrushEffectSmoothBlending = {}



---@class FBrushEffectTerracing
---@field TerraceAlpha float
---@field TerraceSpacing float
---@field TerraceSmoothness float
---@field MaskLength float
---@field MaskStartOffset float
local FBrushEffectTerracing = {}



---@class FLandmassBrushEffectsList
---@field Blurring FBrushEffectBlurring
---@field CurlNoise FBrushEffectCurlNoise
---@field Displacement FBrushEffectDisplacement
---@field SmoothBlending FBrushEffectSmoothBlending
---@field Terracing FBrushEffectTerracing
local FLandmassBrushEffectsList = {}



---@class FLandmassFalloffSettings
---@field FalloffMode EBrushFalloffMode
---@field FalloffAngle float
---@field FalloffWidth float
---@field EdgeOffset float
---@field ZOffset float
local FLandmassFalloffSettings = {}



---@class FLandmassTerrainCarvingSettings
---@field BlendMode EBrushBlendType
---@field bInvertShape boolean
---@field FalloffSettings FLandmassFalloffSettings
---@field Effects FLandmassBrushEffectsList
---@field Priority int32
local FLandmassTerrainCarvingSettings = {}



