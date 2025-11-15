---@meta

---@class UBPAnvilButtonWidget_C : UAnvilButtonWidget
---@field UberGraphFrame FPointerToUberGraphFrame
local UBPAnvilButtonWidget_C = {}

---@param IsDesignTime boolean
function UBPAnvilButtonWidget_C:PreConstruct(IsDesignTime) end
function UBPAnvilButtonWidget_C:Construct() end
---@param EntryPoint int32
function UBPAnvilButtonWidget_C:ExecuteUbergraph_BPAnvilButtonWidget(EntryPoint) end


