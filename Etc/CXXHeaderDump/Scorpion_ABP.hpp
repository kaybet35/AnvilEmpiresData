#ifndef UE4SS_SDK_Scorpion_ABP_HPP
#define UE4SS_SDK_Scorpion_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_104;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_105;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_106;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_107;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_108;                                                          // 0x0020 (size: 0x4)
    FName __NameProperty_109;                                                         // 0x0024 (size: 0x8)
    int32 __IntProperty_110;                                                          // 0x002C (size: 0x4)
    bool __BoolProperty_111;                                                          // 0x0030 (size: 0x1)
    FInputScaleBiasClampConstants __StructProperty_112;                               // 0x0034 (size: 0x2C)
    float __FloatProperty_113;                                                        // 0x0060 (size: 0x4)
    float __FloatProperty_114;                                                        // 0x0064 (size: 0x4)
    bool __BoolProperty_115;                                                          // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_116;                                               // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_117;                             // 0x006A (size: 0x1)
    FName __NameProperty_118;                                                         // 0x006C (size: 0x8)
    FName __NameProperty_119;                                                         // 0x0074 (size: 0x8)
    int32 __IntProperty_120;                                                          // 0x007C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_121;                                        // 0x0080 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UScorpion_ABP_C : public UVisMobileWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x03A8 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0418 (size: 0x70)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0488 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0568 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0590 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x05B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x05E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0608 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0650 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0670 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x06B8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x06D8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0720 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0740 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0788 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x07A8 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Scorpion_ABP_AnimGraphNode_TransitionResult_1E6CB4DE4C2C7BE8D42C24937DB6CCB2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Scorpion_ABP_AnimGraphNode_TransitionResult_6FC3A5D44143AE87B440488D4ADA407D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Scorpion_ABP_AnimGraphNode_TransitionResult_C3A8D2BF4559BFD97AD0AAB479A73EF4();
    void ExecuteUbergraph_Scorpion_ABP(int32 EntryPoint);
}; // Size: 0x870

#endif
