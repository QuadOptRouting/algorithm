#ifndef ALG_DATA_CLASS_H
#define ALG_DATA_CLASS_H

class drugstore_with_drugs
{
    drugstore *return_drugstore;
    drug *return_drug;
    relation *return_relation;
    
public:

    std::string drug_name;
    std::string drugstore_name;
    size_t count;
    int price;
    
    drugstore_with_drugs( drugstore alg_store, drug alg_drug, relation alg_relation );
    void convert();
    
}

