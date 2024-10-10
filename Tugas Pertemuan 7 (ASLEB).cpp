#include<iostream>
using namespace std;

int main(){
    int nilai[5];
    int nilaiasli[5];
    int x, i, n, index=-1;

    cout<<"Masukan Nilai"<<endl;
    for(i=0; i<5; i++){
        cout<<"Masukan Nilai Ke- "<< i+1 <<": ";
        cin>>nilai[i];
        nilaiasli[i]=nilai[i];
    }

    for(i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(nilai[i]<nilai[j]){
                x=nilai[i];
                nilai[i]=nilai[j];
                nilai[j]=x;
            }
        }
    }
    cout<<"Nilai tertinggi: "<<nilai[0]<<endl;
    cout<<endl;

    cout<<"Masukan angka untuk diperiksa: ";
    cin>>n;

    for(i=0; i<5; i++){
        if(nilaiasli[i] == n){
            index = i;
        }
    }

    if(index != -1){
        cout<<"Angka "<< n <<" ditemukan di indeks ke-"<<index+1<<endl;
    } else {
        cout<<"Angka "<< n <<" tidak ditemukan"<<endl;
    }
}
