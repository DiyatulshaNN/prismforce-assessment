#include <bits/stdc++.h>
using namespace std;

bool solve( vector<int> &arr, int p, int a, int b){
    if(a>=11) //Base case if Abhimanyu has enough skips to pass all the circles
    return true;
    int cur_p=p, skp=a,enrg=b;
    for(int i=0;i<11;i++){
        //k3 and k7 power regerate case
        if(i==3||i==7){
           arr[i]+=(arr[i-1]/2);
        }
        //If Abhimanyu has less power than enemy
        if(cur_p<arr[i]){
            //If Abhimanyu can recharge 
          if(cur_p!=p&&p>=arr[i]&&enrg>0){
              enrg--;
              cur_p=p;
              cur_p-=arr[i];
          }
              //if abhimanyu can skip
          else if(skp>0){
              skp--;
          }
              //If Abhimanyu cannot defeat
          else{
            return false;
          }
        }
            //If Abhimanyu has more power than the enemy
        else{
           cur_p-=arr[i];
        }
        
    }
    return true;
}
int main() {
    
    vector<int>arr1 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    int p1 = 10, a1 = 10, b1 = 0;
    cout  << (solve(arr1,p1,a1,b1) ? "yes" : "No") << endl;
   vector<int> arr2 = {50, 40, 30, 20, 50, 60, 70, 80, 90, 100, 110}; 
    int p2 = 60;  
    int a2 = 2;   
    int b2 = 3;   
    cout  << (solve(arr2,p2,a2,b2) ? "yes" : "No") << endl;

    

    return 0;
}
// Time Complexity: O(1)
//Space Complexity: O(1)
