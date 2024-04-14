#ifndef UE4SS_SDK_BPPlayerVitalityWidget_HPP
#define UE4SS_SDK_BPPlayerVitalityWidget_HPP

class UBPPlayerVitalityWidget_C : public UVitalityStatusWidget
{
    class UImage* HealthIcon;                                                         // 0x02F0 (size: 0x8)
    class UImage* HungerIcon;                                                         // 0x02F8 (size: 0x8)
    class UImage* StaminaIcon;                                                        // 0x0300 (size: 0x8)
    class UImage* TemperatureIcon;                                                    // 0x0308 (size: 0x8)

}; // Size: 0x310

#endif
