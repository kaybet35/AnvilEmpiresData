---@meta

---@class UBPOpeningScreen_C : UOpeningScreen
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnnouncementTextAnimation UWidgetAnimation
---@field BlackBG UImage
---@field Logo UImage
local UBPOpeningScreen_C = {}

function UBPOpeningScreen_C:Construct() end
---@param EntryPoint int32
function UBPOpeningScreen_C:ExecuteUbergraph_BPOpeningScreen(EntryPoint) end


