#ifndef UE4SS_SDK_ABP_Handcart_HPP
#define UE4SS_SDK_ABP_Handcart_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_80;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_81;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_82;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_83;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_84;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_85;                                                 // 0x0028 (size: 0x10)
    float __FloatProperty_86;                                                         // 0x0038 (size: 0x4)
    FName __NameProperty_87;                                                          // 0x003C (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0044 (size: 0x4)
    bool __BoolProperty_89;                                                           // 0x0048 (size: 0x1)
    FInputScaleBiasClampConstants __StructProperty_90;                                // 0x004C (size: 0x2C)
    float __FloatProperty_91;                                                         // 0x0078 (size: 0x4)
    float __FloatProperty_92;                                                         // 0x007C (size: 0x4)
    bool __BoolProperty_93;                                                           // 0x0080 (size: 0x1)
    EAnimSyncMethod __EnumProperty_94;                                                // 0x0081 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_95;                              // 0x0082 (size: 0x1)
    FName __NameProperty_96;                                                          // 0x0084 (size: 0x8)
    FName __NameProperty_97;                                                          // 0x008C (size: 0x8)
    int32 __IntProperty_98;                                                           // 0x0094 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_99;                                         // 0x0098 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UABP_Handcart_C : public UVisVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x03F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0440 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0488 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04D0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0518 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0560 (size: 0xE0)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0640 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0660 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x06A8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06C8 (size: 0xC8)
    double WheelAxleRadius;                                                           // 0x0790 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcart_AnimGraphNode_SequencePlayer_6E9A13BA4538B62D480EE3AC73761D3B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Handcart_AnimGraphNode_SequencePlayer_42E3E674410949D745C49CB93716648D();
    void ExecuteUbergraph_ABP_Handcart(int32 EntryPoint);
}; // Size: 0x798

#endif
