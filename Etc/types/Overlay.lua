---@meta

---@class FOverlayItem
---@field StartTime FTimespan
---@field EndTime FTimespan
---@field Text FString
---@field Position FVector2D
FOverlayItem = {}



---@class UBasicOverlays : UOverlays
---@field Overlays TArray<FOverlayItem>
UBasicOverlays = {}



---@class ULocalizedOverlays : UOverlays
---@field DefaultOverlays UBasicOverlays
---@field LocaleToOverlaysMap TMap<FString, UBasicOverlays>
ULocalizedOverlays = {}



---@class UOverlays : UObject
UOverlays = {}


