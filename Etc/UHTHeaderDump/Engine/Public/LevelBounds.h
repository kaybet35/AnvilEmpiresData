#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "LevelBounds.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ENGINE_API ALevelBounds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoUpdateBounds;
    
    ALevelBounds(const FObjectInitializer& ObjectInitializer);

};

