#ifndef UE4SS_SDK_BPAnvilPanel_HPP
#define UE4SS_SDK_BPAnvilPanel_HPP

class UBPAnvilPanel_C : public UAnvilPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UVerticalBox* AnvilPanelVerticalBox;                                        // 0x02C0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_BPAnvilPanel(int32 EntryPoint);
}; // Size: 0x2C8

#endif
