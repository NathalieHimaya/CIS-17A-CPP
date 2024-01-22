#include <iostream>
using namespace std;

int main ()
{
  double itemcost, paidamount, change;

  //Questions to the User
  cout << "How much does the item cost: ";
  cin >> itemcost; //How Much does it cost
  cout << "How much was paid: ";
  cin >> paidamount; // How much was paid

  //Calculations
  int dollars, quarters, dimes, nickles, pennies;
  const float quarter_value = 0.25, dime_value = .10, nickle_value = .05, penny_value = 0.01;
 
  change = paidamount - itemcost;      // Total Change
  cout << "The total change is $" << change << endl;
  dollars = paidamount - itemcost;     // Dollars to Return
  cout << "The total dollars to return is: " << dollars << endl;

  dollars = change; // remove decimals, change turns into int
  change = change - dollars;  // ex: .55 = 3.55 - 3    

  // Quarters to Return
  quarters = change/quarter_value; 
  cout << "The total quarters to return is: "<< quarters << endl;
  
  // Dimes to Return
  change = change - (quarters * quarter_value);
  dimes = (change/dime_value);        
  cout << "The total dimes to return is: " << dimes << endl;

  // Nickles to Return
  change = change - (dimes * dime_value);
  nickles = change/nickle_value;     
  cout << "The total nickles to return is: " << nickles << endl;

  // Pennies to Return
  change = change - (nickles * nickle_value);
  pennies = change/penny_value;      
  cout << "The total pennies to return is: " << pennies << endl;
  
  return 0;
}
