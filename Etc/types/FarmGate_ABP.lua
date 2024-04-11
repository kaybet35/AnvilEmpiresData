---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __BlendProfile_24 UBlendProfile
---@field __CurveFloat_25 UCurveFloat
---@field __EnumProperty_26 EAlphaBlendOption
---@field __EnumProperty_27 EBlendListTransitionType
---@field __ArrayProperty_28 TArray<float>
---@field __NameProperty_29 FName
---@field __StructProperty_30 FAnimNodeFunctionRef
---@field __BoolProperty_31 boolean
---@field __StructProperty_32 FInputScaleBiasClampConstants
---@field __FloatProperty_33 float
---@field __FloatProperty_34 float
---@field __BoolProperty_35 boolean
---@field __EnumProperty_36 EAnimSyncMethod
---@field __ByteProperty_37 EAnimGroupRole::Type
---@field __NameProperty_38 FName
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __BoolProperty boolean
FAnimBlueprintGeneratedMutableData = {}



---@class UFarmGate_ABP_C : UVisGateAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
UFarmGate_ABP_C = {}

---@param AnimGraph FPoseLink
function UFarmGate_ABP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UFarmGate_ABP_C:ExecuteUbergraph_FarmGate_ABP(EntryPoint) end


