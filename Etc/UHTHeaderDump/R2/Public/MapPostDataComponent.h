#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilMapPostType.h"
#include "MapPostDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UMapPostDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilMapPostType PostType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BuilderId;
    
    UMapPostDataComponent(const FObjectInitializer& ObjectInitializer);

};

