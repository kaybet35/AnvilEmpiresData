#ifndef UE4SS_SDK_HeavyBatteringRam_ABP_HPP
#define UE4SS_SDK_HeavyBatteringRam_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_91;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_92;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_93;                                                           // 0x0014 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_94;                                   // 0x0018 (size: 0x8)
    FName __NameProperty_95;                                                          // 0x0020 (size: 0x8)
    int32 __IntProperty_96;                                                           // 0x0028 (size: 0x4)
    float __FloatProperty_97;                                                         // 0x002C (size: 0x4)
    FName __NameProperty_98;                                                          // 0x0030 (size: 0x8)
    int32 __IntProperty_99;                                                           // 0x0038 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_100;                        // 0x003C (size: 0x1)
    class UAnimSequenceBase* __AnimSequenceBase_101;                                  // 0x0040 (size: 0x8)
    FName __NameProperty_102;                                                         // 0x0048 (size: 0x8)
    int32 __IntProperty_103;                                                          // 0x0050 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_104;                                        // 0x0058 (size: 0x20)
    bool __BoolProperty_105;                                                          // 0x0078 (size: 0x1)
    float __FloatProperty_106;                                                        // 0x007C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_107;                               // 0x0080 (size: 0x2C)
    float __FloatProperty_108;                                                        // 0x00AC (size: 0x4)
    bool __BoolProperty_109;                                                          // 0x00B0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_110;                                               // 0x00B1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_111;                             // 0x00B2 (size: 0x1)
    FName __NameProperty_112;                                                         // 0x00B4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)

}; // Size: 0x158

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UHeavyBatteringRam_ABP_C : public UVisMobileWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0378 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0380 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0440 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0468 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x04D0 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0510 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0530 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0578 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0598 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05D8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05F8 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x06C0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x07A0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HeavyBatteringRam_ABP_AnimGraphNode_TransitionResult_96D2128D4F02001CA0F43298B4C9E01D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HeavyBatteringRam_ABP_AnimGraphNode_TransitionResult_333295B945EF8FCD8718B6BBB93DAAB1();
    void ExecuteUbergraph_HeavyBatteringRam_ABP(int32 EntryPoint);
}; // Size: 0x7E8

#endif
