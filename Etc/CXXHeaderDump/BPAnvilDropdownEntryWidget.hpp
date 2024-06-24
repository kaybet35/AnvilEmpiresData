#ifndef UE4SS_SDK_BPAnvilDropdownEntryWidget_HPP
#define UE4SS_SDK_BPAnvilDropdownEntryWidget_HPP

class UBPAnvilDropdownEntryWidget_C : public UAnvilDropdownEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UHorizontalBox* ComboHorizontalBox;                                         // 0x02D8 (size: 0x8)
    class UBorder* LabelBorder;                                                       // 0x02E0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BPAnvilDropdownEntryWidget(int32 EntryPoint);
}; // Size: 0x2E8

#endif
