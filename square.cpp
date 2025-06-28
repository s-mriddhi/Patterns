#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}
void print22(int n) {
    for(int i=0;i<2*n-1;i++){//god level logic
        for (int j=0;j<2*n-1;j++){
           int top=i;
           int left=j;
           int bottom= (2*n-2)-i;
           int right= 2*n-2-j;
           cout<< n- min(min(right,left), min(top,bottom));
        }
        cout<< endl;
    }
}
int main(){
int n;
cin>> n;
print1(n);

return 0;
}
