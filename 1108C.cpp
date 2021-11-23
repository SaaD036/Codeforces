#include <bits/stdc++.h>

using namespace std;

int changeCount(char* a, char* b, int n){
    int change=0;

    for(int i=0; i<n; i++){
        if(a[i] != b[i%3]){
            change++;
        }
    }

    return change;
}

void paint(char* a, char* b, int n){
    for(int i=0; i<n; i++){
        a[i] = b[i%3];
    }
}

int main(){
    int n, change=200001;
    cin>>n;
    char a[n], b[n];
    cin>>a;

    if(changeCount(a, "RGB", n) < change){
        paint(b, "RGB", n);
        change = changeCount(a, "RGB", n);
    }

    if(changeCount(a, "RBG", n) < change){
        paint(b, "RBG", n);
        change = changeCount(a, "RBG", n);
    }

    if(changeCount(a, "GRB", n) < change){
        paint(b, "GRB", n);
        change = changeCount(a, "GRB", n);
    }

    if(changeCount(a, "GBR", n) < change){
        paint(b, "GBR", n);
        change = changeCount(a, "GBR", n);
    }

    if(changeCount(a, "BRG", n) < change){
        paint(b, "BRG", n);
        change = changeCount(a, "BRG", n);
    }

    if(changeCount(a, "BGR", n) < change){
        paint(b, "BGR", n);
        change = changeCount(a, "BGR", n);
    }

    b[n] = NULL;

    cout<<change<<endl<<b;

    return 0;
}
