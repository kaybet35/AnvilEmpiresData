---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_34 FName
---@field __FloatProperty_35 float
---@field __EnumProperty_36 EAnimSyncMethod
---@field __NameProperty_37 FName
---@field __StructProperty_38 FAnimNodeFunctionRef
---@field __BoolProperty_39 boolean
---@field __FloatProperty_40 float
---@field __StructProperty_41 FInputScaleBiasClampConstants
---@field __FloatProperty_42 float
---@field __BoolProperty_43 boolean
---@field __EnumProperty_44 EAnimSyncMethod
---@field __ByteProperty_45 EAnimGroupRole::Type
---@field __NameProperty_46 FName
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
local FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
local FAnimBlueprintGeneratedMutableData = {}



---@class UABP_BoatWindIndicator_C : UVisWeatherIndicatorAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_TwoWayBlend FAnimNode_TwoWayBlend
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field localRelativeAngle double
---@field localWindIntensity double
local UABP_BoatWindIndicator_C = {}

---@param AnimGraph FPoseLink
function UABP_BoatWindIndicator_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UABP_BoatWindIndicator_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UABP_BoatWindIndicator_C:ExecuteUbergraph_ABP_BoatWindIndicator(EntryPoint) end


