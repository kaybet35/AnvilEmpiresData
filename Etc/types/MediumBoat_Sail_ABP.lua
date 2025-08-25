---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_7 FName
---@field __StructProperty_8 FAnimNodeFunctionRef
---@field __BoolProperty_9 boolean
---@field __FloatProperty_10 float
---@field __FloatProperty_11 float
---@field __BoolProperty_12 boolean
---@field __EnumProperty_13 EAnimSyncMethod
---@field __ByteProperty_14 EAnimGroupRole::Type
---@field __NameProperty_15 FName
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
FAnimBlueprintGeneratedMutableData = {}



---@class UMediumBoat_Sail_ABP_C : UVisBoatSailAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field WindDeltaDotProduct double
UMediumBoat_Sail_ABP_C = {}

---@param AnimGraph FPoseLink
function UMediumBoat_Sail_ABP_C:AnimGraph(AnimGraph) end
---@param DeltaTimeX float
function UMediumBoat_Sail_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UMediumBoat_Sail_ABP_C:ExecuteUbergraph_MediumBoat_Sail_ABP(EntryPoint) end


