#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementAssetDataInterface -FallbackName=TypedElementAssetDataInterface
#include "ActorElementAssetDataInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UActorElementAssetDataInterface : public UObject, public ITypedElementAssetDataInterface {
    GENERATED_BODY()
public:
    UActorElementAssetDataInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FAssetData GetAssetData(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetAssetData, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FAssetData> GetAllReferencedAssetDatas(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetAllReferencedAssetDatas, return TArray<FAssetData>(););
    
};

