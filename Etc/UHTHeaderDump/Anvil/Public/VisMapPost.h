#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisMapPost.generated.h"

class UMapPostDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisMapPost : public AVisActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapPostDataComponent* MapPostDataComponent;
    
    AVisMapPost(const FObjectInitializer& ObjectInitializer);

};

