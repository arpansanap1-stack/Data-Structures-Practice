#include<iostream>
using namespace std;

#define MAX 1000

int top = -1;
int stack[MAX];

void push(){
    int value;
     if(top == MAX - 1){
        cout << "Stack Overflow" << endl;
        return;
     }

     cout << "Enter the value to push: ";
     cin >> value;
     stack[++top] = value;
}
void pop(){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << "Popped value: " << stack[top--] << endl;
}
void peek(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top value: " << stack[top] << endl;
}
void display(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for(int i = top; i >= 0; i--){
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main(){
    int choice;
    while(true){
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
        }
    }

}