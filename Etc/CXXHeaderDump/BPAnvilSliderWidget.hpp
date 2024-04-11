#ifndef UE4SS_SDK_BPAnvilSliderWidget_HPP
#define UE4SS_SDK_BPAnvilSliderWidget_HPP

class UBPAnvilSliderWidget_C : public UAnvilSliderWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BPAnvilSliderWidget(int32 EntryPoint);
}; // Size: 0x2E8

#endif
