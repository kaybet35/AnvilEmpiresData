#pragma once
#include "CoreMinimal.h"
#include "ActorFolderSet.generated.h"

class UActorFolder;

USTRUCT(BlueprintType)
struct ENGINE_API FActorFolderSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UActorFolder*> ActorFolders;
    
public:
    FActorFolderSet();
};

