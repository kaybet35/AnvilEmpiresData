#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VisBuildSite.h"
#include "VisLadderBuildSite.generated.h"

class AvisLadder;
class ULadderDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisLadderBuildSite : public AVisBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AvisLadder> LadderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULadderDataComponent* LadderDataComponent;
    
    AVisLadderBuildSite(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateLadderMesh(float HalfLength);
    
};

