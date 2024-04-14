#ifndef UE4SS_SDK_BPVisBellow_HPP
#define UE4SS_SDK_BPVisBellow_HPP

class ABPVisBellow_C : public AVisHeatingStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0508 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0510 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0518 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisBellow(int32 EntryPoint);
}; // Size: 0x520

#endif
