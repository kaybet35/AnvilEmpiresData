#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "TypedElementAssetDataInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementAssetDataInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementAssetDataInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FAssetData GetAssetData(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetAssetData, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FAssetData> GetAllReferencedAssetDatas(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetAllReferencedAssetDatas, return TArray<FAssetData>(););
    
};

