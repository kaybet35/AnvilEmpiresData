#ifndef UE4SS_SDK_BPVisChicken_HPP
#define UE4SS_SDK_BPVisChicken_HPP

class ABPVisChicken_C : public AVisAnimal
{
    class USkeletalMeshComponent* Fur;                                                // 0x0538 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0540 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x548

#endif
