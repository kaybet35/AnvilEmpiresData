#include "StructureStats.h"

FStructureStats::FStructureStats() {
    this->CodeName = NULL;
    this->CodeNameVisVar = 0;
    this->EntityId = 0;
    this->MaxHealth = 0.00f;
    this->Health = 0.00f;
    this->DamageTargetType = EAnvilDamageTargetType::Default;
    this->TeamId = 0;
    this->TownHallId = 0;
    this->TownTradeResource = NULL;
    this->TownTradeResourceVisVar = 0;
    this->MarkerFamilyId = 0;
    this->StructureFamilyId = 0;
    this->PledgedPlayerId = 0;
    this->RemainingTimeUntilCollapse_Sec = 0.00f;
    this->bShouldDecay = false;
    this->bDecaying = false;
    this->TimeUntilDecaySec = 0.00f;
    this->DecayDamagePerHour = 0.00f;
    this->bCanBeScorched = false;
    this->ScorchIntensity = 0.00f;
    this->BurntIntensity = 0.00f;
    this->ScorchState = EAnvilScorchState::None;
    this->HousedLivestockCount = 0;
    this->MaxLivestockCount = 0;
    this->FarmWaterDuration = 0.00f;
    this->FarmWaterDurationMax = 0.00f;
    this->CookWaterDurationRemainingSec = 0.00f;
    this->CookCurrentTemperature = 0.00f;
    this->WorldEntranceDestinationMapId = 0;
    this->WorldEntranceId = 0;
    this->bIsGrainMill = false;
    this->CurrentCoarseness = 0.00f;
    this->ProductionSpeed = 0.00f;
    this->ProductionTime = 0.00f;
}

