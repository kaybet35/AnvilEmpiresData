#ifndef UE4SS_SDK_BPVisFamilyAreaCoreT3_HPP
#define UE4SS_SDK_BPVisFamilyAreaCoreT3_HPP

class ABPVisFamilyAreaCoreT3_C : public AVisFamilyMarkerArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UBPVisFamilyMeshComponent_C* BPVisFamilyMeshComponent;                      // 0x04B0 (size: 0x8)
    class UDecalComponent* FamilyArea;                                                // 0x04B8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04C0 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x04C8 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyAreaCoreT3(int32 EntryPoint);
}; // Size: 0x4C9

#endif
