#ifndef UE4SS_SDK_BPAnvilButtonWidget_HPP
#define UE4SS_SDK_BPAnvilButtonWidget_HPP

class UBPAnvilButtonWidget_C : public UAnvilButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BPAnvilButtonWidget(int32 EntryPoint);
}; // Size: 0x2D8

#endif
