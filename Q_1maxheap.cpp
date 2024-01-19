#include <vector>
#include <iostream>
using namespace std;

class MaxHeap
{
private:
    
    void heapify_down(int index);
    void heapify_up(int index);

public:
    MaxHeap();
    vector<int> heap;
    void add(int num);
    int remove_maxt();
    int max()
    {
        return heap[0];
    }
};

MaxHeap::MaxHeap()
{
}

void MaxHeap::add(int num)
{
    heap.push_back(num);
    heapify_up(heap.size() - 1);
}

int MaxHeap::remove_maxt()
{
    if (heap.empty())
    {
        throw out_of_range("Heap is empty");
    }
    int max_value = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    if (!heap.empty())
    {
        heapify_down(0);
    }
    return max_value;
}

void MaxHeap::heapify_down(int index)
{
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;

    if (left < heap.size() && heap[left] > heap[largest])
    {
        largest = left;
    }
    if (right < heap.size() && heap[right] > heap[largest])
    {
        largest = right;
    }
    if (largest != index)
    {
        swap(heap[index], heap[largest]);
        heapify_down(largest);
    }
}

void MaxHeap::heapify_up(int index)
{
    if (index == 0)
    {
        return;
    }
    int parent = (index - 1) / 2;
    if (heap[index] > heap[parent])
    {
        swap(heap[index], heap[parent]);
        heapify_up(parent);
    }
}

int main()
{
    MaxHeap heapob;
    int n;
    cout<<"Enter the number of elements to be added in the heap - ";
    cin>>n;
    cout<<"Enter the numbers - "<<endl;
    while(n--){
        int num;
        cin>>num;
        heapob.add(num);
    }

    cout << "Max heap: ";
    for (int i = 0; i < heapob.heap.size(); i++)
    {
        cout << heapob.heap[i] << " ";
    }
    cout << endl;

    cout << "Max value: " << heapob.max() << endl;

    heapob.remove_maxt();

    cout << "Max heap after removing max value: ";
    for (int i = 0; i < heapob.heap.size(); i++)
    {
        cout << heapob.heap[i] << " ";
    }
    cout << endl;

    return 0;
}
