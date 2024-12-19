#ifndef UE4SS_SDK_BPHUDWidget_HPP
#define UE4SS_SDK_BPHUDWidget_HPP

class UBPHUDWidget_C : public UHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E0 (size: 0x8)
    class UWidgetAnimation* WinConditionAnimation;                                    // 0x05E8 (size: 0x8)
    class UBPFoodCooldownWidget_C* BPFoodCooldownWidget_1;                            // 0x05F0 (size: 0x8)
    class UBPHUDHintWidget_C* BPHUDHintWidget;                                        // 0x05F8 (size: 0x8)
    class UBPRestedStatusWidget_C* BPRestedStatusWidget;                              // 0x0600 (size: 0x8)
    class UBPTemperatureStatusWidget_C* BPTemperatureStatusWidget;                    // 0x0608 (size: 0x8)
    class UImage* GuardThresholdIndicator;                                            // 0x0610 (size: 0x8)
    class UImage* Image;                                                              // 0x0618 (size: 0x8)
    class UImage* PreAlphaBadge;                                                      // 0x0620 (size: 0x8)

    void PlayWinConditionAnimation();
    void ExecuteUbergraph_BPHUDWidget(int32 EntryPoint);
}; // Size: 0x628

#endif
