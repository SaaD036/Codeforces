#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], l=0, r=n-1, removed = 0, current = -1;
    bool right[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[r] < a[l]){
            if(a[r] > current){
                right[removed] = true;
                removed++;
                ///cout<<"r (right small) = "<<r<<endl;
                current = a[r];
                r--;
            }
            else if(a[r]<=current && a[l]>current){
                right[removed] = false;
                removed++;
                ///cout<<"l (right small) = "<<l<<endl;
                current = a[l];
                l++;
            }
            else{
                ///cout<<"(right small) "<<a[l]<<"  "<<a[r]<<"  "<<current<<endl;
                break;
            }
        }

        else if(a[l] < a[r]){
            if(a[l] > current){
                right[removed] = false;
                removed++;
                ///cout<<"l (left small) = "<<l<<endl;
                current = a[l];
                l++;
            }
            else if(a[l]<=current && a[r]>current){
                right[removed] = true;
                removed++;
                ///cout<<"r (left small) = "<<r<<endl;
                current = a[r];
                r--;
            }
            else{
                ///cout<<"(left small) "<<a[l]<<"  "<<a[r]<<"  "<<current<<endl;
                break;
            }
        }
        else{
            ///cout<<a[l]<<" : "<<a[r]<<endl;
            if(l==r){
                if(a[l] > current){
                    right[removed] = false;
                    removed++;
                }
                else{
                    //cout<<"l = r"<<endl;
                    break;
                }
            }
        }
    }

    cout<<removed<<endl;
    for(int i=0; i<removed; i++){
        if(right[i]){
            cout<<"R";
        }
        else{
            cout<<"L";
        }
    }

    return 0;
}
