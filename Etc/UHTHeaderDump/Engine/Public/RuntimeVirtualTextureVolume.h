#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "RuntimeVirtualTextureVolume.generated.h"

class URuntimeVirtualTextureComponent;

UCLASS(Blueprintable, MinimalAPI)
class ARuntimeVirtualTextureVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTextureComponent* VirtualTextureComponent;
    
    ARuntimeVirtualTextureVolume(const FObjectInitializer& ObjectInitializer);

};

