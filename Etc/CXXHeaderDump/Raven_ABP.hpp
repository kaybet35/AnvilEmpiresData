#ifndef UE4SS_SDK_Raven_ABP_HPP
#define UE4SS_SDK_Raven_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_61;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_62;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_63;                                                           // 0x0014 (size: 0x4)
    bool __BoolProperty_64;                                                           // 0x0018 (size: 0x1)
    float __FloatProperty_65;                                                         // 0x001C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_66;                                // 0x0020 (size: 0x2C)
    float __FloatProperty_67;                                                         // 0x004C (size: 0x4)
    bool __BoolProperty_68;                                                           // 0x0050 (size: 0x1)
    EAnimSyncMethod __EnumProperty_69;                                                // 0x0051 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_70;                              // 0x0052 (size: 0x1)
    FName __NameProperty_71;                                                          // 0x0054 (size: 0x8)
    FName __NameProperty_72;                                                          // 0x005C (size: 0x8)
    int32 __IntProperty_73;                                                           // 0x0064 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_74;                                         // 0x0068 (size: 0x20)
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
    FAnimNode_PoseByName AnimGraphNode_PoseByName_3;                                  // 0x0570 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;                            // 0x0618 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName_2;                                  // 0x06E0 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                            // 0x0788 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName_1;                                  // 0x0850 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                            // 0x08F8 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName;                                    // 0x09C0 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0A68 (size: 0xC8)
    float localYaw;                                                                   // 0x0B30 (size: 0x4)
    double localPitch;                                                                // 0x0B38 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_ApplyAdditive_2876BE2B4E48B92B9A5269942BFD9850();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_ApplyAdditive_5335B13D46E8CBC71C7F2B984FECEAFF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_ApplyAdditive_4A4C06F843858A573CD34C8F29F415DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_ApplyAdditive_5D4D62344C8F8AE533589181DE91379F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_TransitionResult_450D3B5146726BC5B24EEE948948878A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Raven_ABP_AnimGraphNode_TransitionResult_735FB67F43D2FF6509C11BB527B17B66();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Raven_ABP(int32 EntryPoint);
}; // Size: 0xB40

#endif
