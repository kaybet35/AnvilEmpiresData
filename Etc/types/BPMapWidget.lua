---@meta

---@class UBPMapWidget_C : UMapWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Background UImage
---@field Frame UImage
---@field ObjectiveHeaderText UTextBlock
---@field ObjectiveText UTextBlock
---@field TimeOfDayText UTextBlock
---@field DynamicMaterialInstance UMaterialInstanceDynamic
UBPMapWidget_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UBPMapWidget_C:Tick(MyGeometry, InDeltaTime) end
---@param MapImage UTexture2D
function UBPMapWidget_C:BP_OnMapImageSet(MapImage) end
---@param EntryPoint int32
function UBPMapWidget_C:ExecuteUbergraph_BPMapWidget(EntryPoint) end


