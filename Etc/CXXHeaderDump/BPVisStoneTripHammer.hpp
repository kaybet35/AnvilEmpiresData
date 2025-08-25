#ifndef UE4SS_SDK_BPVisStoneTripHammer_HPP
#define UE4SS_SDK_BPVisStoneTripHammer_HPP

class ABPVisStoneTripHammer_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0568 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0570 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0578 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisStoneTripHammer(int32 EntryPoint);
}; // Size: 0x580

#endif
