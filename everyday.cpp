#include <iostream>
#include <vector>
#include <set>
using namespace std;

void setMut(set<string>& s2, set<string>& s1){
    for(const auto& c : s2)
        s1.insert(c);
}

int main(){
    int position = 0;
    vector<int> mounths = {31, 32, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<vector<string>> days(31);
    int n;
    cin >> n;
    string cmd;
    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "ADD"){
            int arg1; 
            string arg2;
            cin >> arg1 >> arg2;
            days[arg1 - 1].push_back(arg2);
            for(const auto& c : days)
                for(const auto& w : c)
                    cout << w;
        }
        else if(cmd == "NEXT"){
            vector<vector<string>> temp_vector = days;
            if(mounths[++position] >= days.size()){
                temp_vector.resize(mounths[position]);
                //temp_vector.insert(end(temp_vector), begin(days) + mounths[position], end(days));
                cout << temp_vector.size();
            }
            //cout << position << endl;
            else{
                temp_vector.resize(mounths[position]);
                int len = days.size() - mounths[position];
                for(int i = days.size() - 1; i >= mounths[position]; i--)
                    temp_vector[temp_vector.size() - (i - mounths[position])].insert(end( temp_vector[temp_vector.size() - (i - mounths[position])]), begin(days[i]), end(days[i]));
            }
            //cout << temp_vector[temp_vector.size() - 1];
            for(const auto& c : temp_vector)
                for(const auto& w : c)
                    cout << w;
            days = temp_vector;
            temp_vector.clear();
        }
    }
    system("pause");
    return 0;
}
/*
add
*/