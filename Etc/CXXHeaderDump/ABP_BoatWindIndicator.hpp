#ifndef UE4SS_SDK_ABP_BoatWindIndicator_HPP
#define UE4SS_SDK_ABP_BoatWindIndicator_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_34;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_35;                                                         // 0x000C (size: 0x4)
    EAnimSyncMethod __EnumProperty_36;                                                // 0x0010 (size: 0x1)
    FName __NameProperty_37;                                                          // 0x0014 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_38;                                         // 0x0020 (size: 0x20)
    bool __BoolProperty_39;                                                           // 0x0040 (size: 0x1)
    float __FloatProperty_40;                                                         // 0x0044 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_41;                                // 0x0048 (size: 0x2C)
    float __FloatProperty_42;                                                         // 0x0074 (size: 0x4)
    bool __BoolProperty_43;                                                           // 0x0078 (size: 0x1)
    EAnimSyncMethod __EnumProperty_44;                                                // 0x0079 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_45;                              // 0x007A (size: 0x1)
    FName __NameProperty_46;                                                          // 0x007C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UABP_BoatWindIndicator_C : public UVisWeatherIndicatorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0388 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0398 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03C8 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0410 (size: 0xE0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04F0 (size: 0x70)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0560 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0628 (size: 0x48)
    double localRelativeAngle;                                                        // 0x0670 (size: 0x8)
    double localWindIntensity;                                                        // 0x0678 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_BoatWindIndicator(int32 EntryPoint);
}; // Size: 0x680

#endif
