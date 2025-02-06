#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilSignPostVisualType -FallbackName=EAnvilSignPostVisualType
#include "VisStructure.h"
#include "VisSignPost.generated.h"

class ULifetimeDataComponent;
class USignPostDataComponent;
class UStaticMesh;
class UVisStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisSignPost : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignPostDataComponent* SignPostDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULifetimeDataComponent* LifetimeDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilSignPostVisualType, FText> VisualNameMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilSignPostVisualType, UStaticMesh*> VisualMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisStaticMeshComponent* Mesh;
    
public:
    AVisSignPost(const FObjectInitializer& ObjectInitializer);

};

