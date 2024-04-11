#ifndef UE4SS_SDK_ABP_Bellow_HPP
#define UE4SS_SDK_ABP_Bellow_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_13;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_14;                                                         // 0x000C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_15;                                // 0x0010 (size: 0x2C)
    float __FloatProperty_16;                                                         // 0x003C (size: 0x4)
    EAnimSyncMethod __EnumProperty_17;                                                // 0x0040 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_18;                              // 0x0041 (size: 0x1)
    FName __NameProperty_19;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_20;                                         // 0x0050 (size: 0x20)
    class UBlendProfile* __BlendProfile_21;                                           // 0x0070 (size: 0x8)
    class UCurveFloat* __CurveFloat_22;                                               // 0x0078 (size: 0x8)
    EAlphaBlendOption __EnumProperty_23;                                              // 0x0080 (size: 0x1)
    EBlendListTransitionType __EnumProperty_24;                                       // 0x0081 (size: 0x1)
    TArray<float> __ArrayProperty_25;                                                 // 0x0088 (size: 0x10)
    bool __BoolProperty_26;                                                           // 0x0098 (size: 0x1)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

class UABP_Bellow_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0388 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x03D0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Bellow(int32 EntryPoint);
}; // Size: 0x418

#endif
