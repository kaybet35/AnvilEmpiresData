#ifndef UE4SS_SDK_BPMapWidget_HPP
#define UE4SS_SDK_BPMapWidget_HPP

class UBPMapWidget_C : public UMapWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UImage* Background;                                                         // 0x0468 (size: 0x8)
    class UImage* Frame;                                                              // 0x0470 (size: 0x8)
    class UTextBlock* ObjectiveHeaderText;                                            // 0x0478 (size: 0x8)
    class UTextBlock* ObjectiveText;                                                  // 0x0480 (size: 0x8)
    class UTextBlock* TimeOfDayText;                                                  // 0x0488 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0490 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_OnMapImageSet(class UTexture2D* MapImageTexture);
    void ExecuteUbergraph_BPMapWidget(int32 EntryPoint);
}; // Size: 0x498

#endif
