#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=ConstraintAndActiveChannel -FallbackName=ConstraintAndActiveChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieScene3DTransformSectionConstraints.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScene3DTransformSectionConstraints : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;
    
    UMovieScene3DTransformSectionConstraints();

};

