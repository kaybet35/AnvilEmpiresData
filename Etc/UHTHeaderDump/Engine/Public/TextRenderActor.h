#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "TextRenderActor.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable, MinimalAPI)
class ATextRenderActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
public:
    ATextRenderActor(const FObjectInitializer& ObjectInitializer);

};

