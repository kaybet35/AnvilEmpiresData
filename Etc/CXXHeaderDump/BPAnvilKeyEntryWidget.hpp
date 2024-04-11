#ifndef UE4SS_SDK_BPAnvilKeyEntryWidget_HPP
#define UE4SS_SDK_BPAnvilKeyEntryWidget_HPP

class UBPAnvilKeyEntryWidget_C : public UAnvilKeyEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BPAnvilKeyEntryWidget(int32 EntryPoint);
}; // Size: 0x2F8

#endif
