#ifndef UE4SS_SDK_CombatBoatSail_ABP_HPP
#define UE4SS_SDK_CombatBoatSail_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_73;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_74;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_75;                                                           // 0x0014 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_76;                                // 0x0018 (size: 0x2C)
    FName __NameProperty_77;                                                          // 0x0044 (size: 0x8)
    int32 __IntProperty_78;                                                           // 0x004C (size: 0x4)
    float __FloatProperty_79;                                                         // 0x0050 (size: 0x4)
    FName __NameProperty_80;                                                          // 0x0054 (size: 0x8)
    int32 __IntProperty_81;                                                           // 0x005C (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_82;                         // 0x0060 (size: 0x1)
    bool __BoolProperty_83;                                                           // 0x0061 (size: 0x1)
    float __FloatProperty_84;                                                         // 0x0064 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_85;                                   // 0x0068 (size: 0x8)
    bool __BoolProperty_86;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_87;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_88;                              // 0x0072 (size: 0x1)
    FName __NameProperty_89;                                                          // 0x0074 (size: 0x8)
    FName __NameProperty_90;                                                          // 0x007C (size: 0x8)
    int32 __IntProperty_91;                                                           // 0x0084 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_92;                                         // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

class UCombatBoatSail_ABP_C : public UVisBoatSailAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0388 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0398 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03A0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A8 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0440 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0468 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0518 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0538 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x05A8 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x05C8 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0608 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0628 (size: 0xC8)
    double Local Relative Angle;                                                      // 0x06F0 (size: 0x8)
    double Local Wind Intensity;                                                      // 0x06F8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_CombatBoatSail_ABP_AnimGraphNode_TransitionResult_22D969C4435F1A684752B78174B3CB6D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_CombatBoatSail_ABP_AnimGraphNode_TransitionResult_5A6C1070438F71DC460A3289B72AB83D();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_CombatBoatSail_ABP(int32 EntryPoint);
}; // Size: 0x700

#endif
