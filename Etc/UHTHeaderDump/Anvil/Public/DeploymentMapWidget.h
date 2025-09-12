#pragma once
#include "CoreMinimal.h"
#include "MapWidgetBase.h"
#include "DeploymentMapWidget.generated.h"

class UDeploymentAvatarWidget;
class UMapAvatarContainerWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentMapWidget : public UMapWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapAvatarContainerWidget* MapAvatarContainerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeploymentAvatarWidget* DeploymentAvatarWidget;
    
public:
    UDeploymentMapWidget();

};

