#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  	vector<int> a_1(3);
  	vector<int> a_2(3);
  	vector<int> a_3(3);
  	vector<int> ans_1{0,0,0};
  	vector<int> ans_2{0,0,0};
  	vector<int> ans_3{0,0,0};
    int n;
    rep(i, 3) {
        cin >> a_1[i];
//        cout << a_1[i]; cout << " ";
    }
//    cout << endl;
    rep(i, 3) {
        cin >> a_2[i];
//        cout << a_2[i]; cout << " ";
    }
//    cout << endl;
    rep(i, 3) {
        cin >> a_3[i];
//        cout << a_3[i]; cout << " ";
    }
//    cout << endl;
    cin >> n;
//    cout << n << endl;
  	vector<int> b(n);
    rep(i, n) {
        cin >> b[i];
//        cout << b[i] << endl;
    }
    rep(i, n){
        for (int x = 0; x < 3; x++) {
            if(b[i] == a_1[x]){
                ans_1[x] = 1;
            }            
        }
        for (int x = 0; x < 3; x++) {
            if(b[i] == a_2[x]){
                ans_2[x] = 1;
            }
        }
        for (int x = 0; x < 3; x++) {
            if(b[i] == a_3[x]){
                ans_3[x] = 1;
            }
        }
    }
/*
    rep(i, 3){
        cout << ans_1[i];
    }
    cout << endl;
    rep(i, 3){
        cout << ans_2[i];
    }
    cout << endl;
    rep(i, 3){
        cout << ans_3[i];
    }
    cout << endl;
*/
    if( (ans_1[0] == 1 && ans_1[1] == 1 && ans_1[2] == 1)
        || (ans_2[0] == 1 && ans_2[1] == 1 && ans_2[2] == 1)
        || (ans_3[0] == 1 && ans_3[1] == 1 && ans_3[2] == 1)
        || (ans_1[0] == 1 && ans_2[0] == 1 && ans_3[0] == 1)
        || (ans_1[1] == 1 && ans_2[1] == 1 && ans_3[1] == 1)
        || (ans_1[2] == 1 && ans_2[2] == 1 && ans_3[2] == 1)
        || (ans_1[0] == 1 && ans_2[1] == 1 && ans_3[2] == 1)
        || (ans_1[2] == 1 && ans_2[1] == 1 && ans_3[0] == 1)
        ){
            cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}