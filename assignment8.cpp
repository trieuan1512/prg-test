#include <iostream>
using namespace std;
void nhaparray(int a[],int n){
    cout << "Elements of array: ";
    for (int i=0; i <n;i++){
        cin >> a[i];
    }
}

int checknumb (int a[],int n,int valuecheck){
    for (int i=0;i<n;i++){
        if (a[i]==valuecheck){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout << "Array length: ";
    cin >>n;
    int a[n];
    nhaparray(a, n);
    int count, repeatnumb[n],k=0;
    for (int i=0;i<n;i++){
        count =0;
        for (int j=0;j<n;j++){
            if (a[i]==a[j]){
                count++;
            }
        }
        if ((count!=1)&&(checknumb(repeatnumb,n,a[i])==0)){
            repeatnumb[k]=a[i];
            k++;
        }
    }
    for (int i=0;i<k;i++){
        cout <<"repeat numbers are: " <<repeatnumb[i];
    }
    return 0;
}
