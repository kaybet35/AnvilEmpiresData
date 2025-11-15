#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "ChildActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UChildActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, Replicated, TextExportTransient, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChildActorTemplate;
    
public:
    UChildActorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetChildActorClass(TSubclassOf<AActor> InClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChildActorDestroyed(AActor* DestroyedActor);
    
};

