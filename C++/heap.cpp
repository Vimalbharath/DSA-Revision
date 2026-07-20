#include <iostream>
#include <vector>

using namespace std;

class Heap
{
public:
    vector<int> v;
    Heap() {}
    bool insert(int val)
    {
        v.push_back(val);
        upheap(v.size() - 1);
        return true;
    }
    void upheap(int index)
    {
        while (index > 0)
        {
            int p = (index - 1) / 2;
            if (v[p] > v[index])
            {
                swap(p, index);
                index = p;
            }
            else
            {
                break;
            }
        }
    }
    void downheap(int index)
    {

        while (index < v.size())
        {
            int l = (index * 2) + 1;
            int r = (index * 2) + 2;
            int smallest = index;
            if (l < v.size() && v[l] < v[smallest])
            {

                smallest = l;
            }
            if (r < v.size() && v[r] < v[smallest])
            {

                smallest = r;
            }
            if (smallest != index)
            {
                swap(smallest, index);
                index = smallest;
            }
            else
            {
                break;
            }
        }
    }

    void swap(int a, int b)
    {
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
    }
    int getelement()
    {
        if (v.size() == 0)
        {
            cout << "empty ";
            return -1;
        }
        return v[0];
    }
    int pop()
    {
        if (v.size() == 0)
        {
            cout << "empty ";
            return -1;
        }
        int ans = v[0];
        swap(0, v.size() - 1);
        v.pop_back();
        downheap(0);
        return ans;
    }
};

int main()
{
    cout << "Heaps custom implementation in CPP";
    Heap h = Heap();
    h.insert(5);
    h.insert(2);
    h.insert(9);
    h.insert(1);
    cout << h.pop();
    cout << h.pop();
    // cout << h.getelement();
    cout << h.pop();
    cout << h.pop();
    return 0;
}