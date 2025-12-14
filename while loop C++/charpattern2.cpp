/*  A A A
    B B B
    C C C  */
    #include <iostream>
    using namespace std;
    
    int main(){
        int n=3;
        int i=1;
        while(i<=n){
            int j=1;
            char ch='A'+i-1;
            while(j<=n){
                cout<< ch << " ";
                j++;
            }
            cout<<endl;
            i++;
        }
        return 0;
    } 