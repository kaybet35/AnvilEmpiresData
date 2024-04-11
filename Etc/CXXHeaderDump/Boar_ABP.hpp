#ifndef UE4SS_SDK_Boar_ABP_HPP
#define UE4SS_SDK_Boar_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_74;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_75;                                                          // 0x000C (size: 0x8)
    bool __BoolProperty_76;                                                           // 0x0014 (size: 0x1)
    FName __NameProperty_77;                                                          // 0x0018 (size: 0x8)
    float __FloatProperty_78;                                                         // 0x0020 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_79;                                // 0x0024 (size: 0x2C)
    float __FloatProperty_80;                                                         // 0x0050 (size: 0x4)
    bool __BoolProperty_81;                                                           // 0x0054 (size: 0x1)
    EAnimSyncMethod __EnumProperty_82;                                                // 0x0055 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_83;                              // 0x0056 (size: 0x1)
    FName __NameProperty_84;                                                          // 0x0058 (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0060 (size: 0x4)
    FName __NameProperty_86;                                                          // 0x0064 (size: 0x8)
    FName __NameProperty_87;                                                          // 0x006C (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0074 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_89;                                         // 0x0078 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0098 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0118 (size: 0x18)

}; // Size: 0x130

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UBoar_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03B8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03E0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0428 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0448 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x04B8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x04D8 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x05A0 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x05E8 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x06B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x06E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0708 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0750 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0770 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0790 (size: 0xC8)
    bool isDead;                                                                      // 0x0858 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_88CE49DC406605189A6E42B11EBA1481();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_F460036E41CC8CDE7B9065B1A87C3859();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_9B0279B6444DC578715110B9A56613E8();
    void ExecuteUbergraph_Boar_ABP(int32 EntryPoint);
}; // Size: 0x859

#endif
