/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Dailycalintake
{
    public:int height, weight, age, BMR;
           char g;
        
    public: int dailycalintake(int height,int weight,int age,char g)
            {
                if(g=='F' || g=='f')
                {
                    BMR=655.1+(9.563*weight)+(1.850*height)-(4.676*age);   
                }
                else if(g=='M' || g=='m')
                {
                    BMR=66.47+(13.75*weight)+(5.003*height)-(6.755*age);   
                }
                return BMR;
            }
};

int main()
{
    int height, weight, age, BMR;
           char g;
    cout<<"Enter your height(in cms) : ";
    cin>>height;
    cout<<"Enter your weight(in kg) : ";
    cin>>weight;
    cout<<"Enter your age(in years) : ";
    cin>>age;
    cout<<"Enter your gender(F for female and M for male): ";
    cin>>g;
    Dailycalintake D1;
    int I= D1.dailycalintake(height,weight,age,g);
    
    int s=0,qty;
   int c;
    cout<<"Choose What you ate in breakfast:\n1.Poha 2.Oats 3.soup 4.omlette 5.boiled egg: ";
    cin>>c;
    switch(c)
    {
        case 1 :cout<<"How many plates poha you've had:";
                cin>>qty;
                s+=qty*180;
                    break;
        case 2 :cout<<"How many plates upma you've had:";
                cin>>qty;
                s+=qty*192;
                break;
        case 3 :cout<<"How many bowls of oats you've had :";
                cin>>qty;
                s+=qty*307;
                break;
        case 4 :cout<<"How many omlettes you had(enter no of eggs in omlette) :";
                cin>>qty;
                s+=qty*154;
                break;
        case 5 :cout<<"How many boiled egg you had :";
                cin>>qty;
                s+=qty*77;
                break;
        
    }
    cout<<"what snacks you had :\n1.sandwich 2.samosa 3.idli 4.dosa 5.biscuits 6.chips : ";
    cin>>c;
    switch(c)
    {
        case 1 :cout<<"How many sandwiches you've had : ";
                cin>>qty;
                s+=qty*252;
                 break;
        case 2 :cout<<"How many samosas you've had : ";
                cin>>qty;
                s+=qty*209;
                break;
        case 3 :cout<<"How many idli's you've had : ";
                cin>>qty;
                s+=qty*60;
                break;
        case 4 :cout<<"How many dosa you had : ";
                cin>>qty;
                s+=qty*133;
                break;
        case 5 :cout<<"How many biscuits you had :";
                cin>>qty;
                s+=qty*50;
                break;
        case 6 :cout<<"how many packets of chips you had:";
                cin>>qty;
                s+=qty*156;
    }
    cout<<"what you had in starters :\n1.papad 2.masala papad 3.pickle : ";
    cin>>c;
    switch(c)
    {
        case 1 :cout<<"How many papads : ";
                cin>>qty;
                s+=qty*12;
                break;
        case 2 :cout<<"How many masala papad : ";
                cin>>qty;
                s=s+qty*38;
                break;
        case 3 :cout<<"How many spoons spoon pickle :";
                cin>>qty;
                s+=qty*60;
                break;
    }
    cout<<"which bread you had:\n1.roti 2.naan 3.paratha 4.puri 5.aloo paratha :";
    cin>>c;
    switch(c)
    {
        case 1 : cout<<"How many rotis : ";
                cin>>qty;
                s+=qty*70;
                break;
        case 2 : cout<<"How many naan : ";
                cin>>qty;
                s+=qty*101;
                break;
        case 3 : cout<<"How many paratha : ";
                cin>>qty;
                s+=qty*121;
                break;
        case 4 : cout<<"How many puri : ";
                cin>>qty;
                s+=qty*78;
                break;
        case 5 : cout<<"How many aloo parathas : ";
                cin>>qty;
                s+=qty*210;
                break;
    }
    cout<<"how many bowls of rice you ate : ";
    cin>>qty;
    s+=qty*136;
    cout<<"how many bowels of dal you had : ";
    cin>>qty;
    s+=qty*104;
    cout<<"how many bowls of curd you ate : ";
    cin>>qty;
    s+=qty*50;
   cout<<"What fruits you ate :\n1.orange 2.apple 3.banana : ";
   cin>>c;
   switch(c)
   {
       case 1: cout<<"No. of oranges:";
              cin>>qty;
              s+=qty*55;
              break;
        case 2: cout<<"No. of apples";
                cin>>qty;
                s+=qty*62;
                break;
        case 3: cout<<"No. of bananas :";
                cin>>qty;
                s+=qty*110;
                break;
   }
   cout<<"What drinks you drank:\n 1.milk 2.black or green tea 3.milk tea 4.fruit juice :";
   cin>>c;
   switch(c)
   {
       case 1: cout<<"How many glasses of milk: ";
              cin>>qty;
              s+=qty*42;
              break;
        case 2: cout<<"How many cups : ";
               cin>>qty;
               s+=qty*10;
               break;
        case 3: cout<<"How may cups of tea: ";
                cin>>qty;
                s+=qty*45;
                break;
        case 4: cout<<"How many glasses of juice: ";
                cin>>qty;
                s+=qty*100;
                break;
   }
   cout<<I<<" :-calories you are needed to take daily\n";
   cout<<s<<" :-calories you took\n";
   int k=I-s;
   if(k>0)
       cout<<k<<" :-calories are needed";
    if(k<0)
       cout<<k<<" :-calories are needed to be lost";
   
    return 0;
}




