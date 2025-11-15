#pragma once
#include "CoreMinimal.h"
#include "NavigationObjectBase.h"
#include "PlayerStart.generated.h"

UCLASS(Blueprintable)
class ENGINE_API APlayerStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    APlayerStart(const FObjectInitializer& ObjectInitializer);

};

