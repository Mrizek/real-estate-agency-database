// Name : Mohamed Mrizek Id : 40234343
#include "realestateManager.h"
#include <iostream>
#include "Date.h"
#include "House.h"
#include "realestateAgent.h"
using namespace std;
int main()
{	// creating a manager object
	realestateManager the_manager;
	// creating three agents objects
	realestateAgent Joseph(84549, "Joseph ", Date(3,12,2003));
	realestateAgent Ariane(95247, "Ariane ", Date(8, 20, 2004));
	realestateAgent Abdullah(32584, "Abdullah", Date(3, 30, 2010));
	//inserting them in the agent array of the manager class
	the_manager.insertAgent(Joseph);
	the_manager.insertAgent(Ariane);
	the_manager.insertAgent(Abdullah);
	// creating 6 houses objects
	House House_1(0, "Michael", "8548 Lawrence Ave", "Las Vegas", 5, 500000, Date(5,25,2023), Joseph.getemployee_id());
	House House_2(1, "John", "7864 Brooklyn Ave", "Hollywood", 3, 1000000, Date(1, 22, 2023), Joseph.getemployee_id());
	House House_3(2, "Lea", "1146 Rainbow Drive", "Columbiana", 4, 500000, Date(2, 22, 2020), Ariane.getemployee_id());
	House House_4(3, "Gabriel", "839 Romano Street", "Cambridge", 5, 800000, Date(2,5,2023 ), Ariane.getemployee_id());
	House House_5(4, "Joelle", "4528 Buena Vista Avenue", "La Grande", 2, 150000, Date(1, 13, 2022), Abdullah.getemployee_id());
	House House_6(5, "Georges", "4824 Roane Avenue", "Gaithersburg", 5, 527000, Date(5, 25, 2023), Abdullah.getemployee_id());
	//inserting them in the houses array of the manager class
	the_manager.inserthouse(House_1);
	the_manager.inserthouse(House_2);
	the_manager.inserthouse(House_3);
	the_manager.inserthouse(House_4);
	the_manager.inserthouse(House_5);
	the_manager.inserthouse(House_6);
	//Testing the multiple functions created in the manager class
	the_manager.printAllHouse(500000);
	the_manager.soldHouse(0, 450000, Date(3, 26, 2024));
	the_manager.soldHouse(5, 500000, Date(2, 20, 2024));
	the_manager.printHouse(5);
	the_manager.printHouse("La Grande");
	the_manager.printHouse(Ariane);
	the_manager.printSoldHouse(Joseph);
	the_manager.printAgents();
	the_manager.~realestateManager();
}

