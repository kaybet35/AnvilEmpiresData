#include "VisMapPost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=MapPostDataComponent -FallbackName=MapPostDataComponent

AVisMapPost::AVisMapPost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoCheckOnCeilVisibility = true;
    this->MapPostDataComponent = CreateDefaultSubobject<UMapPostDataComponent>(TEXT("MapPostDataComponent"));
}


