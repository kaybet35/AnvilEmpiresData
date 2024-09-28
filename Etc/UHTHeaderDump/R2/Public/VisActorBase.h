#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VisActorBase.generated.h"

class UEntityTemplate;

UCLASS(Abstract, Blueprintable)
class R2_API AVisActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEntityTemplate* TemplateCDO;
    
    AVisActorBase(const FObjectInitializer& ObjectInitializer);

};

