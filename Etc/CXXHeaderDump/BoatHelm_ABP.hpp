#ifndef UE4SS_SDK_BoatHelm_ABP_HPP
#define UE4SS_SDK_BoatHelm_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_179;                                                         // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_180;                                          // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_181;                                              // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_182;                                             // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_183;                                      // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_184;                                                // 0x0028 (size: 0x10)
    FName __NameProperty_185;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_186;                                                          // 0x0040 (size: 0x4)
    FName __NameProperty_187;                                                         // 0x0044 (size: 0x8)
    int32 __IntProperty_188;                                                          // 0x004C (size: 0x4)
    FName __NameProperty_189;                                                         // 0x0050 (size: 0x8)
    int32 __IntProperty_190;                                                          // 0x0058 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_191;                               // 0x005C (size: 0x2C)
    float __FloatProperty_192;                                                        // 0x0088 (size: 0x4)
    FName __NameProperty_193;                                                         // 0x008C (size: 0x8)
    int32 __IntProperty_194;                                                          // 0x0094 (size: 0x4)
    float __FloatProperty_195;                                                        // 0x0098 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_196;                        // 0x009C (size: 0x1)
    bool __BoolProperty_197;                                                          // 0x009D (size: 0x1)
    float __FloatProperty_198;                                                        // 0x00A0 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_199;                                  // 0x00A8 (size: 0x8)
    bool __BoolProperty_200;                                                          // 0x00B0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_201;                                               // 0x00B1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_202;                             // 0x00B2 (size: 0x1)
    FName __NameProperty_203;                                                         // 0x00B4 (size: 0x8)
    FName __NameProperty_204;                                                         // 0x00BC (size: 0x8)
    int32 __IntProperty_205;                                                          // 0x00C4 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_206;                                        // 0x00C8 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0168 (size: 0x18)

}; // Size: 0x180

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

class UBoatHelm_ABP_C : public UVisBoatHelmAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x2)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x03B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x03E0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0408 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x0430 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0470 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x0490 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x04D0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x04F0 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0530 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0550 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0618 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0660 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0688 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x06B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x06D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0700 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0728 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0750 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0778 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x07A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x07E8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0808 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0850 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0870 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x08B8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08D8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0920 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0940 (size: 0x40)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0980 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x09A0 (size: 0xC8)
    float boatInputDirection;                                                         // 0x0A68 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_BoatHelm_ABP(int32 EntryPoint);
}; // Size: 0xA6C

#endif
