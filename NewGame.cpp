#include<iostream>
using namespace std;


int main(){
    int a=0,b=0,c=0,key;

    cout<<" Think a name from the List and i will try to guess that Name.....\n"<< "PRESS ANY KEY TO START! "<<endl;
    cin.get();
    cout<<endl; 
    cout << "1. Mickey Mouse\n"
         << "2. Tom and Jerry\n"
         << "3. Bugs Bunny\n"
         << "4. Aladdin\n"
         << "5. Charlie Brown\n"
         << "6. Donald Duck\n"
         << "7. Elmo\n"
         << "8. Fred Flintstone\n"
         << "9. Garfield\n"
         << "10. Homer Simpson\n";
        cout<<endl;
        cout<<"Have you chosen your name....PRESS ENTER FOR YES";
        cin.get();
        cout<<endl;
        cout<<endl;
        cout<<" LET'S START...........\n";
        cout<<"\n";
        cout<<"If the name you chosen is in the below list\n";
        cout<<"PRESS ENTER TO SEE THE LIST";
        cin.get();
        cout<<" "<<endl;
        cout<<" "<<endl; 


        cout<<"\t\t1st ROUND...\n";
        cout<<endl;
        cout << "1. Fred Flintstone\n"
             << "2. Elmo\n"
             << "3. Homer Simpson\n"
             << "4. Garfield\n";
        cout << "\n"
             <<" PRESS 1 FOR YES AND 0 FOR NO---->";
            cin>>key;
            if(key==1 && a==0){
                a=1;
            }
        cout<<endl;
        cout<<"\t\t2nd ROUND...";
        cout<<endl;
        cout << "1. Homer Simpson\n"
             << "2. Charlie Brown\n"
             << "3. Donald Duck\n"
             << "4. Aladdin\n";
        cout << "\n"
             <<" PRESS 1 FOR YES AND 0 FOR NO---->";
            cin>>key;
            if(key==1 && a==0){
                a=2;
            }else if(key==1){
                b=2;
            }
        cout<<endl;
        cout<<"\t\t3rd ROUND...";
        cout<<endl;
        cout << "1. Bugs Bunny\n"
             << "2. Tom and Jerry\n"
             << "3. Garfield\n"
             << "4. Donald Duck\n";  
        cout << "\n"
             <<" PRESS 1 FOR YES AND 0 FOR NO---->";
            cin>>key;
            if(key==1 && a==0){
                a=3;
            }else if(key==1){
                b=3;
            }
        cout<<endl;
        cout<<"\t\t4th ROUND...";
        cout<<endl;
        cout << "1. Bugs Bunny\n"
             << "2. Charlie Brown\n"
             << "3. Mickey Mouse\n"
             << "4. Fred Flintstone\n";  
        cout << "\n"
             <<" PRESS 1 FOR YES AND 0 FOR NO---->";
            cin>>key;
            if(key==1 && a==0){
                a=4;
            }else if(key==1){
                b=4;
            }    
        cout<<endl;
        cout<<"\t\t5th ROUND...";
        cout<<endl;
        cout << "1. Elmo\n"
             << "2. Aladdin\n"
             << "3. Mickey Mouse\n"
             << "4. Tom and Jerry\n";  
        cout << "\n"
             <<" PRESS 1 FOR YES AND 0 FOR NO---->";
            cin>>key;
            if(key==1 && a==0){
                a=5;
            }else if(key==1){
                b=5;
            } 
        // cout<<a<<endl;
        // cout<<b<<endl;
        if(a==1 && b==2){
            cout<<"i think...  ---->> ";
            cout<<"Homer Simpson\n";
            cout<<" "<<endl;
        }else if(a==1 && b==3){
            cout<<"i think...  ---->> ";
            cout<<"Garfield\n";
            cout<<" "<<endl;
        }else if(a==1 && b==4){
            cout<<"i think...  ---->> ";
            cout<<"Fred Flintstone\n";
            cout<<" "<<endl;
        }else if(a==1 && b==5){
            cout<<"i think...  ---->> ";
            cout<<"Elmo\n";
            cout<<" "<<endl;
        }else if(a==2 && b==3){
            cout<<"i think...  ---->> ";
            cout<<"Donald Duck\n";
            cout<<" "<<endl;
        }else if(a==2 && b==4){
            cout<<"i think...  ---->> ";
            cout<<"Charlie Brown\n";
            cout<<" "<<endl;
        }else if(a==2 && b==5){
            cout<<"i think...  ---->> ";
            cout<<"Aladdin\n";
            cout<<" "<<endl;
        }else if(a==3 && b==4){
            cout<<"i think...  ---->> ";
            cout<<"Bugs Bunny\n";
            cout<<" "<<endl;
        }else if(a==3 && b==5){
            cout<<"i think...  ---->> ";
            cout<<"Tom and Jerry\n";
            cout<<" "<<endl;
        }else if(a==4 && b==5){
            cout<<"i think...  ---->> ";
            cout<<"Mickey Mouse\n";
            cout<<" "<<endl;
        }else{
            cout<<"you forget what you choose";
        }
    return 0;
}