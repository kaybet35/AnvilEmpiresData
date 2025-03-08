#ifndef UE4SS_SDK_IndustryHandCrankAdapter_ABP_HPP
#define UE4SS_SDK_IndustryHandCrankAdapter_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_6;                                                           // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_7;                                          // 0x0010 (size: 0x20)
    bool __BoolProperty_8;                                                            // 0x0030 (size: 0x1)
    float __FloatProperty_9;                                                          // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_10;                                // 0x0038 (size: 0x2C)
    float __FloatProperty_11;                                                         // 0x0064 (size: 0x4)
    bool __BoolProperty_12;                                                           // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_13;                                                // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_14;                              // 0x006A (size: 0x1)
    FName __NameProperty_15;                                                          // 0x006C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UIndustryHandCrankAdapter_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03B0 (size: 0x48)
    double Anim Slow Amount;                                                          // 0x03F8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_IndustryHandCrankAdapter_ABP_AnimGraphNode_SequencePlayer_38AB4CCD451B0AF95B785188361265BF();
    void ExecuteUbergraph_IndustryHandCrankAdapter_ABP(int32 EntryPoint);
}; // Size: 0x400

#endif
