#include "AnvilMovieCharacterDirector.h"

AAnvilMovieCharacterDirector::AAnvilMovieCharacterDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumMovieCharacters = 10;
    this->MovieCharacterClass = NULL;
    this->FactionId = EAnvilFactionId::Mirrish;
    this->HeadArmourType = EAnvilArmourType::None;
    this->BodyArmourType = EAnvilArmourType::None;
    this->RandomDirectionAngle = 5.00f;
    this->NumRows = 6;
    this->NumColumns = 20;
    this->RowSize = 300.00f;
    this->ColumnSize = 250.00f;
    this->RowBias = 10.00f;
    this->ColumnBias = 10.00f;
    this->MovementSpeed = 100.00f;
    this->MovementDelay = 0.50f;
    this->AnimationDelay = 2.00f;
    this->AnimationVelocityMultiplier = 40.00f;
    this->RowToRecord = -1;
    this->VehicleClass = NULL;
    this->CharacterAnimationMontage = NULL;
    this->VehicleSeatName = TEXT("S_Seat");
    this->NumRowsGuarding = 0;
    this->bIsDirectorEnabled = true;
    this->LandscapePopUpDistance = 110.00f;
    this->SpawnDelay = 0.01f;
}


