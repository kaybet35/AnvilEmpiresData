#ifndef UE4SS_SDK_Bear_ABP_HPP
#define UE4SS_SDK_Bear_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_145;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_146;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_147;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_148;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_149;                                                          // 0x0020 (size: 0x4)
    float __FloatProperty_150;                                                        // 0x0024 (size: 0x4)
    FName __NameProperty_151;                                                         // 0x0028 (size: 0x8)
    int32 __IntProperty_152;                                                          // 0x0030 (size: 0x4)
    FName __NameProperty_153;                                                         // 0x0034 (size: 0x8)
    bool __BoolProperty_154;                                                          // 0x003C (size: 0x1)
    FName __NameProperty_155;                                                         // 0x0040 (size: 0x8)
    float __FloatProperty_156;                                                        // 0x0048 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_157;                               // 0x004C (size: 0x2C)
    float __FloatProperty_158;                                                        // 0x0078 (size: 0x4)
    bool __BoolProperty_159;                                                          // 0x007C (size: 0x1)
    EAnimSyncMethod __EnumProperty_160;                                               // 0x007D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_161;                             // 0x007E (size: 0x1)
    FName __NameProperty_162;                                                         // 0x0080 (size: 0x8)
    int32 __IntProperty_163;                                                          // 0x0088 (size: 0x4)
    FName __NameProperty_164;                                                         // 0x008C (size: 0x8)
    FName __NameProperty_165;                                                         // 0x0094 (size: 0x8)
    int32 __IntProperty_166;                                                          // 0x009C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_167;                                        // 0x00A0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)

}; // Size: 0x158

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UBear_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x03B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x03E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0408 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0430 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0480 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x04A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x04D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x04F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0540 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0560 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x05A8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x05C8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0610 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0630 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0678 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0698 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0708 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0728 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x07F0 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0838 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0908 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0930 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0958 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x09A0 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x09C0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x09E0 (size: 0xC8)
    bool isDead;                                                                      // 0x0AA8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_325243A244EDF7369EB46DAA59F2C4E6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0F805E57442B8A422E5B75902685168D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_DECED4A542C3AEDDDBD8699293067182();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_D87DB6174C8D2C654975AF80590CB60E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_34E7121A4222F50393F45F99432CC2F7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_FCC1FA1C41745D31127F59BDFA86E609();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_350F5B9F4D7A597EB4BA67ABFFEEE65D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_0A689E4845CE320B820228A778E7F877();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bear_ABP_AnimGraphNode_TransitionResult_76D1A75B46990B1AD7B65C9DD90F5933();
    void ExecuteUbergraph_Bear_ABP(int32 EntryPoint);
}; // Size: 0xAA9

#endif
