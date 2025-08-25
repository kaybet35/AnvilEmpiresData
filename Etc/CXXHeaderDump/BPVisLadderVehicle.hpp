#ifndef UE4SS_SDK_BPVisLadderVehicle_HPP
#define UE4SS_SDK_BPVisLadderVehicle_HPP

class ABPVisLadderVehicle_C : public AVisVehicle
{
    class UVehicleSeatDataComponent* SecondVehicleSeatData;                           // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* VisSkeletalMesh;                                    // 0x0508 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0510 (size: 0x8)

}; // Size: 0x518

#endif
