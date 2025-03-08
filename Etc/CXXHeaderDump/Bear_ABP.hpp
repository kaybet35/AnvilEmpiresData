#ifndef UE4SS_SDK_Bear_ABP_HPP
#define UE4SS_SDK_Bear_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_223;                                                         // 0x0004 (size: 0x8)
    float __FloatProperty_224;                                                        // 0x000C (size: 0x4)
    FName __NameProperty_225;                                                         // 0x0010 (size: 0x8)
    int32 __IntProperty_226;                                                          // 0x0018 (size: 0x4)
    FName __NameProperty_227;                                                         // 0x001C (size: 0x8)
    int32 __IntProperty_228;                                                          // 0x0024 (size: 0x4)
    FName __NameProperty_229;                                                         // 0x0028 (size: 0x8)
    int32 __IntProperty_230;                                                          // 0x0030 (size: 0x4)
    FName __NameProperty_231;                                                         // 0x0034 (size: 0x8)
    FName __NameProperty_232;                                                         // 0x003C (size: 0x8)
    FName __NameProperty_233;                                                         // 0x0044 (size: 0x8)
    float __FloatProperty_234;                                                        // 0x004C (size: 0x4)
    FName __NameProperty_235;                                                         // 0x0050 (size: 0x8)
    FName __NameProperty_236;                                                         // 0x0058 (size: 0x8)
    float __FloatProperty_237;                                                        // 0x0060 (size: 0x4)
    FName __NameProperty_238;                                                         // 0x0064 (size: 0x8)
    int32 __IntProperty_239;                                                          // 0x006C (size: 0x4)
    bool __BoolProperty_240;                                                          // 0x0070 (size: 0x1)
    float __FloatProperty_241;                                                        // 0x0074 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_242;                               // 0x0078 (size: 0x2C)
    float __FloatProperty_243;                                                        // 0x00A4 (size: 0x4)
    bool __BoolProperty_244;                                                          // 0x00A8 (size: 0x1)
    EAnimSyncMethod __EnumProperty_245;                                               // 0x00A9 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_246;                             // 0x00AA (size: 0x1)
    FName __NameProperty_247;                                                         // 0x00AC (size: 0x8)
    int32 __IntProperty_248;                                                          // 0x00B4 (size: 0x4)
    FName __NameProperty_249;                                                         // 0x00B8 (size: 0x8)
    FName __NameProperty_250;                                                         // 0x00C0 (size: 0x8)
    int32 __IntProperty_251;                                                          // 0x00C8 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_252;                                        // 0x00D0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00F0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0170 (size: 0x18)

}; // Size: 0x188

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UBear_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0460 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0488 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x04B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x04D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0500 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0528 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x0570 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0590 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x05B8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0600 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0620 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0668 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0688 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x06D0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x06F0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0738 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0758 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x07C8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x07E8 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x08B0 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x08F8 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x09C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x09F0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0A18 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0A60 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0A80 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0AA0 (size: 0xC8)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0B68 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0C38 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0C60 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0C88 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0CB0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0CD8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0D20 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0D40 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0D88 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0DA8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0DC8 (size: 0xC8)
    bool isDead;                                                                      // 0x0E90 (size: 0x1)
    double Local Yaw;                                                                 // 0x0E98 (size: 0x8)
    bool isBearStanding;                                                              // 0x0EA0 (size: 0x1)
    double posturingTimerLength;                                                      // 0x0EA8 (size: 0x8)
    double posturingTimerCurrent;                                                     // 0x0EB0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_SequencePlayer_00E597E243CA36A367D5C0895C40D856();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_SequencePlayer_7F90BDBF476EBB3E181A51BFB0BD0067();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_F2E95C6C41BA67BA14023988824DBF6F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0F805E57442B8A422E5B75902685168D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_9A3816C54772E6FB560339BE25D2C6A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_4BDC01DA4B3E36A3FE611384FEEC7D78();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_733F9F06451B3F7BFBD7AA9150E026A3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_FCC1FA1C41745D31127F59BDFA86E609();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_C17F80D4458AC3267AC27B9E4B69AB3C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_325243A244EDF7369EB46DAA59F2C4E6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_DECED4A542C3AEDDDBD8699293067182();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_76D1A75B46990B1AD7B65C9DD90F5933();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_D87DB6174C8D2C654975AF80590CB60E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_34E7121A4222F50393F45F99432CC2F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_F8A480F84452C1E111AADAA57A6523F6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0A689E4845CE320B820228A778E7F877();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_D58281DB481364EC4015FA907554ACEF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_EnterPosturingEvent();
    void AnimNotify_ExitPosturingEvent();
    void AnimNotify_DoneWaiting();
    void AnimNotify_StartedPosturing();
    void ExecuteUbergraph_Bear_ABP(int32 EntryPoint);
}; // Size: 0xEB8

#endif
