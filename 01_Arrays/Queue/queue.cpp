#include<iostream>

using namespace std;
#define MAX 10


int queue[MAX];
int front = -1,rear = -1;

void enqueue(){
    int value;
    if(rear == MAX - 1){
        cout << "Queue Overflow" << endl;
        return;
    }
    cout << "Enter the value to enqueue: ";
    cin >> value;
    queue[++rear] = value;
}

void dequeue(){
    if(front == rear){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Dequeued value:"<< queue[++front]<< endl;

}
void peek(){
    if(front == rear){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front value: " << queue[front + 1] << endl;
}

void display(){
    if(front == rear){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for(int i = front + 1; i <= rear; i++){
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main(){
    int choice;
    while(true){
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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