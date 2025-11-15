#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimationAttributeIdentifier.h"
#include "AnimationCurveIdentifier.h"
#include "EAnimAssetCurveFlags.h"
#include "ERawCurveTrackTypes.h"
#include "RichCurveKey.h"
#include "AnimationDataController.generated.h"

class UAnimDataModel;
class USkeleton;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ENGINE_API UAnimationDataController : public UInterface {
    GENERATED_BODY()
};

class ENGINE_API IAnimationDataController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateCurveNamesFromSkeleton(const USkeleton* Skeleton, ERawCurveTrackTypes SupportedCurveType, bool bShouldTransact) PURE_VIRTUAL(UpdateCurveNamesFromSkeleton,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetTransformCurveKeys(const FAnimationCurveIdentifier& CurveId, const TArray<FTransform>& TransformValues, const TArray<float>& TimeKeys, bool bShouldTransact) PURE_VIRTUAL(SetTransformCurveKeys, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetTransformCurveKey(const FAnimationCurveIdentifier& CurveId, float Time, const FTransform& Value, bool bShouldTransact) PURE_VIRTUAL(SetTransformCurveKey, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetPlayLength(float Length, bool bShouldTransact) PURE_VIRTUAL(SetPlayLength,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetModel(UAnimDataModel* InModel) PURE_VIRTUAL(SetModel,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetFrameRate(FFrameRate FrameRate, bool bShouldTransact) PURE_VIRTUAL(SetFrameRate,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetCurveKeys(const FAnimationCurveIdentifier& CurveId, const TArray<FRichCurveKey>& CurveKeys, bool bShouldTransact) PURE_VIRTUAL(SetCurveKeys, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetCurveKey(const FAnimationCurveIdentifier& CurveId, const FRichCurveKey& Key, bool bShouldTransact) PURE_VIRTUAL(SetCurveKey, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetCurveFlags(const FAnimationCurveIdentifier& CurveId, int32 Flags, bool bShouldTransact) PURE_VIRTUAL(SetCurveFlags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetCurveFlag(const FAnimationCurveIdentifier& CurveId, TEnumAsByte<EAnimAssetCurveFlags> Flag, bool bState, bool bShouldTransact) PURE_VIRTUAL(SetCurveFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetCurveColor(const FAnimationCurveIdentifier& CurveId, FLinearColor Color, bool bShouldTransact) PURE_VIRTUAL(SetCurveColor, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetBoneTrackKeys(FName BoneName, const TArray<FVector>& PositionalKeys, const TArray<FQuat>& RotationalKeys, const TArray<FVector>& ScalingKeys, bool bShouldTransact) PURE_VIRTUAL(SetBoneTrackKeys, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ScaleCurve(const FAnimationCurveIdentifier& CurveId, float Origin, float Factor, bool bShouldTransact) PURE_VIRTUAL(ScaleCurve, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ResizePlayLength(float NewLength, float T0, float T1, bool bShouldTransact) PURE_VIRTUAL(ResizePlayLength,);
    
    UFUNCTION(BlueprintCallable)
    virtual void Resize(float Length, float T0, float T1, bool bShouldTransact) PURE_VIRTUAL(Resize,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RenameCurve(const FAnimationCurveIdentifier& CurveToRenameId, const FAnimationCurveIdentifier& NewCurveId, bool bShouldTransact) PURE_VIRTUAL(RenameCurve, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveTransformCurveKey(const FAnimationCurveIdentifier& CurveId, float Time, bool bShouldTransact) PURE_VIRTUAL(RemoveTransformCurveKey, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveCurveKey(const FAnimationCurveIdentifier& CurveId, float Time, bool bShouldTransact) PURE_VIRTUAL(RemoveCurveKey, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveCurve(const FAnimationCurveIdentifier& CurveId, bool bShouldTransact) PURE_VIRTUAL(RemoveCurve, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveBoneTrack(FName BoneName, bool bShouldTransact) PURE_VIRTUAL(RemoveBoneTrack, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveAttributeKey(const FAnimationAttributeIdentifier& AttributeIdentifier, float Time, bool bShouldTransact) PURE_VIRTUAL(RemoveAttributeKey, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveAttribute(const FAnimationAttributeIdentifier& AttributeIdentifier, bool bShouldTransact) PURE_VIRTUAL(RemoveAttribute, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAllCurvesOfType(ERawCurveTrackTypes SupportedCurveType, bool bShouldTransact) PURE_VIRTUAL(RemoveAllCurvesOfType,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAllBoneTracks(bool bShouldTransact) PURE_VIRTUAL(RemoveAllBoneTracks,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 RemoveAllAttributesForBone(const FName& BoneName, bool bShouldTransact) PURE_VIRTUAL(RemoveAllAttributesForBone, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 RemoveAllAttributes(bool bShouldTransact) PURE_VIRTUAL(RemoveAllAttributes, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void OpenBracket(const FText& InTitle, bool bShouldTransact) PURE_VIRTUAL(OpenBracket,);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 InsertBoneTrack(FName BoneName, int32 DesiredIndex, bool bShouldTransact) PURE_VIRTUAL(InsertBoneTrack, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAnimDataModel* GetModel() PURE_VIRTUAL(GetModel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void FindOrAddCurveNamesOnSkeleton(USkeleton* Skeleton, ERawCurveTrackTypes SupportedCurveType, bool bShouldTransact) PURE_VIRTUAL(FindOrAddCurveNamesOnSkeleton,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DuplicateCurve(const FAnimationCurveIdentifier& CopyCurveId, const FAnimationCurveIdentifier& NewCurveId, bool bShouldTransact) PURE_VIRTUAL(DuplicateCurve, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DuplicateAttribute(const FAnimationAttributeIdentifier& AttributeIdentifier, const FAnimationAttributeIdentifier& NewAttributeIdentifier, bool bShouldTransact) PURE_VIRTUAL(DuplicateAttribute, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void CloseBracket(bool bShouldTransact) PURE_VIRTUAL(CloseBracket,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AddCurve(const FAnimationCurveIdentifier& CurveId, int32 CurveFlags, bool bShouldTransact) PURE_VIRTUAL(AddCurve, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 AddBoneTrack(FName BoneName, bool bShouldTransact) PURE_VIRTUAL(AddBoneTrack, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AddAttribute(const FAnimationAttributeIdentifier& AttributeIdentifier, bool bShouldTransact) PURE_VIRTUAL(AddAttribute, return false;);
    
};

