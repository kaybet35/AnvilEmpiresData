#ifndef UE4SS_SDK_BPVisTripHammer_HPP
#define UE4SS_SDK_BPVisTripHammer_HPP

class ABPVisTripHammer_C : public AVisStructure
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0488 (size: 0x8)
    class UVisStaticMeshComponent* VisStaticMesh;                                     // 0x0490 (size: 0x8)
    class UPowerUnitDataComponent* PowerUnitData;                                     // 0x0498 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPVisTripHammer(int32 EntryPoint);
}; // Size: 0x4A0

#endif
