#ifndef UE4SS_SDK_BPVisTripHammer_HPP
#define UE4SS_SDK_BPVisTripHammer_HPP

class ABPVisTripHammer_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0560 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0568 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0570 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisTripHammer(int32 EntryPoint);
}; // Size: 0x578

#endif
