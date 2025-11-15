#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Interface_AsyncCompilation.h"
#include "StreamableRenderAsset.h"
#include "SkinnedAsset.generated.h"

class USkeletalMeshSocket;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USkinnedAsset : public UStreamableRenderAsset, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
    USkinnedAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshSocket* FindSocket(FName InSocketName) const;
    

    // Fix for true pure virtual functions not being implemented
};

