#ifndef UE4SS_SDK_ABP_FortBanner_HPP
#define UE4SS_SDK_ABP_FortBanner_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_24;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_25;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_26;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_27;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_28;                                                         // 0x0040 (size: 0x4)
    EAnimSyncMethod __EnumProperty_29;                                                // 0x0044 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_30;                              // 0x0045 (size: 0x1)
    FName __NameProperty_31;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_32;                                         // 0x0050 (size: 0x20)
    class UBlendProfile* __BlendProfile_33;                                           // 0x0070 (size: 0x8)
    class UCurveFloat* __CurveFloat_34;                                               // 0x0078 (size: 0x8)
    bool __BoolProperty_35;                                                           // 0x0080 (size: 0x1)
    EAlphaBlendOption __EnumProperty_36;                                              // 0x0081 (size: 0x1)
    EBlendListTransitionType __EnumProperty_37;                                       // 0x0082 (size: 0x1)
    TArray<float> __ArrayProperty_38;                                                 // 0x0088 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0098 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0118 (size: 0x18)

}; // Size: 0x130

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

class UABP_FortBanner_C : public UVisWeatherIndicatorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0388 (size: 0x2)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03C0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0408 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0450 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FortBanner_AnimGraphNode_BlendListByBool_3F286CD34D6C916ECA9EB5A633A3530D();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_FortBanner(int32 EntryPoint);
}; // Size: 0x498

#endif
