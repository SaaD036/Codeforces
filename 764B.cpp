#include <iostream>
using namespace std;

int main(){
int n, p;
cin>>n;
p = (n+1)/2;
long int a[n];

for(int i=0; i<n; i++){
cin>>a[i];
}

if(n%2==0){
int middle = (n-1)/2;

if(p%2==0){
for(int i=0, j=n-1; i<middle; i+=2,j-=2){
long int tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
else{
for(int i=0, j=n-1; i<=middle; i+=2,j-=2){
long int tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
}
else{
int middle = n/2;

for(int i=0, j=n-1; i<middle; i+=2, j-=2){
long int tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}

for(int i=0; i<n; i++){
cout<<a[i]<<" ";
}

return 0;
}