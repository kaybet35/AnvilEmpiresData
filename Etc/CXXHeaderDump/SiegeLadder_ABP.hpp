#ifndef UE4SS_SDK_SiegeLadder_ABP_HPP
#define UE4SS_SDK_SiegeLadder_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_50;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_51;                                         // 0x0010 (size: 0x20)
    FInputScaleBiasClampConstants __StructProperty_52;                                // 0x0030 (size: 0x2C)
    float __FloatProperty_53;                                                         // 0x005C (size: 0x4)
    float __FloatProperty_54;                                                         // 0x0060 (size: 0x4)
    bool __BoolProperty_55;                                                           // 0x0064 (size: 0x1)
    EAnimSyncMethod __EnumProperty_56;                                                // 0x0065 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_57;                              // 0x0066 (size: 0x1)
    FName __NameProperty_58;                                                          // 0x0068 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

class USiegeLadder_ABP_C : public UVisLadderVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_MultiWayBlend AnimGraphNode_MultiWayBlend;                              // 0x0388 (size: 0x50)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x03D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0420 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0468 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04B0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SiegeLadder_ABP_AnimGraphNode_MultiWayBlend_02230C8F4D9E397BA53D878C7A06D38A();
    void ExecuteUbergraph_SiegeLadder_ABP(int32 EntryPoint);
}; // Size: 0x4F8

#endif
