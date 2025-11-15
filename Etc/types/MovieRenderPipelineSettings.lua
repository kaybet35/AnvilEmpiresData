---@meta

---@class UMoviePipelineBurnInSetting : UMoviePipelineRenderPass
---@field BurnInClass FSoftClassPath
---@field bCompositeOntoFinalImage boolean
---@field RenderTarget UTextureRenderTarget2D
---@field BurnInWidgetInstances TArray<UMoviePipelineBurnInWidget>
local UMoviePipelineBurnInSetting = {}



---@class UMoviePipelineBurnInWidget : UUserWidget
local UMoviePipelineBurnInWidget = {}

---@param ForPipeline UMoviePipeline
function UMoviePipelineBurnInWidget:OnOutputFrameStarted(ForPipeline) end


---@class UMoviePipelineConsoleVariableSetting : UMoviePipelineSetting
---@field ConsoleVariables TMap<FString, float>
---@field StartConsoleCommands TArray<FString>
---@field EndConsoleCommands TArray<FString>
local UMoviePipelineConsoleVariableSetting = {}



---@class UMoviePipelineWidgetRenderer : UMoviePipelineRenderPass
---@field bCompositeOntoFinalImage boolean
---@field RenderTarget UTextureRenderTarget2D
local UMoviePipelineWidgetRenderer = {}



