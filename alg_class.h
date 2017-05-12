#ifndef ALG_CLASS_H
#define ALG_CLASS_H
#include <iostream>
#include "db_tables_class.h"

class search_algorithm
{
    public:
        
 //Get back the result Data  
//    
        std::vector<category> get_categories();
        
        double get_time();
        int get_sum();
        double get_time_money();
        
        search_algorithm( std::vector<relation> relations, std::vector<distance> distances, size_t n, std::vector<double> weights, double time_money); //initialise algorithm;
        std::vector<drugstore_category> find_drugstores( std::vector<drug> drugs, std::vector<distance> location_distances );
        // 
private:
    
        std::vector<distance> distances;
        std::vector<distance> location_distances
        std::vector<relation> relations;
        std::vector<drug> drugs;
        std::vector<category> prods;
        
        std::vector<double> weigths;
        
        size_t n;
        
        void update_distances( std::vector<distance> distances );
        void update_relation( std::vector<relation> relations, std::vector<drug> drugs );
        
        double time;
        int sum;
        double time_money;
}   

