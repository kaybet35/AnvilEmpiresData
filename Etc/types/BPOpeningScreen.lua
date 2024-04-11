---@meta

---@class UBPOpeningScreen_C : UOpeningScreen
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnnouncementTextAnimation UWidgetAnimation
---@field Image_50 UImage
---@field RoadmapBackground UImage
---@field RoadmapCloseImage UImage
---@field RoadmapImage UImage
UBPOpeningScreen_C = {}

function UBPOpeningScreen_C:Construct() end
---@param EntryPoint int32
function UBPOpeningScreen_C:ExecuteUbergraph_BPOpeningScreen(EntryPoint) end


