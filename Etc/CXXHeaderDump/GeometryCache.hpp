#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

struct FGeometryCacheMeshBatchInfo
{
}; // Size: 0xC

struct FGeometryCacheMeshData
{
}; // Size: 0xC8

struct FGeometryCacheVertexInfo
{
}; // Size: 0x9

struct FNiagaraGeometryCacheReference
{
    class UGeometryCache* GeometryCache;                                              // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding GeometryCacheUserParamBinding;                       // 0x0008 (size: 0x20)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FTrackRenderData
{
}; // Size: 0xC0

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;                            // 0x0290 (size: 0x8)

    class UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x298

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;                                                            // 0x0058 (size: 0x4)

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}; // Size: 0x80

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x120

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x120

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    TArray<class UGeometryCacheTrack*> Tracks;                                        // 0x0040 (size: 0x10)
    int32 StartFrame;                                                                 // 0x0060 (size: 0x4)
    int32 EndFrame;                                                                   // 0x0064 (size: 0x4)
    uint64 Hash;                                                                      // 0x0068 (size: 0x8)

}; // Size: 0x70

class UGeometryCacheCodecBase : public UObject
{
    TArray<int32> TopologyRanges;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
    int32 DummyProperty;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
}; // Size: 0x40

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;                                              // 0x0570 (size: 0x8)
    bool bRunning;                                                                    // 0x0578 (size: 0x1)
    bool bLooping;                                                                    // 0x0579 (size: 0x1)
    bool bExtrapolateFrames;                                                          // 0x057A (size: 0x1)
    float StartTimeOffset;                                                            // 0x057C (size: 0x4)
    float PlaybackSpeed;                                                              // 0x0580 (size: 0x4)
    float MotionVectorScale;                                                          // 0x0584 (size: 0x4)
    int32 NumTracks;                                                                  // 0x0588 (size: 0x4)
    float ElapsedTime;                                                                // 0x058C (size: 0x4)
    float Duration;                                                                   // 0x05DC (size: 0x4)
    bool bManualTick;                                                                 // 0x05E0 (size: 0x1)
    bool bOverrideWireframeColor;                                                     // 0x05E1 (size: 0x1)
    FLinearColor WireframeOverrideColor;                                              // 0x05E4 (size: 0x10)

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetWireframeOverrideColor(const FLinearColor Color);
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetOverrideWireframeColor(bool bOverride);
    void SetMotionVectorScale(const float NewMotionVectorScale);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void SetExtrapolateFrames(const bool bNewExtrapolating);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    bool IsExtrapolatingFrames();
    FLinearColor GetWireframeOverrideColor();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    bool GetOverrideWireframeColor();
    int32 GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x600

class UGeometryCacheTrack : public UObject
{
    float Duration;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x58

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;                                             // 0x0058 (size: 0x8)
    float StartSampleTime;                                                            // 0x00C8 (size: 0x4)

}; // Size: 0xD8

class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
    TArray<FNiagaraGeometryCacheReference> GeometryCaches;                            // 0x00E0 (size: 0x10)
    bool bIsLooping;                                                                  // 0x00F0 (size: 0x1)
    uint32 ComponentCountLimit;                                                       // 0x00F4 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00F8 (size: 0x58)
    FNiagaraVariableAttributeBinding RotationBinding;                                 // 0x0150 (size: 0x58)
    FNiagaraVariableAttributeBinding ScaleBinding;                                    // 0x01A8 (size: 0x58)
    FNiagaraVariableAttributeBinding ElapsedTimeBinding;                              // 0x0200 (size: 0x58)
    FNiagaraVariableAttributeBinding EnabledBinding;                                  // 0x0258 (size: 0x58)
    FNiagaraVariableAttributeBinding ArrayIndexBinding;                               // 0x02B0 (size: 0x58)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0308 (size: 0x58)
    int32 RendererVisibility;                                                         // 0x0360 (size: 0x4)
    bool bAssignComponentsOnParticleID;                                               // 0x0364 (size: 0x1)

}; // Size: 0x368

#endif
