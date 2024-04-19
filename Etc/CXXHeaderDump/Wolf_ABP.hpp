#ifndef UE4SS_SDK_Wolf_ABP_HPP
#define UE4SS_SDK_Wolf_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_160;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_161;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_162;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_163;                                                         // 0x0018 (size: 0x8)
    FName __NameProperty_164;                                                         // 0x0020 (size: 0x8)
    FName __NameProperty_165;                                                         // 0x0028 (size: 0x8)
    float __FloatProperty_166;                                                        // 0x0030 (size: 0x4)
    FName __NameProperty_167;                                                         // 0x0034 (size: 0x8)
    FName __NameProperty_168;                                                         // 0x003C (size: 0x8)
    float __FloatProperty_169;                                                        // 0x0044 (size: 0x4)
    FName __NameProperty_170;                                                         // 0x0048 (size: 0x8)
    int32 __IntProperty_171;                                                          // 0x0050 (size: 0x4)
    bool __BoolProperty_172;                                                          // 0x0054 (size: 0x1)
    float __FloatProperty_173;                                                        // 0x0058 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_174;                               // 0x005C (size: 0x2C)
    float __FloatProperty_175;                                                        // 0x0088 (size: 0x4)
    bool __BoolProperty_176;                                                          // 0x008C (size: 0x1)
    EAnimSyncMethod __EnumProperty_177;                                               // 0x008D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_178;                             // 0x008E (size: 0x1)
    FName __NameProperty_179;                                                         // 0x0090 (size: 0x8)
    int32 __IntProperty_180;                                                          // 0x0098 (size: 0x4)
    FName __NameProperty_181;                                                         // 0x009C (size: 0x8)
    FName __NameProperty_182;                                                         // 0x00A4 (size: 0x8)
    int32 __IntProperty_183;                                                          // 0x00AC (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_184;                                        // 0x00B0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00D0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0150 (size: 0x18)

}; // Size: 0x168

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UWolf_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0410 (size: 0x28)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0438 (size: 0x78)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0518 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0538 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0580 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05A0 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0610 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x0630 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06F8 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x0740 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0810 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0838 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0860 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x08A8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x08C8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x08E8 (size: 0xC8)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x09B0 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0A80 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0AA8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0AD0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0AF8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0B20 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0B68 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0B88 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0BD0 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0BF0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0C10 (size: 0xC8)
    bool isDead;                                                                      // 0x0CD8 (size: 0x1)
    double localYaw;                                                                  // 0x0CE0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_SequencePlayer_6040ED0F487FD6E9082C3D983D32E3FF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_SequencePlayer_290510FA4F2A0743ED667B9847E0BE48();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_80B29E964BB3905696838D812FBA8083();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_3EC39E7A48D770DAA9D6E5A02165B013();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_0BC42D6647B27A0363DA38BDE60A2145();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_916340C04B4805205E04678398EE46FF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_156B95DA4197B5C2A8FC82BE794878BE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_D598D5014F1720632A385082BC94CE58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_C5EA65AD4A2F35DA64A54CB3AE07B54B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_F2170FA04AC21F6A89BD90ACBC34FCE5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Wolf_ABP_AnimGraphNode_TransitionResult_CBDB148B481CC3972141BF9A8495D0FD();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_Wolf_ABP(int32 EntryPoint);
}; // Size: 0xCE8

#endif
