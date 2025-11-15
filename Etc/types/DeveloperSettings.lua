---@meta

---@class FPerPlatformSettings
---@field Settings TArray<UPlatformSettings>
local FPerPlatformSettings = {}



---@class FPlatformSettingsInstances
---@field PlatformInstance UPlatformSettings
---@field OtherPlatforms TMap<FName, UPlatformSettings>
local FPlatformSettingsInstances = {}



---@class UDeveloperSettings : UObject
local UDeveloperSettings = {}


---@class UDeveloperSettingsBackedByCVars : UDeveloperSettings
local UDeveloperSettingsBackedByCVars = {}


---@class UPlatformSettings : UObject
local UPlatformSettings = {}


---@class UPlatformSettingsManager : UObject
---@field SettingsMap TMap<TSubclassOf<UPlatformSettings>, FPlatformSettingsInstances>
local UPlatformSettingsManager = {}



