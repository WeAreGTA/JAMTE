#include <iostream>
#include <fstream>
#include <string>
#include <vector>



using namespace std;


vector<string> commands = {"READ", "WRITE", "APPEND"};


string Choice(){
    string choice;
    cout << "ENTER FILE TO TOUCH (eg. file.txt) >> ";
    cin >> choice;
    cout << endl;
    return choice;
}

void Write(ofstream& writer){
    string text;
    cout << "MODE: WRITE MODE" << endl;
    cout << "TYPE 'exit' TO SAVE AND EXIT!" << endl;
    do{
        
        cout << ">> ";
        getline(cin >> ws, text);
        if(text == "exit") break;
        writer << text;
        writer << '\n';
        cout << endl;
    }while(text != "exit");
    writer.close();
}

void Read(ifstream& reader){
    string text;
    string line;
    do{
        cout << "MODE: READ MODE" << endl;
        cout << "TYPE 'exit' TO EXIT!"  << endl;
        cout << endl;
        while(getline(reader, line)){
            cout << line << endl;
        }
        cout << endl;
        cout << "DO >> ";
        cin >> text;
    }while(text != "exit");
    reader.close();
}

void CommandParser(string Choice){
    int size = commands.size();
    string command;

    do{
        
        cout << "JAMTE" << endl;
        cout << "Just a Minimal Text Editor" << endl;
        cout << "'exit' to EXIT!" << endl;
        for(int counter = 0; counter < size; counter++){
            cout << commands[counter] << endl;
        }
        cout << endl;
        cout << "DO >> ";
        cin >> command;
        if(command == "read" || command == "READ"){
            ifstream reader(Choice);
            Read(reader);
        }else if(command == "write" || command == "WRITE"){
            ofstream writer(Choice);
            Write(writer);
        }else if(command == "append" || command == "APPEND"){
            ofstream writer(Choice, ios::app);
            Write(writer);
        }else{
            cout << "BYE!!" << endl;
        }
      }while(command != "exit");
}
    


int main(){
    string filename = Choice();
    CommandParser(filename);
}
