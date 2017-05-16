#ifndef ALG_CLASS_H
#define ALG_CLASS_H
#include <iostream>
#include "class.h"

class search_algorithm
{
public:
        
 //Get back the result Data  
//    
//        std::vector<category> get_categories();
        
        double get_time();
        int get_sum();
        double get_time_money();
        
        search_algorithm( std::vector<drug> dr, std::vector<relation> rel, std::vector<distance> dist, std::vector<double> w, double time_m, std::string metric ); //initialise algorithm;
        std::vector<relations> find_drugstores( std::vector<size_t> count, std::vector<drug> drugs, std::vector<distance> location_distances, std::pair<double,double> current_loc);
        // 
private:
    
        std::vector<distance> distances;
        std::vector<distance> location_distances
        std::vector<relation> relations;
        std::vector<drug> drugs;
        std::vector<size_t> need_count;
   //     std::vector<category> prods;

        std::vector<double> weigths;
        
        std::string metric_name;
        
        double metric( std::pair<double,double> loc_A, std::pair<double,double> loc_B, std::string metric_name );

        double time;
        int sum;
        double time_money;
        
}