#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisRichSoil.generated.h"

class UArrowComponent;
class UDecalComponent;
class URichSoilDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisRichSoil : public AVisActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* RichSoilDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichSoilDataComponent* RichSoilDataComponent;
    
public:
    AVisRichSoil(const FObjectInitializer& ObjectInitializer);

};

