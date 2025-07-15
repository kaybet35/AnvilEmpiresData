#ifndef UE4SS_SDK_BPVisFamilyCenterWallPowerConnectorDiagonal_T2_HPP
#define UE4SS_SDK_BPVisFamilyCenterWallPowerConnectorDiagonal_T2_HPP

class ABPVisFamilyCenterWallPowerConnectorDiagonal_T2_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0560 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0568 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0570 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0578 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0580 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisFamilyCenterWallPowerConnectorDiagonal_T2(int32 EntryPoint);
}; // Size: 0x588

#endif
