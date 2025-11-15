#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AlphaBlendArgs.h"
#include "AnimCompositeBase.h"
#include "BranchingPoint.h"
#include "BranchingPointMarker.h"
#include "CompositeSection.h"
#include "EMontageBlendMode.h"
#include "ERootMotionRootLock.h"
#include "MarkerSyncData.h"
#include "MontageBlendSettings.h"
#include "SlotAnimationTrack.h"
#include "TimeStretchCurve.h"
#include "AnimMontage.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UBlendProfile;

UCLASS(Blueprintable, MinimalAPI)
class UAnimMontage : public UAnimCompositeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageBlendMode BlendModeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageBlendMode BlendModeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerSyncData MarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeSection> CompositeSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotAnimationTrack> SlotAnimTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBranchingPoint> BranchingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRootMotionTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRootMotionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfileIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfileOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBranchingPointMarker> BranchingPointMarkers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BranchingPointStateNotifyIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStretchCurve TimeStretchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimeStretchCurveName;
    
    UAnimMontage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSectionName(FName InSectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSectionName(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectionIndex(FName InSectionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultBlendOutTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultBlendInTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAlphaBlendArgs GetBlendOutArgs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAlphaBlendArgs GetBlendInArgs() const;
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* CreateSlotAnimationAsDynamicMontage_WithBlendSettings(UAnimSequenceBase* Asset, FName SlotNodeName, const FMontageBlendSettings& BlendInSettings, const FMontageBlendSettings& BlendOutSettings, float InPlayRate, int32 LoopCount, float InBlendOutTriggerTime);
    
};

