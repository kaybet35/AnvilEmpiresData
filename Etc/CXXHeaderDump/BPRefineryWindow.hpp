#ifndef UE4SS_SDK_BPRefineryWindow_HPP
#define UE4SS_SDK_BPRefineryWindow_HPP

class UBPRefineryWindow_C : public URefineryWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UImage* Arrow_1;                                                            // 0x0328 (size: 0x8)
    class UBPActionStrip_C* BPActionStrip;                                            // 0x0330 (size: 0x8)
    class UBPAnvilPanel_C* BPAnvilPanel_1;                                            // 0x0338 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer;                                    // 0x0340 (size: 0x8)
    class UBPFooterContainer_C* BPFooterContainer_35;                                 // 0x0348 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer_68;                                 // 0x0350 (size: 0x8)
    class UBPHeaderContainer_C* BPHeaderContainer_140;                                // 0x0358 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_46;                             // 0x0360 (size: 0x8)
    class UBPMainAreaContainer_C* BPMainAreaContainer_116;                            // 0x0368 (size: 0x8)
    class UBPSubHeaderContainer_C* BPSubHeaderContainer;                              // 0x0370 (size: 0x8)
    class UImage* Image;                                                              // 0x0378 (size: 0x8)
    class UImage* Image_84;                                                           // 0x0380 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BPRefineryWindow(int32 EntryPoint);
}; // Size: 0x388

#endif
