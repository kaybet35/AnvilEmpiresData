#ifndef UE4SS_SDK_Catapult_ABP_HPP
#define UE4SS_SDK_Catapult_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_91;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_92;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_93;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_94;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_95;                                                           // 0x0020 (size: 0x4)
    FName __NameProperty_96;                                                          // 0x0024 (size: 0x8)
    int32 __IntProperty_97;                                                           // 0x002C (size: 0x4)
    bool __BoolProperty_98;                                                           // 0x0030 (size: 0x1)
    float __FloatProperty_99;                                                         // 0x0034 (size: 0x4)
    FName __NameProperty_100;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_101;                                                          // 0x0040 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_102;                                        // 0x0048 (size: 0x20)
    float __FloatProperty_103;                                                        // 0x0068 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_104;                               // 0x006C (size: 0x2C)
    float __FloatProperty_105;                                                        // 0x0098 (size: 0x4)
    bool __BoolProperty_106;                                                          // 0x009C (size: 0x1)
    EAnimSyncMethod __EnumProperty_107;                                               // 0x009D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_108;                             // 0x009E (size: 0x1)
    FName __NameProperty_109;                                                         // 0x00A0 (size: 0x8)
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
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0418 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0440 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0488 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x04A8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x04F0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0510 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0558 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0578 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05C0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05E0 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x06A8 (size: 0xE0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0788 (size: 0x48)
    double Speed;                                                                     // 0x07D0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Catapult_ABP_AnimGraphNode_TransitionResult_1B1820514DCB08520A53438CC53D94E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Catapult_ABP_AnimGraphNode_TransitionResult_CD1ECF26402FB6E7DCED0E85B1645248();
    void ExecuteUbergraph_Catapult_ABP(int32 EntryPoint);
}; // Size: 0x7D8

#endif
