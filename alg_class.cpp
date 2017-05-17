#include "alg_class.h"

search_algorithm::search_algorithm( std::vector<drug> dr, std::vector<relation> rel, std::vector<distance> dist, std::vector<alg_drug> user_drugs ) //initialise algorithm;
{
    drugs = dr;
    relations = rel;
    distances = dist;
    time_money = user_drugs;
}

/*std::vector<alg_drugstore> search_algorithm::use_strategy( std::vector<alg_drug> need_drugs, std::pair<double,double> location )
{
    alg_type.get().use( need_drugs, location); //tak nelzya (mojno)
}

void search_algorithm::set_strategy()
    alg_type.reset( strategy_type );
}*/

void db::use( std::vector<alg_drug> need_drugs, std::pair<double,double> location )
{
    
    double R_current;
    double R_max;
    
    size_t iter_number;
    size_t count_of_drugs;
    size_t count_of_drugstores;
    std::vector<size_t> length;
    
    std::vector<int> index_drug;

    std::vector<relation> relation_matrix;
    
    count_of_drugs = need_drugs.size();
    count_of_drugstores = drugstores.size();
    
    length.resize( count_of_drugs );
    relation_matrix.resize( count_of_drugs * count_of_drugstores );
    
    for ( size_t i = 0; i < count_of_drugs; i++ )
    {
        length[i] = 0;
    }   
    
    
    for (size_t i,j = 0; i < relations.size(); i++)
    {
        if ( relations[i].get_drug_id() == need_drugs[j].get_drug_id() && relations[i].get_count >= need_drugs[j].get_count[j] )
        {
            relation_matrix[j * count_of_drugstores] = relations[i];
            length[j]++;
        }
        else if ( relations[i+1].get_drug_id() != need_drugs[j].get_drug_id() )
            {
                j++;
            }
    }
    
    
}