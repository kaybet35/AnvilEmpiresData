#ifndef UE4SS_SDK_DonkeyFoal_ABP_HPP
#define UE4SS_SDK_DonkeyFoal_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_77;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_78;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_79;                                                           // 0x0014 (size: 0x4)
    float __FloatProperty_80;                                                         // 0x0018 (size: 0x4)
    FName __NameProperty_81;                                                          // 0x001C (size: 0x8)
    int32 __IntProperty_82;                                                           // 0x0024 (size: 0x4)
    float __FloatProperty_83;                                                         // 0x0028 (size: 0x4)
    FName __NameProperty_84;                                                          // 0x002C (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0034 (size: 0x4)
    bool __BoolProperty_86;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_87;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_88;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_89;                                                         // 0x006C (size: 0x4)
    float __FloatProperty_90;                                                         // 0x0070 (size: 0x4)
    bool __BoolProperty_91;                                                           // 0x0074 (size: 0x1)
    EAnimSyncMethod __EnumProperty_92;                                                // 0x0075 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_93;                              // 0x0076 (size: 0x1)
    FName __NameProperty_94;                                                          // 0x0078 (size: 0x8)
    FName __NameProperty_95;                                                          // 0x0080 (size: 0x8)
    int32 __IntProperty_96;                                                           // 0x0088 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_97;                                         // 0x0090 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UDonkeyFoal_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0410 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0438 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0460 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0488 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04D0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04F0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0538 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0558 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05A0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x05C0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0608 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0628 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_4E6411C4438F8232EDEDA09CCB264404();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_F2153B56477E509A7FC2998A31BC3132();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_F1F8F4F84069D65E0DEFBA94473D2048();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_3768D9444DC8E82B4CEC08811B540FBC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_AD77DDF24D6775B223237B954EA6BE11();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DonkeyFoal_ABP_AnimGraphNode_TransitionResult_1C3D6FA34C39B48D7BFAE4B6E5046443();
    void ExecuteUbergraph_DonkeyFoal_ABP(int32 EntryPoint);
}; // Size: 0x6F0

#endif
