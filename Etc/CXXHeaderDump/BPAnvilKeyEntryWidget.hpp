#ifndef UE4SS_SDK_BPAnvilKeyEntryWidget_HPP
#define UE4SS_SDK_BPAnvilKeyEntryWidget_HPP

class UBPAnvilKeyEntryWidget_C : public UAnvilKeyEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBorder* EntryBorder;                                                       // 0x02D0 (size: 0x8)
    class UHorizontalBox* EntryHorizontalBox;                                         // 0x02D8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BPAnvilKeyEntryWidget(int32 EntryPoint);
}; // Size: 0x2E0

#endif
