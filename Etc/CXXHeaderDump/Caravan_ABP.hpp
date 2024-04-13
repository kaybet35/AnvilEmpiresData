#ifndef UE4SS_SDK_Caravan_ABP_HPP
#define UE4SS_SDK_Caravan_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_113;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_114;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_115;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_116;                                                        // 0x0018 (size: 0x4)
    FName __NameProperty_117;                                                         // 0x001C (size: 0x8)
    int32 __IntProperty_118;                                                          // 0x0024 (size: 0x4)
    float __FloatProperty_119;                                                        // 0x0028 (size: 0x4)
    FName __NameProperty_120;                                                         // 0x002C (size: 0x8)
    int32 __IntProperty_121;                                                          // 0x0034 (size: 0x4)
    FName __NameProperty_122;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_123;                                                          // 0x0040 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_124;                               // 0x0044 (size: 0x2C)
    float __FloatProperty_125;                                                        // 0x0070 (size: 0x4)
    bool __BoolProperty_126;                                                          // 0x0074 (size: 0x1)
    float __FloatProperty_127;                                                        // 0x0078 (size: 0x4)
    float __FloatProperty_128;                                                        // 0x007C (size: 0x4)
    EAnimSyncMethod __EnumProperty_129;                                               // 0x0080 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_130;                             // 0x0081 (size: 0x1)
    FName __NameProperty_131;                                                         // 0x0084 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_132;                                        // 0x0090 (size: 0x20)
    class UBlendProfile* __BlendProfile_133;                                          // 0x00B0 (size: 0x8)
    class UCurveFloat* __CurveFloat_134;                                              // 0x00B8 (size: 0x8)
    bool __BoolProperty_135;                                                          // 0x00C0 (size: 0x1)
    EAlphaBlendOption __EnumProperty_136;                                             // 0x00C1 (size: 0x1)
    EBlendListTransitionType __EnumProperty_137;                                      // 0x00C2 (size: 0x1)
    TArray<float> __ArrayProperty_138;                                                // 0x00C8 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0158 (size: 0x18)

}; // Size: 0x170

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_4;                                                          // 0x0018 (size: 0x4)
    float __FloatProperty_5;                                                          // 0x001C (size: 0x4)
    bool __BoolProperty_6;                                                            // 0x0020 (size: 0x1)

}; // Size: 0x21

class UCaravan_ABP_C : public UVisCartAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x24)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0460 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0488 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04B0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04F8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0518 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0560 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0580 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05C8 (size: 0x20)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x05E8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0660 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0680 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0748 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0828 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0908 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0978 (size: 0x48)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x09C0 (size: 0x118)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0AD8 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_SequencePlayer_FE6B22714877ED6B8D515CA60FB1F5DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_F1E07D6A4F0C4EA076BFA1B0034765E5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_FF87FDDC4A0C73C0C31B739C017EBF2C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_498FD60A4BD69E60076FF9A7314D6813();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_9F016AE74528CB0DCD02E68B93F37CD1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_0D401B2D436459DF5038B9B335CED12A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Caravan_ABP_AnimGraphNode_TransitionResult_4D19B82C429BBA49DD5A2B9F2BE05C55();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Caravan_ABP(int32 EntryPoint);
}; // Size: 0xB20

#endif
