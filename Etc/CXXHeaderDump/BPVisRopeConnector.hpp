#ifndef UE4SS_SDK_BPVisRopeConnector_HPP
#define UE4SS_SDK_BPVisRopeConnector_HPP

class ABPVisRopeConnector_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04D0 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x04D8 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x04E0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisRopeConnector(int32 EntryPoint);
}; // Size: 0x4E8

#endif
