#ifndef UE4SS_SDK_Catapult_ABP_HPP
#define UE4SS_SDK_Catapult_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_94;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_95;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_96;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_97;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_98;                                                           // 0x0020 (size: 0x4)
    FName __NameProperty_99;                                                          // 0x0024 (size: 0x8)
    int32 __IntProperty_100;                                                          // 0x002C (size: 0x4)
    float __FloatProperty_101;                                                        // 0x0030 (size: 0x4)
    FName __NameProperty_102;                                                         // 0x0034 (size: 0x8)
    int32 __IntProperty_103;                                                          // 0x003C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_104;                                        // 0x0040 (size: 0x20)
    bool __BoolProperty_105;                                                          // 0x0060 (size: 0x1)
    float __FloatProperty_106;                                                        // 0x0064 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_107;                               // 0x0068 (size: 0x2C)
    float __FloatProperty_108;                                                        // 0x0094 (size: 0x4)
    bool __BoolProperty_109;                                                          // 0x0098 (size: 0x1)
    EAnimSyncMethod __EnumProperty_110;                                               // 0x0099 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_111;                             // 0x009A (size: 0x1)
    FName __NameProperty_112;                                                         // 0x009C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UCatapult_ABP_C : public UVisMobileWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0378 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0380 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0418 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0440 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0468 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04B0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04D0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0518 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0538 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0580 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05E8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0608 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x06D0 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x07B0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Catapult_ABP_AnimGraphNode_TransitionResult_1B1820514DCB08520A53438CC53D94E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Catapult_ABP_AnimGraphNode_TransitionResult_CD1ECF26402FB6E7DCED0E85B1645248();
    void ExecuteUbergraph_Catapult_ABP(int32 EntryPoint);
}; // Size: 0x7F8

#endif
