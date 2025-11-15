#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldPartitionRuntimeCellOwner.h"
#include "RuntimeHashExternalStreamingObjectBase.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class ENGINE_API URuntimeHashExternalStreamingObjectBase : public UObject, public IWorldPartitionRuntimeCellOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OwningWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OuterWorld;
    
public:
    URuntimeHashExternalStreamingObjectBase();


    // Fix for true pure virtual functions not being implemented
};

