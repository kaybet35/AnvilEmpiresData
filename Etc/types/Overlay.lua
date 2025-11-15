---@meta

---@class FOverlayItem
---@field StartTime FTimespan
---@field EndTime FTimespan
---@field Text FString
---@field Position FVector2D
local FOverlayItem = {}



---@class UBasicOverlays : UOverlays
---@field Overlays TArray<FOverlayItem>
local UBasicOverlays = {}



---@class ULocalizedOverlays : UOverlays
---@field DefaultOverlays UBasicOverlays
---@field LocaleToOverlaysMap TMap<FString, UBasicOverlays>
local ULocalizedOverlays = {}



---@class UOverlays : UObject
local UOverlays = {}


