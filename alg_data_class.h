#ifndef ALG_DATA_CLASS_H
#define ALG_DATA_CLASS_H


class alg_drug_with_drugstore
{
private:
    
    drug pill;
    int price;
    int count;
    int drugstore_id;
    
public:
    
    alg_drug_with_drugstore( relation rel, drug pill );
    

}


class category
{
private:

    std::vector<relation> relations;
    int price;
    int count;
    int need_count;
    
public: 

    category();
    std::vector<int> get_drugstore_ids(); 
    int check_for_add( relation ); //Check if price got lower; it has to be positive, if we need to add.
    int get_price();  //receive price
    void add_relation( relation );   //add relation if check for_add is positive ok.
    size_t get_category_size(); //cherck for category size
    
}


class drugstore_category
{
private:
    
    drugstore store;
    std::vector<alg_drug_with_drugstore> goods;
    
public:


    
}
