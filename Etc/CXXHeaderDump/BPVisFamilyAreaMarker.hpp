#ifndef UE4SS_SDK_BPVisFamilyAreaMarker_HPP
#define UE4SS_SDK_BPVisFamilyAreaMarker_HPP

class ABPVisFamilyAreaMarker_C : public AVisFamilyMarkerArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UGrassRemovalVolumeComponent* GrassRemovalFamilyArea;                       // 0x04B0 (size: 0x8)
    class UDecalComponent* FamilyArea;                                                // 0x04B8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04C0 (size: 0x8)
    bool RangeMarkerVisibility;                                                       // 0x04C8 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPVisFamilyAreaMarker(int32 EntryPoint);
}; // Size: 0x4C9

#endif
