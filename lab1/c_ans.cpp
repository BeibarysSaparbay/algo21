#include <iostream>
using namespace std;

const int MAX = 100000;
int a[MAX];

int main(){
    bool run = true;
    int size = 0;

    while(run){
        string command;
        cin >> command;
        
        if(command == "push_front"){
            int num;
            cin >> num;
            for(int i = 0; i < size; i++){
                a[i + 1] = a[i];
            }
            a[0] = num;
            size++;
            cout << "ok" << endl;
        }

        if(command == "push_back"){
            int num;
            cin >> num;
            a[size] = num;
            size++;
            cout << "ok" << endl;
        }

        if(command == "pop_front"){
            if(size == 0){cout << "error" << endl;}
            else{
                cout << a[0] << endl;
                for(int i = 1; i < size; i++){
                    a[i - 1] = a[i];
                }
                size--;
            }
        }

        if(command == "pop_back"){
            if(size == 0){cout << "error" << endl;}
            else{cout << a[size - 1] << endl; a[size - 1] = 0; size--;}
        }

        if(command == "front"){
            if(size == 0){cout << "error" << endl;}
            else{cout << a[0] << endl;}
        }

        if(command == "back"){
            if(size == 0){cout << "error" << endl;}
            else{cout << a[size - 1] << endl;}
        }

        if(command == "size"){
            cout << size << endl;
        }

        if(command == "clear"){
            for(int i = 0; i < size; i ++){
                a[i] = 0;
            }
            size = 0;
            cout << "ok" << endl;
        }

        if(command == "exit"){
            cout << "bye" << endl;
            run = false;
        }
    }
    return 0;
}
