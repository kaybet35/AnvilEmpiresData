---@meta

---@class FEngineServiceAuthDeny
---@field UserName FString
---@field UserToDeny FString
FEngineServiceAuthDeny = {}



---@class FEngineServiceAuthGrant
---@field UserName FString
---@field UserToGrant FString
FEngineServiceAuthGrant = {}



---@class FEngineServiceExecuteCommand
---@field Command FString
---@field UserName FString
FEngineServiceExecuteCommand = {}



---@class FEngineServiceNotification
---@field Text FString
---@field TimeSeconds double
FEngineServiceNotification = {}



---@class FEngineServicePing
FEngineServicePing = {}


---@class FEngineServicePong
---@field CurrentLevel FString
---@field EngineVersion int32
---@field HasBegunPlay boolean
---@field InstanceId FGuid
---@field InstanceType FString
---@field SessionId FGuid
---@field WorldTimeSeconds float
FEngineServicePong = {}



---@class FEngineServiceTerminate
---@field UserName FString
FEngineServiceTerminate = {}



