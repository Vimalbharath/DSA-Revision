#include <iostream>

using namespace std;

class CircularQueue
{
protected:
    int *data;
    int size = 0;
    int capacity = 5;
    int s = 0;
    int e = 0;

public:
    CircularQueue()
    {
        data = new int[capacity];
    }

    bool isFull()
    {
        return size == capacity;
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
        e = e % (capacity);
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
        s = s % (capacity);
        size--;
        return ans;
    }

    void display()
    {
        for (int i = s; i < s + size; i++)
        {
            cout << data[i % (capacity)];
        }
    }
};

class DynamicQueue : public CircularQueue
{
public:
    DynamicQueue() : CircularQueue()
    {
    }
    bool insert(int val)
    {
        if (isFull())
        {
            int oldCapacity = capacity;
            capacity = capacity * 2;
            int *temp = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                temp[i] = data[(s + i) % (oldCapacity)];
            }
            s = 0;
            e = size;
            data = temp;
        }
        return CircularQueue::insert(val);
    }
};

int main()
{
    cout << "Circular Queue Internal Implementation";
    DynamicQueue q = DynamicQueue();
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