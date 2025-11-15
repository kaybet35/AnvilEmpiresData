---@meta

---@class UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary
local UAndroidFileServerBPLibrary = {}

---@param bUSB boolean
---@param bNetwork boolean
---@return boolean
function UAndroidFileServerBPLibrary:StopFileServer(bUSB, bNetwork) end
---@param bUSB boolean
---@param bNetwork boolean
---@param Port int32
---@return boolean
function UAndroidFileServerBPLibrary:StartFileServer(bUSB, bNetwork, Port) end
---@return EAFSActiveType::Type
function UAndroidFileServerBPLibrary:IsFileServerRunning() end


