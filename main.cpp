#include <iostream>
#include <fstream>
using namespace std;

int main()
{   cout<<"#############   Store password   ##############"<<endl;
    char s[20];
    string h;
    int x;
    while(1){
    cout<<"Press 1 for writing in the file:: \nPress 2 for reading the file:: \nPress 3 for deleting the file:: \nPress any other key for exit"<<endl;

    cin>>x;
   if(x==1){
            cout<<"writing in the file"<<endl;
            cout<<"File name(.txt must at end)"<<endl;
            cin>>s;
            cout<<"file opened  ____________________________"<<endl;
            cin>>h;
    ofstream file1(s,ios::app);
    file1<<h;
    file1.close();
    cout<<"file saved and closed ^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<endl;
    cout<<endl;
    }
    else if(x==2){
        cout<<"reading from the file ||||||||||||||||||||||||||||||||"<<endl;
        cout<<"file name"<<endl;
        cin>>s;
        ifstream file1;
        file1.open(s);
        if(file1){
        file1>>h;
        file1.close();
        cout<<h<<endl;
        cout<<endl;
        cout<<endl;}
        else{cout<<"file not exist****************************************"<<endl;
        cout<<endl;
        cout<<endl;

        }
    }
    else if(x==3){
        cout<<"deleting the file >>>>>>>>>>>>>>>"<<endl;
        cout<<"Enter file name"<<endl;
        cin>>s;
        ifstream file1;
        file1.open(s);
        if(file1.is_open()){ file1.close();
        remove(s);
        cout<<"-------------------------deleted"<<endl;
        cout<<endl;
        cout<<endl;
        }
        else{cout<<"file not exist****************************************"<<endl;
        cout<<endl;
        cout<<endl;}
        }
        else{
            cout<<"exit!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
            cout<<endl;
            cout<<endl;
            break;

        }}
        cout<<"Thank You!"<<endl;
        cout<<endl;
        cout<<endl;

    return 0;
}
