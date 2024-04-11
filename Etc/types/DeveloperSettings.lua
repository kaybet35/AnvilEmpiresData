---@meta

---@class FPerPlatformSettings
---@field Settings TArray<UPlatformSettings>
FPerPlatformSettings = {}



---@class FPlatformSettingsInstances
---@field PlatformInstance UPlatformSettings
---@field OtherPlatforms TMap<FName, UPlatformSettings>
FPlatformSettingsInstances = {}



---@class UDeveloperSettings : UObject
UDeveloperSettings = {}


---@class UDeveloperSettingsBackedByCVars : UDeveloperSettings
UDeveloperSettingsBackedByCVars = {}


---@class UPlatformSettings : UObject
UPlatformSettings = {}


---@class UPlatformSettingsManager : UObject
---@field SettingsMap TMap<TSubclassOf<UPlatformSettings>, FPlatformSettingsInstances>
UPlatformSettingsManager = {}



