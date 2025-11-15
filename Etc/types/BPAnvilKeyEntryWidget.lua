---@meta

---@class UBPAnvilKeyEntryWidget_C : UAnvilKeyEntryWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EntryBorder UBorder
---@field EntryHorizontalBox UHorizontalBox
local UBPAnvilKeyEntryWidget_C = {}

---@param IsDesignTime boolean
function UBPAnvilKeyEntryWidget_C:PreConstruct(IsDesignTime) end
function UBPAnvilKeyEntryWidget_C:Construct() end
---@param EntryPoint int32
function UBPAnvilKeyEntryWidget_C:ExecuteUbergraph_BPAnvilKeyEntryWidget(EntryPoint) end


