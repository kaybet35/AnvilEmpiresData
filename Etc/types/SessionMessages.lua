---@meta

---@class FSessionServiceLog
---@field Category FName
---@field Data FString
---@field InstanceId FGuid
---@field TimeSeconds double
---@field Verbosity uint8
FSessionServiceLog = {}



---@class FSessionServiceLogSubscribe
FSessionServiceLogSubscribe = {}


---@class FSessionServiceLogUnsubscribe
FSessionServiceLogUnsubscribe = {}


---@class FSessionServicePing
---@field UserName FString
FSessionServicePing = {}



---@class FSessionServicePong
---@field Authorized boolean
---@field BuildDate FString
---@field DeviceName FString
---@field InstanceId FGuid
---@field InstanceName FString
---@field PlatformName FString
---@field SessionId FGuid
---@field SessionName FString
---@field SessionOwner FString
---@field Standalone boolean
FSessionServicePong = {}



