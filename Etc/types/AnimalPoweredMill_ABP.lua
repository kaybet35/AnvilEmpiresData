---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_20 FName
---@field __StructProperty_21 FInputScaleBiasClampConstants
---@field __StructProperty_22 FAnimNodeFunctionRef
---@field __BoolProperty_23 boolean
---@field __FloatProperty_24 float
---@field __FloatProperty_25 float
---@field __BoolProperty_26 boolean
---@field __EnumProperty_27 EAnimSyncMethod
---@field __ByteProperty_28 EAnimGroupRole::Type
---@field __NameProperty_29 FName
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
---@field __FloatProperty_1 float
FAnimBlueprintGeneratedMutableData = {}



---@class UAnimalPoweredMill_ABP_C : UVisPowerUnitAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field ['Anim Slow Amount'] double
UAnimalPoweredMill_ABP_C = {}

---@param AnimGraph FPoseLink
function UAnimalPoweredMill_ABP_C:AnimGraph(AnimGraph) end
function UAnimalPoweredMill_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_AnimalPoweredMill_ABP_AnimGraphNode_BlendSpacePlayer_DE6CE9134B5EB24F1934C6960E381621() end
function UAnimalPoweredMill_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_AnimalPoweredMill_ABP_AnimGraphNode_SequencePlayer_98D3081D43DED1111667D0B5D26C038E() end
---@param EntryPoint int32
function UAnimalPoweredMill_ABP_C:ExecuteUbergraph_AnimalPoweredMill_ABP(EntryPoint) end


