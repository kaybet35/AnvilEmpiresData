#ifndef UE4SS_SDK_BPRefineryWindow_HPP
#define UE4SS_SDK_BPRefineryWindow_HPP

class UBPRefineryWindow_C : public URefineryWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B00 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0B08 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel_1;                                            // 0x0B10 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0B18 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer_35;                                 // 0x0B20 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer_68;                                 // 0x0B28 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer_140;                                // 0x0B30 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_46;                             // 0x0B38 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_116;                            // 0x0B40 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0B48 (size: 0x8)
    class UImage* Image;                                                              // 0x0B50 (size: 0x8)
    class UImage* Image_84;                                                           // 0x0B58 (size: 0x8)
    class UImage* Image_142;                                                          // 0x0B60 (size: 0x8)
    class UImage* Image_193;                                                          // 0x0B68 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BPRefineryWindow(int32 EntryPoint);
}; // Size: 0xB70

#endif
