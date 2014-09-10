#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S; cin >> S;
    int len = S.size();
    for(int i = 0, j =1; i < len; i++, j++){
        if(S[i] == S[j] && i != j){
            S.erase(i,2);
            i = -1, j = 0;
        }
        if(S.empty()){
                break;
        }
    }
    if(S.empty())
        cout << "Possible\n";
    else
        cout << "Impossible\n";
}
