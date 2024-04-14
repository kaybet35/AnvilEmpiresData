#ifndef UE4SS_SDK_Raven_ABP_HPP
#define UE4SS_SDK_Raven_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_37;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_38;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_39;                                                           // 0x0014 (size: 0x4)
    bool __BoolProperty_40;                                                           // 0x0018 (size: 0x1)
    float __FloatProperty_41;                                                         // 0x001C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_42;                                // 0x0020 (size: 0x2C)
    float __FloatProperty_43;                                                         // 0x004C (size: 0x4)
    bool __BoolProperty_44;                                                           // 0x0050 (size: 0x1)
    EAnimSyncMethod __EnumProperty_45;                                                // 0x0051 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_46;                              // 0x0052 (size: 0x1)
    FName __NameProperty_47;                                                          // 0x0054 (size: 0x8)
    FName __NameProperty_48;                                                          // 0x005C (size: 0x8)
    int32 __IntProperty_49;                                                           // 0x0064 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_50;                                         // 0x0068 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)

}; // Size: 0x120

class URaven_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03B0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03D8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0420 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0440 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0488 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x04A8 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_TransitionResult_450D3B5146726BC5B24EEE948948878A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_TransitionResult_735FB67F43D2FF6509C11BB527B17B66();
    void ExecuteUbergraph_Raven_ABP(int32 EntryPoint);
}; // Size: 0x570

#endif
