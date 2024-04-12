#ifndef UE4SS_SDK_ABP_AnimalPoweredMill_HPP
#define UE4SS_SDK_ABP_AnimalPoweredMill_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_38;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_39;                                                         // 0x000C (size: 0x4)
    float __FloatProperty_40;                                                         // 0x0010 (size: 0x4)
    bool __BoolProperty_41;                                                           // 0x0014 (size: 0x1)
    float __FloatProperty_42;                                                         // 0x0018 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_43;                                // 0x001C (size: 0x2C)
    float __FloatProperty_44;                                                         // 0x0048 (size: 0x4)
    EAnimSyncMethod __EnumProperty_45;                                                // 0x004C (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_46;                              // 0x004D (size: 0x1)
    FName __NameProperty_47;                                                          // 0x0050 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_48;                                         // 0x0058 (size: 0x20)
    class UBlendProfile* __BlendProfile_49;                                           // 0x0078 (size: 0x8)
    class UCurveFloat* __CurveFloat_50;                                               // 0x0080 (size: 0x8)
    bool __BoolProperty_51;                                                           // 0x0088 (size: 0x1)
    EAlphaBlendOption __EnumProperty_52;                                              // 0x0089 (size: 0x1)
    EBlendListTransitionType __EnumProperty_53;                                       // 0x008A (size: 0x1)
    TArray<float> __ArrayProperty_54;                                                 // 0x0090 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    bool __BoolProperty_2;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x11

class UABP_AnimalPoweredMill_C : public UVisBatteringRamAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03B0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x03F8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x04D8 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0520 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0600 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0648 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AnimalPoweredMill(int32 EntryPoint);
}; // Size: 0x690

#endif
