#ifndef UE4SS_SDK_BPVisRopeConnector_HPP
#define UE4SS_SDK_BPVisRopeConnector_HPP

class ABPVisRopeConnector_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0528 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0530 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0538 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisRopeConnector(int32 EntryPoint);
}; // Size: 0x540

#endif
