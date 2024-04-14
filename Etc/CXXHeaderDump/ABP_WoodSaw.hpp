#ifndef UE4SS_SDK_ABP_WoodSaw_HPP
#define UE4SS_SDK_ABP_WoodSaw_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_6;                                                           // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_7;                                          // 0x0010 (size: 0x20)
    bool __BoolProperty_8;                                                            // 0x0030 (size: 0x1)
    float __FloatProperty_9;                                                          // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_10;                                // 0x0038 (size: 0x2C)
    bool __BoolProperty_11;                                                           // 0x0064 (size: 0x1)
    EAnimSyncMethod __EnumProperty_12;                                                // 0x0065 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_13;                              // 0x0066 (size: 0x1)
    FName __NameProperty_14;                                                          // 0x0068 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UABP_WoodSaw_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03B8 (size: 0x48)
    double AnimSlowAmount;                                                            // 0x0400 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WoodSaw_AnimGraphNode_SequencePlayer_CE4759AE4F1128ECAAC24D9D24E6ABF4();
    void ExecuteUbergraph_ABP_WoodSaw(int32 EntryPoint);
}; // Size: 0x408

#endif
