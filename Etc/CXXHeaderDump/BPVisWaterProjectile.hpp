#ifndef UE4SS_SDK_BPVisWaterProjectile_HPP
#define UE4SS_SDK_BPVisWaterProjectile_HPP

class ABPVisWaterProjectile_C : public AVisPickupItem
{
    class UAudioComponent* Audio;                                                     // 0x0470 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0478 (size: 0x8)
    class UParticleSystemComponent* Trail;                                            // 0x0480 (size: 0x8)

}; // Size: 0x488

#endif
