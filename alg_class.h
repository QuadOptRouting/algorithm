#ifndef ALG_CLASS_H
#define ALG_CLASS_H
#include <iostream>
#include "db_class.h"

class search_algorithm
public:
        
        double get_time();
        int get_sum();
        double get_time_money();
        
        search_algorithm( std::shared_ptr<strategy> strategy_type, std::vector<drug> dr, std::vector<relation> rel, std::vector<distance> dist); //initialise algorithm;
   
        std::vector<drugstore_with_drugs> use_algoritgm( std::pair<double,double> location, std::vector<drugs> user_drugs, std::vector<int> user_need_count );
        
protected:
    
        std::vector<distance> drugstore_with_drugs;
        std::vector<distance> location_distances;
        std::vector<drugs> need_drugs;
        std::vector<int> user_need_count;
        
private:

        double time;
        int sum;
        double time_money;
        
}
