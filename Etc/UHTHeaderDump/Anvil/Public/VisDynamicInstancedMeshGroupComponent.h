#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VisDynamicInstancedMeshGroupComponent.generated.h"

class UInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisDynamicInstancedMeshGroupComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, UInstancedStaticMeshComponent*> InstancedMeshes;
    
public:
    UVisDynamicInstancedMeshGroupComponent(const FObjectInitializer& ObjectInitializer);

};

