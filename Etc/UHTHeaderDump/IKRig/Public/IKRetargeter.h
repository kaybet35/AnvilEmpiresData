#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRetargetPose.h"
#include "RetargetChainMap.h"
#include "RetargetGlobalSettings.h"
#include "RetargetProfile.h"
#include "TargetChainFKSettings.h"
#include "TargetChainIKSettings.h"
#include "TargetChainSettings.h"
#include "TargetChainSpeedPlantSettings.h"
#include "TargetRootSettings.h"
#include "IKRetargeter.generated.h"

class UIKRetargetGlobalSettings;
class UIKRetargeter;
class UIKRigDefinition;
class URetargetChainSettings;
class URetargetRootSettings;

UCLASS(Blueprintable)
class IKRIG_API UIKRetargeter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRetargetChainMap> ChainMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URetargetChainSettings*> ChainSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URetargetRootSettings* RootSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKRetargetGlobalSettings* GlobalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRetargetProfile> Profiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIKRetargetPose> SourceRetargetPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIKRetargetPose> TargetRetargetPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSourceRetargetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTargetRetargetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIKRetargetPose> RetargetPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentRetargetPose;
    
public:
    UIKRetargeter();

    UFUNCTION(BlueprintCallable)
    static void SetRootSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetRootSettings& NewRootSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& NewGlobalSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainSpeedPlantSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainSettings& NewChainSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainIKSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable)
    static void SetChainFKSettingsInRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTargetRootSettings GetRootSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRootSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTargetChainSettings GetChainUsingGoalFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName IKGoalName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTargetChainSettings GetChainSettingsFromRetargetProfile(UPARAM(Ref) FRetargetProfile& RetargetProfile, const FName TargetChainName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTargetChainSettings GetChainSettingsFromRetargetAsset(const UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName);
    
};

