---@meta

---@class FAnimationSetup
---@field AnimSequence UAnimSequence
---@field AnimBlueprint TSubclassOf<UAnimSharingStateInstance>
---@field NumRandomizedInstances FPerPlatformInt
---@field Enabled FPerPlatformBool
local FAnimationSetup = {}



---@class FAnimationSharingScalability
---@field UseBlendTransitions FPerPlatformBool
---@field BlendSignificanceValue FPerPlatformFloat
---@field MaximumNumberConcurrentBlends FPerPlatformInt
---@field TickSignificanceValue FPerPlatformFloat
local FAnimationSharingScalability = {}



---@class FAnimationStateEntry
---@field State uint8
---@field AnimationSetups TArray<FAnimationSetup>
---@field bOnDemand boolean
---@field bAdditive boolean
---@field BlendTime float
---@field bReturnToPreviousState boolean
---@field bSetNextState boolean
---@field NextState uint8
---@field MaximumNumberOfConcurrentInstances FPerPlatformInt
---@field WiggleTimePercentage float
---@field bRequiresCurves boolean
local FAnimationStateEntry = {}



---@class FPerSkeletonAnimationSharingSetup
---@field Skeleton USkeleton
---@field SkeletalMesh USkeletalMesh
---@field BlendAnimBlueprint TSubclassOf<UAnimSharingTransitionInstance>
---@field AdditiveAnimBlueprint TSubclassOf<UAnimSharingAdditiveInstance>
---@field StateProcessorClass TSubclassOf<UAnimationSharingStateProcessor>
---@field AnimationStates TArray<FAnimationStateEntry>
local FPerSkeletonAnimationSharingSetup = {}



---@class FTickAnimationSharingFunction : FTickFunction
local FTickAnimationSharingFunction = {}


---@class UAnimSharingAdditiveInstance : UAnimInstance
---@field BaseComponent TWeakObjectPtr<USkeletalMeshComponent>
---@field AdditiveAnimation TWeakObjectPtr<UAnimSequence>
---@field Alpha float
---@field bStateBool boolean
local UAnimSharingAdditiveInstance = {}



---@class UAnimSharingInstance : UObject
---@field RegisteredActors TArray<AActor>
---@field StateProcessor UAnimationSharingStateProcessor
---@field UsedAnimationSequences TArray<UAnimSequence>
---@field StateEnum UEnum
---@field SharingActor AActor
local UAnimSharingInstance = {}



---@class UAnimSharingStateInstance : UAnimInstance
---@field AnimationToPlay UAnimSequence
---@field PermutationTimeOffset float
---@field PlayRate float
---@field bStateBool boolean
---@field Instance UAnimSharingInstance
local UAnimSharingStateInstance = {}

---@param Actors TArray<AActor>
function UAnimSharingStateInstance:GetInstancedActors(Actors) end


---@class UAnimSharingTransitionInstance : UAnimInstance
---@field FromComponent TWeakObjectPtr<USkeletalMeshComponent>
---@field ToComponent TWeakObjectPtr<USkeletalMeshComponent>
---@field BlendTime float
---@field bBlendBool boolean
local UAnimSharingTransitionInstance = {}



---@class UAnimationSharingManager : UObject
---@field Skeletons TArray<USkeleton>
---@field PerSkeletonData TArray<UAnimSharingInstance>
local UAnimationSharingManager = {}

---@param InActor AActor
---@param SharingSkeleton USkeleton
function UAnimationSharingManager:RegisterActorWithSkeletonBP(InActor, SharingSkeleton) end
---@param WorldContextObject UObject
---@return UAnimationSharingManager
function UAnimationSharingManager:GetAnimationSharingManager(WorldContextObject) end
---@param WorldContextObject UObject
---@param Setup UAnimationSharingSetup
---@return boolean
function UAnimationSharingManager:CreateAnimationSharingManager(WorldContextObject, Setup) end
---@return boolean
function UAnimationSharingManager:AnimationSharingEnabled() end


---@class UAnimationSharingSetup : UObject
---@field SkeletonSetups TArray<FPerSkeletonAnimationSharingSetup>
---@field ScalabilitySettings FAnimationSharingScalability
local UAnimationSharingSetup = {}



---@class UAnimationSharingStateProcessor : UObject
---@field AnimationStateEnum TSoftObjectPtr<UEnum>
local UAnimationSharingStateProcessor = {}

---@param OutState int32
---@param InActor AActor
---@param CurrentState uint8
---@param OnDemandState uint8
---@param bShouldProcess boolean
function UAnimationSharingStateProcessor:ProcessActorState(OutState, InActor, CurrentState, OnDemandState, bShouldProcess) end
---@return UEnum
function UAnimationSharingStateProcessor:GetAnimationStateEnum() end


