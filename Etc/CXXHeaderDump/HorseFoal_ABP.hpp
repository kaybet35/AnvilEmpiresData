#ifndef UE4SS_SDK_HorseFoal_ABP_HPP
#define UE4SS_SDK_HorseFoal_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_116;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_117;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_118;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_119;                                                        // 0x0018 (size: 0x4)
    FName __NameProperty_120;                                                         // 0x001C (size: 0x8)
    int32 __IntProperty_121;                                                          // 0x0024 (size: 0x4)
    float __FloatProperty_122;                                                        // 0x0028 (size: 0x4)
    FName __NameProperty_123;                                                         // 0x002C (size: 0x8)
    FName __NameProperty_124;                                                         // 0x0034 (size: 0x8)
    bool __BoolProperty_125;                                                          // 0x003C (size: 0x1)
    float __FloatProperty_126;                                                        // 0x0040 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_127;                               // 0x0044 (size: 0x2C)
    float __FloatProperty_128;                                                        // 0x0070 (size: 0x4)
    bool __BoolProperty_129;                                                          // 0x0074 (size: 0x1)
    EAnimSyncMethod __EnumProperty_130;                                               // 0x0075 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_131;                             // 0x0076 (size: 0x1)
    FName __NameProperty_132;                                                         // 0x0078 (size: 0x8)
    int32 __IntProperty_133;                                                          // 0x0080 (size: 0x4)
    FName __NameProperty_134;                                                         // 0x0084 (size: 0x8)
    FName __NameProperty_135;                                                         // 0x008C (size: 0x8)
    int32 __IntProperty_136;                                                          // 0x0094 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_137;                                        // 0x0098 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UHorseFoal_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0378 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0380 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0440 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0468 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0490 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x04D8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04F8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0540 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0560 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x05A8 (size: 0x20)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x05C8 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0640 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0660 (size: 0xC8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0728 (size: 0x118)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0840 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0910 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0938 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0960 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x09A8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x09C8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x09E8 (size: 0xC8)
    double Yaw;                                                                       // 0x0AB0 (size: 0x8)
    double Speed;                                                                     // 0x0AB8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_D0D50C6A4BA147EF10B2E4873458C5B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_EF41C07440E9591DB40F93AB29559992();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_E39B3FB148B08A9759B8F8BCF32CFA87();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_SequencePlayer_10AAB0B54FD30248739ECC82A26C2F57();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_6B97B59844671EFC9F33349B7AD6AC55();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_6DDB40194454342EADCBEA9CECAD16C2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_5EE97E6E45ACA16CF35CF48FDF00285B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HorseFoal_ABP_AnimGraphNode_TransitionResult_7D0F807745710906BB4388920B8E9868();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_HorseFoal_ABP(int32 EntryPoint);
}; // Size: 0xAC0

#endif
