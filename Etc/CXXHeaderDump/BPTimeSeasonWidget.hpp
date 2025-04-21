#ifndef UE4SS_SDK_BPTimeSeasonWidget_HPP
#define UE4SS_SDK_BPTimeSeasonWidget_HPP

class UBPTimeSeasonWidget_C : public UTimeSeasonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UImage* currentWeather_image;                                               // 0x02A8 (size: 0x8)
    class UImage* dayNight_image;                                                     // 0x02B0 (size: 0x8)
    class USizeBox* OverallWidget_SizeBox;                                            // 0x02B8 (size: 0x8)
    class UImage* Season_image;                                                       // 0x02C0 (size: 0x8)
    class UImage* TImeOfDay_image;                                                    // 0x02C8 (size: 0x8)
    class USizeBox* triangle_SizeBox;                                                 // 0x02D0 (size: 0x8)
    double widgetScaling;                                                             // 0x02D8 (size: 0x8)
    double triangleScaling;                                                           // 0x02E0 (size: 0x8)
    TArray<FSlateBrush> imageList_DayNight;                                           // 0x02E8 (size: 0x10)
    TArray<FSlateBrush> imageList_Weather;                                            // 0x02F8 (size: 0x10)

    void cycleMapping(double X inputValue, double XPeriod (how many X units it talkes to cycle), double XRange offset (Xperiod where Yrange is lowest value), double RangeLowestValue (Y), double RangeHighestValue (Y), double& Y mappedValue);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_BPTimeSeasonWidget(int32 EntryPoint);
}; // Size: 0x308

#endif
