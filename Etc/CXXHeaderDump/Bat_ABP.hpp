#ifndef UE4SS_SDK_Bat_ABP_HPP
#define UE4SS_SDK_Bat_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_72;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_73;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_74;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_75;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_76;                                                           // 0x0020 (size: 0x4)
    bool __BoolProperty_77;                                                           // 0x0024 (size: 0x1)
    float __FloatProperty_78;                                                         // 0x0028 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_79;                                // 0x002C (size: 0x2C)
    float __FloatProperty_80;                                                         // 0x0058 (size: 0x4)
    bool __BoolProperty_81;                                                           // 0x005C (size: 0x1)
    EAnimSyncMethod __EnumProperty_82;                                                // 0x005D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_83;                              // 0x005E (size: 0x1)
    FName __NameProperty_84;                                                          // 0x0060 (size: 0x8)
    FName __NameProperty_85;                                                          // 0x0068 (size: 0x8)
    int32 __IntProperty_86;                                                           // 0x0070 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_87;                                         // 0x0078 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0098 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0118 (size: 0x18)

}; // Size: 0x130

class UBat_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D8 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0400 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0478 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0498 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04E0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0500 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0548 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0568 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName_3;                                  // 0x0630 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;                            // 0x06D8 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName_2;                                  // 0x07A0 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;                            // 0x0848 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName_1;                                  // 0x0910 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                            // 0x09B8 (size: 0xC8)
    FAnimNode_PoseByName AnimGraphNode_PoseByName;                                    // 0x0A80 (size: 0xA8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0B28 (size: 0xC8)
    double localYaw;                                                                  // 0x0BF0 (size: 0x8)
    double localPitch;                                                                // 0x0BF8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_ApplyAdditive_72398A144CA882F1983040875D9BAF35();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_ApplyAdditive_9107614641EFD2ECBC51EAB918F618CA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_ApplyAdditive_B28D5FC5492AFAAAA28F2E9682DE5EF8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_ApplyAdditive_94A905884B835D26C26CCAA3287874BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_TransitionResult_2925450843CD226B53DDF785196190C2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_TransitionResult_C38D9F934B77D6492181A29E75522F1A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bat_ABP_AnimGraphNode_TransitionResult_0D4EAB444E92ACC3AB01A984C0328A5D();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Bat_ABP(int32 EntryPoint);
}; // Size: 0xC00

#endif
