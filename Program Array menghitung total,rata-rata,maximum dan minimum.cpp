#include<iostream>
using namespace std;

int main(){;
int i,bil[13],Total ,Maximum,minimum;
float rata;

for(i=0; i<13; i++){
    cout<<"Masukan Data Ke : "<<i+1<<"=";
    cin>>bil[i];
}
cout<<"Seluruh Elemen array : \n";
Total=0;
minimum=bil[0];
Maximum=bil[0];
for(i=0;i<13;i++){
cout<<bil[1]<<endl;
Total=Total+bil[i];
if(bil[i]<minimum){
    minimum=bil[i];
}
    else if(bil[i]>Maximum){
        Maximum=bil[i];
    }
}
rata=Total/13;
cout<<"Jumlah Seluruh elemen Array          : "<<Total<<endl;
cout<<"Nilai Maximum Seluruh elemen Array   : "<<Maximum<<endl;
cout<<"Nilai Minimum Seluruh elemen Array   : "<<minimum<<endl;
cout<<"Nilai rata-rata seluruh elemen Array : "<<rata<<endl;

return 0;
}
