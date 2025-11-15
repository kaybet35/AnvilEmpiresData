---@meta

---@class UBPTimeSeasonWidget_C : UTimeSeasonWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field currentWeather_image UImage
---@field dayNight_image UImage
---@field OverallWidget_SizeBox USizeBox
---@field Season_image UImage
---@field TImeOfDay_image UImage
---@field triangle_SizeBox USizeBox
---@field widgetScaling double
---@field triangleScaling double
---@field imageList_DayNight TArray<FSlateBrush>
---@field imageList_Weather TArray<FSlateBrush>
local UBPTimeSeasonWidget_C = {}

---@param X_inputValue double
---@param XPeriod__how_many_X_units_it_talkes_to_cycle_ double
---@param XRange_offset__Xperiod_where_Yrange_is_lowest_value_ double
---@param RangeLowestValue__Y_ double
---@param RangeHighestValue__Y_ double
---@param Y_mappedValue double
function UBPTimeSeasonWidget_C:cycleMapping(X_inputValue, XPeriod__how_many_X_units_it_talkes_to_cycle_, XRange_offset__Xperiod_where_Yrange_is_lowest_value_, RangeLowestValue__Y_, RangeHighestValue__Y_, Y_mappedValue) end
---@param IsDesignTime boolean
function UBPTimeSeasonWidget_C:PreConstruct(IsDesignTime) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UBPTimeSeasonWidget_C:Tick(MyGeometry, InDeltaTime) end
function UBPTimeSeasonWidget_C:OnInitialized() end
---@param EntryPoint int32
function UBPTimeSeasonWidget_C:ExecuteUbergraph_BPTimeSeasonWidget(EntryPoint) end


