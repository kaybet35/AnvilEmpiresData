#ifndef UE4SS_SDK_Horse_ABP_HPP
#define UE4SS_SDK_Horse_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_112;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_113;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_114;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_115;                                                        // 0x0018 (size: 0x4)
    FName __NameProperty_116;                                                         // 0x001C (size: 0x8)
    int32 __IntProperty_117;                                                          // 0x0024 (size: 0x4)
    float __FloatProperty_118;                                                        // 0x0028 (size: 0x4)
    FName __NameProperty_119;                                                         // 0x002C (size: 0x8)
    int32 __IntProperty_120;                                                          // 0x0034 (size: 0x4)
    FName __NameProperty_121;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_122;                                                          // 0x0040 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_123;                               // 0x0044 (size: 0x2C)
    float __FloatProperty_124;                                                        // 0x0070 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_125;                                        // 0x0078 (size: 0x20)
    bool __BoolProperty_126;                                                          // 0x0098 (size: 0x1)
    float __FloatProperty_127;                                                        // 0x009C (size: 0x4)
    float __FloatProperty_128;                                                        // 0x00A0 (size: 0x4)
    bool __BoolProperty_129;                                                          // 0x00A4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_130;                                               // 0x00A5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_131;                             // 0x00A6 (size: 0x1)
    FName __NameProperty_132;                                                         // 0x00A8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_4;                                                          // 0x0018 (size: 0x4)
    float __FloatProperty_5;                                                          // 0x001C (size: 0x4)

}; // Size: 0x20

class UHorse_ABP_C : public UVisVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x20)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x03B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0408 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0430 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0480 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x04A8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0518 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0538 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0580 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05E8 (size: 0x20)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0608 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0680 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06A0 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0768 (size: 0xE0)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0848 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0928 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0998 (size: 0x48)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x09E0 (size: 0x118)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_SequencePlayer_6BDECC7A4735B23FA28216B484AAC5E4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_7209925D4980F5BEE9D68FA518CC9F7F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_7748F9BD435EC016424BD299766ED989();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_8D3258524C7A9A117E867E8A5D3A8D9F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_FD8D06514D7992E160C73197CCA9AA79();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_025FAED1476EDC443EE39C9ED00DE97F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Horse_ABP_AnimGraphNode_TransitionResult_7DB7F19B4E1CFC7A57CD0FAA39A66DB0();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Horse_ABP(int32 EntryPoint);
}; // Size: 0xAF8

#endif
