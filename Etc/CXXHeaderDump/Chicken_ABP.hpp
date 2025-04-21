#ifndef UE4SS_SDK_Chicken_ABP_HPP
#define UE4SS_SDK_Chicken_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_72;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_73;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_74;                                                           // 0x0014 (size: 0x4)
    float __FloatProperty_75;                                                         // 0x0018 (size: 0x4)
    FName __NameProperty_76;                                                          // 0x001C (size: 0x8)
    int32 __IntProperty_77;                                                           // 0x0024 (size: 0x4)
    float __FloatProperty_78;                                                         // 0x0028 (size: 0x4)
    FName __NameProperty_79;                                                          // 0x002C (size: 0x8)
    int32 __IntProperty_80;                                                           // 0x0034 (size: 0x4)
    bool __BoolProperty_81;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_82;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_83;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_84;                                                         // 0x006C (size: 0x4)
    bool __BoolProperty_85;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_86;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_87;                              // 0x0072 (size: 0x1)
    FName __NameProperty_88;                                                          // 0x0074 (size: 0x8)
    FName __NameProperty_89;                                                          // 0x007C (size: 0x8)
    int32 __IntProperty_90;                                                           // 0x0084 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_91;                                         // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UChicken_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0398 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0408 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0430 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0480 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x04A8 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x04D0 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0548 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0568 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x05B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0618 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0638 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0680 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06A0 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_D1BAF6E74F1185B37F13DABD24CEED25();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_B38AC0A74E549E7B682F58A20F67D8EC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_3448C3DE4791F55735B3E2AA6FBD44E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_45BF058C4E4DF1053A3A13B6F649A6DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_6BF872BA4DF981D4C6C22C8C5B6CFACE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Chicken_ABP_AnimGraphNode_TransitionResult_0904639640FA5433DBAC5FABCA4C5BA8();
    void ExecuteUbergraph_Chicken_ABP(int32 EntryPoint);
}; // Size: 0x768

#endif
