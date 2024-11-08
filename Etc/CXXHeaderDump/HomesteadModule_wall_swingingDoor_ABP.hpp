#ifndef UE4SS_SDK_HomesteadModule_wall_swingingDoor_ABP_HPP
#define UE4SS_SDK_HomesteadModule_wall_swingingDoor_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_58;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_59;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_60;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_61;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_62;                                                           // 0x0020 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_63;                                // 0x0024 (size: 0x2C)
    float __FloatProperty_64;                                                         // 0x0050 (size: 0x4)
    float __FloatProperty_65;                                                         // 0x0054 (size: 0x4)
    bool __BoolProperty_66;                                                           // 0x0058 (size: 0x1)
    EAnimSyncMethod __EnumProperty_67;                                                // 0x0059 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_68;                              // 0x005A (size: 0x1)
    FName __NameProperty_69;                                                          // 0x005C (size: 0x8)
    FName __NameProperty_70;                                                          // 0x0064 (size: 0x8)
    int32 __IntProperty_71;                                                           // 0x006C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_72;                                         // 0x0070 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

class UHomesteadModule_wall_swingingDoor_ABP_C : public UVisGateAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03D8 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0400 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0448 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0468 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0518 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0538 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_HomesteadModule_wall_swingingDoor_ABP_AnimGraphNode_TransitionResult_387D3C014D6AB51CDAD9109A66DF6D5B();
    void ExecuteUbergraph_HomesteadModule_wall_swingingDoor_ABP(int32 EntryPoint);
}; // Size: 0x600

#endif
