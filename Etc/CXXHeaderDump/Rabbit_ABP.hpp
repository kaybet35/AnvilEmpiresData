#ifndef UE4SS_SDK_Rabbit_ABP_HPP
#define UE4SS_SDK_Rabbit_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_18;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_19;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_20;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_21;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_22;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_23;                                                 // 0x0028 (size: 0x10)
    bool __BoolProperty_24;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_25;                                                         // 0x003C (size: 0x4)
    float __FloatProperty_26;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_27;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_28;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_29;                              // 0x0046 (size: 0x1)
    FName __NameProperty_30;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_31;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class URabbit_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0390 (size: 0x48)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x03D8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0450 (size: 0x70)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04C0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Rabbit_ABP_AnimGraphNode_BlendListByBool_63138EE646EE036F154C91A1778EEA94();
    void ExecuteUbergraph_Rabbit_ABP(int32 EntryPoint);
}; // Size: 0x508

#endif
