---@meta

---@class UTraceUtilLibrary : UBlueprintFunctionLibrary
UTraceUtilLibrary = {}

---@param Name FString
function UTraceUtilLibrary:TraceMarkRegionStart(Name) end
---@param Name FString
function UTraceUtilLibrary:TraceMarkRegionEnd(Name) end
---@param Name FString
function UTraceUtilLibrary:TraceBookmark(Name) end
---@param ChannelName FString
---@param Enabled boolean
---@return boolean
function UTraceUtilLibrary:ToggleChannel(ChannelName, Enabled) end
---@return boolean
function UTraceUtilLibrary:StopTracing() end
---@param Filename FString
---@param Channels TArray<FString>
---@return boolean
function UTraceUtilLibrary:StartTraceToFile(Filename, Channels) end
---@param Target FString
---@param Channels TArray<FString>
---@return boolean
function UTraceUtilLibrary:StartTraceSendTo(Target, Channels) end
---@return boolean
function UTraceUtilLibrary:ResumeTracing() end
---@return boolean
function UTraceUtilLibrary:PauseTracing() end
---@return boolean
function UTraceUtilLibrary:IsTracing() end
---@param ChannelName FString
---@return boolean
function UTraceUtilLibrary:IsChannelEnabled(ChannelName) end
---@return TArray<FString>
function UTraceUtilLibrary:GetEnabledChannels() end
---@return TArray<FString>
function UTraceUtilLibrary:GetAllChannels() end


