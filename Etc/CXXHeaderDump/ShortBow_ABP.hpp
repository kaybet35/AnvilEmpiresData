#ifndef UE4SS_SDK_ShortBow_ABP_HPP
#define UE4SS_SDK_ShortBow_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_41;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_42;                                                 // 0x0010 (size: 0x10)
    TArray<int32> __ArrayProperty_43;                                                 // 0x0020 (size: 0x10)
    class UAnimSequenceBase* __AnimSequenceBase_44;                                   // 0x0030 (size: 0x8)
    class UBlendProfile* __BlendProfile_45;                                           // 0x0038 (size: 0x8)
    class UCurveFloat* __CurveFloat_46;                                               // 0x0040 (size: 0x8)
    EAlphaBlendOption __EnumProperty_47;                                              // 0x0048 (size: 0x1)
    EBlendListTransitionType __EnumProperty_48;                                       // 0x0049 (size: 0x1)
    TArray<float> __ArrayProperty_49;                                                 // 0x0050 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_50;                                         // 0x0060 (size: 0x20)
    float __FloatProperty_51;                                                         // 0x0080 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_52;                         // 0x0084 (size: 0x1)
    bool __BoolProperty_53;                                                           // 0x0085 (size: 0x1)
    class UAnimSequenceBase* __AnimSequenceBase_54;                                   // 0x0088 (size: 0x8)
    bool __BoolProperty_55;                                                           // 0x0090 (size: 0x1)
    EAnimSyncMethod __EnumProperty_56;                                                // 0x0091 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_57;                              // 0x0092 (size: 0x1)
    FName __NameProperty_58;                                                          // 0x0094 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    uint8 __ByteProperty;                                                             // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x0008 (size: 0x4)
    int32 __IntProperty_2;                                                            // 0x000C (size: 0x4)
    float __FloatProperty_3;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UShortBow_ABP_C : public UVisBowAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x03B0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x03F8 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0438 (size: 0x40)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0478 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x04C0 (size: 0x40)
    float Temp_montageFrameSync;                                                      // 0x0500 (size: 0x4)
    uint8 TempCharcaterActivityState;                                                 // 0x0504 (size: 0x1)
    uint8 TempAttackNumber;                                                           // 0x0505 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ShortBow_ABP_AnimGraphNode_BlendListByInt_D27B4A4341F77C3325F698A7B1CC256C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ShortBow_ABP_AnimGraphNode_SequenceEvaluator_38DEE2EA45F7029AD6986BA6EA3A1DD8();
    void ExecuteUbergraph_ShortBow_ABP(int32 EntryPoint);
}; // Size: 0x506

#endif
