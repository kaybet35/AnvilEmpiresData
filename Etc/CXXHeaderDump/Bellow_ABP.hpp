#ifndef UE4SS_SDK_Bellow_ABP_HPP
#define UE4SS_SDK_Bellow_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_21;                                         // 0x0010 (size: 0x20)
    bool __BoolProperty_22;                                                           // 0x0030 (size: 0x1)
    float __FloatProperty_23;                                                         // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_24;                                // 0x0038 (size: 0x2C)
    bool __BoolProperty_25;                                                           // 0x0064 (size: 0x1)
    EAnimSyncMethod __EnumProperty_26;                                                // 0x0065 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_27;                              // 0x0066 (size: 0x1)
    FName __NameProperty_28;                                                          // 0x0068 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UBellow_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03B0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03F8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04D8 (size: 0x48)
    double AnimSlowAmount;                                                            // 0x0520 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bellow_ABP_AnimGraphNode_SequencePlayer_62436E04435E8D115D0850AE74FCC40B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Bellow_ABP_AnimGraphNode_SequencePlayer_42E9D75E4BB4E37F085D1D89ED143FFA();
    void ExecuteUbergraph_Bellow_ABP(int32 EntryPoint);
}; // Size: 0x528

#endif
