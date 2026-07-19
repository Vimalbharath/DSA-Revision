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
        int ans = data[0];
        for (int i = 0; i < size; i++)
        {
            data[i] = data[i + 1];
        }
        size--;
        return ans;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i];
        }
    }
};

int main()
{
    cout << "Circular Queue Internal Implementation";
    CircularQueue q = CircularQueue();
    q.insert(1);
    q.insert(2);
    cout << q.deletefirst();
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.display();

    return 0;
}