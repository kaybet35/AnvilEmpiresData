---@meta

---@class FEscalationState : FStateStruct
---@field bLogEscalate boolean
---@field bDormant boolean
---@field CooloffTime int16
---@field AutoEscalateTime int16
---@field HighestTimePeriod int8
---@field AllTimePeriods TArray<int8>
FEscalationState = {}



---@class FFastArraySerializer
---@field ArrayReplicationKey int32
---@field DeltaFlags EFastArraySerializerDeltaFlags
FFastArraySerializer = {}



---@class FFastArraySerializerItem
---@field ReplicationID int32
---@field ReplicationKey int32
---@field MostRecentArrayReplicationKey int32
FFastArraySerializerItem = {}



---@class FNetAnalyticsDataConfig
---@field DataName FName
---@field bEnabled boolean
FNetAnalyticsDataConfig = {}



---@class FNetFaultState : FEscalationState
---@field bCloseConnection boolean
---@field EscalateQuotaFaultsPerPeriod int16
---@field EscalateQuotaFaultPercentPerPeriod int8
---@field DescalateQuotaFaultsPerPeriod int16
---@field DescalateQuotaFaultPercentPerPeriod int8
---@field EscalateQuotaTimePeriod int8
FNetFaultState = {}



---@class FStateStruct
---@field StateName FString
FStateStruct = {}



---@class UEscalationManagerConfig : UStatePerObjectConfig
---@field EscalationSeverity TArray<FString>
UEscalationManagerConfig = {}



---@class UNetAnalyticsAggregatorConfig : UObject
---@field NetAnalyticsData TArray<FNetAnalyticsDataConfig>
UNetAnalyticsAggregatorConfig = {}



---@class UStatePerObjectConfig : UObject
---@field PerObjectConfigSection FString
---@field bEnabled boolean
UStatePerObjectConfig = {}



