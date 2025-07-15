#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilFactionId -FallbackName=EAnvilFactionId
#include "VisTeamSkeletalMeshComponent.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisTeamSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilFactionId, USkeletalMesh*> TeamMeshes;
    
public:
    UVisTeamSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

