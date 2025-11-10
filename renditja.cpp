// Kodi qe eshte ne komente ka nje gabim logjiks
// #include<iostream>
// using namespace std;
// int main(){
//     const int n=6;
//     int vargu[n]={5,9,-1,6,2,0};
//     int zbrazte;
//     for(int i=0;i<n-1;i++){
//         int min=vargu[i];
//         int imin=i;
//         for(int j=i+1;j<n;j++){
//             if(vargu[j]<min){
//                 min=vargu[j];
//                 imin=j;
//             }
//         }
//         zbrazte=vargu[i];
//         vargu[i]=vargu[imin];
//         vargu[imin]=zbrazte;
//         i++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<vargu[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    const int n = 6;
    int vargu[n] = {5, 9, -1, 6, 2, 0};
    int zbrazte;
    for (int i = 0; i < n - 1; i++)
    {
        int min = vargu[i];
        int imin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vargu[j] < min)
            {
                min = vargu[j];
                imin = j;
            }
        }
        zbrazte = vargu[i];
        vargu[i] = vargu[imin];
        vargu[imin] = zbrazte;
    }
    for (int i = 0; i < n; i++)
    {
        cout << vargu[i] << " ";
    }
    cout << endl;

    return 0;
}