#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "SceneCapture.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ASceneCapture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ASceneCapture(const FObjectInitializer& ObjectInitializer);

};

