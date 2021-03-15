#include <iostream>
#include <vector>

using namespace std;

template<class T>
void Queue<T>::enqueue(T element){
    Queue.push_back(element);
    return;
}

template<class T>
int Queue<T>::getSize(){
    return Queue.size();
}

template<class T>
void Queue<T>::dequeue(){
    if(Queue.size() == 0){
            cout << "cannot remove element: Queue is empty." << endl; 
            return;
        }

        if(Queue.size() == 1){
            Queue.pop_back();
            return;
        }
        
        Queue.erase(Queue.begin() + 0);
        return;
}

template<class T>
void Queue<T>::peek(){

    Queue.front().print();
    return;

}

template<class T> 
bool Queue<T>::isEmpty(){
    if(Queue.size() == 0){
                return true;
            }
            return false;
}


template<class T>
void Queue<T>::DisplayQ(){
    for(int i = 0; i < Queue.size(); i++){
        Queue[i].print();
        printf("\n");
    }
}
