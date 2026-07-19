#include <iostream>

using namespace std;

class CircularQueue
{
public:
    int data[5];
    int size = 0;
    int s = 0;
    int e = 0;
    CircularQueue()
    {
    }

    bool isFull()
    {
        return size == 5;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool insert(int val)
    {
        if (isFull())
        {
            cout << "Full queue";
            return false;
        }
        data[size] = val;
        size++;
        return true;
    }

    int deletefirst()
    {
        if (isEmpty())
        {
            cout << "Empty";
            return -1;
        }
        return data[size--];
    }

    void display()
    {
        cout << data[0];
        cout << data[1];
        cout << data[2];
        cout << data[3];
        cout << data[4];
    }
};

int main()
{
    cout << "Circular Queue Internal Implementation";
    CircularQueue q = CircularQueue();
    q.insert(1);
    q.insert(2);
    q.deletefirst();
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.display();

    return 0;
}