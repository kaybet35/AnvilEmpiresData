---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_113 FName
---@field __NameProperty_114 FName
---@field __IntProperty_115 int32
---@field __FloatProperty_116 float
---@field __NameProperty_117 FName
---@field __IntProperty_118 int32
---@field __FloatProperty_119 float
---@field __NameProperty_120 FName
---@field __IntProperty_121 int32
---@field __NameProperty_122 FName
---@field __IntProperty_123 int32
---@field __StructProperty_124 FInputScaleBiasClampConstants
---@field __FloatProperty_125 float
---@field __BoolProperty_126 boolean
---@field __FloatProperty_127 float
---@field __FloatProperty_128 float
---@field __EnumProperty_129 EAnimSyncMethod
---@field __ByteProperty_130 EAnimGroupRole::Type
---@field __NameProperty_131 FName
---@field __StructProperty_132 FAnimNodeFunctionRef
---@field __BlendProfile_133 UBlendProfile
---@field __CurveFloat_134 UCurveFloat
---@field __BoolProperty_135 boolean
---@field __EnumProperty_136 EAlphaBlendOption
---@field __EnumProperty_137 EBlendListTransitionType
---@field __ArrayProperty_138 TArray<float>
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
---@field __FloatProperty_1 float
---@field __FloatProperty_2 float
---@field __FloatProperty_3 float
---@field __FloatProperty_4 float
---@field __FloatProperty_5 float
---@field __BoolProperty_6 boolean
FAnimBlueprintGeneratedMutableData = {}



---@class UCaravan_ABP_C : UVisCartAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_5 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_4 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_3 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_2 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_RandomPlayer FAnimNode_RandomPlayer
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field AnimGraphNode_LayeredBoneBlend_1 FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_RotationOffsetBlendSpace FAnimNode_RotationOffsetBlendSpace
---@field AnimGraphNode_BlendListByBool FAnimNode_BlendListByBool
UCaravan_ABP_C = {}

---@param AnimGraph FPoseLink
function UCaravan_ABP_C:AnimGraph(AnimGraph) end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_SequencePlayer_FE6B22714877ED6B8D515CA60FB1F5DD() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_F1E07D6A4F0C4EA076BFA1B0034765E5() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_FF87FDDC4A0C73C0C31B739C017EBF2C() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_498FD60A4BD69E60076FF9A7314D6813() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_9F016AE74528CB0DCD02E68B93F37CD1() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_0D401B2D436459DF5038B9B335CED12A() end
function UCaravan_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_4D19B82C429BBA49DD5A2B9F2BE05C55() end
---@param DeltaTimeX float
function UCaravan_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UCaravan_ABP_C:ExecuteUbergraph_Caravan_ABP(EntryPoint) end


