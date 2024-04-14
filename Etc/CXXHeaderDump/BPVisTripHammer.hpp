#ifndef UE4SS_SDK_BPVisTripHammer_HPP
#define UE4SS_SDK_BPVisTripHammer_HPP

class ABPVisTripHammer_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04D0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04D8 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x04E0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisTripHammer(int32 EntryPoint);
}; // Size: 0x4E8

#endif
