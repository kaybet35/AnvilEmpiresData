#ifndef UE4SS_SDK_BPOpeningScreen_HPP
#define UE4SS_SDK_BPOpeningScreen_HPP

class UBPOpeningScreen_C : public UOpeningScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* AnnouncementTextAnimation;                                // 0x02D8 (size: 0x8)
    class UImage* Image_50;                                                           // 0x02E0 (size: 0x8)
    class UImage* RoadmapBackground;                                                  // 0x02E8 (size: 0x8)
    class UImage* RoadmapCloseImage;                                                  // 0x02F0 (size: 0x8)
    class UImage* RoadmapImage;                                                       // 0x02F8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BPOpeningScreen(int32 EntryPoint);
}; // Size: 0x300

#endif
