#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FBoolParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneBoolChannel ParameterCurve;                                            // 0x0008 (size: 0x100)

}; // Size: 0x108

struct FColorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel RedCurve;                                                 // 0x0008 (size: 0x110)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x0118 (size: 0x110)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0228 (size: 0x110)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x0338 (size: 0x110)

}; // Size: 0x448

struct FConstraintComponentData
{
    FName ConstraintName;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FEventPayload
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)
    FMovieSceneEventParameters Parameters;                                            // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FLevelVisibilityComponentData
{
    class UMovieSceneLevelVisibilitySection* Section;                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FFrameNumber Time;                                                                // 0x0020 (size: 0x4)

}; // Size: 0x40

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;                                         // 0x0020 (size: 0x18)
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0038 (size: 0x110)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x0148 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x0149 (size: 0x1)
    uint8 bFollow;                                                                    // 0x014C (size: 0x1)
    uint8 bReverse;                                                                   // 0x014C (size: 0x1)
    uint8 bForceUpright;                                                              // 0x014C (size: 0x1)

}; // Size: 0x150

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;                                                                // 0x0008 (size: 0x18)
    FFrameNumber Time;                                                                // 0x0020 (size: 0x4)

}; // Size: 0x40

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector3f Scale;                                                                  // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FRotator Rotation;                                                                // 0x0020 (size: 0x18)
    FVector3f Scale;                                                                  // 0x0038 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0044 (size: 0x4)

}; // Size: 0x60

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0050 (size: 0x10)
    FMovieSceneActorReferenceKey DefaultValue;                                        // 0x0060 (size: 0x28)
    TArray<FMovieSceneActorReferenceKey> KeyValues;                                   // 0x0088 (size: 0x10)

}; // Size: 0x120

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;                                                // 0x0000 (size: 0x18)
    FName ComponentName;                                                              // 0x0018 (size: 0x8)
    FName SocketName;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x18)
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x0038 (size: 0x120)

}; // Size: 0x158

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAudioSection* AudioSection;                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneBaseCacheParams
{
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneBaseCacheSectionTemplateParameters
{
    FFrameNumber SectionStartTime;                                                    // 0x0000 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x0038 (size: 0x100)

}; // Size: 0x138

struct FMovieSceneCVarOverrides
{
    TMap<class FString, class FString> ValuesByCVar;                                  // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x000C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x28)
    FFrameNumber SectionStartTime;                                                    // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x28)
    FFrameNumber SectionStartTime;                                                    // 0x0048 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x004C (size: 0x4)

}; // Size: 0x50

struct FMovieSceneCameraShakeSourceTrigger
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x000C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0050 (size: 0x10)
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;                            // 0x0060 (size: 0x10)

}; // Size: 0xF8

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FFrameNumber> TriggerTimes;                                                // 0x0020 (size: 0x10)
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    FFrameNumber Time;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;                                                   // 0x0038 (size: 0x440)
    EMovieSceneBlendType BlendType;                                                   // 0x0478 (size: 0x1)

}; // Size: 0x480

struct FMovieSceneDataLayerComponentData
{
    class UMovieSceneDataLayerSection* Section;                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{
    FPerlinNoiseParams PerlinNoiseParams;                                             // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;                                                        // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0050 (size: 0x10)
    TArray<FMovieSceneEvent> KeyValues;                                               // 0x0060 (size: 0x10)

}; // Size: 0xF8

struct FMovieSceneEventParameters
{
}; // Size: 0x30

struct FMovieSceneEventPayloadVariable
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneEventPtrs
{
    class UFunction* Function;                                                        // 0x0000 (size: 0x8)
    TFieldPath<FProperty> BoundObjectProperty;                                        // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0050 (size: 0x10)
    TArray<FEventPayload> KeyValues;                                                  // 0x0060 (size: 0x10)

}; // Size: 0xF8

struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneEventSectionData EventData;                                            // 0x0020 (size: 0xF8)
    uint8 bFireEventsWhenForwards;                                                    // 0x0118 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x0118 (size: 0x1)

}; // Size: 0x120

struct FMovieSceneEventTriggerData
{
    FMovieSceneEventPtrs Ptrs;                                                        // 0x0000 (size: 0x28)
    FGuid ObjectBindingID;                                                            // 0x0028 (size: 0x10)

}; // Size: 0x48

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;                                                // 0x0020 (size: 0x110)
    FLinearColor FadeColor;                                                           // 0x0130 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x0140 (size: 0x1)

}; // Size: 0x148

struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{
    FPerlinNoiseParams PerlinNoiseParams;                                             // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x0038 (size: 0x138)

}; // Size: 0x170

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;                                     // 0x0020 (size: 0x10)
    TArray<FBoolParameterNameAndCurve> Bools;                                         // 0x0030 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;                                // 0x0040 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> Vectors;                                    // 0x0050 (size: 0x10)
    TArray<FColorParameterNameAndCurves> Colors;                                      // 0x0060 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> Transforms;                              // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
}; // Size: 0x108

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
}; // Size: 0x80

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x0020 (size: 0x108)

}; // Size: 0x128

struct FMovieScenePreAnimatedMaterialParameters
{
    class UMaterialInterface* PreviousMaterial;                                       // 0x0000 (size: 0x8)
    class UMaterialInterface* PreviousParameterContainer;                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
}; // Size: 0x30

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;                                               // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)
    FName SlotName;                                                                   // 0x001C (size: 0x8)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0028 (size: 0x8)
    FMovieSceneFloatChannel Weight;                                                   // 0x0030 (size: 0x110)
    bool bSkipAnimNotifiers;                                                          // 0x0140 (size: 0x1)
    bool bForceCustomMode;                                                            // 0x0141 (size: 0x1)
    ESwapRootBone SwapRootBone;                                                       // 0x0142 (size: 0x1)
    float StartOffset;                                                                // 0x0144 (size: 0x4)
    float EndOffset;                                                                  // 0x0148 (size: 0x4)

}; // Size: 0x150

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                     // 0x0020 (size: 0x158)

}; // Size: 0x178

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0150 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0154 (size: 0x4)

}; // Size: 0x158

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;                                               // 0x0020 (size: 0x110)

}; // Size: 0x130

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0050 (size: 0x10)
    TArray<FString> Values;                                                           // 0x0060 (size: 0x10)
    FString DefaultValue;                                                             // 0x0070 (size: 0x10)
    bool bHasDefaultValue;                                                            // 0x0080 (size: 0x1)

}; // Size: 0x110

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;                                             // 0x0038 (size: 0x110)

}; // Size: 0x148

struct FMovieSceneTransformMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector2D Vector;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector2f Vector;                                                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector3d Vector;                                                                 // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector3f Vector;                                                                 // 0x0028 (size: 0xC)

}; // Size: 0x38

struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
    FVector4d Vector;                                                                 // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
    FVector4f Vector;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
}; // Size: 0x138

struct FPerlinNoiseParams
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    double Amplitude;                                                                 // 0x0008 (size: 0x8)
    float Offset;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FScalarParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel ParameterCurve;                                           // 0x0008 (size: 0x110)

}; // Size: 0x118

struct FTransformParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel Translation;                                              // 0x0008 (size: 0x330)
    FMovieSceneFloatChannel Rotation;                                                 // 0x0338 (size: 0x330)
    FMovieSceneFloatChannel Scale;                                                    // 0x0668 (size: 0x330)

}; // Size: 0x998

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0x110)
    FMovieSceneFloatChannel YCurve;                                                   // 0x0118 (size: 0x110)

}; // Size: 0x228

struct FVectorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0x110)
    FMovieSceneFloatChannel YCurve;                                                   // 0x0118 (size: 0x110)
    FMovieSceneFloatChannel ZCurve;                                                   // 0x0228 (size: 0x110)

}; // Size: 0x338

class IMovieSceneConstrainedSection : public IInterface
{
}; // Size: 0x28

class IMovieSceneParameterSectionExtender : public IInterface
{
}; // Size: 0x28

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
}; // Size: 0x28

class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;                                                           // 0x0120 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0128 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0130 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0131 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x0132 (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x0133 (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x0134 (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x0135 (size: 0x1)

}; // Size: 0x138

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xA8

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;                                                               // 0x00F0 (size: 0x10)
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x0100 (size: 0x18)

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
}; // Size: 0x118

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;                             // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0118 (size: 0x110)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x0228 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x0229 (size: 0x1)
    uint8 bFollow;                                                                    // 0x022C (size: 0x1)
    uint8 bReverse;                                                                   // 0x022C (size: 0x1)
    uint8 bForceUpright;                                                              // 0x022C (size: 0x1)

}; // Size: 0x230

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xB0

class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;                                           // 0x0128 (size: 0x4)
    FMovieSceneDoubleChannel Translation;                                             // 0x0130 (size: 0x348)
    FMovieSceneDoubleChannel Rotation;                                                // 0x0478 (size: 0x348)
    FMovieSceneDoubleChannel Scale;                                                   // 0x07C0 (size: 0x348)
    FMovieSceneFloatChannel ManualWeight;                                             // 0x0B08 (size: 0x110)
    class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                // 0x0C18 (size: 0x8)
    class UMovieScene3DTransformSectionConstraints* Constraints;                      // 0x0C20 (size: 0x8)
    bool bUseQuaternionInterpolation;                                                 // 0x0C28 (size: 0x1)

}; // Size: 0xC30

class UMovieScene3DTransformSectionConstraints : public UObject
{
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x00F0 (size: 0x120)
    FIntegralCurve ActorGuidIndexCurve;                                               // 0x0210 (size: 0x80)
    TArray<FString> ActorGuidStrings;                                                 // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xD0

class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
    FMovieSceneAsyncAction_SequencePredictionResult Result;                           // 0x0030 (size: 0x10)
    void MovieSceneActorPredictionResult(FTransform PredictedTransform);
    FMovieSceneAsyncAction_SequencePredictionFailure Failure;                         // 0x0040 (size: 0x10)
    void MovieSceneActorPredictionFailure();
    class UMovieSceneSequencePlayer* SequencePlayer;                                  // 0x0060 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x0068 (size: 0x8)

    class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
    class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime);
    class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
    class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime);
}; // Size: 0x80

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* Sound;                                                          // 0x00F0 (size: 0x8)
    FFrameNumber StartFrameOffset;                                                    // 0x00F8 (size: 0x4)
    float StartOffset;                                                                // 0x00FC (size: 0x4)
    float AudioStartTime;                                                             // 0x0100 (size: 0x4)
    float AudioDilationFactor;                                                        // 0x0104 (size: 0x4)
    float AudioVolume;                                                                // 0x0108 (size: 0x4)
    FMovieSceneFloatChannel SoundVolume;                                              // 0x0110 (size: 0x110)
    FMovieSceneFloatChannel PitchMultiplier;                                          // 0x0220 (size: 0x110)
    TMap<class FName, class FMovieSceneFloatChannel> Inputs_Float;                    // 0x0330 (size: 0x50)
    TMap<class FName, class FMovieSceneStringChannel> Inputs_String;                  // 0x0380 (size: 0x50)
    TMap<class FName, class FMovieSceneBoolChannel> Inputs_Bool;                      // 0x03D0 (size: 0x50)
    TMap<class FName, class FMovieSceneIntegerChannel> Inputs_Int;                    // 0x0420 (size: 0x50)
    TMap<class FName, class FMovieSceneAudioTriggerChannel> Inputs_Trigger;           // 0x0470 (size: 0x50)
    FMovieSceneActorReferenceData AttachActorData;                                    // 0x04C0 (size: 0x120)
    bool bLooping;                                                                    // 0x05E0 (size: 0x1)
    bool bSuppressSubtitles;                                                          // 0x05E1 (size: 0x1)
    bool bOverrideAttenuation;                                                        // 0x05E2 (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x05E8 (size: 0x8)
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;                         // 0x05F0 (size: 0x10)
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;                           // 0x0600 (size: 0x10)
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;             // 0x0610 (size: 0x10)
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(class USoundBase* InSound);
    FFrameNumber GetStartOffset();
    class USoundBase* GetSound();
}; // Size: 0x620

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;                                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneBaseCacheSection : public UMovieSceneSection
{
}; // Size: 0xF8

class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xD0

class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneByteSection : public UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;                                                 // 0x00F8 (size: 0x108)

}; // Size: 0x200

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UMovieSceneCVarSection : public UMovieSceneSection
{
    FMovieSceneCVarOverrides ConsoleVariables;                                        // 0x00F8 (size: 0x50)

    void SetFromString(FString InString);
    FString GetString();
}; // Size: 0x148

class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{
}; // Size: 0xA0

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    bool bLockPreviousCamera;                                                         // 0x00F8 (size: 0x1)
    FGuid CameraGuid;                                                                 // 0x00FC (size: 0x10)
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x010C (size: 0x18)
    FTransform InitialCameraCutTransform;                                             // 0x0130 (size: 0x60)
    bool bHasInitialCameraCutTransform;                                               // 0x0190 (size: 0x1)

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
}; // Size: 0x1A0

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;                                                                   // 0x0098 (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
}; // Size: 0xC8

class UMovieSceneCameraShakeEvaluator : public UObject
{
}; // Size: 0x28

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x00F0 (size: 0x28)
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0118 (size: 0x8)
    float PlayScale;                                                                  // 0x0120 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x0124 (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0128 (size: 0x18)

}; // Size: 0x140

class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x00F0 (size: 0x28)

}; // Size: 0x118

class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSourceTriggerChannel Channel;                               // 0x00F0 (size: 0xF8)

}; // Size: 0x1E8

class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;                                                          // 0x0130 (size: 0x10)
    FText DisplayName;                                                                // 0x0140 (size: 0x18)

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
}; // Size: 0x158

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
}; // Size: 0xA8

class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneColorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;                                                 // 0x00F8 (size: 0x110)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x0208 (size: 0x110)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0318 (size: 0x110)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x0428 (size: 0x110)

}; // Size: 0x538

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;                                                               // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x1D0

class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x128

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;                                                              // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x230

class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x50

class UMovieSceneDataLayerSection : public UMovieSceneSection
{
    TArray<FActorDataLayer> DataLayers;                                               // 0x00F8 (size: 0x10)
    TArray<class UDataLayerAsset*> DataLayerAssets;                                   // 0x0108 (size: 0x10)
    EDataLayerRuntimeState DesiredState;                                              // 0x0118 (size: 0x1)
    EDataLayerRuntimeState PrerollState;                                              // 0x0119 (size: 0x1)
    bool bFlushOnUnload;                                                              // 0x011A (size: 0x1)

    void SetPrerollState(EDataLayerRuntimeState InPrerollState);
    void SetFlushOnUnload(bool bFlushOnUnload);
    void SetDesiredState(EDataLayerRuntimeState InDesiredState);
    void SetDataLayers(const TArray<FActorDataLayer>& InDataLayers);
    void SetDataLayerAssets(const TArray<class UDataLayerAsset*>& InDataLayerAssets);
    EDataLayerRuntimeState GetPrerollState();
    bool GetFlushOnUnload();
    EDataLayerRuntimeState GetDesiredState();
    TArray<FActorDataLayer> GetDataLayers();
    TArray<class UDataLayerAsset*> GetDataLayerAssets();
}; // Size: 0x120

class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{
}; // Size: 0xD0

class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x58

class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
    FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel;                           // 0x0058 (size: 0x68)

}; // Size: 0xC0

class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneDoubleSection : public UMovieSceneSection
{
    FMovieSceneDoubleChannel DoubleCurve;                                             // 0x00F8 (size: 0x118)

}; // Size: 0x210

class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{
    FMovieSceneDoubleChannel Curves;                                                  // 0x00F8 (size: 0x460)
    int32 ChannelsUsed;                                                               // 0x0558 (size: 0x4)

}; // Size: 0x560

class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;                                                            // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;                                                 // 0x00F8 (size: 0x108)

}; // Size: 0x200

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;                                                           // 0x00F8 (size: 0x28)

}; // Size: 0x120

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;                                                                // 0x00F0 (size: 0x78)
    FMovieSceneEventSectionData EventData;                                            // 0x0168 (size: 0xF8)

}; // Size: 0x260

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
}; // Size: 0xF0

class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x90

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;                                                    // 0x00A8 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x00A8 (size: 0x1)
    EFireEventsAtPosition EventPosition;                                              // 0x00AC (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;                                             // 0x00F8 (size: 0xF8)

}; // Size: 0x1F0

class UMovieSceneFadeSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00F0 (size: 0x110)
    FLinearColor FadeColor;                                                           // 0x0200 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x0210 (size: 0x1)

}; // Size: 0x218

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xD0

class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
    FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel;                            // 0x0058 (size: 0x68)

}; // Size: 0xC0

class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x0100 (size: 0x110)
    class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                // 0x0210 (size: 0x8)

}; // Size: 0x218

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneFloatVectorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;                                                   // 0x00F8 (size: 0x440)
    int32 ChannelsUsed;                                                               // 0x0538 (size: 0x4)

}; // Size: 0x540

class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;                                                            // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x90

class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;                                           // 0x00F8 (size: 0x100)

}; // Size: 0x1F8

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x1F0

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;                                                      // 0x00F8 (size: 0x1)
    TArray<FName> LevelNames;                                                         // 0x0100 (size: 0x10)

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
}; // Size: 0x110

class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
}; // Size: 0x1A8

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x68

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;                                          // 0x00B8 (size: 0x8)

}; // Size: 0xC0

class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem
{
    class UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;               // 0x0330 (size: 0x8)

}; // Size: 0x338

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x98

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x00F0 (size: 0x138)

}; // Size: 0x228

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;                                                            // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;                   // 0x00F8 (size: 0x10)
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;               // 0x0108 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;          // 0x0118 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;              // 0x0128 (size: 0x10)
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;                // 0x0138 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;        // 0x0148 (size: 0x10)

    bool RemoveVectorParameter(FName InParameterName);
    bool RemoveVector2DParameter(FName InParameterName);
    bool RemoveTransformParameter(FName InParameterName);
    bool RemoveScalarParameter(FName InParameterName);
    bool RemoveColorParameter(FName InParameterName);
    bool RemoveBoolParameter(FName InParameterName);
    void GetParameterNames(TSet<FName>& ParameterNames);
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
}; // Size: 0x158

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x00F0 (size: 0x108)

}; // Size: 0x1F8

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;                               // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x130

class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0xB0

class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
    TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;      // 0x00D0 (size: 0x10)
    TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;   // 0x00E0 (size: 0x10)

}; // Size: 0xF0

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;                                     // 0x00F8 (size: 0x138)

}; // Size: 0x230

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;                                                              // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x248

class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
    class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;                  // 0x0048 (size: 0x8)

}; // Size: 0x58

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;                                           // 0x0098 (size: 0x8)
    FMovieScenePropertyBinding PropertyBinding;                                       // 0x00A0 (size: 0x14)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;                                        // 0x00F0 (size: 0x150)
    class UAnimSequence* AnimSequence;                                                // 0x0240 (size: 0x8)
    class UAnimSequenceBase* Animation;                                               // 0x0248 (size: 0x8)
    float StartOffset;                                                                // 0x0250 (size: 0x4)
    float EndOffset;                                                                  // 0x0254 (size: 0x4)
    float PlayRate;                                                                   // 0x0258 (size: 0x4)
    uint8 bReverse;                                                                   // 0x025C (size: 0x1)
    FName SlotName;                                                                   // 0x0260 (size: 0x8)
    FVector StartLocationOffset;                                                      // 0x0268 (size: 0x18)
    FRotator StartRotationOffset;                                                     // 0x0280 (size: 0x18)
    bool bMatchWithPrevious;                                                          // 0x0298 (size: 0x1)
    FName MatchedBoneName;                                                            // 0x029C (size: 0x8)
    FVector MatchedLocationOffset;                                                    // 0x02A8 (size: 0x18)
    FRotator MatchedRotationOffset;                                                   // 0x02C0 (size: 0x18)
    bool bMatchTranslation;                                                           // 0x02D8 (size: 0x1)
    bool bMatchIncludeZHeight;                                                        // 0x02D9 (size: 0x1)
    bool bMatchRotationYaw;                                                           // 0x02DA (size: 0x1)
    bool bMatchRotationPitch;                                                         // 0x02DB (size: 0x1)
    bool bMatchRotationRoll;                                                          // 0x02DC (size: 0x1)

}; // Size: 0x350

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00A0 (size: 0x10)
    bool bUseLegacySectionIndexBlend;                                                 // 0x00B0 (size: 0x1)
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                    // 0x00B8 (size: 0x30)
    bool bBlendFirstChildOfRoot;                                                      // 0x00E8 (size: 0x1)

}; // Size: 0xF0

class UMovieSceneSlomoSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00F0 (size: 0x110)

}; // Size: 0x200

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xD0

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;                                             // 0x00F0 (size: 0x110)

}; // Size: 0x200

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xD0

class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x78

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
}; // Size: 0xD0

class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x78

#endif
