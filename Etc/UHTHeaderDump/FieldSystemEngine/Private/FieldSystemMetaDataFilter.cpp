#include "FieldSystemMetaDataFilter.h"

UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilterType = Field_Filter_Dynamic;
    this->ObjectType = Field_Object_Rigid;
    this->PositionType = Field_Position_CenterOfMass;
}

UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType, TEnumAsByte<EFieldObjectType> NewObjectType, TEnumAsByte<EFieldPositionType> NewPositionType) {
    return NULL;
}


