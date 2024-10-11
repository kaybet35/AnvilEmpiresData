#ifndef UE4SS_SDK_Donkey_ABP_HPP
#define UE4SS_SDK_Donkey_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_80;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_81;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_82;                                                           // 0x0014 (size: 0x4)
    float __FloatProperty_83;                                                         // 0x0018 (size: 0x4)
    FName __NameProperty_84;                                                          // 0x001C (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0024 (size: 0x4)
    float __FloatProperty_86;                                                         // 0x0028 (size: 0x4)
    FName __NameProperty_87;                                                          // 0x002C (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0034 (size: 0x4)
    bool __BoolProperty_89;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_90;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_91;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_92;                                                         // 0x006C (size: 0x4)
    float __FloatProperty_93;                                                         // 0x0070 (size: 0x4)
    bool __BoolProperty_94;                                                           // 0x0074 (size: 0x1)
    EAnimSyncMethod __EnumProperty_95;                                                // 0x0075 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_96;                              // 0x0076 (size: 0x1)
    FName __NameProperty_97;                                                          // 0x0078 (size: 0x8)
    FName __NameProperty_98;                                                          // 0x0080 (size: 0x8)
    int32 __IntProperty_99;                                                           // 0x0088 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_100;                                        // 0x0090 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UDonkey_ABP_C : public UVisVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0420 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0448 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0470 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0498 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04C0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0508 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0528 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0570 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0590 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x05F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0640 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0660 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_B8CBDD65410BECC4276A4DB596D72FDD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_23A820A147B402CBF90C9F80D1912CF0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_A41B114A42AE4F7C4BB58FA4CD307164();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_23C641F44B2EA740F5051E9BD68C2330();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_962C48CD477643DEFBF5509AE3CCE953();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Donkey_ABP_AnimGraphNode_TransitionResult_EE3671934C1FA3DA9806168984FBEE2D();
    void ExecuteUbergraph_Donkey_ABP(int32 EntryPoint);
}; // Size: 0x728

#endif
