---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_62 FName
---@field __FloatProperty_63 float
---@field __NameProperty_64 FName
---@field __IntProperty_65 int32
---@field __BoolProperty_66 boolean
---@field __FloatProperty_67 float
---@field __StructProperty_68 FInputScaleBiasClampConstants
---@field __FloatProperty_69 float
---@field __BoolProperty_70 boolean
---@field __EnumProperty_71 EAnimSyncMethod
---@field __ByteProperty_72 EAnimGroupRole::Type
---@field __NameProperty_73 FName
---@field __NameProperty_74 FName
---@field __IntProperty_75 int32
---@field __StructProperty_76 FAnimNodeFunctionRef
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
---@field __FloatProperty_1 float
FAnimBlueprintGeneratedMutableData = {}



---@class UBatteringRam_ABP_C : UVisBatteringRamAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field tiltAngle_Pitch double
---@field RamIsInUse boolean
---@field ['Wheel Axle Radius'] double
UBatteringRam_ABP_C = {}

---@param AnimGraph FPoseLink
function UBatteringRam_ABP_C:AnimGraph(AnimGraph) end
function UBatteringRam_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_BatteringRam_ABP_AnimGraphNode_SequencePlayer_5C6820B04A67569FC4D2F78B719C752C() end
function UBatteringRam_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_BatteringRam_ABP_AnimGraphNode_SequencePlayer_A8A86E2A4021D63719F0FEA30F4F4CB1() end
---@param DeltaTimeX float
function UBatteringRam_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UBatteringRam_ABP_C:ExecuteUbergraph_BatteringRam_ABP(EntryPoint) end


