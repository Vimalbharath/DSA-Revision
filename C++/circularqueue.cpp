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
        return size == sizeof(data) / sizeof(data[0]);
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
        data[e++] = val;
        e = e % (sizeof(data) / sizeof(data[0]));
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
        int ans = data[s++];
        s = s % (sizeof(data) / sizeof(data[0]));
        size--;
        return ans;
    }

    void display()
    {
        for (int i = s; i < s + size; i++)
        {
            cout << data[i % (sizeof(data) / sizeof(data[0]))];
        }
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
    q.deletefirst();
    q.insert(6);
    q.insert(7);
    q.insert(8);
    q.display();

    return 0;
}