#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
    int guess;
    int steps=0;
    int other=0;
    int choice;

    srand(time(0));
    int number=rand()%100+1;

    cout<<"\nGUESSING GAME...........................!"<<endl<<endl;
    cout<<"1.LOW LEVEL (TEN CHANSES YOU HAVE)"<<endl;
    cout<<"2.MEDIUM LEVEL (SEVEN CHANSES YOU HAVE)"<<endl;
    cout<<"3.HIGH LEVEL (FIVE CHANSES YOU HAVE)"<<endl<<endl;

    cout<<"enter your choice"<<endl;
    cin>>choice;

    cout<<"\nLETS PLAY THE GAME....."<<endl;

    switch(choice)
    {
        case 1:

    {
        cout<<"\nguess the number"<<endl;
        int remain=10;
    
        do{
        cin>>guess;
        if(guess>number)
        {
            cout<<"lower number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else if(guess<number)
        {
            cout<<"upper number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else{
            cout<<"............................................!"<<endl;
            cout<<"You Guessed It Number In "<<steps+1<<" Chance"<<endl;
            other++;
        }
        steps++;
        remain--;
    
        } while(steps!=10);
    
        if(other==0)
          {
            cout<<"............................................!"<<endl;
            cout<<"Your Chances Is Over / Better Luck Next Time "<<endl;
          }
      
    }
    break;

    case 2:
    {
        cout<<"\nguess the number"<<endl;
        int remain=7;
    
        do{
    
        cin>>guess;
        if(guess>number)
        {
            cout<<"lower number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else if(guess<number)
        {
            cout<<"upper number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else{
            cout<<"............................................!"<<endl;
            cout<<"You Guessed It Number In "<<steps+1<<" Chance"<<endl;
            other++;
        }
        steps++;
        remain--;
    
        } while(steps!=7);
    
        if(other==0)
          {
              cout<<"............................................!"<<endl;
            cout<<"Your Chances Is Over / Better Luck Next Time "<<endl;
          }
      
    }
    break;

    case 3:
    {
        cout<<"\nguess the number"<<endl;
        int remain=5;
    
        do{
    
        cin>>guess;
        if(guess>number)
        {
            cout<<"lower number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else if(guess<number)
        {
            cout<<"upper number plz"<<"\t";
            cout<<"Remaining Chances = "<<remain-1<<endl;
        }
        else{
            cout<<"............................................!"<<endl;
            cout<<"You Guessed It Number In "<<steps+1<<" Chance"<<endl;
            other++;
        }
        steps++;
        remain--;
    
        } while(steps!=5);
    
        if(other==0)
          {
             cout<<"............................................!"<<endl;
            cout<<"Your Chances Is Over / Better Luck Next Time "<<endl;
          }
      
    }
    break;

    default :
      cout<<".............................................!"<<endl;
      cout<<"Invalid Choice..."<<endl;
    break;

    }

    
return 0;
}