#ifndef UE4SS_SDK_BatteringRam_ABP_HPP
#define UE4SS_SDK_BatteringRam_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_62;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_63;                                                         // 0x000C (size: 0x4)
    FName __NameProperty_64;                                                          // 0x0010 (size: 0x8)
    int32 __IntProperty_65;                                                           // 0x0018 (size: 0x4)
    bool __BoolProperty_66;                                                           // 0x001C (size: 0x1)
    float __FloatProperty_67;                                                         // 0x0020 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_68;                                // 0x0024 (size: 0x2C)
    float __FloatProperty_69;                                                         // 0x0050 (size: 0x4)
    bool __BoolProperty_70;                                                           // 0x0054 (size: 0x1)
    EAnimSyncMethod __EnumProperty_71;                                                // 0x0055 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_72;                              // 0x0056 (size: 0x1)
    FName __NameProperty_73;                                                          // 0x0058 (size: 0x8)
    FName __NameProperty_74;                                                          // 0x0060 (size: 0x8)
    int32 __IntProperty_75;                                                           // 0x0068 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_76;                                         // 0x0070 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UBatteringRam_ABP_C : public UVisBatteringRamAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03F8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0440 (size: 0x70)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x04B0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0590 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x05F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0640 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0660 (size: 0xC8)
    double tiltAngle_Pitch;                                                           // 0x0728 (size: 0x8)
    bool RamIsInUse;                                                                  // 0x0730 (size: 0x1)
    double Wheel Axle Radius;                                                         // 0x0738 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BatteringRam_ABP_AnimGraphNode_SequencePlayer_5C6820B04A67569FC4D2F78B719C752C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_BatteringRam_ABP_AnimGraphNode_SequencePlayer_A8A86E2A4021D63719F0FEA30F4F4CB1();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_BatteringRam_ABP(int32 EntryPoint);
}; // Size: 0x740

#endif
