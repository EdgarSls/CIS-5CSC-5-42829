/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Calculate nasa + military budgets
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float nasabgt = 19e9,  //nasabudget www.universetoday.com/127309/nasa-2017-budget/      
          mltybgt = 583e9, //military budgethttp://www.slate.com/articles/news_and_politics/war_stories/2016/02/president_obama_s_military_budget_is_still_one_of_the_biggest_ever.html
          ttlfb = 3.8e12, //www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
          nasaprt, // nasas percent of the budget
          mltyprt; // military percent of the budget
    // calculation for the military and nasa budget percentages  
    mltyprt = (mltybgt/ttlfb) *100;
    nasaprt = (nasabgt/ttlfb) *100;
    // display output to user
    cout<<"Nasas percent of the budget is ",
            cout<<nasaprt<<endl;
    cout<<"and the militarys is ",
            cout<<mltyprt<<endl;
    return 0;
            
}

