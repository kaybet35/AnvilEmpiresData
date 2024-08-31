#ifndef UE4SS_SDK_BPVisWaterProjectile_HPP
#define UE4SS_SDK_BPVisWaterProjectile_HPP

class ABPVisWaterProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* Trail;                                            // 0x04D0 (size: 0x8)

}; // Size: 0x4D8

#endif
