#include<bits/stdc++.h>
using namespace std;

int main(){

  int nis;
  cout<<"Number of input symbols :";
  cin>>nis;
  cout<<endl;

  cout<<"Input symbols :";
  vector<char> input_Symbols(nis);
  unordered_map<char,int> mp;
  for(int i=0;i<nis;i++){
    cin>>input_Symbols[i];
    mp[input_Symbols[i]]=i;
  }
  cout<<endl;

  int ns;
  cout<<"Enter number of states :";
  cin>>ns;
  cout<<endl;

  int initial_state; 
  cout<<"Initial state :";
  cin>>initial_state;
   cout<<endl;

  int nas;
  cout<<"Number of accepting states :";
  cin>>nas;
  cout<<endl;

  vector<int> Accepting_states(nas);
  cout<<"Accepting states :";
  for(int i=0;i<nas;i++){
    cin>>Accepting_states[i];
  }
  cout<<endl;

  cout<<"Transition table :"<<endl;
  vector<vector<int>> table(ns,vector<int>(nis));

  for(int i=0;i<ns;i++){
    for(int j=0;j<nis;j++){
      cout<<i+1<<" to "<< input_Symbols[j]<<" :";
      cin>>table[i][j];
    }
  }

  string input;
  cout<<endl<<endl<<"Input string :";
  cin>>input;

  int current_state=initial_state;
  for(int i=0;i<input.length();i++){
      current_state=table[current_state-1][mp[input[i]]];
  }

  for(int i=0;i<nas;i++){
    if(current_state==Accepting_states[i]){ 
      cout<<endl<<"Valid string"<<endl;
      return 0;
    }
  }

  cout<<endl<<"Invalid string"<<endl;
  return 0;
}