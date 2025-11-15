---@meta

---@class UAndroidPermissionCallbackProxy : UObject
---@field OnPermissionsGrantedDynamicDelegate FAndroidPermissionCallbackProxyOnPermissionsGrantedDynamicDelegate
local UAndroidPermissionCallbackProxy = {}



---@class UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
local UAndroidPermissionFunctionLibrary = {}

---@param permission FString
---@return boolean
function UAndroidPermissionFunctionLibrary:CheckPermission(permission) end
---@param Permissions TArray<FString>
---@return UAndroidPermissionCallbackProxy
function UAndroidPermissionFunctionLibrary:AcquirePermissions(Permissions) end


