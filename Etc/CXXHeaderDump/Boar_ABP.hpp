#ifndef UE4SS_SDK_Boar_ABP_HPP
#define UE4SS_SDK_Boar_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_85;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_86;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_87;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_88;                                                          // 0x0018 (size: 0x8)
    bool __BoolProperty_89;                                                           // 0x0020 (size: 0x1)
    FName __NameProperty_90;                                                          // 0x0024 (size: 0x8)
    float __FloatProperty_91;                                                         // 0x002C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_92;                                // 0x0030 (size: 0x2C)
    float __FloatProperty_93;                                                         // 0x005C (size: 0x4)
    bool __BoolProperty_94;                                                           // 0x0060 (size: 0x1)
    EAnimSyncMethod __EnumProperty_95;                                                // 0x0061 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_96;                              // 0x0062 (size: 0x1)
    FName __NameProperty_97;                                                          // 0x0064 (size: 0x8)
    int32 __IntProperty_98;                                                           // 0x006C (size: 0x4)
    FName __NameProperty_99;                                                          // 0x0070 (size: 0x8)
    FName __NameProperty_100;                                                         // 0x0078 (size: 0x8)
    int32 __IntProperty_101;                                                          // 0x0080 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_102;                                        // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

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
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03E0 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0408 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0480 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x04A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04E8 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0508 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0578 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0598 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0660 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x06A8 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0778 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x07A0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x07C8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0810 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0830 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0850 (size: 0xC8)
    bool isDead;                                                                      // 0x0918 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_88CE49DC406605189A6E42B11EBA1481();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_99B54A324D6931A465CCDAAC6A11B14A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_DC429C27478079B3FE44C9AA53C24D5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Boar_ABP_AnimGraphNode_TransitionResult_AE8E5E0D46605550BAE9A79EAF66E966();
    void ExecuteUbergraph_Boar_ABP(int32 EntryPoint);
}; // Size: 0x919

#endif
