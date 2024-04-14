#ifndef UE4SS_SDK_BPVisWaterProjectile_HPP
#define UE4SS_SDK_BPVisWaterProjectile_HPP

class ABPVisWaterProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x0420 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0428 (size: 0x8)
    class UParticleSystemComponent* Trail;                                            // 0x0430 (size: 0x8)

}; // Size: 0x438

#endif
