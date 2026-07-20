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
        int p = (index - 1) / 2;
        while (v[p] > v[index])
        {
            swap(p, index);
            index = p;
            p = (index - 1) / 2;
        }
    }
    void downheap(int index)
    {
        int l = (index * 2) + 1;
        int r = (index * 2) + 2;
        while ((v[l] < v[index]) || (v[r] < v[index]))
        {
            if (v[l] < v[index])
            {
                swap(l, index);
                index = l;
            }
            if (v[r] < v[index])
            {
                swap(r, index);
                index = r;
            }

            l = (index * 2) + 1;
            r = (index * 2) + 2;
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
    cout << h.pop();
    // cout << h.pop();
    return 0;
}