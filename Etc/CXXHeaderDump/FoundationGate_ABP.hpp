#ifndef UE4SS_SDK_FoundationGate_ABP_HPP
#define UE4SS_SDK_FoundationGate_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_7;                                                           // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_8;                                          // 0x0010 (size: 0x20)
    bool __BoolProperty_9;                                                            // 0x0030 (size: 0x1)
    float __FloatProperty_10;                                                         // 0x0034 (size: 0x4)
    float __FloatProperty_11;                                                         // 0x0038 (size: 0x4)
    bool __BoolProperty_12;                                                           // 0x003C (size: 0x1)
    EAnimSyncMethod __EnumProperty_13;                                                // 0x003D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_14;                              // 0x003E (size: 0x1)
    FName __NameProperty_15;                                                          // 0x0040 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0048 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C8 (size: 0x18)

}; // Size: 0xE0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UFoundationGate_ABP_C : public UVisGateAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0390 (size: 0x70)
    bool IsClosed;                                                                    // 0x0400 (size: 0x1)
    double groundDistance;                                                            // 0x0408 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FoundationGate_ABP_AnimGraphNode_BlendSpacePlayer_DFAD5D9440869C5B74BDDDB1846974D3();
    void ExecuteUbergraph_FoundationGate_ABP(int32 EntryPoint);
}; // Size: 0x410

#endif
