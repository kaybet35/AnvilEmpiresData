#include "NiagaraGlobalBudgetScaling.h"

FNiagaraGlobalBudgetScaling::FNiagaraGlobalBudgetScaling() {
    this->bCullByGlobalBudget = false;
    this->bScaleMaxDistanceByGlobalBudgetUse = false;
    this->bScaleMaxInstanceCountByGlobalBudgetUse = false;
    this->bScaleSystemInstanceCountByGlobalBudgetUse = false;
    this->MaxGlobalBudgetUsage = 0.00f;
}

