#ifndef UE4SS_SDK_TripHammer_ABP_HPP
#define UE4SS_SDK_TripHammer_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_51;                                                          // 0x0004 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_52;                              // 0x000C (size: 0x1)
    FName __NameProperty_53;                                                          // 0x0010 (size: 0x8)
    int32 __IntProperty_54;                                                           // 0x0018 (size: 0x4)
    float __FloatProperty_55;                                                         // 0x001C (size: 0x4)
    float __FloatProperty_56;                                                         // 0x0020 (size: 0x4)
    EAnimSyncMethod __EnumProperty_57;                                                // 0x0024 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_58;                              // 0x0025 (size: 0x1)
    FName __NameProperty_59;                                                          // 0x0028 (size: 0x8)
    int32 __IntProperty_60;                                                           // 0x0030 (size: 0x4)
    bool __BoolProperty_61;                                                           // 0x0034 (size: 0x1)
    float __FloatProperty_62;                                                         // 0x0038 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_63;                                // 0x003C (size: 0x2C)
    bool __BoolProperty_64;                                                           // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_65;                                                // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_66;                              // 0x006A (size: 0x1)
    FName __NameProperty_67;                                                          // 0x006C (size: 0x8)
    FName __NameProperty_68;                                                          // 0x0074 (size: 0x8)
    FName __NameProperty_69;                                                          // 0x007C (size: 0x8)
    int32 __IntProperty_70;                                                           // 0x0084 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_71;                                         // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UTripHammer_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03C0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0408 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x04E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0510 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0538 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0560 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0580 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05C8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x05E8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0630 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0650 (size: 0xC8)
    double AnimSlowAmount;                                                            // 0x0718 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TripHammer_ABP_AnimGraphNode_TransitionResult_42E43B7140FE0B3E24AA30B758E5DD5A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TripHammer_ABP_AnimGraphNode_TransitionResult_338CCDAC4D29ADACDA4EFC9EDE75FCF8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_TripHammer_ABP_AnimGraphNode_TransitionResult_D1C51FA9400EC4245AAE7A8833B4C9A2();
    void ExecuteUbergraph_TripHammer_ABP(int32 EntryPoint);
}; // Size: 0x720

#endif
