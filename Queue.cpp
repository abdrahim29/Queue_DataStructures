#include<iostream>
using namespace std;

class queue{
    private:
    int front;
    int rear;
    int array[5];

    public:

    queue(){
        front=-1;
        rear=-1;

        for(int i=0;i<5;i++){
            array[i]=0;

        }

    }
    bool isEmpty(){
        if (front==-1 && rear==-1){

            return true;
        }
        else
        return false;
    }
    bool isFull(){
        if (rear==4){
            cout<<"Full";

            return true;
        }
        else
        return false;
    }

    void Enqueue(int v){
        if (isFull()){
            cout<<"Full";
        }
        else if(isEmpty()){
            front = rear = 0;
            array[front]=v;
        }
        else{
            rear=rear+1;
            array[rear]=v;

        }

    }
    int Dequeue(){
        if (isEmpty()){
            cout<<"empty";

            return 0;

        }
        else{
        int x=array[front];
        array[front]=0;
        front=front+1;

        return x;


    }}

    void print(){
        cout<<"[";
        for(int i=0;i<5;i++){
            cout<<array[i]<<",";
        }
        cout<<"]";
    }


};

int main()
{
    queue q1;
   cout<<"initial queue: "; q1.print();

    q1.Enqueue(5);
    q1.Enqueue(10);
    q1.Enqueue(15);
    cout<<endl<<"queue after enqueued elements"; q1.print();
    cout<<endl<<"firstelement: "<<q1.Dequeue();
    cout<<endl<<"2nd element: "<<q1.Dequeue();
    cout<<endl<<"final queue";q1.print();
    
    return 0;
}