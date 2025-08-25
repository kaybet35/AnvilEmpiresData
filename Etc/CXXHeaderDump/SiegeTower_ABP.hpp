#ifndef UE4SS_SDK_SiegeTower_ABP_HPP
#define UE4SS_SDK_SiegeTower_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    float __FloatProperty_108;                                                        // 0x0004 (size: 0x4)
    FName __NameProperty_109;                                                         // 0x0008 (size: 0x8)
    FInputScaleBiasClampConstants __StructProperty_110;                               // 0x0010 (size: 0x2C)
    float __FloatProperty_111;                                                        // 0x003C (size: 0x4)
    FName __NameProperty_112;                                                         // 0x0040 (size: 0x8)
    int32 __IntProperty_113;                                                          // 0x0048 (size: 0x4)
    FName __NameProperty_114;                                                         // 0x004C (size: 0x8)
    int32 __IntProperty_115;                                                          // 0x0054 (size: 0x4)
    FName __NameProperty_116;                                                         // 0x0058 (size: 0x8)
    int32 __IntProperty_117;                                                          // 0x0060 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_118;                        // 0x0064 (size: 0x1)
    bool __BoolProperty_119;                                                          // 0x0065 (size: 0x1)
    float __FloatProperty_120;                                                        // 0x0068 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_121;                                  // 0x0070 (size: 0x8)
    bool __BoolProperty_122;                                                          // 0x0078 (size: 0x1)
    EAnimSyncMethod __EnumProperty_123;                                               // 0x0079 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_124;                             // 0x007A (size: 0x1)
    FName __NameProperty_125;                                                         // 0x007C (size: 0x8)
    FName __NameProperty_126;                                                         // 0x0084 (size: 0x8)
    int32 __IntProperty_127;                                                          // 0x008C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_128;                                        // 0x0090 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class USiegeTower_ABP_C : public UVisSiegeTowerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03A0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0480 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04E8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0530 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0558 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0580 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x05A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x05D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x05F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0620 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x0648 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0688 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x06A8 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x06E8 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0708 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0748 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0768 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x07A8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x07C8 (size: 0xC8)
    double DeployTimeRange;                                                           // 0x0890 (size: 0x8)
    double DeployTimeRange_L;                                                         // 0x0898 (size: 0x8)
    double DeployTimeRange_R;                                                         // 0x08A0 (size: 0x8)
    EAnvilSiegeTowerState CurrentLadderState;                                         // 0x08A8 (size: 0x1)
    FString niagaraImpactSystemName;                                                  // 0x08B0 (size: 0x10)
    class UActorComponent* Niagara drawbridge impact;                                 // 0x08C0 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact R;                                   // 0x08C8 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact L;                                   // 0x08D0 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact M;                                   // 0x08D8 (size: 0x8)
    class UActorComponent* Niagara Ladder Movement Audio;                             // 0x08E0 (size: 0x8)
    class UActorComponent* Niagara Drawbridge Movement Audio;                         // 0x08E8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_A770CC294102533930841C9EA425E242();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_CA6E8F5E47B556F004AC1A86B1961895();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_9563798B40D10FE25F9A389113957EBC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_56E816074860F65E10881E9E34DB7E75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_91419659450F13C26E318193F6B7DAC0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_D4B6566A4370B457AE243699969142B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_AD59AC75400C7EA83EEA70AEB19613C2();
    void AnimNotify_rampIsOpen();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_9380EF8D4558FF5FFA5324ABBA0C6520();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_17619D514B55F2D794CA82909AF7E7DF();
    void BlueprintBeginPlay();
    void AnimNotify_RampStartedOpening();
    void AnimNotify_RampStartedClosing();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_A5D0A0684D1932DD06BF05871D4FBEC8();
    void ExecuteUbergraph_SiegeTower_ABP(int32 EntryPoint);
}; // Size: 0x8F0

#endif
