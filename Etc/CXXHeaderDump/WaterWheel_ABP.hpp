#ifndef UE4SS_SDK_WaterWheel_ABP_HPP
#define UE4SS_SDK_WaterWheel_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_46;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_47;                                                         // 0x000C (size: 0x4)
    float __FloatProperty_48;                                                         // 0x0010 (size: 0x4)
    float __FloatProperty_49;                                                         // 0x0014 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_50;                                         // 0x0018 (size: 0x20)
    bool __BoolProperty_51;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_52;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_53;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_54;                                                         // 0x006C (size: 0x4)
    bool __BoolProperty_55;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_56;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_57;                              // 0x0072 (size: 0x1)
    FName __NameProperty_58;                                                          // 0x0074 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UWaterWheel_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x03A8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03F0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0438 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0518 (size: 0x48)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0560 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0628 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_WaterWheel_ABP_AnimGraphNode_TwoWayBlend_00AFD8C74C7323616BF2A78530582840();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_WaterWheel_ABP_AnimGraphNode_SequencePlayer_1F0A9A104E32F5B235289CB6CC6F6E8E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_WaterWheel_ABP_AnimGraphNode_SequencePlayer_B2FC20AF4631615283AD33A712009A58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_WaterWheel_ABP_AnimGraphNode_SequencePlayer_9C260BCD4EF325039968A5AC79FABFAD();
    void ExecuteUbergraph_WaterWheel_ABP(int32 EntryPoint);
}; // Size: 0x670

#endif
