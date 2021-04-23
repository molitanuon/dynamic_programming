

#include "maxdefense.hh"
#include "timer.hh"
#include <string>

using namespace std;


int main()
{
	const double cost = 500;
	int n = 70;
	auto armors = load_armor_database("armor.csv");
	auto filtered_vec = filter_armor_vector(*armors, 1, cost,n);
	Timer timer;
	//change which function to call to experiment

	dynamic_max_defense(*filtered_vec, cost);
	//exhaustive_max_defense(*filtered_vec,cost);
	double elapsed = timer.elapsed();

	cout << "elapsed time = " << elapsed << " seconds" << endl;
	return 0;
}
