#include "alg_class.h"
#include <cmath>

search_algorithm::search_algorithm( std::vector<drug> dr, std::vector<relation> rel, std::vector<distance> dist, std::vector<double> w, double time_m, std::string metric) //initialise algorithm;
{
    drugs = dr;
    relations = rel;
    distances = dist;
    weigths = w;
    time_money = time_m;
    metric_name = metric;
}

double search_algorithm::metric( std::pair<double,double> loc_A, std::pair<double,double> loc_B )
{
    double res = 0;
    
    if ( metric_name == "euclidean" )
    {
        res = (loc_A.first - loc_B.first) * (loc_A.first - loc_B.first) + (loc_A.second - loc_B.second) * (loc_A.second - loc_B.second);
    }
    
    else if ( metric_name == "manhattan" )
    {
        res = std::fabs( loc_A.first - loc_B.first ) + std::fabs(loc_A.second - loc_B.second);
    }
    
    else throw std::runtime_error("wrong metric");
    
    return res;
}

std::vector<relations> search_algorithm::find_drugstores( std::vector<size_t> count, std::vector<drug> drugs, std::vector<distance> location_distances, std::pair<double,double> current_loc );
{
    
    double max_R = 0;
    double R = 0;
    
}