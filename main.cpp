#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void loop1();

void Stack(){
    stack<int> myStack;
    int choice;
    int x ;
    x = myStack.size();
    cout<<"enter element's number"<<endl;
    cin>>x;
    cout<<endl;
    cout<<"enter stack's elements"<<endl;
    for (int i = 0; i < x; ++i) {
        cin>>i;
        myStack.push(i);
    }
    cout<<"the current stack is"<<endl;
    while(!myStack.empty()){
        cout<<' '<<myStack.top();
        myStack.pop();
    }
    cout<<endl;
    cout<<"1 : to remove an element by stack's law"<<endl;
    cout<<"2 : to show the count of the elements of the stack"<<endl;
    cout<<"please enter your choice"<<endl;
    cin>>choice;
    cout<<endl;
    switch (choice){
        default:
            cout<<"sorry your choice is not here try another choice"<<endl;
            break;

        case 1:
            myStack.pop();
            cout<<"the stack after pop operation"<<endl;
            while(!myStack.empty()){
                cout<<' '<<myStack.top();
                myStack.pop();
            }
            break;
        case 2:
            int c = 0;
            while(!myStack.empty()){
                myStack.pop();
                c++;
            }
            cout<<"the count of the elements in the stack is"<<c<<endl;
            break;


    }
}

void Queue(){
    queue<int> myQueue;
    int choice;
    int x;
    x = myQueue.size();
    cout<<"enter element's number"<<endl;
    cin>>x;
    cout<<endl;
    cout<<"enter queue's elements"<<endl;
    for (int i = 0; i < x; i++) {
        cin>>i;
        myQueue.push(i);
        myQueue.pop();
    }
    cout<<"1 : to remove an element by queue's law"<<endl;
    cout<<"2 : to show the count of the elements of the queue"<<endl;
    cout<<"please enter your choice"<<endl;
    cin>>choice;
    switch (choice){
        default:
            cout<<"sorry your choice is not here try another choice"<<endl;
            break;

        case 1:
            myQueue.pop();
            cout<<"the queue after pop operation"<<endl;
            while (!myQueue.empty()){
                cout<<myQueue.front();
                myQueue.pop();
            }
            break;
        case 2:
            int c = 0;
            while(!myQueue.empty()){
                myQueue.pop();
                c++;
            }
            cout<<"the count of the elements in the stack is"<<c<<endl;
            break;
    }
}

void choice(){

    int choice = 0;
    cout<<"1 : stack operations"<<endl;
    cout<<"2 : queue operations"<<endl;
    cout<<"please enter your choice"<<endl;
    cin>>choice;
    cout<<endl;
    switch (choice){
        default:
            cout<<"sorry your choice is not here try another choice"<<endl;
            loop1();
            break;

        case 1:
            Stack();
            loop1();
            break;
        case 2:
            Queue();
            loop1();
            break;

    }

}


void loop1(){
    char choice1;
    cout<<"y : Continue"<<endl;
    cout<<"n : Exit"<<endl;
    cout<<"please enter your choice"<<endl;
    cin>>choice1;
    cout<<endl;
    while(true){
        if (choice1 == 'y'){
            choice();
        }
        else if (choice1 == 'n'){
            return;
        }
    }
}
int main() {
    choice();

    return 0;
}