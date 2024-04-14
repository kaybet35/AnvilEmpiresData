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



---@class UABP_Windvane_C : UVisWeatherIndicatorAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field localRelativeAngle double
UABP_Windvane_C = {}

---@param AnimGraph FPoseLink
function UABP_Windvane_C:AnimGraph(AnimGraph) end
function UABP_Windvane_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Windvane_AnimGraphNode_SequencePlayer_0C501502478C95B14929E880A4576C2A() end
---@param DeltaTimeX float
function UABP_Windvane_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_Windvane_C:ExecuteUbergraph_ABP_Windvane(EntryPoint) end


