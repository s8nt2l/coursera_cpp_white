#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, vector<string>> bus_for_stop;
    map<string, vector<string>> stop_for_bus;
    string cmd;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "NEW_BUS"){
            string bus;
            int stop_count;
            cin >> bus >> stop_count;
            stop_for_bus[bus].resize(stop_count);            
            for(auto& c : stop_for_bus[bus]){
                cin >> c;
                bus_for_stop[c].push_back(bus);
            }                                    
        }
        else if(cmd == "STOPS_FOR_BUS"){
            string bus;
            cin >> bus;
            if(stop_for_bus.find(bus) == stop_for_bus.end())
                cout << "No bus" << endl;
            else
                for(const auto& c : stop_for_bus[bus]){
                    cout << "Stop " << c << ": ";
                    if(bus_for_stop[c].size() == 1)
                        cout << "no interchange";
                    else
                        for(const auto& w : bus_for_stop[c])
                            if(w != bus)
                                cout << w << ' ';
                    cout << endl;
                }
        }
        else if(cmd == "BUSES_FOR_STOP"){
            string stop;
            cin >> stop;
            if(bus_for_stop.find(stop) == bus_for_stop.end())
                cout << "No stop" << endl;
            else{
                for(const auto& c : bus_for_stop[stop])
                    cout << c << ' ';
                cout << endl;
            }
        }
        else if(cmd == "ALL_BUSES"){
            if(stop_for_bus.size() == 0)
                cout << "No buses" << endl;
            else
                for(const auto& c : stop_for_bus){
                    cout << "Bus " << c.first << ": ";
                    for(const auto& w : c.second){
                        cout << w << ' ';
                    }
                    cout << endl;
                }
        }
    }
    system("pause");
    return 0;
}