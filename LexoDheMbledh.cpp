#include<iostream>
int lexoDheMbledh(int a, int b);
int main(){
    int a=5,b=7;
    std::cout<<"Shuma e numrave qe jane me te vegjel se "<<b<<" eshte: "
        <<lexoDheMbledh(a,b)<<std::endl;
    return 0;
}
int lexoDheMbledh(int a, int b){
    int shuma=0;
    int i=1;
    do{
        int numri;
        std::cout<<"Jepe nje numer: ";
        std::cin>>numri;
        if(numri<b){
            shuma+=numri;
            i++;
        }
    }while(i<=a);
    return shuma;
}