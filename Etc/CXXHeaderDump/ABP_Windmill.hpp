#ifndef UE4SS_SDK_ABP_Windmill_HPP
#define UE4SS_SDK_ABP_Windmill_HPP

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

class UABP_Windmill_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x03B8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0498 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04E0 (size: 0x70)
    double efemerousTimer;                                                            // 0x0550 (size: 0x8)
    double LERP interval;                                                             // 0x0558 (size: 0x8)
    double cachedPercentageCurrent;                                                   // 0x0560 (size: 0x8)
    double tempPercentageCurrent;                                                     // 0x0568 (size: 0x8)
    double usedPercentageCurrent;                                                     // 0x0570 (size: 0x8)
    class UPowerUnitDataComponent* As Power Unit Data Component;                      // 0x0578 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Windmill_AnimGraphNode_BlendSpacePlayer_B1D53D9C4FDAFB9397FF11B21061A26D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Windmill_AnimGraphNode_SequencePlayer_50B9A81344B4863AAAF0A0A9669EDD36();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Windmill(int32 EntryPoint);
}; // Size: 0x580

#endif
