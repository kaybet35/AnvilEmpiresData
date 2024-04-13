#ifndef UE4SS_SDK_BPOpeningScreen_HPP
#define UE4SS_SDK_BPOpeningScreen_HPP

class UBPOpeningScreen_C : public UOpeningScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UWidgetAnimation* AnnouncementTextAnimation;                                // 0x0310 (size: 0x8)
    class UImage* Image_50;                                                           // 0x0318 (size: 0x8)
    class UImage* RoadmapBackground;                                                  // 0x0320 (size: 0x8)
    class UImage* RoadmapCloseImage;                                                  // 0x0328 (size: 0x8)
    class UImage* RoadmapImage;                                                       // 0x0330 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BPOpeningScreen(int32 EntryPoint);
}; // Size: 0x338

#endif
