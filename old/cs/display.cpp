#include "display.h"

void display::viewScientists(vector<scientists> &cs){
    service s;
    bool go = false;
    unsigned int cs_id;
    string name;
    bool gender;
    int yob;
    int yod;
    char choice;
    cout << endl;
    if(cs.size() == 0)
        cout << "No scientists stored!" << endl;
    else{
        vector<scientists> temp;
        for(unsigned int i = 0; i < cs.size(); i++){
            temp.push_back(cs[i]);
        }
        do{
            go = false;
            s.printScientists(temp);
            cout << "1. Sort by name\t\t2. Sort by gender\t3. Sort by year of birth" << endl;
            cout << "Enter choice: ";
            cin  >> choice;
            if(choice == '1'){
                vector<string> v;
                for(unsigned int i = 0; i < cs.size(); i++){
                    string tmp = cs[i].returnName();
                    tmp[0] = toupper(tmp[0]);
                    v.push_back(tmp);
                }
                sort(v.begin(), v.end());
                temp.erase(temp.begin(), temp.end());
                for(unsigned int i=0; i < v.size(); i++){
                    for(unsigned int j = 0; j < cs.size(); j++){
                        string tmp = cs[j].returnName();
                        tmp[0] = toupper(tmp[0]);
                        if(v[i] == tmp){
                            cs_id = cs[j].returnId();
                            name = cs[j].returnName();
                            gender = cs[j].returnGender();
                            yob = cs[j].returnYob();
                            yod = cs[j].returnYod();
                            scientists temp1(cs_id, name, gender, yob, yod);
                            temp.push_back(temp1);
                        }
                    }
                }
                v.erase(v.begin(), v.end());
                cout << endl;
                go = true;
            }
            else if(choice == '2'){
                bool swapped = false;
                do{
                    swapped = false;
                    for(unsigned int i = 1; i < temp.size(); i++){
                        if(temp[i-1].returnGender() && !temp[i].returnGender()){
                            swap(temp[i-1], temp[i]);
                            swapped = true;
                        }
                    }
                }while(swapped);
                cout << endl;
                go = true;
            }
            else if(choice == '3'){
                bool swapped = false;
                do{
                    swapped = false;
                    for(unsigned int i = 1; i < temp.size(); i++){
                        if(temp[i-1].returnYob() > temp[i].returnYob()){
                            swap(temp[i-1], temp[i]);
                            swapped = true;
                        }
                    }
                }while(swapped);
                cout << endl;
                go = true;
            }
        }while(go);
    }
}

void display::viewCombination(vector<scientists> &cs, vector<computers> &c){
    cout << "Function missing!" << endl;
}
