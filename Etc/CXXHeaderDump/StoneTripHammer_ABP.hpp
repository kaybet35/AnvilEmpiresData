#ifndef UE4SS_SDK_StoneTripHammer_ABP_HPP
#define UE4SS_SDK_StoneTripHammer_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_238;                                                         // 0x0004 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_239;                             // 0x000C (size: 0x1)
    FName __NameProperty_240;                                                         // 0x0010 (size: 0x8)
    FName __NameProperty_241;                                                         // 0x0018 (size: 0x8)
    float __FloatProperty_242;                                                        // 0x0020 (size: 0x4)
    FName __NameProperty_243;                                                         // 0x0024 (size: 0x8)
    FName __NameProperty_244;                                                         // 0x002C (size: 0x8)
    float __FloatProperty_245;                                                        // 0x0034 (size: 0x4)
    FName __NameProperty_246;                                                         // 0x0038 (size: 0x8)
    FName __NameProperty_247;                                                         // 0x0040 (size: 0x8)
    EAnimSyncMethod __EnumProperty_248;                                               // 0x0048 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_249;                             // 0x0049 (size: 0x1)
    FName __NameProperty_250;                                                         // 0x004C (size: 0x8)
    FName __NameProperty_251;                                                         // 0x0054 (size: 0x8)
    bool __BoolProperty_252;                                                          // 0x005C (size: 0x1)
    float __FloatProperty_253;                                                        // 0x0060 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_254;                               // 0x0064 (size: 0x2C)
    FName __NameProperty_255;                                                         // 0x0090 (size: 0x8)
    FName __NameProperty_256;                                                         // 0x0098 (size: 0x8)
    int32 __IntProperty_257;                                                          // 0x00A0 (size: 0x4)
    FName __NameProperty_258;                                                         // 0x00A4 (size: 0x8)
    int32 __IntProperty_259;                                                          // 0x00AC (size: 0x4)
    float __FloatProperty_260;                                                        // 0x00B0 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_261;                               // 0x00B4 (size: 0x2C)
    float __FloatProperty_262;                                                        // 0x00E0 (size: 0x4)
    bool __BoolProperty_263;                                                          // 0x00E4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_264;                                               // 0x00E5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_265;                             // 0x00E6 (size: 0x1)
    FName __NameProperty_266;                                                         // 0x00E8 (size: 0x8)
    int32 __IntProperty_267;                                                          // 0x00F0 (size: 0x4)
    FName __NameProperty_268;                                                         // 0x00F4 (size: 0x8)
    FName __NameProperty_269;                                                         // 0x00FC (size: 0x8)
    int32 __IntProperty_270;                                                          // 0x0104 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_271;                                        // 0x0108 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0128 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x01A8 (size: 0x18)

}; // Size: 0x1C0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UStoneTripHammer_ABP_C : public UVisPowerUnitAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0390 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0398 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03A0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x03C0 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0408 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0430 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0458 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_12;                               // 0x0480 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x04A0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x04E8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0508 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x0550 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_3;                              // 0x0570 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0638 (size: 0xE0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0718 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0740 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0768 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0790 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x07B0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x07F8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0818 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0860 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x0880 (size: 0xC8)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0948 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0970 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0998 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x09C0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x09E0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0A28 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0A48 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0A90 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x0AB0 (size: 0xC8)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x0B78 (size: 0x78)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0BF0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0C18 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0C40 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0C68 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0C90 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0CD8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0CF8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0D40 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0D60 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0DA8 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0DC8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0DE8 (size: 0xC8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;                            // 0x0EB0 (size: 0xC8)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0F78 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_ApplyAdditive_475D57C64ACE011A8AC986A7989BB8E9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_20684E9849C08B039831818F67723FC8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_DB93FB954533184A8511BAB884E968DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_9BF946054084AE150AC639996A8A54E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_B368F5634DD90BA2465E908DA7CE2E97();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_3E446FD348F4190F99AB808A68C00DB4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_856A938044DF5D9D9927F2AE5E54A0A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_5B23ECA74C37C14817BA98AE13415B64();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_71A18D2A43610BF6A0DD70B205FB3851();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_130E8AB04C3885972ABB899DC2EDEC21();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_8A34200D4C68D8B8BA3C4390F36EFE99();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_40E0023C48938634BB050DB29C82841E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_017AEFE14725441B3EDDD5A9ABE2A974();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_StoneTripHammer_ABP_AnimGraphNode_TransitionResult_F07BFD1742BCDB27CE244B8023908770();
    void ExecuteUbergraph_StoneTripHammer_ABP(int32 EntryPoint);
}; // Size: 0x1040

#endif
