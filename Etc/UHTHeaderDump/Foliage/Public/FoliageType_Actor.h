#pragma once
#include "CoreMinimal.h"
#include "FoliageType.h"
#include "Templates/SubclassOf.h"
#include "FoliageType_Actor.generated.h"

class AActor;
class UFoliageInstancedStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFoliageType_Actor : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttachToBaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticMeshOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoliageInstancedStaticMeshComponent> StaticMeshOnlyComponentClass;
    
    UFoliageType_Actor();

};

