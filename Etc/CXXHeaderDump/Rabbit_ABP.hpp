#ifndef UE4SS_SDK_Rabbit_ABP_HPP
#define UE4SS_SDK_Rabbit_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    float __FloatProperty_80;                                                         // 0x0004 (size: 0x4)
    FName __NameProperty_81;                                                          // 0x0008 (size: 0x8)
    int32 __IntProperty_82;                                                           // 0x0010 (size: 0x4)
    float __FloatProperty_83;                                                         // 0x0014 (size: 0x4)
    FName __NameProperty_84;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0020 (size: 0x4)
    float __FloatProperty_86;                                                         // 0x0024 (size: 0x4)
    FName __NameProperty_87;                                                          // 0x0028 (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0030 (size: 0x4)
    bool __BoolProperty_89;                                                           // 0x0034 (size: 0x1)
    float __FloatProperty_90;                                                         // 0x0038 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_91;                                // 0x003C (size: 0x2C)
    float __FloatProperty_92;                                                         // 0x0068 (size: 0x4)
    bool __BoolProperty_93;                                                           // 0x006C (size: 0x1)
    EAnimSyncMethod __EnumProperty_94;                                                // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_95;                              // 0x006E (size: 0x1)
    FName __NameProperty_96;                                                          // 0x0070 (size: 0x8)
    int32 __IntProperty_97;                                                           // 0x0078 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_98;                                         // 0x0080 (size: 0x20)
    FName __NameProperty_99;                                                          // 0x00A0 (size: 0x8)
    FName __NameProperty_100;                                                         // 0x00A8 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class URabbit_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0378 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0440 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0468 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0518 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0538 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0580 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x05A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05E8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0608 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06D0 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0718 (size: 0x20)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_F13FDF3C496ACCA79252CEA8B49D3100();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_9C9A4B5A4A6A291CE04E7F891E74E982();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_7B2208CE4039C082EBDDC991DAEDAEE1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_90E2F26844ED296999F135865C57035F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_88FB4EDF40B09E78AE48D6B07E1F4448();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_TransitionResult_4A6596DB402756D1DF9077A171A2858D();
    void ExecuteUbergraph_Rabbit_ABP(int32 EntryPoint);
}; // Size: 0x738

#endif
