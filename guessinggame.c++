#include <iostream>
using namespace std;
int main()
{
    int secretnum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    while (secretnum != guess  && !outOfGuesses)
    {
        if (guessCount < guessLimit){
                cout<<"Enter guess: ";
                cin>>guess;
                guessCount++;
        }
        else{
            outOfGuesses = true;
        }
    }
    if (outOfGuesses){
    cout<<"You lose!"<<endl;
    }
    else
    {
        cout<<"You win!"<<endl;
    }
    
}