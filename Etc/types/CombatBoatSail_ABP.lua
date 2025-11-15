---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __NameProperty_73 FName
---@field __NameProperty_74 FName
---@field __IntProperty_75 int32
---@field __StructProperty_76 FInputScaleBiasClampConstants
---@field __NameProperty_77 FName
---@field __IntProperty_78 int32
---@field __FloatProperty_79 float
---@field __NameProperty_80 FName
---@field __IntProperty_81 int32
---@field __ByteProperty_82 ESequenceEvalReinit::Type
---@field __BoolProperty_83 boolean
---@field __FloatProperty_84 float
---@field __AnimSequenceBase_85 UAnimSequenceBase
---@field __BoolProperty_86 boolean
---@field __EnumProperty_87 EAnimSyncMethod
---@field __ByteProperty_88 EAnimGroupRole::Type
---@field __NameProperty_89 FName
---@field __NameProperty_90 FName
---@field __IntProperty_91 int32
---@field __StructProperty_92 FAnimNodeFunctionRef
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
local FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
local FAnimBlueprintGeneratedMutableData = {}



---@class UCombatBoatSail_ABP_C : UVisBoatSailAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_BlendSpacePlayer FAnimNode_BlendSpacePlayer
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequenceEvaluator FAnimNode_SequenceEvaluator
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field ['Local Relative Angle'] double
---@field ['Local Wind Intensity'] double
local UCombatBoatSail_ABP_C = {}

---@param AnimGraph FPoseLink
function UCombatBoatSail_ABP_C:AnimGraph(AnimGraph) end
function UCombatBoatSail_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_CombatBoatSail_ABP_AnimGraphNode_TransitionResult_22D969C4435F1A684752B78174B3CB6D() end
function UCombatBoatSail_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_CombatBoatSail_ABP_AnimGraphNode_TransitionResult_5A6C1070438F71DC460A3289B72AB83D() end
---@param DeltaTimeX float
function UCombatBoatSail_ABP_C:BlueprintUpdateAnimation(DeltaTimeX) end
---@param EntryPoint int32
function UCombatBoatSail_ABP_C:ExecuteUbergraph_CombatBoatSail_ABP(EntryPoint) end


