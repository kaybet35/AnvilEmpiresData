#ifndef UE4SS_SDK_BPVisBoar_HPP
#define UE4SS_SDK_BPVisBoar_HPP

class ABPVisBoar_C : public AVisAnimal
{
    class USkeletalMeshComponent* Fur;                                                // 0x04C8 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x04D0 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x4D8

#endif
