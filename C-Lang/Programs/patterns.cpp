#include<iostream>
using namespace std;
void pattern1(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern2(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern3(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern4(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
void pattern5(int N){
    for(int i=N;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern6(int N){
    for(int i=N;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
void pattern7(int N){
    for(int i=1;i<=N;i++){
       // Spaces 
            for(int j=0;j<N-i;j++){
                cout<<" ";
            }
       // Stars
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
       // Spaces
            for(int j=0;j<N-i;j++){
                cout<<" ";
            }
        cout<<"\n";
    }
}
void pattern8(int N){
    for(int i=0;i<N;i++){
       // Spaces 
            for(int j=0;j<i;j++){
                cout<<" ";
            }
       // Stars
            for(int j=1;j<=2*(N-i)-1;j++){
                cout<<"*";
            }
       // Spaces
            for(int j=0;j<i;j++){
                cout<<" ";
            }
        cout<<"\n";
    }
}
void pattern9(int N){

    pattern7(N);
    pattern8(N);
}
void pattern10(int N){
    for(int i=1;i<2*N-1;i++){
        int stars= (i<=N)? i : 2*N-i;
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern11(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<(int)((i+j)%2 == 0)<<" ";           
        }
        cout<<"\n";
    }
}
void pattern12(int N){
    for(int i=0;i<N;i++){
        // Numbers
            for(int j=1;j<=i+1;j++){
                cout<<j<<"";
            }
        // Spaces
            for(int j=0;j<2*(N-i-1);j++){
                cout<<" ";
            }
        // Numbers
            for(int j=i+1;j>=1;j--){
                cout<<j<<"";
            }
        cout<<"\n";
    }
}
void pattern13(int N){
    int num=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<"\n";
    }
}
void pattern14(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<=('A'+i);ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern15(int N){
    for(int i=N;i>0;i--){
        for(char ch='A';ch<=('A'+i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}
void pattern16(int N){
    char chr='A';
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<chr<<" ";
        }
        chr++;
        cout<<"\n";
    }
}
void pattern17(int N){
    char chr='A';
    for(int i=0;i<N;i++){
       // Spaces
            for(int j=0;j<(N-i);j++){
                cout<<"  ";
            }
       // Letters
            for(int j=1;j<=2*i+1;j++){
                if(j<=i+1){
                    cout<<j<<" ";
                }
                else{
                    cout<<(j%i)+1<<" ";
                }
            }
       // Spaces
            for(int j=0;j<(N-i);j++){
                cout<<"  ";
            }
        cout<<"\n";
    }
}
void pattern18(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            cout << "  ";
        }

        for (char j = 'A'; j <= 'A' + i; j++) {
            cout << j << " ";
        }

        for (char j = 'A' + i - 1; j >= 'A'; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern19(int N) {
    for (char i = 'A'+N-1; i >= 'A'; i--) {
        for (char j = i ; j <= 'A'+N-1 ; j++) {
            cout <<j;
        }
        cout << endl;
    }
}
// void pattern20(int N) {
//     for (char i = 'A'+N-1; i >= 'A'; i--) {
//         for (char j = i ; j <= 'A'+N-1 ; j++) {
//             cout <<j;
//         }
//         cout << endl;
//     }
// }
int main(){
    int num=5;
    pattern19(num);
    return 0;
}