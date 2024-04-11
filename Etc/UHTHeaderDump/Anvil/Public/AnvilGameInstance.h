#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "AnvilAssetManager.h"
#include "AnvilOptionsManager.h"
#include "ClientConfigManager.h"
#include "Templates/SubclassOf.h"
#include "AnvilGameInstance.generated.h"

class ALandscapeProxy;
class AUIGlobals;
class AVisActor;
class UAnvilCharacterSave;
class UAnvilClientVoiceClient;
class UHUDWidget;
class UMapWidget;

UCLASS(Blueprintable, NonTransient)
class ANVIL_API UAnvilGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDWidget* HUDWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnvilCharacterSave* CharacterSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnvilClientVoiceClient* AnvilClientVoiceClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnvilAssetManager AssetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnvilOptionsManager OptionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIGlobals> UIGlobalsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALandscapeProxy*> DirtyLandscapeProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVisActor*> VisActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientConfigManager ClientConfigManager;
    
public:
    UAnvilGameInstance();

    UFUNCTION(BlueprintCallable)
    void GetVisActors(TArray<AVisActor*>& OutVisActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVersion(int32& OutMajor, int32& OutMinor, int32& OutPatch, int32& OutCL) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimeOfDay(int32& OutHours, int32& OutMinutes, int32& OutSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNightTimeNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDayCurrentSeconds(int32& OutSeconds) const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpProperties(const FString& OutputFileName, const UClass* Type, const TArray<FString>& PropertyNameFilter);
    
};

