---@meta

---@class FSessionServiceLog
---@field Category FName
---@field Data FString
---@field InstanceId FGuid
---@field TimeSeconds double
---@field Verbosity uint8
local FSessionServiceLog = {}



---@class FSessionServiceLogSubscribe
local FSessionServiceLogSubscribe = {}


---@class FSessionServiceLogUnsubscribe
local FSessionServiceLogUnsubscribe = {}


---@class FSessionServicePing
---@field UserName FString
local FSessionServicePing = {}



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
local FSessionServicePong = {}



