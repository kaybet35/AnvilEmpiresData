#ifndef UE4SS_SDK_BPVisWoodSaw_HPP
#define UE4SS_SDK_BPVisWoodSaw_HPP

class ABPVisWoodSaw_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0540 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0548 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0550 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisWoodSaw(int32 EntryPoint);
}; // Size: 0x558

#endif
