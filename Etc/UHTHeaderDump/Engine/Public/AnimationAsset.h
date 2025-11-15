#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "Interface_PreviewMeshProvider.h"
#include "AnimationAsset.generated.h"

class UAnimMetaData;
class UAssetUserData;
class USkeleton;

UCLASS(Abstract, Blueprintable)
class ENGINE_API UAnimationAsset : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAnimMetaData*> MetaData;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UAnimationAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayLength() const;
    

    // Fix for true pure virtual functions not being implemented
};

