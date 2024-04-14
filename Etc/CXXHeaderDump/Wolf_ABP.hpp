#ifndef UE4SS_SDK_Wolf_ABP_HPP
#define UE4SS_SDK_Wolf_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_105;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_106;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_107;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_108;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_109;                                                          // 0x0020 (size: 0x4)
    FName __NameProperty_110;                                                         // 0x0024 (size: 0x8)
    bool __BoolProperty_111;                                                          // 0x002C (size: 0x1)
    FName __NameProperty_112;                                                         // 0x0030 (size: 0x8)
    float __FloatProperty_113;                                                        // 0x0038 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_114;                               // 0x003C (size: 0x2C)
    float __FloatProperty_115;                                                        // 0x0068 (size: 0x4)
    bool __BoolProperty_116;                                                          // 0x006C (size: 0x1)
    EAnimSyncMethod __EnumProperty_117;                                               // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_118;                             // 0x006E (size: 0x1)
    FName __NameProperty_119;                                                         // 0x0070 (size: 0x8)
    int32 __IntProperty_120;                                                          // 0x0078 (size: 0x4)
    FName __NameProperty_121;                                                         // 0x007C (size: 0x8)
    FName __NameProperty_122;                                                         // 0x0084 (size: 0x8)
    int32 __IntProperty_123;                                                          // 0x008C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_124;                                        // 0x0090 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UWolf_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0408 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0430 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x04A8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04C8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0510 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0530 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0578 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0598 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0608 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0628 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06F0 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0738 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0808 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0830 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0858 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x08A0 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x08C0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x08E0 (size: 0xC8)
    bool isDead;                                                                      // 0x09A8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_D598D5014F1720632A385082BC94CE58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_C5EA65AD4A2F35DA64A54CB3AE07B54B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_3EC39E7A48D770DAA9D6E5A02165B013();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_F2170FA04AC21F6A89BD90ACBC34FCE5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_CBDB148B481CC3972141BF9A8495D0FD();
    void ExecuteUbergraph_Wolf_ABP(int32 EntryPoint);
}; // Size: 0x9A9

#endif
