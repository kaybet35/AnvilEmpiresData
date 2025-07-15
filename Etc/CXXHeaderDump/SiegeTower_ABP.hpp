#ifndef UE4SS_SDK_SiegeTower_ABP_HPP
#define UE4SS_SDK_SiegeTower_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_193;                                                         // 0x0004 (size: 0x8)
    float __FloatProperty_194;                                                        // 0x000C (size: 0x4)
    class UBlendProfile* __BlendProfile_195;                                          // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_196;                                              // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_197;                                             // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_198;                                      // 0x0021 (size: 0x1)
    FInputScaleBiasClampConstants __StructProperty_199;                               // 0x0024 (size: 0x2C)
    float __FloatProperty_200;                                                        // 0x0050 (size: 0x4)
    FName __NameProperty_201;                                                         // 0x0054 (size: 0x8)
    int32 __IntProperty_202;                                                          // 0x005C (size: 0x4)
    FName __NameProperty_203;                                                         // 0x0060 (size: 0x8)
    int32 __IntProperty_204;                                                          // 0x0068 (size: 0x4)
    FName __NameProperty_205;                                                         // 0x006C (size: 0x8)
    int32 __IntProperty_206;                                                          // 0x0074 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_207;                        // 0x0078 (size: 0x1)
    bool __BoolProperty_208;                                                          // 0x0079 (size: 0x1)
    float __FloatProperty_209;                                                        // 0x007C (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_210;                                  // 0x0080 (size: 0x8)
    bool __BoolProperty_211;                                                          // 0x0088 (size: 0x1)
    EAnimSyncMethod __EnumProperty_212;                                               // 0x0089 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_213;                             // 0x008A (size: 0x1)
    FName __NameProperty_214;                                                         // 0x008C (size: 0x8)
    FName __NameProperty_215;                                                         // 0x0094 (size: 0x8)
    int32 __IntProperty_216;                                                          // 0x009C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_217;                                        // 0x00A0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)

}; // Size: 0x158

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    TArray<float> __ArrayProperty_0;                                                  // 0x0008 (size: 0x10)
    bool __BoolProperty_1;                                                            // 0x0018 (size: 0x1)
    TArray<float> __ArrayProperty_2;                                                  // 0x0020 (size: 0x10)
    bool __BoolProperty_3;                                                            // 0x0030 (size: 0x1)
    TArray<float> __ArrayProperty_4;                                                  // 0x0038 (size: 0x10)
    bool __BoolProperty_5;                                                            // 0x0048 (size: 0x1)
    float __FloatProperty_6;                                                          // 0x004C (size: 0x4)
    float __FloatProperty_7;                                                          // 0x0050 (size: 0x4)
    float __FloatProperty_8;                                                          // 0x0054 (size: 0x4)

}; // Size: 0x58

class USiegeTower_ABP_C : public UVisSiegeTowerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x58)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03D0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03D8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03E0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0400 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0448 (size: 0xE0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0528 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0570 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x05B8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0600 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0648 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0690 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x06D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0720 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0768 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x07B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x07D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0800 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0828 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0850 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0878 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x08A0 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x08C8 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0908 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x0928 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0968 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0988 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x09C8 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x09E8 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0A28 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0A48 (size: 0xC8)
    double DeployTimeRange;                                                           // 0x0B10 (size: 0x8)
    double DeployTimeRange_L;                                                         // 0x0B18 (size: 0x8)
    double DeployTimeRange_R;                                                         // 0x0B20 (size: 0x8)
    EAnvilSiegeTowerState CurrentLadderState;                                         // 0x0B28 (size: 0x1)
    FString niagaraImpactSystemName;                                                  // 0x0B30 (size: 0x10)
    class UActorComponent* Niagara drawbridge impact;                                 // 0x0B40 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact R;                                   // 0x0B48 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact L;                                   // 0x0B50 (size: 0x8)
    class UActorComponent* Niagara Ladder Impact M;                                   // 0x0B58 (size: 0x8)
    class UActorComponent* Niagara Ladder Movement Audio;                             // 0x0B60 (size: 0x8)
    class UActorComponent* Niagara Drawbridge Movement Audio;                         // 0x0B68 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_A5D0A0684D1932DD06BF05871D4FBEC8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_BlendListByBool_FD82915448DA5590649090A449937A2C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_BlendListByBool_84B2CC574A423856A0DC0EB6538F146C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_BlendListByBool_D969EA3C4D3F841F96E49898CE10422D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_9380EF8D4558FF5FFA5324ABBA0C6520();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_SequenceEvaluator_AD59AC75400C7EA83EEA70AEB19613C2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_D4B6566A4370B457AE243699969142B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_91419659450F13C26E318193F6B7DAC0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_56E816074860F65E10881E9E34DB7E75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_9563798B40D10FE25F9A389113957EBC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_CA6E8F5E47B556F004AC1A86B1961895();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_A770CC294102533930841C9EA425E242();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeTower_ABP_AnimGraphNode_TransitionResult_17619D514B55F2D794CA82909AF7E7DF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_rampIsOpen();
    void BlueprintBeginPlay();
    void AnimNotify_RampStartedOpening();
    void AnimNotify_RampStartedClosing();
    void ExecuteUbergraph_SiegeTower_ABP(int32 EntryPoint);
}; // Size: 0xB70

#endif
