#include <iostream>

using namespace std;

int main()
{
    int plants[] = {1,4};
    int sp[] = {1,4};
    int a,b;
    int size = sizeof(sp)/sizeof(sp[0]);
    for(int i=0;i<size;i++){
        if(i==0){
            a = plants[0];
            b = sp[i];
        }else if(i==length(sp)-1){
            b = plants[length(plants)-1];
        }else {
            b = sp[i];
            a = sp[i-1];
        }
        if (min < b-a){
            min = b-a;
        }
    }

    return min/2;
}
