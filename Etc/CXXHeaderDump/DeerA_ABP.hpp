#ifndef UE4SS_SDK_DeerA_ABP_HPP
#define UE4SS_SDK_DeerA_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_50;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_51;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_52;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_53;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_54;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_55;                                                 // 0x0028 (size: 0x10)
    bool __BoolProperty_56;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_57;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_58;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_59;                                                         // 0x006C (size: 0x4)
    bool __BoolProperty_60;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_61;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_62;                              // 0x0072 (size: 0x1)
    FName __NameProperty_63;                                                          // 0x0074 (size: 0x8)
    int32 __IntProperty_64;                                                           // 0x007C (size: 0x4)
    FName __NameProperty_65;                                                          // 0x0080 (size: 0x8)
    FName __NameProperty_66;                                                          // 0x0088 (size: 0x8)
    int32 __IntProperty_67;                                                           // 0x0090 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_68;                                         // 0x0098 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class UDeerA_ABP_C : public UVisAnimalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0390 (size: 0x48)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x03D8 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0450 (size: 0x70)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04C0 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x0508 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x05D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0600 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0628 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0670 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0690 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06B0 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerA_ABP_AnimGraphNode_BlendListByBool_1CBECEA249ADC467D084A387E32E2935();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_DeerA_ABP_AnimGraphNode_TransitionResult_FABB350B47BAB3DD90B327B3B93BFB85();
    void ExecuteUbergraph_DeerA_ABP(int32 EntryPoint);
}; // Size: 0x778

#endif
