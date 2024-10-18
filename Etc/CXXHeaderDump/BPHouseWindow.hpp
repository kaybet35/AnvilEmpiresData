#ifndef UE4SS_SDK_BPHouseWindow_HPP
#define UE4SS_SDK_BPHouseWindow_HPP

class UBPHouseWindow_C : public UHouseWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0308 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0310 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer;                                    // 0x0318 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer;                                // 0x0320 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0328 (size: 0x8)
    class UBPAnvilPanel_C* StructurePanel;                                            // 0x0330 (size: 0x8)

    void ExecuteUbergraph_BPHouseWindow(int32 EntryPoint);
}; // Size: 0x338

#endif
