---@meta

---@class FAnimBlueprintGeneratedConstantData : FAnimBlueprintConstantData
---@field __FloatProperty_108 float
---@field __NameProperty_109 FName
---@field __StructProperty_110 FInputScaleBiasClampConstants
---@field __FloatProperty_111 float
---@field __NameProperty_112 FName
---@field __IntProperty_113 int32
---@field __NameProperty_114 FName
---@field __IntProperty_115 int32
---@field __NameProperty_116 FName
---@field __IntProperty_117 int32
---@field __ByteProperty_118 ESequenceEvalReinit::Type
---@field __BoolProperty_119 boolean
---@field __FloatProperty_120 float
---@field __AnimSequenceBase_121 UAnimSequenceBase
---@field __BoolProperty_122 boolean
---@field __EnumProperty_123 EAnimSyncMethod
---@field __ByteProperty_124 EAnimGroupRole::Type
---@field __NameProperty_125 FName
---@field __NameProperty_126 FName
---@field __IntProperty_127 int32
---@field __StructProperty_128 FAnimNodeFunctionRef
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystem_PropertyAccess
---@field AnimBlueprintExtension_Base FAnimSubsystem_Base
local FAnimBlueprintGeneratedConstantData = {}



---@class FAnimBlueprintGeneratedMutableData : FAnimBlueprintMutableData
---@field __FloatProperty float
---@field __FloatProperty_0 float
---@field __FloatProperty_1 float
---@field __FloatProperty_2 float
local FAnimBlueprintGeneratedMutableData = {}



---@class USiegeTower_ABP_C : UVisSiegeTowerAnimInstance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field __AnimBlueprintMutables FAnimBlueprintGeneratedMutableData
---@field AnimBlueprintExtension_PropertyAccess FAnimSubsystemInstance
---@field AnimBlueprintExtension_Base FAnimSubsystemInstance
---@field AnimGraphNode_LayeredBoneBlend FAnimNode_LayeredBoneBlend
---@field AnimGraphNode_SequencePlayer_1 FAnimNode_SequencePlayer
---@field AnimGraphNode_Root FAnimNode_Root
---@field AnimGraphNode_SequencePlayer FAnimNode_SequencePlayer
---@field AnimGraphNode_TransitionResult_6 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_5 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_4 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_3 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_2 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult_1 FAnimNode_TransitionResult
---@field AnimGraphNode_TransitionResult FAnimNode_TransitionResult
---@field AnimGraphNode_SequenceEvaluator_3 FAnimNode_SequenceEvaluator
---@field AnimGraphNode_StateResult_3 FAnimNode_StateResult
---@field AnimGraphNode_SequenceEvaluator_2 FAnimNode_SequenceEvaluator
---@field AnimGraphNode_StateResult_2 FAnimNode_StateResult
---@field AnimGraphNode_SequenceEvaluator_1 FAnimNode_SequenceEvaluator
---@field AnimGraphNode_StateResult_1 FAnimNode_StateResult
---@field AnimGraphNode_SequenceEvaluator FAnimNode_SequenceEvaluator
---@field AnimGraphNode_StateResult FAnimNode_StateResult
---@field AnimGraphNode_StateMachine FAnimNode_StateMachine
---@field DeployTimeRange double
---@field DeployTimeRange_L double
---@field DeployTimeRange_R double
---@field CurrentLadderState EAnvilSiegeTowerState
---@field niagaraImpactSystemName FString
---@field ['Niagara drawbridge impact'] UActorComponent
---@field ['Niagara Ladder Impact R'] UActorComponent
---@field ['Niagara Ladder Impact L'] UActorComponent
---@field ['Niagara Ladder Impact M'] UActorComponent
---@field ['Niagara Ladder Movement Audio'] UActorComponent
---@field ['Niagara Drawbridge Movement Audio'] UActorComponent
local USiegeTower_ABP_C = {}

---@param AnimGraph FPoseLink
function USiegeTower_ABP_C:AnimGraph(AnimGraph) end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_A770CC294102533930841C9EA425E242() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_CA6E8F5E47B556F004AC1A86B1961895() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_9563798B40D10FE25F9A389113957EBC() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_56E816074860F65E10881E9E34DB7E75() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_91419659450F13C26E318193F6B7DAC0() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_D4B6566A4370B457AE243699969142B9() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_AD59AC75400C7EA83EEA70AEB19613C2() end
function USiegeTower_ABP_C:AnimNotify_rampIsOpen() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_9380EF8D4558FF5FFA5324ABBA0C6520() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_17619D514B55F2D794CA82909AF7E7DF() end
function USiegeTower_ABP_C:BlueprintBeginPlay() end
function USiegeTower_ABP_C:AnimNotify_RampStartedOpening() end
function USiegeTower_ABP_C:AnimNotify_RampStartedClosing() end
function USiegeTower_ABP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_A5D0A0684D1932DD06BF05871D4FBEC8() end
---@param EntryPoint int32
function USiegeTower_ABP_C:ExecuteUbergraph_SiegeTower_ABP(EntryPoint) end


