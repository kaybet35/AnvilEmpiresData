#ifndef UE4SS_SDK_Wolf_ABP_HPP
#define UE4SS_SDK_Wolf_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_97;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_98;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_99;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_100;                                                         // 0x0018 (size: 0x8)
    bool __BoolProperty_101;                                                          // 0x0020 (size: 0x1)
    FName __NameProperty_102;                                                         // 0x0024 (size: 0x8)
    float __FloatProperty_103;                                                        // 0x002C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_104;                               // 0x0030 (size: 0x2C)
    float __FloatProperty_105;                                                        // 0x005C (size: 0x4)
    bool __BoolProperty_106;                                                          // 0x0060 (size: 0x1)
    EAnimSyncMethod __EnumProperty_107;                                               // 0x0061 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_108;                             // 0x0062 (size: 0x1)
    FName __NameProperty_109;                                                         // 0x0064 (size: 0x8)
    int32 __IntProperty_110;                                                          // 0x006C (size: 0x4)
    FName __NameProperty_111;                                                         // 0x0070 (size: 0x8)
    FName __NameProperty_112;                                                         // 0x0078 (size: 0x8)
    int32 __IntProperty_113;                                                          // 0x0080 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_114;                                        // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

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
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0430 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0478 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0498 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04E0 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0500 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0570 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0590 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0658 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x06A0 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0770 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0798 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x07C0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0808 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0828 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0848 (size: 0xC8)
    bool isDead;                                                                      // 0x0910 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_D598D5014F1720632A385082BC94CE58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_68F533DE435CAEFA3CA6D7915EA40B2F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_EC30BB9E4F9C7E9DA5D1C0B693B194A1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_BA45B17B4C3B18F0C5B286A2293A8E65();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_93A8DBB24383C315F41A04B4971E9690();
    void ExecuteUbergraph_Wolf_ABP(int32 EntryPoint);
}; // Size: 0x911

#endif
