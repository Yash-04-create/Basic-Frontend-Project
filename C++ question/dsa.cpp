#include<iostream>
#include<vector>
using namespace std;

struct cricket{
    int Player_ID;
    string name;
    int matches;
    int Scored_run;
    int wickets;
};

void input(vector<cricket> &nums, int n){
    for(int i;i<n;i++){
        cout<<"Enter Player Details"<<endl;
        cout << "Player ID: ";
        cin >> nums[i].Player_ID;

        cout << "Name: ";
        cin >> nums[i].name;

        cout << "Matches: ";
        cin >> nums[i].matches;

        cout << "Scored runs: ";
        cin >> nums[i].Scored_run;

        cout << "Wickets: ";
        cin >> nums[i].wickets;
    }
}
int main(){
    int n;
    cout<<"Enter the no of players data you want to enter"<<endl;
    cin>>n;
    vector<cricket> detail(n);
    input(detail,n);
    return 0;
}