---@meta

---@class UBPAnvilPanel_C : UAnvilPanel
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AnvilPanelVerticalBox UVerticalBox
UBPAnvilPanel_C = {}

---@param IsDesignTime boolean
function UBPAnvilPanel_C:PreConstruct(IsDesignTime) end
function UBPAnvilPanel_C:Construct() end
---@param EntryPoint int32
function UBPAnvilPanel_C:ExecuteUbergraph_BPAnvilPanel(EntryPoint) end


