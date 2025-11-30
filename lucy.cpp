#include <iostream>
# include<string>
using namespace std;

class myneighbour {
public:
    string name;
    string hobby;
    string status;
    string religion;
};
int main() {
    myneighbour neighbour;

    neighbour.name="stacy kadzo";
    neighbour.hobby="drawing";
    neighbour.status="";
    neighbour.religion="christian";
    
    cout << neighbour.name << " likes " << neighbour.hobby << " drawing " << endl;
    cout <<  neighbour.name << " is " << neighbour.status << " single " <<endl;
    cout << neighbour.name << " is a " << neighbour.religion << endl;

    return 0;
}