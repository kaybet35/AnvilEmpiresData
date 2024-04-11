#include "OodleNetworkTrainerCommandlet.h"

UOodleNetworkTrainerCommandlet::UOodleNetworkTrainerCommandlet() {
    this->LogToConsole = true;
    this->bCompressionTest = false;
    this->bWriteV5Dictionaries = false;
    this->HashTableSize = 19;
    this->DictionarySize = 4194304;
    this->DictionaryTrials = 3;
    this->TrialRandomness = 200;
    this->TrialGenerations = 1;
    this->bNoTrials = false;
}


