#ifndef UE4SS_SDK_BPVisWaterWheel_HPP
#define UE4SS_SDK_BPVisWaterWheel_HPP

class ABPVisWaterWheel_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0488 (size: 0x8)
    class USkeletalMeshComponent* ConnectorShaft;                                     // 0x0490 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0498 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04A0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisWaterWheel(int32 EntryPoint);
}; // Size: 0x4A8

#endif
