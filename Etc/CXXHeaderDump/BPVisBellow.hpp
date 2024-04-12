#ifndef UE4SS_SDK_BPVisBellow_HPP
#define UE4SS_SDK_BPVisBellow_HPP

class ABPVisBellow_C : public AVisHeatingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x04C0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04C8 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04D0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisBellow(int32 EntryPoint);
}; // Size: 0x4D8

#endif
