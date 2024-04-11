#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "EnhancedActionKeyMapping.h"
#include "PlayerMappableInputConfig.generated.h"

class UInputAction;
class UInputMappingContext;
class UObject;

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UPlayerMappableInputConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConfigDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeprecated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, int32> Contexts;
    
public:
    UPlayerMappableInputConfig();

    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeprecated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetMetadata() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UInputMappingContext*, int32> GetMappingContexts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnhancedActionKeyMapping GetMappingByName(const FName MappingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(const UInputAction* InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetConfigName() const;
    
};

