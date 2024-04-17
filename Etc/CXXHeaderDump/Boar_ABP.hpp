#ifndef UE4SS_SDK_Boar_ABP_HPP
#define UE4SS_SDK_Boar_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_140;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_141;                                                         // 0x000C (size: 0x8)
    FName __NameProperty_142;                                                         // 0x0014 (size: 0x8)
    FName __NameProperty_143;                                                         // 0x001C (size: 0x8)
    float __FloatProperty_144;                                                        // 0x0024 (size: 0x4)
    FName __NameProperty_145;                                                         // 0x0028 (size: 0x8)
    FName __NameProperty_146;                                                         // 0x0030 (size: 0x8)
    float __FloatProperty_147;                                                        // 0x0038 (size: 0x4)
    FName __NameProperty_148;                                                         // 0x003C (size: 0x8)
    int32 __IntProperty_149;                                                          // 0x0044 (size: 0x4)
    bool __BoolProperty_150;                                                          // 0x0048 (size: 0x1)
    float __FloatProperty_151;                                                        // 0x004C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_152;                               // 0x0050 (size: 0x2C)
    float __FloatProperty_153;                                                        // 0x007C (size: 0x4)
    bool __BoolProperty_154;                                                          // 0x0080 (size: 0x1)
    EAnimSyncMethod __EnumProperty_155;                                               // 0x0081 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_156;                             // 0x0082 (size: 0x1)
    FName __NameProperty_157;                                                         // 0x0084 (size: 0x8)
    int32 __IntProperty_158;                                                          // 0x008C (size: 0x4)
    FName __NameProperty_159;                                                         // 0x0090 (size: 0x8)
    FName __NameProperty_160;                                                         // 0x0098 (size: 0x8)
    int32 __IntProperty_161;                                                          // 0x00A0 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_162;                                        // 0x00A8 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0148 (size: 0x18)

}; // Size: 0x160

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UBoar_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x03E8 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0410 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0488 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04A8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x04F0 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0510 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0580 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x05A0 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0668 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x06B0 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0780 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x07A8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x07D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0818 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0838 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0858 (size: 0xC8)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0920 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x09F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0A18 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0A40 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0A68 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0A90 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0AD8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0AF8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0B40 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0B60 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0B80 (size: 0xC8)
    bool isDead;                                                                      // 0x0C48 (size: 0x1)
    double localYaw;                                                                  // 0x0C50 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_B7AF77FD4605FA277A9A0CB553C99B91();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_99B54A324D6931A465CCDAAC6A11B14A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_AEC398124D56E3557684AD8E49E35854();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_38C2F88542451EBBD0D8F3A3DF90B44E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_05A6961C4044B3E0A49FC6A9E9E7A58F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_88CE49DC406605189A6E42B11EBA1481();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_DC429C27478079B3FE44C9AA53C24D5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_AE8E5E0D46605550BAE9A79EAF66E966();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Boar_ABP(int32 EntryPoint);
}; // Size: 0xC58

#endif
