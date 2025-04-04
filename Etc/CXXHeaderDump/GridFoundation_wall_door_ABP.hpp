#ifndef UE4SS_SDK_GridFoundation_wall_door_ABP_HPP
#define UE4SS_SDK_GridFoundation_wall_door_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_23;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_24;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_25;                                               // 0x0018 (size: 0x8)
    bool __BoolProperty_26;                                                           // 0x0020 (size: 0x1)
    EAlphaBlendOption __EnumProperty_27;                                              // 0x0021 (size: 0x1)
    EBlendListTransitionType __EnumProperty_28;                                       // 0x0022 (size: 0x1)
    TArray<float> __ArrayProperty_29;                                                 // 0x0028 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_30;                                         // 0x0038 (size: 0x20)
    float __FloatProperty_31;                                                         // 0x0058 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_32;                                // 0x005C (size: 0x2C)
    float __FloatProperty_33;                                                         // 0x0088 (size: 0x4)
    float __FloatProperty_34;                                                         // 0x008C (size: 0x4)
    bool __BoolProperty_35;                                                           // 0x0090 (size: 0x1)
    EAnimSyncMethod __EnumProperty_36;                                                // 0x0091 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_37;                              // 0x0092 (size: 0x1)
    FName __NameProperty_38;                                                          // 0x0094 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

class UGridFoundation_wall_door_ABP_C : public UVisGateAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x2)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0390 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0420 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_GridFoundation_wall_door_ABP(int32 EntryPoint);
}; // Size: 0x468

#endif
