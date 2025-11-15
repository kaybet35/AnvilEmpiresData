---@meta

---@class FEscalationState : FStateStruct
---@field bLogEscalate boolean
---@field bDormant boolean
---@field CooloffTime int16
---@field AutoEscalateTime int16
---@field HighestTimePeriod int8
---@field AllTimePeriods TArray<int8>
local FEscalationState = {}



---@class FFastArraySerializer
---@field ArrayReplicationKey int32
---@field DeltaFlags EFastArraySerializerDeltaFlags
local FFastArraySerializer = {}



---@class FFastArraySerializerItem
---@field ReplicationID int32
---@field ReplicationKey int32
---@field MostRecentArrayReplicationKey int32
local FFastArraySerializerItem = {}



---@class FNetAnalyticsDataConfig
---@field DataName FName
---@field bEnabled boolean
local FNetAnalyticsDataConfig = {}



---@class FNetFaultState : FEscalationState
---@field bCloseConnection boolean
---@field EscalateQuotaFaultsPerPeriod int16
---@field EscalateQuotaFaultPercentPerPeriod int8
---@field DescalateQuotaFaultsPerPeriod int16
---@field DescalateQuotaFaultPercentPerPeriod int8
---@field EscalateQuotaTimePeriod int8
local FNetFaultState = {}



---@class FStateStruct
---@field StateName FString
local FStateStruct = {}



---@class UEscalationManagerConfig : UStatePerObjectConfig
---@field EscalationSeverity TArray<FString>
local UEscalationManagerConfig = {}



---@class UNetAnalyticsAggregatorConfig : UObject
---@field NetAnalyticsData TArray<FNetAnalyticsDataConfig>
local UNetAnalyticsAggregatorConfig = {}



---@class UStatePerObjectConfig : UObject
---@field PerObjectConfigSection FString
---@field bEnabled boolean
local UStatePerObjectConfig = {}



