#ifndef UE4SS_SDK_GrainMill_ABP_HPP
#define UE4SS_SDK_GrainMill_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;                                                          // 0x0004 (size: 0x8)
    FInputScaleBiasClampConstants __StructProperty_21;                                // 0x000C (size: 0x2C)
    float __FloatProperty_22;                                                         // 0x0038 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_23;                                         // 0x0040 (size: 0x20)
    bool __BoolProperty_24;                                                           // 0x0060 (size: 0x1)
    float __FloatProperty_25;                                                         // 0x0064 (size: 0x4)
    float __FloatProperty_26;                                                         // 0x0068 (size: 0x4)
    bool __BoolProperty_27;                                                           // 0x006C (size: 0x1)
    EAnimSyncMethod __EnumProperty_28;                                                // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_29;                              // 0x006E (size: 0x1)
    FName __NameProperty_30;                                                          // 0x0070 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UGrainMill_ABP_C : public UVisGrainMillAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0398 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03E0 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04C0 (size: 0x70)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_GrainMill_ABP(int32 EntryPoint);
}; // Size: 0x530

#endif
