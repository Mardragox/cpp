
#include <iostream>

    using namespace std;
    
    void cztery(){
        
         srand(time(NULL));
        int tab[80];

        for(int i;i<80;i++){
            
            tab[i]=(rand()%100)+1;
            
        }
        for(int j;j<80;j++){
            
            if(tab[j]>=10 && tab[j]<=50){
            cout<<tab[j]<<" ";
            }
            else{
                
            }
            
        }
        
    }

int main()
{
        cztery();

    return 0;
}