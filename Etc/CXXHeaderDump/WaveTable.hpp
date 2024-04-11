#ifndef UE4SS_SDK_WaveTable_HPP
#define UE4SS_SDK_WaveTable_HPP

#include "WaveTable_enums.hpp"

struct FWaveTableBankEntry
{
    FWaveTableTransform Transform;                                                    // 0x0000 (size: 0xA0)

}; // Size: 0xA0

struct FWaveTableSettings
{
    FFilePath FilePath;                                                               // 0x0000 (size: 0x10)
    int32 ChannelIndex;                                                               // 0x0010 (size: 0x4)
    float Phase;                                                                      // 0x0014 (size: 0x4)
    float Top;                                                                        // 0x0018 (size: 0x4)
    float Tail;                                                                       // 0x001C (size: 0x4)
    float FadeIn;                                                                     // 0x0020 (size: 0x4)
    float FadeOut;                                                                    // 0x0024 (size: 0x4)
    bool bNormalize;                                                                  // 0x0028 (size: 0x1)
    bool bRemoveOffset;                                                               // 0x0029 (size: 0x1)
    TArray<float> SourcePCMData;                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FWaveTableTransform
{
    EWaveTableCurve Curve;                                                            // 0x0000 (size: 0x1)
    float Scalar;                                                                     // 0x0004 (size: 0x4)
    FRichCurve CurveCustom;                                                           // 0x0008 (size: 0x80)
    class UCurveFloat* CurveShared;                                                   // 0x0088 (size: 0x8)
    TArray<float> WaveTable;                                                          // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UWaveTableBank : public UObject
{
    EWaveTableResolution Resolution;                                                  // 0x0030 (size: 0x1)
    bool bBipolar;                                                                    // 0x0031 (size: 0x1)
    TArray<FWaveTableBankEntry> Entries;                                              // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
