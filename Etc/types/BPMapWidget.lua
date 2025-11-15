---@meta

---@class UBPMapWidget_C : UMapWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Background UImage
---@field BPTimeSeasonWidget UBPTimeSeasonWidget_C
---@field Frame UImage
---@field DynamicMaterialInstance UMaterialInstanceDynamic
local UBPMapWidget_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UBPMapWidget_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UBPMapWidget_C:ExecuteUbergraph_BPMapWidget(EntryPoint) end


