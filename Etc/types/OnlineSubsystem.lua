---@meta

---@class FNamedInterface
---@field InterfaceName FName
---@field InterfaceObject UObject
FNamedInterface = {}



---@class FNamedInterfaceDef
---@field InterfaceName FName
---@field InterfaceClassName FString
FNamedInterfaceDef = {}



---@class ITurnBasedMatchInterface : IInterface
ITurnBasedMatchInterface = {}

---@param Match FString
---@param bDidBecomeActive boolean
function ITurnBasedMatchInterface:OnMatchReceivedTurn(Match, bDidBecomeActive) end
---@param Match FString
function ITurnBasedMatchInterface:OnMatchEnded(Match) end


---@class UNamedInterfaces : UObject
---@field NamedInterfaces TArray<FNamedInterface>
---@field NamedInterfaceDefs TArray<FNamedInterfaceDef>
UNamedInterfaces = {}



