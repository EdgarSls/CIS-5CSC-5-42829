#include <cstdlib>
#include <iostream>

using namespace std;

 

int main()

{

    char playerOne;

    char playerTwo;

     

    cout << "Player 1: Enter R for rock, P for paper, or S for scissors: " << endl;

    cin >> playerOne;

     

    cout << "Player 2: Enter R for rock, P for paper, or S for scissors: " << endl;

    cin >> playerTwo;

     

    if (playerOne == 'r' || playerOne == 'R')

    {

            if  (playerTwo == 'r' || playerTwo == 'R')  {

            cout << "Tie" << endl; }

    }

    else if (playerOne == 'p' || playerOne == 'P')

    {

        if  (playerTwo == 'p' || playerTwo == 'P')

        {

            cout << "Tie" << endl;

        }

    }

    else if (playerOne == 's' || playerOne == 'S')

    {

    if  (playerTwo == 's' || playerTwo == 'S')

    {

    cout << "Tie" << endl; 

    }

     

    }

    else if (playerOne == 'p' || playerOne == 'P') 

    {

        if (playerTwo == 'r' || playerTwo == 'R')

        {

            cout << "Player 1 wins" << endl;

        }

 

    }

    else if (playerOne == 'r' || playerOne == 'R')

    {

    if (playerTwo == 'p' || playerTwo == 'P')

    {

        cout << "Player 2 wins" << endl;

    }  

    }

    else if (playerOne == 'p' || playerOne == 'P')

    {

    if (playerTwo == 's' || playerTwo == 'S')

    {

    cout << "Player 2 wins" << endl;   

    }  

    }

    else if (playerOne == 's' || playerOne == 'S')

    {

        if (playerTwo == 'p' || playerTwo == 'P')

        {

                cout << "Player 1 wins" << endl;

        }

    }

    else if (playerOne == 'r' || playerOne == 'R')

    {

    if  (playerTwo == 's' || playerTwo == 'S')

    {

    cout << "Player 1 wins" << endl;   

    }  

    }

    else if (playerOne == 's' || playerOne == 'S')

    {

    if (playerTwo == 'r' || playerTwo == 'R')

    {

        cout << "Player 2 wins" << endl;

    }  

    }

    else

    {

        cout << "Game canceled because of invalid entry." << endl;

    }

    return 0;

    ;

}  
