#ifndef UE4SS_SDK_BPHUDWidget_HPP
#define UE4SS_SDK_BPHUDWidget_HPP

class UBPHUDWidget_C : public UHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UWidgetAnimation* TownStatusAlertAnimation;                                 // 0x05C8 (size: 0x8)
    class UWidgetAnimation* WinConditionAnimation;                                    // 0x05D0 (size: 0x8)
    class UBPFoodCooldownWidget_C* BPFoodCooldownWidget;                              // 0x05D8 (size: 0x8)
    class UImage* PreAlphaBadge;                                                      // 0x05E0 (size: 0x8)

    void PlayWinConditionAnimation();
    void PlayTownStatusAlert(const FText& AlertText);
    void ExecuteUbergraph_BPHUDWidget(int32 EntryPoint);
}; // Size: 0x5E8

#endif
