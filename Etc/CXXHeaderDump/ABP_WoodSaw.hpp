#ifndef UE4SS_SDK_ABP_WoodSaw_HPP
#define UE4SS_SDK_ABP_WoodSaw_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    bool __BoolProperty_7;                                                            // 0x0001 (size: 0x1)
    float __FloatProperty_8;                                                          // 0x0004 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_9;                                 // 0x0008 (size: 0x2C)
    float __FloatProperty_10;                                                         // 0x0034 (size: 0x4)
    bool __BoolProperty_11;                                                           // 0x0038 (size: 0x1)
    EAnimSyncMethod __EnumProperty_12;                                                // 0x0039 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_13;                              // 0x003A (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_14;                                         // 0x0040 (size: 0x20)
    FName __NameProperty_15;                                                          // 0x0060 (size: 0x8)
    FName __NameProperty_16;                                                          // 0x0068 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

class UABP_WoodSaw_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0378 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03C0 (size: 0x20)
    double AnimSlowAmount;                                                            // 0x03E0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_WoodSaw(int32 EntryPoint);
}; // Size: 0x3E8

#endif
