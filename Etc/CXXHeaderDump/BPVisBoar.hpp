#ifndef UE4SS_SDK_BPVisBoar_HPP
#define UE4SS_SDK_BPVisBoar_HPP

class ABPVisBoar_C : public AVisAnimal
{
    class USkeletalMeshComponent* Fur;                                                // 0x0518 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x0520 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x528

#endif
