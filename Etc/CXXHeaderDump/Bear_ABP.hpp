#ifndef UE4SS_SDK_Bear_ABP_HPP
#define UE4SS_SDK_Bear_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_200;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_201;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_202;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_203;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_204;                                                          // 0x0020 (size: 0x4)
    float __FloatProperty_205;                                                        // 0x0024 (size: 0x4)
    FName __NameProperty_206;                                                         // 0x0028 (size: 0x8)
    FName __NameProperty_207;                                                         // 0x0030 (size: 0x8)
    FName __NameProperty_208;                                                         // 0x0038 (size: 0x8)
    float __FloatProperty_209;                                                        // 0x0040 (size: 0x4)
    FName __NameProperty_210;                                                         // 0x0044 (size: 0x8)
    FName __NameProperty_211;                                                         // 0x004C (size: 0x8)
    float __FloatProperty_212;                                                        // 0x0054 (size: 0x4)
    FName __NameProperty_213;                                                         // 0x0058 (size: 0x8)
    int32 __IntProperty_214;                                                          // 0x0060 (size: 0x4)
    bool __BoolProperty_215;                                                          // 0x0064 (size: 0x1)
    float __FloatProperty_216;                                                        // 0x0068 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_217;                               // 0x006C (size: 0x2C)
    float __FloatProperty_218;                                                        // 0x0098 (size: 0x4)
    bool __BoolProperty_219;                                                          // 0x009C (size: 0x1)
    EAnimSyncMethod __EnumProperty_220;                                               // 0x009D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_221;                             // 0x009E (size: 0x1)
    FName __NameProperty_222;                                                         // 0x00A0 (size: 0x8)
    int32 __IntProperty_223;                                                          // 0x00A8 (size: 0x4)
    FName __NameProperty_224;                                                         // 0x00AC (size: 0x8)
    FName __NameProperty_225;                                                         // 0x00B4 (size: 0x8)
    int32 __IntProperty_226;                                                          // 0x00BC (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_227;                                        // 0x00C0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0160 (size: 0x18)

}; // Size: 0x178

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
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0460 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0488 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x04B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x04D8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0500 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0548 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0568 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x05B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x05D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0618 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0638 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0680 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x06A0 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0710 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x0730 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x07F8 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x0840 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0910 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0938 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0960 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x09A8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x09C8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x09E8 (size: 0xC8)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0AB0 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0B80 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0BA8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0BD0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0BF8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0C20 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0C68 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0C88 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0CD0 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0CF0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0D10 (size: 0xC8)
    bool isDead;                                                                      // 0x0DD8 (size: 0x1)
    double Local Yaw;                                                                 // 0x0DE0 (size: 0x8)
    bool isBearStanding;                                                              // 0x0DE8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_SequencePlayer_00E597E243CA36A367D5C0895C40D856();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_SequencePlayer_7F90BDBF476EBB3E181A51BFB0BD0067();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_9A3816C54772E6FB560339BE25D2C6A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0F805E57442B8A422E5B75902685168D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_4BDC01DA4B3E36A3FE611384FEEC7D78();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_733F9F06451B3F7BFBD7AA9150E026A3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_C17F80D4458AC3267AC27B9E4B69AB3C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_325243A244EDF7369EB46DAA59F2C4E6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_FCC1FA1C41745D31127F59BDFA86E609();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_DECED4A542C3AEDDDBD8699293067182();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_D87DB6174C8D2C654975AF80590CB60E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_76D1A75B46990B1AD7B65C9DD90F5933();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_34E7121A4222F50393F45F99432CC2F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_350F5B9F4D7A597EB4BA67ABFFEEE65D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0A689E4845CE320B820228A778E7F877();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_EnterPosturingEvent();
    void AnimNotify_ExitPosturingEvent();
    void ExecuteUbergraph_Bear_ABP(int32 EntryPoint);
}; // Size: 0xDE9

#endif
