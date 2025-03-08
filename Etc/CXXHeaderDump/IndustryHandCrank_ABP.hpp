#ifndef UE4SS_SDK_IndustryHandCrank_ABP_HPP
#define UE4SS_SDK_IndustryHandCrank_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    bool __BoolProperty_7;                                                            // 0x0001 (size: 0x1)
    float __FloatProperty_8;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_9;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_10;                                                           // 0x000C (size: 0x1)
    EAnimSyncMethod __EnumProperty_11;                                                // 0x000D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_12;                              // 0x000E (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_13;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_14;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_15;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UIndustryHandCrank_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0390 (size: 0x70)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0400 (size: 0x20)
    double Anim Slow Amount;                                                          // 0x0420 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_IndustryHandCrank_ABP(int32 EntryPoint);
}; // Size: 0x428

#endif
