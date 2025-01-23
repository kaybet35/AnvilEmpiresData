---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_21 FName
---@field __StructProperty_22 FInputScaleBiasClampConstants
---@field __StructProperty_23 FAnimNodeFunctionRef
---@field __BoolProperty_24 boolean
---@field __FloatProperty_25 float
---@field __FloatProperty_26 float
---@field __BoolProperty_27 boolean
---@field __EnumProperty_28 EAnimSyncMethod
---@field __ByteProperty_29 EAnimGroupRole::Type
---@field __NameProperty_30 FName
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
FAnimBlueprintGeneratedMutableData = {}



---@class UGrainMill_ABP_C : UVisPowerUnitAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field QualityAdjustment double
UGrainMill_ABP_C = {}

---@param AnimGraph FPoseLink
function UGrainMill_ABP_C:AnimGraph(AnimGraph) end
---@param EntryPoint int32
function UGrainMill_ABP_C:ExecuteUbergraph_GrainMill_ABP(EntryPoint) end


