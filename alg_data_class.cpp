#include "alg_data_class.h"
/*
alg_drug::alg_drug( relation rel, drug pill );
{
    
}*/

return_drugstore_with_drugs::return_drugstore_with_drugs( drugstore alg_store, drug alg_drug, relation alg_relation )
{
    if ( alg_drug.get_id() != alg_relation.get_drug_id() || alg_drugstore.get_id() != alg_relation.get_drugstore_id())
        throw std::runtime_error("failed to convert");
    
    return_drug = alg_drug;
    return_drugstore = alg_store;
    return_relation = alg_relation;
    
}

void return_drugstore_with_drugs::convert()
{
    drug_name = return_drug.get_name();
    drugstore_name = return_drugstore.get_name();
    count = return_relation.get_count();
}