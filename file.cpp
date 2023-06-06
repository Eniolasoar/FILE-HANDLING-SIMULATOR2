#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file_hand;

    cout << "\nWelcome to File Handling Simulator Using C++";
    cout << "\nChoose what operation you would like to perform:";
    cout << "\n1. Writing(w)";
    cout << "\n2. Appending";
    cout << "\n3. Reading(r)";

    int userInput;
    cout << "\nEnter response Here:";
    cin >> userInput;

    if (userInput == 1)
    {
        int userResponse;
        cout << "\nWriting is the process of adding content to a file.It operates in two forms:";
        cout << "\n\t1. Using write to create a file";
        cout << "\n\t2. Using write to overwrite an existing file \n";
        cout << "\nChoose an action to simulate:";

        cin >> userResponse;

       
           
            if (userResponse == 1)
            {
                cout << "\nNote first that you are trying to write to 'newfile.txt' which doesn't exist.Therefore,it is being created";
                
                string user_write;
                cout << "\nInput words to add:";
                cin >> user_write;

                file_hand.open("newfile.txt", ios::out);

                file_hand << user_write;
                cout << "\nCheck the file created(myfile2.txt) and the content you added";
                file_hand.close();
            }

            else if (userResponse == 2)
            {
                string file_check;
                cout << "\nFirst check the file content in the directory(myfile.txt)";
                cout << "File checked?";
                cin >> file_check;
                if (file_check == "yes")
                {
                    file_hand.open("newfile2.txt", ios::out);
                    string user_write;
                    cout << "\nInput words to add:";
                    cin >> user_write;

                    file_hand << user_write;
                    cout << "\nNow check the file.Notice that the previous file was deleted and the "
                            "only content there is the one you just wrote";
                    file_hand.close();
                }
                else
                {
                    cout << "Please check the file";
                }
            }
        
    }

    else if(userInput==2){
                cout<<
            "\nAppending is for adding content to an existing file content.Unlike writing,it never overwrites an existing file content";
        cout<<"\nBelow is a demonstration:";
        cout<<"\nFirst check the content of myfile.txt";
        string userCheck2;
        cout<<"\nFile checked?";
        cin>>userCheck2;
        if (userCheck2 == "yes"){
              file_hand.open("defaultfile.txt", ios::app);
            string user_append;
            cout<<"\nInput words to add:";
            cin>>user_append;
            file_hand<<"\n"<<user_append;
            cout<<"\nCheck the file again.You would notice the words was added to the end of the last file content";
            cout<<"\nTry running the write operation to see the differences between writing and appending(use option2 in the write operation division)";
            file_hand.close();
        }
          
    }

    else if(userInput==3){
           cout<<"\nReading is another way of saying you would like to see the content of the file";
                    cout<<"\nBELOW IS THE CONTENT OF MYFILE.TXT:";
                    file_hand.open("defaultfile.txt");
                    if(file_hand.is_open()){
                        char character;
                        while(file_hand){
                            character=file_hand.get();
                            cout<<character;
                        }
                       
                    }
                   
    }


    
}