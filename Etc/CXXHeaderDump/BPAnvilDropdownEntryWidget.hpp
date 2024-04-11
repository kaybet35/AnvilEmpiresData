#ifndef UE4SS_SDK_BPAnvilDropdownEntryWidget_HPP
#define UE4SS_SDK_BPAnvilDropdownEntryWidget_HPP

class UBPAnvilDropdownEntryWidget_C : public UAnvilDropdownEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BPAnvilDropdownEntryWidget(int32 EntryPoint);
}; // Size: 0x300

#endif
