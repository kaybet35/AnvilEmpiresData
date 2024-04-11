#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ECacheMode.h"
#include "EStartMode.h"
#include "ObservedComponent.h"
#include "ChaosCacheManager.generated.h"

class UChaosCacheCollection;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class CHAOSCACHING_API AChaosCacheManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosCacheCollection* CacheCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECacheMode CacheMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartMode StartMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObservedComponent> ObservedComponents;
    
public:
    AChaosCacheManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerComponentByCache(FName InCacheName);
    
    UFUNCTION(BlueprintCallable)
    void TriggerComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAll();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStartTime(float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetSingleTransform(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllComponentTransforms();
    
};

