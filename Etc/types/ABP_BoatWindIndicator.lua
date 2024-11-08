---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_20 FName
---@field __StructProperty_21 FInputScaleBiasClampConstants
---@field __FloatProperty_22 float
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



---@class UABP_BoatWindIndicator_C : UVisWeatherIndicatorAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field localRelativeAngle double
UABP_BoatWindIndicator_C = {}

---@param AnimGraph FPoseLink
function UABP_BoatWindIndicator_C:AnimGraph(AnimGraph) end
function UABP_BoatWindIndicator_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BoatWindIndicator_AnimGraphNode_SequencePlayer_DACD792649643911F85F5D80E1A20471() end
---@param DeltaTimeX float
function UABP_BoatWindIndicator_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_BoatWindIndicator_C:ExecuteUbergraph_ABP_BoatWindIndicator(EntryPoint) end


