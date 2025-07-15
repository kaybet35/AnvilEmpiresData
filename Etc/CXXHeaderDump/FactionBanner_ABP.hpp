#ifndef UE4SS_SDK_FactionBanner_ABP_HPP
#define UE4SS_SDK_FactionBanner_ABP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FAnimNodeFunctionRef __StructProperty_1;                                          // 0x0008 (size: 0x20)
    FName __NameProperty_2;                                                           // 0x0028 (size: 0x8)
    FName __NameProperty_3;                                                           // 0x0030 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)

}; // Size: 0xD0

class UFactionBanner_ABP_C : public UVisWeatherIndicatorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_FactionBanner_ABP(int32 EntryPoint);
}; // Size: 0x3B8

#endif
