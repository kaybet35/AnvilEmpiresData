#pragma once
#include "CoreMinimal.h"
#include "ChildActorAttachedActorInfo.h"
#include "SceneComponentInstanceData.h"
#include "Templates/SubclassOf.h"
#include "ChildActorComponentInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FChildActorComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChildActorAttachedActorInfo> AttachedActors;
    
    FChildActorComponentInstanceData();
};

