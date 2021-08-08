#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int u, int v, int w, int x){
    int temp = 0;
    int set[4] = {u, v, w, x};
    for(int i = 0; i < sizeof(set)/sizeof(set[0]); i++){
        if(set[i] > temp){
            cout << "the set element is: " << set[i] << endl;
            temp = set[i];
            cout << "the max number right now is: " << temp << endl; 
        }
    }
    
    return temp;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}