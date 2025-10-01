#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float pesha;
    float gjatesia;
    float bmi;
    cout<<"Shkruaj peshen (ne kg): ";
    cin>>pesha;
    cout<<"Shkruaj gjatesine (ne metra): ";
    cin>>gjatesia;
    bmi=pesha/ /*pow(gjatesia,2)*/(gjatesia*gjatesia);
    cout<<"BMI-ja e juaj eshte: "<<bmi<<endl;
    return 0;
}