---@meta

---@class FUdpMockMessage
---@field Data TArray<uint8>
local FUdpMockMessage = {}



---@class UUdpMessagingSettings : UObject
---@field EnabledByDefault boolean
---@field EnableTransport boolean
---@field bAutoRepair boolean
---@field MaxSendRate float
---@field AutoRepairAttemptLimit uint32
---@field WorkQueueSize uint16
---@field bStopServiceWhenAppDeactivates boolean
---@field UnicastEndpoint FString
---@field MulticastEndpoint FString
---@field MessageFormat EUdpMessageFormat
---@field MulticastTimeToLive uint8
---@field StaticEndpoints TArray<FString>
---@field ExcludedEndpoints TArray<FString>
---@field EnableTunnel boolean
---@field TunnelUnicastEndpoint FString
---@field TunnelMulticastEndpoint FString
---@field RemoteTunnelEndpoints TArray<FString>
local UUdpMessagingSettings = {}



