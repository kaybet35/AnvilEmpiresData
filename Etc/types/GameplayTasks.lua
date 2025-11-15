---@meta

---@class FGameplayResourceSet
local FGameplayResourceSet = {}


---@class IGameplayTaskOwnerInterface : IInterface
local IGameplayTaskOwnerInterface = {}


---@class UGameplayTask : UObject
---@field InstanceName FName
---@field ResourceOverlapPolicy ETaskResourceOverlapPolicy
---@field ChildTask UGameplayTask
local UGameplayTask = {}

function UGameplayTask:ReadyForActivation() end
function UGameplayTask:GenericGameplayTaskDelegate__DelegateSignature() end
function UGameplayTask:EndTask() end


---@class UGameplayTaskResource : UObject
---@field ManualResourceID int32
---@field AutoResourceID int8
---@field bManuallySetID boolean
local UGameplayTaskResource = {}



---@class UGameplayTask_ClaimResource : UGameplayTask
local UGameplayTask_ClaimResource = {}

---@param InTaskOwner TScriptInterface<IGameplayTaskOwnerInterface>
---@param ResourceClasses TArray<TSubclassOf<UGameplayTaskResource>>
---@param Priority uint8
---@param TaskInstanceName FName
---@return UGameplayTask_ClaimResource
function UGameplayTask_ClaimResource:ClaimResources(InTaskOwner, ResourceClasses, Priority, TaskInstanceName) end
---@param InTaskOwner TScriptInterface<IGameplayTaskOwnerInterface>
---@param ResourceClass TSubclassOf<UGameplayTaskResource>
---@param Priority uint8
---@param TaskInstanceName FName
---@return UGameplayTask_ClaimResource
function UGameplayTask_ClaimResource:ClaimResource(InTaskOwner, ResourceClass, Priority, TaskInstanceName) end


---@class UGameplayTask_SpawnActor : UGameplayTask
---@field Success FGameplayTask_SpawnActorSuccess
---@field DidNotSpawn FGameplayTask_SpawnActorDidNotSpawn
---@field ClassToSpawn TSubclassOf<AActor>
local UGameplayTask_SpawnActor = {}

---@param TaskOwner TScriptInterface<IGameplayTaskOwnerInterface>
---@param SpawnLocation FVector
---@param SpawnRotation FRotator
---@param Class TSubclassOf<AActor>
---@param bSpawnOnlyOnAuthority boolean
---@return UGameplayTask_SpawnActor
function UGameplayTask_SpawnActor:SpawnActor(TaskOwner, SpawnLocation, SpawnRotation, Class, bSpawnOnlyOnAuthority) end
---@param WorldContextObject UObject
---@param SpawnedActor AActor
function UGameplayTask_SpawnActor:FinishSpawningActor(WorldContextObject, SpawnedActor) end
---@param WorldContextObject UObject
---@param SpawnedActor AActor
---@return boolean
function UGameplayTask_SpawnActor:BeginSpawningActor(WorldContextObject, SpawnedActor) end


---@class UGameplayTask_TimeLimitedExecution : UGameplayTask
---@field OnFinished FGameplayTask_TimeLimitedExecutionOnFinished
---@field OnTimeExpired FGameplayTask_TimeLimitedExecutionOnTimeExpired
local UGameplayTask_TimeLimitedExecution = {}



---@class UGameplayTask_WaitDelay : UGameplayTask
---@field OnFinish FGameplayTask_WaitDelayOnFinish
local UGameplayTask_WaitDelay = {}

---@param TaskOwner TScriptInterface<IGameplayTaskOwnerInterface>
---@param Time float
---@param Priority uint8
---@return UGameplayTask_WaitDelay
function UGameplayTask_WaitDelay:TaskWaitDelay(TaskOwner, Time, Priority) end
function UGameplayTask_WaitDelay:TaskDelayDelegate__DelegateSignature() end


---@class UGameplayTasksComponent : UActorComponent
---@field bIsNetDirty boolean
---@field TaskPriorityQueue TArray<UGameplayTask>
---@field TickingTasks TArray<UGameplayTask>
---@field KnownTasks TArray<UGameplayTask>
---@field OnClaimedResourcesChange FGameplayTasksComponentOnClaimedResourcesChange
---@field SimulatedTasks TArray<UGameplayTask>
local UGameplayTasksComponent = {}

---@param PreviousSimulatedTasks TArray<UGameplayTask>
function UGameplayTasksComponent:OnRep_SimulatedTasks(PreviousSimulatedTasks) end
---@param TaskOwner TScriptInterface<IGameplayTaskOwnerInterface>
---@param Task UGameplayTask
---@param Priority uint8
---@param AdditionalRequiredResources TArray<TSubclassOf<UGameplayTaskResource>>
---@param AdditionalClaimedResources TArray<TSubclassOf<UGameplayTaskResource>>
---@return EGameplayTaskRunResult
function UGameplayTasksComponent:K2_RunGameplayTask(TaskOwner, Task, Priority, AdditionalRequiredResources, AdditionalClaimedResources) end


