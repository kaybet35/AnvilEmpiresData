#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetListLoadedDelegate.h"
#include "AsyncActionLoadPrimaryAssetList.generated.h"

class UAsyncActionLoadPrimaryAssetList;
class UObject;

UCLASS(Blueprintable)
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrimaryAssetListLoaded Completed;
    
    UAsyncActionLoadPrimaryAssetList();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
    
};

