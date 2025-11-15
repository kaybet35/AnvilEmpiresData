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
local FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
local FAnimBlueprintGeneratedMutableData = {}



---@class UABP_Windmill_C : UVisPowerUnitAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field efemerousTimer double
---@field ['LERP interval'] double
---@field cachedPercentageCurrent double
---@field tempPercentageCurrent double
---@field usedPercentageCurrent double
---@field ['As Power Unit Data Component'] UPowerUnitDataComponent
local UABP_Windmill_C = {}

---@param AnimGraph FPoseLink
function UABP_Windmill_C:AnimGraph(AnimGraph) end
function UABP_Windmill_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Windmill_AnimGraphNode_BlendSpacePlayer_B1D53D9C4FDAFB9397FF11B21061A26D() end
function UABP_Windmill_C:EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Windmill_AnimGraphNode_SequencePlayer_50B9A81344B4863AAAF0A0A9669EDD36() end
---@param DeltaTimeX float
function UABP_Windmill_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_Windmill_C:ExecuteUbergraph_ABP_Windmill(EntryPoint) end


