#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "FamilyAreaMarkerDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UFamilyAreaMarkerDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPublicPledging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMembers;
    
    UFamilyAreaMarkerDataComponent(const FObjectInitializer& ObjectInitializer);

};

