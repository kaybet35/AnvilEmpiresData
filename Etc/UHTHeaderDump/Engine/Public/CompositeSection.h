#pragma once
#include "CoreMinimal.h"
#include "AnimLinkableElement.h"
#include "CompositeSection.generated.h"

class UAnimMetaData;

USTRUCT(BlueprintType)
struct FCompositeSection : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAnimMetaData*> MetaData;
    
    ENGINE_API FCompositeSection();
};

