#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "VolumetricCloud.generated.h"

class UVolumetricCloudComponent;

UCLASS(Blueprintable, MinimalAPI)
class AVolumetricCloud : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloudComponent;
    
public:
    AVolumetricCloud(const FObjectInitializer& ObjectInitializer);

};

